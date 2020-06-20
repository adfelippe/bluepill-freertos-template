#include "STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_gpio_ex.h"
#include "STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_def.h"
typedef struct

{

  uint32_t Pin;





  uint32_t Mode;





  uint32_t Pull;





  uint32_t Speed;



} GPIO_InitTypeDef;









typedef enum

{

  GPIO_PIN_RESET = 0u,

  GPIO_PIN_SET

} GPIO_PinState;

void HAL_GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_InitTypeDef *GPIO_Init);

void HAL_GPIO_DeInit(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin);

GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);

void HAL_GPIO_TogglePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

HAL_StatusTypeDef HAL_GPIO_LockPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin);

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
