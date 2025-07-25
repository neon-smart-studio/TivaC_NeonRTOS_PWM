
#ifndef GPIO_PIN_H
#define GPIO_PIN_H

#ifdef DEVICE_RTL8710AF
#include "GPIO_Pin_RTL8710.h"
#endif // DEVICE_RTL8710AF
#ifdef DEVICE_RTL8195AM
#include "GPIO_Pin_RTL8195.h"
#endif // DEVICE_RTL8195AM

#ifdef STM32F207xx
#include "GPIO_Pin_STM32F207.h"
#endif //STM32F207xx

#ifdef STM32F767xx
#include "GPIO_Pin_STM32F767.h"
#endif //STM32F767xx

#ifdef STM32H723xx
#include "GPIO_Pin_STM32H723.h"
#endif //STM32H723xx

#ifdef DEVICE_TM4C1294
#include "GPIO_Pin_TM4C1294.h"
#endif //DEVICE_TM4C1294

#endif //GPIO_PIN_H