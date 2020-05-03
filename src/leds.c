#include "stm32f1xx_hal.h"
#include "leds.h"

GPIO_InitTypeDef LED1;
GPIO_InitTypeDef LED2;

void init_leds(void)
{
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();
	LED1.Mode = GPIO_MODE_OUTPUT_PP;
	LED1.Pin = GPIO_PIN_0;
	LED1.Pull = GPIO_NOPULL;
	LED1.Speed = GPIO_SPEED_FREQ_HIGH;
	LED2.Mode = GPIO_MODE_OUTPUT_PP;
	LED2.Pin = GPIO_PIN_3;
	LED2.Pull = GPIO_NOPULL;
	LED2.Speed = GPIO_SPEED_FREQ_HIGH;
	HAL_GPIO_Init(GPIOB, &LED1);
	HAL_GPIO_Init(GPIOB, &LED2);
}

void LED1_On(void)
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
}

void LED1_Off(void)
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
}

void LED2_On(void)
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
}

void LED2_Off(void)
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
}
