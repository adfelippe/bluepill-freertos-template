# Makefile for the STM32F103C8
#
# Original: Kevin Cuzner
# Added FreeRTOS and ST-Link V2 support: Anderson Felippe <adfelippe@gmail.com>
#

PROJECT = blink

# Project Structure
SRCDIR = src
BINDIR = bin
OBJDIR = obj
INCDIR = include
FREERTOS = FreeRTOS/Source
PORTABLE = $(FREERTOS)/portable/GCC/ARM_CM3
MEMMANG  = $(FREERTOS)/portable/MemMang
HAL_DRV	 = STM32F1xx_HAL_Driver/Src
DRIVERS  = drivers

# Project target
CPU = cortex-m3

# Sources
SRC = 	$(wildcard $(SRCDIR)/*.c) 	$(wildcard $(FREERTOS)/*.c)
SRC +=	$(wildcard $(PORTABLE)/*.c) $(wildcard $(MEMMANG)/*.c)
SRC +=	$(wildcard $(HAL_DRV)/*.c) 	$(wildcard $(DRIVERS)/*.c)
ASM = 	$(wildcard $(SRCDIR)/*.s) 	$(wildcard $(FREERTOS)/*.s)
ASM +=  $(wildcard $(PORTABLE)/*.s) $(wildcard $(MEMMANG)/*.s)
ASM +=	$(wildcard $(HAL_DRV)/*.s) 	$(wildcard $(HAL_LEG)/*.s)

# Include directories
INCLUDE  = 	-I$(INCDIR) 								\
			-Icmsis 									\
			-IFreeRTOS/Source/include 					\
			-ISTM32F1xx_HAL_Driver/Inc					\
			-ISTM32F1xx_HAL_Driver/Inc/Legacy 			\
			-IFreeRTOS/Source/portable/GCC/ARM_CM3		\
			-Idrivers

# Linker
LSCRIPT = STM32F103X8_FLASH.ld

# C Flags
GCFLAGS  = -std=c99 -Wall -fno-common -mthumb -mcpu=$(CPU) -DSTM32F103xB
GCFLAGS += --specs=nosys.specs -g -Wa,-ahlms=$(addprefix $(OBJDIR)/,$(notdir $(<:.c=.lst)))
GCFLAGS += $(INCLUDE)
LDFLAGS += -T$(LSCRIPT) -mthumb -mcpu=$(CPU) --specs=nosys.specs
ASFLAGS += -mcpu=$(CPU)

# Flashing
STLINK = st-flash --reset write
STLINK_WINDOWS = ST-LINK_CLI.exe -c SWD SWCLK=4000000 UR LPM Hrst

# Tools
CC = arm-none-eabi-gcc
AS = arm-none-eabi-as
AR = arm-none-eabi-ar
LD = arm-none-eabi-ld
OBJCOPY = arm-none-eabi-objcopy
SIZE = arm-none-eabi-size
OBJDUMP = arm-none-eabi-objdump

RM = rm -rf

## Build process

OBJ := $(addprefix $(OBJDIR)/,$(notdir $(SRC:.c=.o)))
OBJ += $(addprefix $(OBJDIR)/,$(notdir $(ASM:.s=.o)))


all:: $(BINDIR)/$(PROJECT).bin $(BINDIR)/$(PROJECT).hex

Build: $(BINDIR)/$(PROJECT).bin $(BINDIR)/$(PROJECT).hex

flash_linux:
	$(STLINK) $(BINDIR)/$(PROJECT).bin 0x8000000

flash_windows:
	$(STLINK_WINDOWS) -ME -P $(BINDIR)/$(PROJECT).bin 0x08000000 -V -HardRst
	$(STLINK_WINDOWS)

$(BINDIR)/$(PROJECT).hex: $(BINDIR)/$(PROJECT).elf
	$(OBJCOPY) -R .stack -O ihex $(BINDIR)/$(PROJECT).elf $(BINDIR)/$(PROJECT).hex

$(BINDIR)/$(PROJECT).bin: $(BINDIR)/$(PROJECT).elf
	$(OBJCOPY) -R .stack -O binary $(BINDIR)/$(PROJECT).elf $(BINDIR)/$(PROJECT).bin

$(BINDIR)/$(PROJECT).elf: $(OBJ)
	@mkdir -p $(dir $@)
	$(CC) $(OBJ) $(LDFLAGS) -o $(BINDIR)/$(PROJECT).elf
	$(OBJDUMP) -D $(BINDIR)/$(PROJECT).elf > $(BINDIR)/$(PROJECT).lst
	$(SIZE) $(BINDIR)/$(PROJECT).elf

macros:
	$(CC) $(GCFLAGS) -dM -E - < /dev/null

cleanBuild: clean

clean:
	$(RM) $(BINDIR)/*.hex
	$(RM) $(BINDIR)/*.bin
	$(RM) $(BINDIR)/*.elf
	$(RM) $(BINDIR)/*.lst
	$(RM) $(OBJDIR)/*.o
	$(RM) $(OBJDIR)/*.lst

# Compilation
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(GCFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.s
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<

$(OBJDIR)/%.o: $(FREERTOS)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(GCFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(FREERTOS)/%.s
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<

$(OBJDIR)/%.o: $(PORTABLE)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(GCFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(PORTABLE)/%.s
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<

$(OBJDIR)/%.o: $(MEMMANG)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(GCFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(MEMMANG)/%.s
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<

$(OBJDIR)/%.o: $(HAL_DRV)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(GCFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(HAL_DRV)/%.s
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<

$(OBJDIR)/%.o: $(DRIVERS)/%.c
		@mkdir -p $(dir $@)
		$(CC) $(GCFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(DRIVERS)/%.s
		@mkdir -p $(dir $@)
		$(AS) $(ASFLAGS) -o $@ $<
