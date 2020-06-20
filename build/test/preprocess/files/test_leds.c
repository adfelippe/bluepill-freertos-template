#include "build/temp/_test_leds.c"
#include "build/test/mocks/mock_stm32f1xx_hal_rcc.h"
#include "build/test/mocks/mock_stm32f1xx_hal_gpio.h"
#include "build/test/mocks/mock_stm32f1xx_hal.h"
#include "include/leds.h"
#include "C:/Ruby26-x64/lib/ruby/gems/2.6.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"


GPIO_InitTypeDef LED1;

GPIO_InitTypeDef LED2;



void setUp(void)

{

}



void tearDown(void)

{

}



void test_leds_module_is_init_function_correct(void)

{

    UnityIgnore( (("Implement init_leds() test without breaking the test executable!!!")), (UNITY_UINT)(20));

}



void test_leds_module_when_led1_is_on_port_b_pin_0_is_set(void)

{

    HAL_GPIO_WritePin_CMockExpect(25, ((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000C00UL)), ((uint16_t)0x0001), 1);

    LED1_On();

}



void test_leds_module_when_led1_is_of_port_b_pin_0_is_clear(void)

{

    HAL_GPIO_WritePin_CMockExpect(31, ((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000C00UL)), ((uint16_t)0x0001), 0);

    LED1_Off();

}



void test_leds_module_when_led2_is_on_port_b_pin_3_is_set(void)

{

    HAL_GPIO_WritePin_CMockExpect(37, ((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000C00UL)), ((uint16_t)0x0008), 1);

    LED2_On();

}



void test_leds_module_when_led2_is_off_port_b_pin_3_is_clear(void)

{

    HAL_GPIO_WritePin_CMockExpect(43, ((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000C00UL)), ((uint16_t)0x0008), 0);

    LED2_Off();

}
