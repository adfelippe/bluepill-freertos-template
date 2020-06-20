/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_STM32F1XX_HAL_H
#define _MOCK_STM32F1XX_HAL_H

#include "unity.h"
#include <stdbool.h>
#include <stdint.h>
#include "stm32f1xx_hal.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_stm32f1xx_hal_Init(void);
void mock_stm32f1xx_hal_Destroy(void);
void mock_stm32f1xx_hal_Verify(void);




#define HAL_Init_IgnoreAndReturn(cmock_retval) HAL_Init_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_Init_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
#define HAL_Init_StopIgnore() HAL_Init_CMockStopIgnore()
void HAL_Init_CMockStopIgnore(void);
#define HAL_Init_ExpectAndReturn(cmock_retval) HAL_Init_CMockExpectAndReturn(__LINE__, cmock_retval)
void HAL_Init_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_Init_CALLBACK)(int cmock_num_calls);
void HAL_Init_AddCallback(CMOCK_HAL_Init_CALLBACK Callback);
void HAL_Init_Stub(CMOCK_HAL_Init_CALLBACK Callback);
#define HAL_Init_StubWithCallback HAL_Init_Stub
#define HAL_DeInit_IgnoreAndReturn(cmock_retval) HAL_DeInit_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_DeInit_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
#define HAL_DeInit_StopIgnore() HAL_DeInit_CMockStopIgnore()
void HAL_DeInit_CMockStopIgnore(void);
#define HAL_DeInit_ExpectAndReturn(cmock_retval) HAL_DeInit_CMockExpectAndReturn(__LINE__, cmock_retval)
void HAL_DeInit_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_DeInit_CALLBACK)(int cmock_num_calls);
void HAL_DeInit_AddCallback(CMOCK_HAL_DeInit_CALLBACK Callback);
void HAL_DeInit_Stub(CMOCK_HAL_DeInit_CALLBACK Callback);
#define HAL_DeInit_StubWithCallback HAL_DeInit_Stub
#define HAL_MspInit_Ignore() HAL_MspInit_CMockIgnore()
void HAL_MspInit_CMockIgnore(void);
#define HAL_MspInit_StopIgnore() HAL_MspInit_CMockStopIgnore()
void HAL_MspInit_CMockStopIgnore(void);
#define HAL_MspInit_Expect() HAL_MspInit_CMockExpect(__LINE__)
void HAL_MspInit_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_HAL_MspInit_CALLBACK)(int cmock_num_calls);
void HAL_MspInit_AddCallback(CMOCK_HAL_MspInit_CALLBACK Callback);
void HAL_MspInit_Stub(CMOCK_HAL_MspInit_CALLBACK Callback);
#define HAL_MspInit_StubWithCallback HAL_MspInit_Stub
#define HAL_MspDeInit_Ignore() HAL_MspDeInit_CMockIgnore()
void HAL_MspDeInit_CMockIgnore(void);
#define HAL_MspDeInit_StopIgnore() HAL_MspDeInit_CMockStopIgnore()
void HAL_MspDeInit_CMockStopIgnore(void);
#define HAL_MspDeInit_Expect() HAL_MspDeInit_CMockExpect(__LINE__)
void HAL_MspDeInit_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_HAL_MspDeInit_CALLBACK)(int cmock_num_calls);
void HAL_MspDeInit_AddCallback(CMOCK_HAL_MspDeInit_CALLBACK Callback);
void HAL_MspDeInit_Stub(CMOCK_HAL_MspDeInit_CALLBACK Callback);
#define HAL_MspDeInit_StubWithCallback HAL_MspDeInit_Stub
#define HAL_InitTick_IgnoreAndReturn(cmock_retval) HAL_InitTick_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_InitTick_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
#define HAL_InitTick_StopIgnore() HAL_InitTick_CMockStopIgnore()
void HAL_InitTick_CMockStopIgnore(void);
#define HAL_InitTick_ExpectAndReturn(TickPriority, cmock_retval) HAL_InitTick_CMockExpectAndReturn(__LINE__, TickPriority, cmock_retval)
void HAL_InitTick_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t TickPriority, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_InitTick_CALLBACK)(uint32_t TickPriority, int cmock_num_calls);
void HAL_InitTick_AddCallback(CMOCK_HAL_InitTick_CALLBACK Callback);
void HAL_InitTick_Stub(CMOCK_HAL_InitTick_CALLBACK Callback);
#define HAL_InitTick_StubWithCallback HAL_InitTick_Stub
#define HAL_IncTick_Ignore() HAL_IncTick_CMockIgnore()
void HAL_IncTick_CMockIgnore(void);
#define HAL_IncTick_StopIgnore() HAL_IncTick_CMockStopIgnore()
void HAL_IncTick_CMockStopIgnore(void);
#define HAL_IncTick_Expect() HAL_IncTick_CMockExpect(__LINE__)
void HAL_IncTick_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_HAL_IncTick_CALLBACK)(int cmock_num_calls);
void HAL_IncTick_AddCallback(CMOCK_HAL_IncTick_CALLBACK Callback);
void HAL_IncTick_Stub(CMOCK_HAL_IncTick_CALLBACK Callback);
#define HAL_IncTick_StubWithCallback HAL_IncTick_Stub
#define HAL_Delay_Ignore() HAL_Delay_CMockIgnore()
void HAL_Delay_CMockIgnore(void);
#define HAL_Delay_StopIgnore() HAL_Delay_CMockStopIgnore()
void HAL_Delay_CMockStopIgnore(void);
#define HAL_Delay_Expect(Delay) HAL_Delay_CMockExpect(__LINE__, Delay)
void HAL_Delay_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t Delay);
typedef void (* CMOCK_HAL_Delay_CALLBACK)(uint32_t Delay, int cmock_num_calls);
void HAL_Delay_AddCallback(CMOCK_HAL_Delay_CALLBACK Callback);
void HAL_Delay_Stub(CMOCK_HAL_Delay_CALLBACK Callback);
#define HAL_Delay_StubWithCallback HAL_Delay_Stub
#define HAL_GetTick_IgnoreAndReturn(cmock_retval) HAL_GetTick_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_GetTick_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define HAL_GetTick_StopIgnore() HAL_GetTick_CMockStopIgnore()
void HAL_GetTick_CMockStopIgnore(void);
#define HAL_GetTick_ExpectAndReturn(cmock_retval) HAL_GetTick_CMockExpectAndReturn(__LINE__, cmock_retval)
void HAL_GetTick_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetTick_CALLBACK)(int cmock_num_calls);
void HAL_GetTick_AddCallback(CMOCK_HAL_GetTick_CALLBACK Callback);
void HAL_GetTick_Stub(CMOCK_HAL_GetTick_CALLBACK Callback);
#define HAL_GetTick_StubWithCallback HAL_GetTick_Stub
#define HAL_GetTickPrio_IgnoreAndReturn(cmock_retval) HAL_GetTickPrio_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_GetTickPrio_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define HAL_GetTickPrio_StopIgnore() HAL_GetTickPrio_CMockStopIgnore()
void HAL_GetTickPrio_CMockStopIgnore(void);
#define HAL_GetTickPrio_ExpectAndReturn(cmock_retval) HAL_GetTickPrio_CMockExpectAndReturn(__LINE__, cmock_retval)
void HAL_GetTickPrio_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetTickPrio_CALLBACK)(int cmock_num_calls);
void HAL_GetTickPrio_AddCallback(CMOCK_HAL_GetTickPrio_CALLBACK Callback);
void HAL_GetTickPrio_Stub(CMOCK_HAL_GetTickPrio_CALLBACK Callback);
#define HAL_GetTickPrio_StubWithCallback HAL_GetTickPrio_Stub
#define HAL_SetTickFreq_IgnoreAndReturn(cmock_retval) HAL_SetTickFreq_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_SetTickFreq_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
#define HAL_SetTickFreq_StopIgnore() HAL_SetTickFreq_CMockStopIgnore()
void HAL_SetTickFreq_CMockStopIgnore(void);
#define HAL_SetTickFreq_ExpectAndReturn(Freq, cmock_retval) HAL_SetTickFreq_CMockExpectAndReturn(__LINE__, Freq, cmock_retval)
void HAL_SetTickFreq_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, HAL_TickFreqTypeDef Freq, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_SetTickFreq_CALLBACK)(HAL_TickFreqTypeDef Freq, int cmock_num_calls);
void HAL_SetTickFreq_AddCallback(CMOCK_HAL_SetTickFreq_CALLBACK Callback);
void HAL_SetTickFreq_Stub(CMOCK_HAL_SetTickFreq_CALLBACK Callback);
#define HAL_SetTickFreq_StubWithCallback HAL_SetTickFreq_Stub
#define HAL_GetTickFreq_IgnoreAndReturn(cmock_retval) HAL_GetTickFreq_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_GetTickFreq_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_TickFreqTypeDef cmock_to_return);
#define HAL_GetTickFreq_StopIgnore() HAL_GetTickFreq_CMockStopIgnore()
void HAL_GetTickFreq_CMockStopIgnore(void);
#define HAL_GetTickFreq_ExpectAndReturn(cmock_retval) HAL_GetTickFreq_CMockExpectAndReturn(__LINE__, cmock_retval)
void HAL_GetTickFreq_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, HAL_TickFreqTypeDef cmock_to_return);
typedef HAL_TickFreqTypeDef (* CMOCK_HAL_GetTickFreq_CALLBACK)(int cmock_num_calls);
void HAL_GetTickFreq_AddCallback(CMOCK_HAL_GetTickFreq_CALLBACK Callback);
void HAL_GetTickFreq_Stub(CMOCK_HAL_GetTickFreq_CALLBACK Callback);
#define HAL_GetTickFreq_StubWithCallback HAL_GetTickFreq_Stub
#define HAL_SuspendTick_Ignore() HAL_SuspendTick_CMockIgnore()
void HAL_SuspendTick_CMockIgnore(void);
#define HAL_SuspendTick_StopIgnore() HAL_SuspendTick_CMockStopIgnore()
void HAL_SuspendTick_CMockStopIgnore(void);
#define HAL_SuspendTick_Expect() HAL_SuspendTick_CMockExpect(__LINE__)
void HAL_SuspendTick_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_HAL_SuspendTick_CALLBACK)(int cmock_num_calls);
void HAL_SuspendTick_AddCallback(CMOCK_HAL_SuspendTick_CALLBACK Callback);
void HAL_SuspendTick_Stub(CMOCK_HAL_SuspendTick_CALLBACK Callback);
#define HAL_SuspendTick_StubWithCallback HAL_SuspendTick_Stub
#define HAL_ResumeTick_Ignore() HAL_ResumeTick_CMockIgnore()
void HAL_ResumeTick_CMockIgnore(void);
#define HAL_ResumeTick_StopIgnore() HAL_ResumeTick_CMockStopIgnore()
void HAL_ResumeTick_CMockStopIgnore(void);
#define HAL_ResumeTick_Expect() HAL_ResumeTick_CMockExpect(__LINE__)
void HAL_ResumeTick_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_HAL_ResumeTick_CALLBACK)(int cmock_num_calls);
void HAL_ResumeTick_AddCallback(CMOCK_HAL_ResumeTick_CALLBACK Callback);
void HAL_ResumeTick_Stub(CMOCK_HAL_ResumeTick_CALLBACK Callback);
#define HAL_ResumeTick_StubWithCallback HAL_ResumeTick_Stub
#define HAL_GetHalVersion_IgnoreAndReturn(cmock_retval) HAL_GetHalVersion_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_GetHalVersion_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define HAL_GetHalVersion_StopIgnore() HAL_GetHalVersion_CMockStopIgnore()
void HAL_GetHalVersion_CMockStopIgnore(void);
#define HAL_GetHalVersion_ExpectAndReturn(cmock_retval) HAL_GetHalVersion_CMockExpectAndReturn(__LINE__, cmock_retval)
void HAL_GetHalVersion_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetHalVersion_CALLBACK)(int cmock_num_calls);
void HAL_GetHalVersion_AddCallback(CMOCK_HAL_GetHalVersion_CALLBACK Callback);
void HAL_GetHalVersion_Stub(CMOCK_HAL_GetHalVersion_CALLBACK Callback);
#define HAL_GetHalVersion_StubWithCallback HAL_GetHalVersion_Stub
#define HAL_GetREVID_IgnoreAndReturn(cmock_retval) HAL_GetREVID_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_GetREVID_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define HAL_GetREVID_StopIgnore() HAL_GetREVID_CMockStopIgnore()
void HAL_GetREVID_CMockStopIgnore(void);
#define HAL_GetREVID_ExpectAndReturn(cmock_retval) HAL_GetREVID_CMockExpectAndReturn(__LINE__, cmock_retval)
void HAL_GetREVID_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetREVID_CALLBACK)(int cmock_num_calls);
void HAL_GetREVID_AddCallback(CMOCK_HAL_GetREVID_CALLBACK Callback);
void HAL_GetREVID_Stub(CMOCK_HAL_GetREVID_CALLBACK Callback);
#define HAL_GetREVID_StubWithCallback HAL_GetREVID_Stub
#define HAL_GetDEVID_IgnoreAndReturn(cmock_retval) HAL_GetDEVID_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_GetDEVID_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define HAL_GetDEVID_StopIgnore() HAL_GetDEVID_CMockStopIgnore()
void HAL_GetDEVID_CMockStopIgnore(void);
#define HAL_GetDEVID_ExpectAndReturn(cmock_retval) HAL_GetDEVID_CMockExpectAndReturn(__LINE__, cmock_retval)
void HAL_GetDEVID_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetDEVID_CALLBACK)(int cmock_num_calls);
void HAL_GetDEVID_AddCallback(CMOCK_HAL_GetDEVID_CALLBACK Callback);
void HAL_GetDEVID_Stub(CMOCK_HAL_GetDEVID_CALLBACK Callback);
#define HAL_GetDEVID_StubWithCallback HAL_GetDEVID_Stub
#define HAL_GetUIDw0_IgnoreAndReturn(cmock_retval) HAL_GetUIDw0_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_GetUIDw0_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define HAL_GetUIDw0_StopIgnore() HAL_GetUIDw0_CMockStopIgnore()
void HAL_GetUIDw0_CMockStopIgnore(void);
#define HAL_GetUIDw0_ExpectAndReturn(cmock_retval) HAL_GetUIDw0_CMockExpectAndReturn(__LINE__, cmock_retval)
void HAL_GetUIDw0_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetUIDw0_CALLBACK)(int cmock_num_calls);
void HAL_GetUIDw0_AddCallback(CMOCK_HAL_GetUIDw0_CALLBACK Callback);
void HAL_GetUIDw0_Stub(CMOCK_HAL_GetUIDw0_CALLBACK Callback);
#define HAL_GetUIDw0_StubWithCallback HAL_GetUIDw0_Stub
#define HAL_GetUIDw1_IgnoreAndReturn(cmock_retval) HAL_GetUIDw1_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_GetUIDw1_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define HAL_GetUIDw1_StopIgnore() HAL_GetUIDw1_CMockStopIgnore()
void HAL_GetUIDw1_CMockStopIgnore(void);
#define HAL_GetUIDw1_ExpectAndReturn(cmock_retval) HAL_GetUIDw1_CMockExpectAndReturn(__LINE__, cmock_retval)
void HAL_GetUIDw1_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetUIDw1_CALLBACK)(int cmock_num_calls);
void HAL_GetUIDw1_AddCallback(CMOCK_HAL_GetUIDw1_CALLBACK Callback);
void HAL_GetUIDw1_Stub(CMOCK_HAL_GetUIDw1_CALLBACK Callback);
#define HAL_GetUIDw1_StubWithCallback HAL_GetUIDw1_Stub
#define HAL_GetUIDw2_IgnoreAndReturn(cmock_retval) HAL_GetUIDw2_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_GetUIDw2_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define HAL_GetUIDw2_StopIgnore() HAL_GetUIDw2_CMockStopIgnore()
void HAL_GetUIDw2_CMockStopIgnore(void);
#define HAL_GetUIDw2_ExpectAndReturn(cmock_retval) HAL_GetUIDw2_CMockExpectAndReturn(__LINE__, cmock_retval)
void HAL_GetUIDw2_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetUIDw2_CALLBACK)(int cmock_num_calls);
void HAL_GetUIDw2_AddCallback(CMOCK_HAL_GetUIDw2_CALLBACK Callback);
void HAL_GetUIDw2_Stub(CMOCK_HAL_GetUIDw2_CALLBACK Callback);
#define HAL_GetUIDw2_StubWithCallback HAL_GetUIDw2_Stub
#define HAL_DBGMCU_EnableDBGSleepMode_Ignore() HAL_DBGMCU_EnableDBGSleepMode_CMockIgnore()
void HAL_DBGMCU_EnableDBGSleepMode_CMockIgnore(void);
#define HAL_DBGMCU_EnableDBGSleepMode_StopIgnore() HAL_DBGMCU_EnableDBGSleepMode_CMockStopIgnore()
void HAL_DBGMCU_EnableDBGSleepMode_CMockStopIgnore(void);
#define HAL_DBGMCU_EnableDBGSleepMode_Expect() HAL_DBGMCU_EnableDBGSleepMode_CMockExpect(__LINE__)
void HAL_DBGMCU_EnableDBGSleepMode_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_HAL_DBGMCU_EnableDBGSleepMode_CALLBACK)(int cmock_num_calls);
void HAL_DBGMCU_EnableDBGSleepMode_AddCallback(CMOCK_HAL_DBGMCU_EnableDBGSleepMode_CALLBACK Callback);
void HAL_DBGMCU_EnableDBGSleepMode_Stub(CMOCK_HAL_DBGMCU_EnableDBGSleepMode_CALLBACK Callback);
#define HAL_DBGMCU_EnableDBGSleepMode_StubWithCallback HAL_DBGMCU_EnableDBGSleepMode_Stub
#define HAL_DBGMCU_DisableDBGSleepMode_Ignore() HAL_DBGMCU_DisableDBGSleepMode_CMockIgnore()
void HAL_DBGMCU_DisableDBGSleepMode_CMockIgnore(void);
#define HAL_DBGMCU_DisableDBGSleepMode_StopIgnore() HAL_DBGMCU_DisableDBGSleepMode_CMockStopIgnore()
void HAL_DBGMCU_DisableDBGSleepMode_CMockStopIgnore(void);
#define HAL_DBGMCU_DisableDBGSleepMode_Expect() HAL_DBGMCU_DisableDBGSleepMode_CMockExpect(__LINE__)
void HAL_DBGMCU_DisableDBGSleepMode_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_HAL_DBGMCU_DisableDBGSleepMode_CALLBACK)(int cmock_num_calls);
void HAL_DBGMCU_DisableDBGSleepMode_AddCallback(CMOCK_HAL_DBGMCU_DisableDBGSleepMode_CALLBACK Callback);
void HAL_DBGMCU_DisableDBGSleepMode_Stub(CMOCK_HAL_DBGMCU_DisableDBGSleepMode_CALLBACK Callback);
#define HAL_DBGMCU_DisableDBGSleepMode_StubWithCallback HAL_DBGMCU_DisableDBGSleepMode_Stub
#define HAL_DBGMCU_EnableDBGStopMode_Ignore() HAL_DBGMCU_EnableDBGStopMode_CMockIgnore()
void HAL_DBGMCU_EnableDBGStopMode_CMockIgnore(void);
#define HAL_DBGMCU_EnableDBGStopMode_StopIgnore() HAL_DBGMCU_EnableDBGStopMode_CMockStopIgnore()
void HAL_DBGMCU_EnableDBGStopMode_CMockStopIgnore(void);
#define HAL_DBGMCU_EnableDBGStopMode_Expect() HAL_DBGMCU_EnableDBGStopMode_CMockExpect(__LINE__)
void HAL_DBGMCU_EnableDBGStopMode_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_HAL_DBGMCU_EnableDBGStopMode_CALLBACK)(int cmock_num_calls);
void HAL_DBGMCU_EnableDBGStopMode_AddCallback(CMOCK_HAL_DBGMCU_EnableDBGStopMode_CALLBACK Callback);
void HAL_DBGMCU_EnableDBGStopMode_Stub(CMOCK_HAL_DBGMCU_EnableDBGStopMode_CALLBACK Callback);
#define HAL_DBGMCU_EnableDBGStopMode_StubWithCallback HAL_DBGMCU_EnableDBGStopMode_Stub
#define HAL_DBGMCU_DisableDBGStopMode_Ignore() HAL_DBGMCU_DisableDBGStopMode_CMockIgnore()
void HAL_DBGMCU_DisableDBGStopMode_CMockIgnore(void);
#define HAL_DBGMCU_DisableDBGStopMode_StopIgnore() HAL_DBGMCU_DisableDBGStopMode_CMockStopIgnore()
void HAL_DBGMCU_DisableDBGStopMode_CMockStopIgnore(void);
#define HAL_DBGMCU_DisableDBGStopMode_Expect() HAL_DBGMCU_DisableDBGStopMode_CMockExpect(__LINE__)
void HAL_DBGMCU_DisableDBGStopMode_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_HAL_DBGMCU_DisableDBGStopMode_CALLBACK)(int cmock_num_calls);
void HAL_DBGMCU_DisableDBGStopMode_AddCallback(CMOCK_HAL_DBGMCU_DisableDBGStopMode_CALLBACK Callback);
void HAL_DBGMCU_DisableDBGStopMode_Stub(CMOCK_HAL_DBGMCU_DisableDBGStopMode_CALLBACK Callback);
#define HAL_DBGMCU_DisableDBGStopMode_StubWithCallback HAL_DBGMCU_DisableDBGStopMode_Stub
#define HAL_DBGMCU_EnableDBGStandbyMode_Ignore() HAL_DBGMCU_EnableDBGStandbyMode_CMockIgnore()
void HAL_DBGMCU_EnableDBGStandbyMode_CMockIgnore(void);
#define HAL_DBGMCU_EnableDBGStandbyMode_StopIgnore() HAL_DBGMCU_EnableDBGStandbyMode_CMockStopIgnore()
void HAL_DBGMCU_EnableDBGStandbyMode_CMockStopIgnore(void);
#define HAL_DBGMCU_EnableDBGStandbyMode_Expect() HAL_DBGMCU_EnableDBGStandbyMode_CMockExpect(__LINE__)
void HAL_DBGMCU_EnableDBGStandbyMode_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_HAL_DBGMCU_EnableDBGStandbyMode_CALLBACK)(int cmock_num_calls);
void HAL_DBGMCU_EnableDBGStandbyMode_AddCallback(CMOCK_HAL_DBGMCU_EnableDBGStandbyMode_CALLBACK Callback);
void HAL_DBGMCU_EnableDBGStandbyMode_Stub(CMOCK_HAL_DBGMCU_EnableDBGStandbyMode_CALLBACK Callback);
#define HAL_DBGMCU_EnableDBGStandbyMode_StubWithCallback HAL_DBGMCU_EnableDBGStandbyMode_Stub
#define HAL_DBGMCU_DisableDBGStandbyMode_Ignore() HAL_DBGMCU_DisableDBGStandbyMode_CMockIgnore()
void HAL_DBGMCU_DisableDBGStandbyMode_CMockIgnore(void);
#define HAL_DBGMCU_DisableDBGStandbyMode_StopIgnore() HAL_DBGMCU_DisableDBGStandbyMode_CMockStopIgnore()
void HAL_DBGMCU_DisableDBGStandbyMode_CMockStopIgnore(void);
#define HAL_DBGMCU_DisableDBGStandbyMode_Expect() HAL_DBGMCU_DisableDBGStandbyMode_CMockExpect(__LINE__)
void HAL_DBGMCU_DisableDBGStandbyMode_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_HAL_DBGMCU_DisableDBGStandbyMode_CALLBACK)(int cmock_num_calls);
void HAL_DBGMCU_DisableDBGStandbyMode_AddCallback(CMOCK_HAL_DBGMCU_DisableDBGStandbyMode_CALLBACK Callback);
void HAL_DBGMCU_DisableDBGStandbyMode_Stub(CMOCK_HAL_DBGMCU_DisableDBGStandbyMode_CALLBACK Callback);
#define HAL_DBGMCU_DisableDBGStandbyMode_StubWithCallback HAL_DBGMCU_DisableDBGStandbyMode_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
