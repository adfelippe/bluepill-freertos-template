#include "stm32f1xx_hal.h"
#include "leds.h"

GPIO_InitTypeDef LED1;

void init_leds(void)
{
	LED1.Mode = GPIO_MODE_OUTPUT_PP;
	LED1.Pin = GPIO_PIN_0;
	LED1.Pull = GPIO_NOPULL;
	LED1.Speed = GPIO_SPEED_FREQ_HIGH;
	HAL_GPIO_Init(GPIOB, &LED1);
}

void LED1_On(void)
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
}

void LED1_Off(void)
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
}



