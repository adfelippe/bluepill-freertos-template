#include "unity.h"
#include "leds.h"
#include "mock_stm32f1xx_hal.h"
#include "mock_stm32f1xx_hal_gpio.h"
#include "mock_stm32f1xx_hal_rcc.h"

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
    TEST_IGNORE_MESSAGE("Implement init_leds() test without breaking the test executable!!!");
}

void test_leds_module_when_led1_is_on_port_b_pin_0_is_set(void)
{
    HAL_GPIO_WritePin_Expect(GPIOB, GPIO_PIN_0, 1);
    LED1_On();
}

void test_leds_module_when_led1_is_of_port_b_pin_0_is_clear(void)
{
    HAL_GPIO_WritePin_Expect(GPIOB, GPIO_PIN_0, 0);
    LED1_Off();
}

void test_leds_module_when_led2_is_on_port_b_pin_3_is_set(void)
{
    HAL_GPIO_WritePin_Expect(GPIOB, GPIO_PIN_3, 1);
    LED2_On();
}

void test_leds_module_when_led2_is_off_port_b_pin_3_is_clear(void)
{
    HAL_GPIO_WritePin_Expect(GPIOB, GPIO_PIN_3, 0);
    LED2_Off();
}
