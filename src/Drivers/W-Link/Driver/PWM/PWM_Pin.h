
#ifndef PWM_PIN_H
#define PWM_PIN_H

#include "GPIO/GPIO.h"

#if defined(DEVICE_RTL8710AF)
#define PWM_CH1_PIN		            hwGPIO_Pin_E0
#define PWM_CH2_PIN		            hwGPIO_Pin_E1
#define PWM_CH3_PIN		            hwGPIO_Pin_E2
#define PWM_CH4_PIN		            hwGPIO_Pin_E3

const hwGPIO_Pin PWM_Pins[] = {PWM_CH1_PIN, PWM_CH2_PIN, PWM_CH3_PIN, PWM_CH4_PIN};
#endif // DEVICE_RTL8710AF

#if defined(DEVICE_RTL8195AM)
#define PWM_CH1_PIN		            hwGPIO_Pin_C0
#define PWM_CH2_PIN		            hwGPIO_Pin_C1
#define PWM_CH3_PIN		            hwGPIO_Pin_C2
#define PWM_CH4_PIN		            hwGPIO_Pin_C3

const hwGPIO_Pin PWM_Pins[] = {PWM_CH1_PIN, PWM_CH2_PIN, PWM_CH3_PIN, PWM_CH4_PIN};
#endif // DEVICE_RTL8195AM

#ifdef STM32F207xx
#include "PWM_Pin_STM32F207xx.h"
#endif // STM32F207xx

#ifdef STM32F767xx
#include "PWM_Pin_STM32F767xx.h"
#endif //STM32H723xx

#ifdef STM32H723xx
#include "PWM_Pin_STM32H723xx.h"
#endif //STM32H723xx

#ifdef DEVICE_TM4C1294
#include "PWM_Pin_TM4C1294.h"
#endif //DEVICE_TM4C1294

#endif //PWM_PIN_H