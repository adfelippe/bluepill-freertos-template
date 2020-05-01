/**
 * STM32F103C8 Blink Demonstration
 *
 * Kevin Cuzner
 */

#include "stm32f1xx.h"
#include "FreeRTOS.h"
#include "task.h"

void blinkLedTask(void *pvParameters);

int main(void)
{
    /* Create the task, storing the handle. */
    xTaskCreate(blinkLedTask, "blinkLed", configMINIMAL_STACK_SIZE, NULL, 1, NULL);
    // Start scheduler
    vTaskStartScheduler();
    // Should never get here
    while(1);

    return 0;
}

void blinkLedTask(void *pvParameters)
{
    //Enable the clock to PORT B
    RCC->APB2ENR |= RCC_APB2ENR_IOPBEN;
    //Setup PB0
    GPIOB->CRL = GPIO_CRL_MODE0_0 | GPIO_CRL_MODE0_1;

    while(1) {
        //Set PB0 high
        GPIOB->BSRR = GPIO_BSRR_BS0;
        for (uint32_t i = 0; i != 0x7ffff; i++) { }
        //Reset PB0 low
        GPIOB->BSRR = GPIO_BSRR_BR0;
        for (uint32_t i = 0; i != 0x7ffff; i++) { }
    }

}
