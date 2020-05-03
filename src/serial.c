/*
 * Serial port setup
 */

#include <string.h>
#include "stm32f1xx_hal.h"
#include "stm32_hal_legacy.h"
#include "serial.h"

static USART_HandleTypeDef husart2;
static GPIO_InitTypeDef usart2_pins;

/* Private prototypes */
void init_usart2_pins(void);

void init_usart2_pins(void)
{
    // Enable GPIOA Clock
    __HAL_RCC_GPIOA_CLK_ENABLE();
    //USART2_TX - PA2
    usart2_pins.Pin = GPIO_PIN_2;
    usart2_pins.Speed = GPIO_SPEED_FREQ_HIGH;
    usart2_pins.Pull = GPIO_NOPULL;
    usart2_pins.Mode = GPIO_MODE_AF_PP;
    HAL_GPIO_Init(GPIOA , &usart2_pins);
    //USART2_RX - PA3
    usart2_pins.Pin = GPIO_PIN_3;
    usart2_pins.Speed = GPIO_SPEED_FREQ_HIGH;
    usart2_pins.Pull = GPIO_NOPULL;
    usart2_pins.Mode = GPIO_MODE_INPUT;
    HAL_GPIO_Init(GPIOA , &usart2_pins);
}

uint8_t USART2_Init(void)
{
    init_usart2_pins();
    // Enable USART2 clock (Rx and Tx pins)
     __HAL_RCC_USART2_CLK_ENABLE();
    husart2.Instance = USART2;
    husart2.Init.BaudRate = BAUD_RATE;
    husart2.Init.WordLength = USART_WORDLENGTH_8B;
    husart2.Init.StopBits = USART_STOPBITS_1;
    husart2.Init.Parity = USART_PARITY_NONE;
    husart2.Init.Mode = USART_MODE_TX_RX;
    uint8_t ret = HAL_USART_Init(&husart2);
    return ret;
}

void transmit_USART2(char *msgBuffer)
{
    uint16_t buf_size = strlen(msgBuffer);
    HAL_USART_Transmit(&husart2, (uint8_t*)msgBuffer, buf_size, HAL_MAX_DELAY);
}
