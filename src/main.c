/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include <string.h>
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"
#include "leds.h"
#include "serial.h"
#include "lcd_1602.h"

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
void ledBlink(void *pvParams);
void helloTask(void *pvParams);
void lcdTask(void *pvParams);

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
	/* MCU Configuration--------------------------------------------------------*/

 	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
 	HAL_Init();
 	/* Configure the system clock */
 	SystemClock_Config();
 	/* Initialize all configured peripherals */
 	//init_leds();
	USART2_Init();
	LCD_init();

	/* Create RTOS Tasks */
 	//xTaskCreate(ledBlink, "LEDBlink", 250, NULL, 3, NULL);
	//xTaskCreate(helloTask, "helloTask", 500, NULL, 2, NULL);
	xTaskCreate(lcdTask, "lcdTask", 800, NULL, 2, NULL);
	/* Start FreeRTOS Scheduler */
 	vTaskStartScheduler();
 	/* Infinite loop */
	/* Code should never reach this point */
 	while (1);
}

void lcdTask(void *pvParams)
{
    char text_top[] = "FreeRTOS";
    char text_bot[] = "CortexM3";
    uint8_t last_char = strlen(text_top) - 1;
    uint8_t pos = 0;
    const uint32_t scroll_delay = 150;
    LCD_sendCMD(LCD_ON);

	while(1)
    {
        while (last_char > 0 || pos < 16)
        {
            LCD_sendCMD(CLEAR_LCD);
            LCD_sendCMD(LCD_ON);
            LCD_gotoxy(pos, 1);
            LCD_write(&text_top[last_char]);
            LCD_gotoxy(pos, 2);
            LCD_write(&text_bot[last_char]);
            if (last_char <= 0)
                ++pos;
            else
                --last_char;
            // Stop to show message on LCD
            if (pos == 5)
                vTaskDelay(pdMS_TO_TICKS(3000));

            vTaskDelay(pdMS_TO_TICKS(scroll_delay));
        }
        // Reset values
        last_char = strlen(text_top) - 1;
        pos = 0;
        vTaskDelay(pdMS_TO_TICKS(scroll_delay));
	}
}

void helloTask(void *pvParams)
{
	while(1)
	{
		transmit_USART2("Hello from task\r\n");
		vTaskDelay(pdMS_TO_TICKS(2000));
	}
}

void ledBlink(void *pvParams)
{
	while(1)
	{
		LED1_On();
		vTaskDelay(pdMS_TO_TICKS(1000));
		LED1_Off();
		vTaskDelay(pdMS_TO_TICKS(1000));
	}
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the CPU, AHB and APB busses clocks
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

 /**
  * @brief  Period elapsed callback in non blocking mode
  * @note   This function is called  when TIM2 interrupt took place, inside
  * HAL_TIM_IRQHandler(). It makes a direct call to HAL_IncTick() to increment
  * a global variable "uwTick" used as application time base.
  * @param  htim : TIM handle
  * @retval None
  */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* USER CODE BEGIN Callback 0 */

  /* USER CODE END Callback 0 */
  if (htim->Instance == TIM2) {
    HAL_IncTick();
  }
  /* USER CODE BEGIN Callback 1 */

  /* USER CODE END Callback 1 */
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
