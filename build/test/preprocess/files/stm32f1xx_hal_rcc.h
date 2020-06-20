#include "STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc_ex.h"
#include "STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_def.h"
typedef struct

{

  uint32_t PLLState;





  uint32_t PLLSource;





  uint32_t PLLMUL;



} RCC_PLLInitTypeDef;









typedef struct

{

  uint32_t ClockType;





  uint32_t SYSCLKSource;





  uint32_t AHBCLKDivider;





  uint32_t APB1CLKDivider;





  uint32_t APB2CLKDivider;



} RCC_ClkInitTypeDef;

HAL_StatusTypeDef HAL_RCC_DeInit(void);

HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);

HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t FLatency);

void HAL_RCC_MCOConfig(uint32_t RCC_MCOx, uint32_t RCC_MCOSource, uint32_t RCC_MCODiv);

void HAL_RCC_EnableCSS(void);

void HAL_RCC_DisableCSS(void);

uint32_t HAL_RCC_GetSysClockFreq(void);

uint32_t HAL_RCC_GetHCLKFreq(void);

uint32_t HAL_RCC_GetPCLK1Freq(void);

uint32_t HAL_RCC_GetPCLK2Freq(void);

void HAL_RCC_GetOscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);

void HAL_RCC_GetClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t *pFLatency);





void HAL_RCC_NMI_IRQHandler(void);





void HAL_RCC_CSSCallback(void);
