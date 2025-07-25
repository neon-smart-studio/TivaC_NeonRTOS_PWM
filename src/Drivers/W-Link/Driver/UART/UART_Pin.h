
#ifndef UART_PIN_H
#define UART_PIN_H

#include "GPIO/GPIO.h"

#ifdef DEVICE_RTL8195AM
#define UART0_TX		hwGPIO_Pin_A7
#define UART0_RX		hwGPIO_Pin_A6
#define UART0_RTS		hwGPIO_Pin_A3
#define UART0_CTS		hwGPIO_Pin_A5

#define UART2_TX		hwGPIO_Pin_D7
#define UART2_RX		hwGPIO_Pin_D4
#define UART2_RTS		hwGPIO_Pin_D6
#define UART2_CTS		hwGPIO_Pin_D5

const hwGPIO_Pin UART_TX_Pins[] = {UART0_TX, UART2_TX};
const hwGPIO_Pin UART_RX_Pins[] = {UART0_RX, UART2_RX};
const hwGPIO_Pin UART_RTS_Pins[] = {UART0_RTS, UART2_RTS};
const hwGPIO_Pin UART_CTS_Pins[] = {UART0_CTS, UART2_CTS};
#endif //DEVICE_RTL8195AM

#ifdef DEVICE_RTL8710AF
#define UART0_TX		hwGPIO_Pin_A4
#define UART0_RX		hwGPIO_Pin_A0
#define UART0_RTS		hwGPIO_Pin_A2
#define UART0_CTS		hwGPIO_Pin_A1

const hwGPIO_Pin UART_TX_Pins[] = {UART0_TX};
const hwGPIO_Pin UART_RX_Pins[] = {UART0_RX};
const hwGPIO_Pin UART_RTS_Pins[] = {UART0_RTS};
const hwGPIO_Pin UART_CTS_Pins[] = {UART0_CTS};
#endif //DEVICE_RTL8710AF

#ifdef STM32F207xx
#ifndef CONFIG_UART0_TX_PIN_ALT
#define UART0_TX		        hwGPIO_Pin_A9
#else //CONFIG_UART0_TX_PIN_ALT
#define UART0_TX		        hwGPIO_Pin_B6
#endif //CONFIG_UART0_TX_PIN_ALT
#ifndef CONFIG_UART0_RX_PIN_ALT
#define UART0_RX		        hwGPIO_Pin_A10
#else //CONFIG_UART0_RX_PIN_ALT
#define UART0_RX		        hwGPIO_Pin_B7
#endif //CONFIG_UART0_RX_PIN_ALT
#define UART0_RTS		        hwGPIO_Pin_A12
#define UART0_CTS	         	hwGPIO_Pin_A11

#ifndef CONFIG_UART1_TX_PIN_ALT
#define UART1_TX		        hwGPIO_Pin_A2
#else //CONFIG_UART1_TX_PIN_ALT
#define UART1_TX		        hwGPIO_Pin_D5
#endif //CONFIG_UART1_TX_PIN_ALT
#ifndef CONFIG_UART1_RX_PIN_ALT
#define UART1_RX		        hwGPIO_Pin_A3
#else //CONFIG_UART1_RX_PIN_ALT
#define UART1_RX		        hwGPIO_Pin_D6
#endif //CONFIG_UART1_RX_PIN_ALT
#ifndef CONFIG_UART1_RTS_PIN_ALT
#define UART1_RTS		        hwGPIO_Pin_A1
#else //CONFIG_UART1_RTS_PIN_ALT
#define UART1_RTS	         	hwGPIO_Pin_D4
#endif //CONFIG_UART1_RTS_PIN_ALT
#ifndef CONFIG_UART1_CTS_PIN_ALT
#define UART1_CTS	         	hwGPIO_Pin_A0
#else //CONFIG_UART1_CTS_PIN_ALT
#define UART1_CTS	        	hwGPIO_Pin_D3
#endif //CONFIG_UART1_CTS_PIN_ALT

#if defined(CONFIG_UART2_TX_PIN_ALT0)
#define UART2_TX		        hwGPIO_Pin_C10
#elif defined(CONFIG_UART2_TX_PIN_ALT1)
#define UART2_TX		        hwGPIO_Pin_B10
#else
#define UART2_TX		        hwGPIO_Pin_D8
#endif

#if defined(CONFIG_UART2_RX_PIN_ALT0)
#define UART2_RX		        hwGPIO_Pin_C11
#elif defined(CONFIG_UART2_RX_PIN_ALT1)
#define UART2_RX		        hwGPIO_Pin_B11
#else
#define UART2_RX		        hwGPIO_Pin_D9
#endif

#ifndef CONFIG_UART2_RTS_PIN_ALT
#define UART2_RTS		        hwGPIO_Pin_B14
#else //CONFIG_UART2_RTS_PIN_ALT
#define UART2_RTS	         	hwGPIO_Pin_D12
#endif //CONFIG_UART2_RTS_PIN_ALT
#ifndef CONFIG_UART2_CTS_PIN_ALT
#define UART2_CTS	         	hwGPIO_Pin_B13
#else //CONFIG_UART2_CTS_PIN_ALT
#define UART2_CTS	        	hwGPIO_Pin_D11
#endif //CONFIG_UART2_CTS_PIN_ALT

#ifndef CONFIG_UART3_TX_PIN_ALT
#define UART3_TX		        hwGPIO_Pin_A0
#else //CONFIG_UART3_TX_PIN_ALT
#define UART3_TX		        hwGPIO_Pin_C10
#endif //CONFIG_UART3_TX_PIN_ALT
#ifndef CONFIG_UART3_RX_PIN_ALT
#define UART3_RX		        hwGPIO_Pin_A1
#else //CONFIG_UART3_RX_PIN_ALT
#define UART3_RX		        hwGPIO_Pin_C11
#endif //CONFIG_UART3_RX_PIN_ALT
#define UART3_RTS		        NC
#define UART3_CTS	        	NC

#define UART4_TX		        hwGPIO_Pin_C12
#define UART4_RX		        hwGPIO_Pin_D2
#define UART4_RTS		        NC
#define UART4_CTS	        	NC

#ifndef CONFIG_UART5_TX_PIN_ALT
#define UART5_TX		        hwGPIO_Pin_C6
#else //CONFIG_UART5_TX_PIN_ALT
#define UART5_TX		        hwGPIO_Pin_G14
#endif //CONFIG_UART5_TX_PIN_ALT
#ifndef CONFIG_UART5_RX_PIN_ALT
#define UART5_RX		        hwGPIO_Pin_C7
#else //CONFIG_UART5_RX_PIN_ALT
#define UART5_RX		        hwGPIO_Pin_G9
#endif //CONFIG_UART5_RX_PIN_ALT
#ifndef CONFIG_UART5_RTS_PIN_ALT
#define UART5_RTS		        hwGPIO_Pin_G8
#else //CONFIG_UART5_RTS_PIN_ALT
#define UART5_RTS	         	hwGPIO_Pin_G12
#endif //CONFIG_UART5_RTS_PIN_ALT
#ifndef CONFIG_UART5_CTS_PIN_ALT
#define UART5_CTS	         	hwGPIO_Pin_G13
#else //CONFIG_UART5_CTS_PIN_ALT
#define UART5_CTS	        	hwGPIO_Pin_G15
#endif //CONFIG_UART5_CTS_PIN_ALT

const hwGPIO_Pin UART_TX_Pins[] = {UART0_TX, UART1_TX, UART2_TX, UART3_TX, UART4_TX, UART5_TX};
const hwGPIO_Pin UART_RX_Pins[] = {UART0_RX, UART1_RX, UART2_RX, UART3_RX, UART4_RX, UART5_RX};
const hwGPIO_Pin UART_RTS_Pins[] = {UART0_RTS, UART1_RTS, UART2_RTS, UART3_RTS, UART4_RTS, UART5_RTS};
const hwGPIO_Pin UART_CTS_Pins[] = {UART0_CTS, UART1_CTS, UART2_CTS, UART3_CTS, UART4_CTS, UART5_CTS};
#endif //STM32F207xx

#ifdef STM32F767xx
#ifndef CONFIG_UART0_TX_PIN_ALT
#define UART0_TX		        hwGPIO_Pin_A9
#else //CONFIG_UART0_TX_PIN_ALT
#define UART0_TX		        hwGPIO_Pin_B6
#endif //CONFIG_UART0_TX_PIN_ALT
#ifndef CONFIG_UART0_RX_PIN_ALT
#define UART0_RX		        hwGPIO_Pin_A10
#else //CONFIG_UART0_RX_PIN_ALT
#define UART0_RX		        hwGPIO_Pin_B7
#endif //CONFIG_UART0_RX_PIN_ALT
#define UART0_RTS		        hwGPIO_Pin_A12
#define UART0_CTS	         	hwGPIO_Pin_A11

#ifndef CONFIG_UART1_TX_PIN_ALT
#define UART1_TX		        hwGPIO_Pin_A2
#else //CONFIG_UART1_TX_PIN_ALT
#define UART1_TX		        hwGPIO_Pin_D5
#endif //CONFIG_UART1_TX_PIN_ALT
#ifndef CONFIG_UART1_RX_PIN_ALT
#define UART1_RX		        hwGPIO_Pin_A3
#else //CONFIG_UART1_RX_PIN_ALT
#define UART1_RX		        hwGPIO_Pin_D6
#endif //CONFIG_UART1_RX_PIN_ALT
#ifndef CONFIG_UART1_RTS_PIN_ALT
#define UART1_RTS		        hwGPIO_Pin_A1
#else //CONFIG_UART1_RTS_PIN_ALT
#define UART1_RTS	         	hwGPIO_Pin_D4
#endif //CONFIG_UART1_RTS_PIN_ALT
#ifndef CONFIG_UART1_CTS_PIN_ALT
#define UART1_CTS	         	hwGPIO_Pin_A0
#else //CONFIG_UART1_CTS_PIN_ALT
#define UART1_CTS	        	hwGPIO_Pin_D3
#endif //CONFIG_UART1_CTS_PIN_ALT

#if defined(CONFIG_UART2_TX_PIN_ALT0)
#define UART2_TX		        hwGPIO_Pin_C10
#elif defined(CONFIG_UART2_TX_PIN_ALT1)
#define UART2_TX		        hwGPIO_Pin_B10
#else
#define UART2_TX		        hwGPIO_Pin_D8
#endif

#if defined(CONFIG_UART2_RX_PIN_ALT0)
#define UART2_RX		        hwGPIO_Pin_C11
#elif defined(CONFIG_UART2_RX_PIN_ALT1)
#define UART2_RX		        hwGPIO_Pin_B11
#else
#define UART2_RX		        hwGPIO_Pin_D9
#endif

#ifndef CONFIG_UART2_RTS_PIN_ALT
#define UART2_RTS		        hwGPIO_Pin_B14
#else //CONFIG_UART2_RTS_PIN_ALT
#define UART2_RTS	         	hwGPIO_Pin_D12
#endif //CONFIG_UART2_RTS_PIN_ALT
#ifndef CONFIG_UART2_CTS_PIN_ALT
#define UART2_CTS	         	hwGPIO_Pin_B13
#else //CONFIG_UART2_CTS_PIN_ALT
#define UART2_CTS	        	hwGPIO_Pin_D11
#endif //CONFIG_UART2_CTS_PIN_ALT

#ifndef CONFIG_UART3_TX_PIN_ALT
#define UART3_TX		        hwGPIO_Pin_A0
#else //CONFIG_UART3_TX_PIN_ALT
#define UART3_TX		        hwGPIO_Pin_C10
#endif //CONFIG_UART3_TX_PIN_ALT
#ifndef CONFIG_UART3_RX_PIN_ALT
#define UART3_RX		        hwGPIO_Pin_A1
#else //CONFIG_UART3_RX_PIN_ALT
#define UART3_RX		        hwGPIO_Pin_C11
#endif //CONFIG_UART3_RX_PIN_ALT
#define UART3_RTS		        NC
#define UART3_CTS	        	NC

#define UART4_TX		        hwGPIO_Pin_C12
#define UART4_RX		        hwGPIO_Pin_D2
#define UART4_RTS		        NC
#define UART4_CTS	        	NC

#ifndef CONFIG_UART5_TX_PIN_ALT
#define UART5_TX		        hwGPIO_Pin_C6
#else //CONFIG_UART5_TX_PIN_ALT
#define UART5_TX		        hwGPIO_Pin_G14
#endif //CONFIG_UART5_TX_PIN_ALT
#ifndef CONFIG_UART5_RX_PIN_ALT
#define UART5_RX		        hwGPIO_Pin_C7
#else //CONFIG_UART5_RX_PIN_ALT
#define UART5_RX		        hwGPIO_Pin_G9
#endif //CONFIG_UART5_RX_PIN_ALT
#ifndef CONFIG_UART5_RTS_PIN_ALT
#define UART5_RTS		        hwGPIO_Pin_G8
#else //CONFIG_UART5_RTS_PIN_ALT
#define UART5_RTS	         	hwGPIO_Pin_G12
#endif //CONFIG_UART5_RTS_PIN_ALT
#ifndef CONFIG_UART5_CTS_PIN_ALT
#define UART5_CTS	         	hwGPIO_Pin_G13
#else //CONFIG_UART5_CTS_PIN_ALT
#define UART5_CTS	        	hwGPIO_Pin_G15
#endif //CONFIG_UART5_CTS_PIN_ALT

const hwGPIO_Pin UART_TX_Pins[] = {UART0_TX, UART1_TX, UART2_TX, UART3_TX, UART4_TX, UART5_TX};
const hwGPIO_Pin UART_RX_Pins[] = {UART0_RX, UART1_RX, UART2_RX, UART3_RX, UART4_RX, UART5_RX};
const hwGPIO_Pin UART_RTS_Pins[] = {UART0_RTS, UART1_RTS, UART2_RTS, UART3_RTS, UART4_RTS, UART5_RTS};
const hwGPIO_Pin UART_CTS_Pins[] = {UART0_CTS, UART1_CTS, UART2_CTS, UART3_CTS, UART4_CTS, UART5_CTS};
#endif //STM32F767xx

#ifdef STM32H7xx
#if defined(CONFIG_UART0_TX_PIN_ALT0)
#define UART0_TX		        hwGPIO_Pin_B6
#elif defined(CONFIG_UART0_TX_PIN_ALT1)
#define UART0_TX		        hwGPIO_Pin_B14
#else
#define UART0_TX		        hwGPIO_Pin_A9
#endif
#if defined(CONFIG_UART0_RX_PIN_ALT0)
#define UART0_RX		        hwGPIO_Pin_B7
#elif defined(CONFIG_UART0_RX_PIN_ALT1)
#define UART0_RX		        hwGPIO_Pin_B15
#else
#define UART0_RX		        hwGPIO_Pin_A10
#endif
#define UART0_RTS		        hwGPIO_Pin_A12
#define UART0_CTS	         	hwGPIO_Pin_A11

#ifndef CONFIG_UART1_TX_PIN_ALT
#define UART1_TX		        hwGPIO_Pin_A2
#else //CONFIG_UART1_TX_PIN_ALT
#define UART1_TX		        hwGPIO_Pin_D5
#endif //CONFIG_UART1_TX_PIN_ALT
#ifndef CONFIG_UART1_RX_PIN_ALT
#define UART1_RX		        hwGPIO_Pin_A3
#else //CONFIG_UART1_RX_PIN_ALT
#define UART1_RX		        hwGPIO_Pin_D6
#endif //CONFIG_UART1_RX_PIN_ALT
#ifndef CONFIG_UART1_RTS_PIN_ALT
#define UART1_RTS		        hwGPIO_Pin_A1
#else //CONFIG_UART1_RTS_PIN_ALT
#define UART1_RTS	         	hwGPIO_Pin_D4
#endif //CONFIG_UART1_RTS_PIN_ALT
#ifndef CONFIG_UART1_CTS_PIN_ALT
#define UART1_CTS	         	hwGPIO_Pin_A0
#else //CONFIG_UART1_CTS_PIN_ALT
#define UART1_CTS	        	hwGPIO_Pin_D3
#endif //CONFIG_UART1_CTS_PIN_ALT

#if defined(CONFIG_UART2_TX_PIN_ALT0)
#define UART2_TX		        hwGPIO_Pin_B10
#elif defined(CONFIG_UART2_TX_PIN_ALT1)
#define UART2_TX		        hwGPIO_Pin_C10
#else
#define UART2_TX		        hwGPIO_Pin_D8
#endif
#if defined(CONFIG_UART2_RX_PIN_ALT0)
#define UART2_RX		        hwGPIO_Pin_B11
#elif defined(CONFIG_UART2_RX_PIN_ALT1)
#define UART2_RX		        hwGPIO_Pin_C11
#else
#define UART2_RX		        hwGPIO_Pin_D9
#endif
#ifndef CONFIG_UART2_RTS_PIN_ALT
#define UART2_RTS		        hwGPIO_Pin_B14
#else //CONFIG_UART2_RTS_PIN_ALT
#define UART2_RTS	         	hwGPIO_Pin_D12
#endif //CONFIG_UART2_RTS_PIN_ALT
#ifndef CONFIG_UART2_CTS_PIN_ALT
#define UART2_CTS	         	hwGPIO_Pin_B13
#else //CONFIG_UART2_CTS_PIN_ALT
#define UART2_CTS	        	hwGPIO_Pin_D11
#endif //CONFIG_UART2_CTS_PIN_ALT

#if defined(CONFIG_UART3_TX_PIN_ALT0)
#define UART3_TX		        hwGPIO_Pin_A12
#elif defined(CONFIG_UART3_TX_PIN_ALT1)
#define UART3_TX		        hwGPIO_Pin_B9
#elif defined(CONFIG_UART3_TX_PIN_ALT2)
#define UART3_TX		        hwGPIO_Pin_C10 | hwGPIO_Pin_Alt_0
#elif defined(CONFIG_UART3_TX_PIN_ALT3)
#define UART3_TX		        hwGPIO_Pin_D1
#else
#define UART3_TX		        hwGPIO_Pin_A0
#endif
#if defined(CONFIG_UART3_RX_PIN_ALT0)
#define UART3_RX		        hwGPIO_Pin_A11
#elif defined(CONFIG_UART3_RX_PIN_ALT1)
#define UART3_RX		        hwGPIO_Pin_B8
#elif defined(CONFIG_UART3_RX_PIN_ALT2)
#define UART3_RX		        hwGPIO_Pin_C11 | hwGPIO_Pin_Alt_0
#elif defined(CONFIG_UART3_RX_PIN_ALT3)
#define UART3_RX		        hwGPIO_Pin_D0
#else
#define UART3_RX		        hwGPIO_Pin_A1
#endif
#if defined(CONFIG_UART3_RTS_PIN_ALT)
#define UART3_RTS		        hwGPIO_Pin_B14 | hwGPIO_Pin_Alt_0
#else
#define UART3_RTS		        hwGPIO_Pin_A15
#endif
#if defined(CONFIG_UART3_CTS_PIN_ALT)
#define UART3_CTS		        hwGPIO_Pin_B15
#else
#define UART3_CTS		        hwGPIO_Pin_B0
#endif

#if defined(CONFIG_UART4_TX_PIN_ALT0)
#define UART4_TX		        hwGPIO_Pin_C12
#elif defined(CONFIG_UART4_TX_PIN_ALT1)
#define UART4_TX		        hwGPIO_Pin_B6 | hwGPIO_Pin_Alt_0
#else
#define UART4_TX		        hwGPIO_Pin_B13
#endif
#if defined(CONFIG_UART4_RX_PIN_ALT0)
#define UART4_RX		        hwGPIO_Pin_D2
#elif defined(CONFIG_UART4_RX_PIN_ALT1)
#define UART4_RX		        hwGPIO_Pin_B5
#else
#define UART4_RX		        hwGPIO_Pin_B12
#endif
#define UART4_RTS		        hwGPIO_Pin_C8
#define UART4_CTS		        hwGPIO_Pin_C9

#ifndef CONFIG_UART5_TX_PIN_ALT
#define UART5_TX		        hwGPIO_Pin_C6
#else //CONFIG_UART5_TX_PIN_ALT
#define UART5_TX		        hwGPIO_Pin_G14
#endif //CONFIG_UART5_TX_PIN_ALT
#ifndef CONFIG_UART5_RX_PIN_ALT
#define UART5_RX		        hwGPIO_Pin_C7
#else //CONFIG_UART5_RX_PIN_ALT
#define UART5_RX		        hwGPIO_Pin_G9
#endif //CONFIG_UART5_RX_PIN_ALT
#ifndef CONFIG_UART5_RTS_PIN_ALT
#define UART5_RTS		        hwGPIO_Pin_G8
#else //CONFIG_UART5_RTS_PIN_ALT
#define UART5_RTS	         	hwGPIO_Pin_G12
#endif //CONFIG_UART5_RTS_PIN_ALT
#ifndef CONFIG_UART5_CTS_PIN_ALT
#define UART5_CTS	         	hwGPIO_Pin_G13
#else //CONFIG_UART5_CTS_PIN_ALT
#define UART5_CTS	        	hwGPIO_Pin_G15
#endif //CONFIG_UART5_CTS_PIN_ALT

#if defined(CONFIG_UART6_TX_PIN_ALT0)
#define UART6_TX		        hwGPIO_Pin_F7
#elif defined(CONFIG_UART6_TX_PIN_ALT1)
#define UART6_TX		        hwGPIO_Pin_A15
#elif defined(CONFIG_UART6_TX_PIN_ALT2)
#define UART6_TX		        hwGPIO_Pin_B4
#else
#define UART6_TX		        hwGPIO_Pin_E8
#endif
#if defined(CONFIG_UART6_RX_PIN_ALT0)
#define UART6_RX		        hwGPIO_Pin_F6
#elif defined(CONFIG_UART6_RX_PIN_ALT1)
#define UART6_RX		        hwGPIO_Pin_A8
#elif defined(CONFIG_UART6_RX_PIN_ALT2)
#define UART6_RX		        hwGPIO_Pin_B3
#else
#define UART6_RX		        hwGPIO_Pin_E7
#endif
#if defined(CONFIG_UART6_RTS_PIN_ALT)
#define UART6_RTS		        hwGPIO_Pin_F8
#else
#define UART6_RTS		        hwGPIO_Pin_E9
#endif
#if defined(CONFIG_UART6_CTS_PIN_ALT)
#define UART6_CTS		        hwGPIO_Pin_F9
#else
#define UART6_CTS		        hwGPIO_Pin_E10
#endif

#define UART7_TX		        hwGPIO_Pin_E1
#define UART7_RX		        hwGPIO_Pin_E0
#define UART7_RTS		        hwGPIO_Pin_D15
#define UART7_CTS	        	hwGPIO_Pin_D14

#ifndef CONFIG_UART8_TX_PIN_ALT
#define UART8_TX	        	hwGPIO_Pin_G1
#else //CONFIG_UART8_TX_PIN_ALT
#define UART8_TX	         	hwGPIO_Pin_D15
#endif //CONFIG_UART8_TX_PIN_ALT
#ifndef CONFIG_UART8_RX_PIN_ALT
#define UART8_RX	        	hwGPIO_Pin_G0
#else //CONFIG_UART8_RX_PIN_ALT
#define UART8_RX	         	hwGPIO_Pin_D14
#endif //CONFIG_UART8_RX_PIN_ALT
#define UART8_RTS		        hwGPIO_Pin_D13
#define UART8_CTS	        	hwGPIO_Pin_D0

#ifndef CONFIG_UART9_TX_PIN_ALT
#define UART9_TX	         	hwGPIO_Pin_G12
#else //CONFIG_UART9_TX_PIN_ALT
#define UART9_TX	        	hwGPIO_Pin_E3
#endif //CONFIG_UART9_TX_PIN_ALT
#ifndef CONFIG_UART9_RX_PIN_ALT
#define UART9_RX	         	hwGPIO_Pin_G11
#else //CONFIG_UART9_RX_PIN_ALT
#define UART9_RX	        	hwGPIO_Pin_E2
#endif //CONFIG_UART9_RX_PIN_ALT
#define UART9_RTS		        hwGPIO_Pin_G14
#define UART9_CTS	        	hwGPIO_Pin_G13 | hwGPIO_Pin_Alt_0

const hwGPIO_Pin UART_TX_Pins[] = {UART0_TX, UART1_TX, UART2_TX, UART3_TX, UART4_TX, UART5_TX, UART6_TX, UART7_TX, UART8_TX, UART9_TX};
const hwGPIO_Pin UART_RX_Pins[] = {UART0_RX, UART1_RX, UART2_RX, UART3_RX, UART4_RX, UART5_RX, UART6_RX, UART7_RX, UART8_RX, UART9_RX};
const hwGPIO_Pin UART_RTS_Pins[] = {UART0_RTS, UART1_RTS, UART2_RTS, UART3_RTS, UART4_RTS, UART5_RTS, UART6_RTS, UART7_RTS, UART8_RTS, UART9_RTS};
const hwGPIO_Pin UART_CTS_Pins[] = {UART0_CTS, UART1_CTS, UART2_CTS, UART3_CTS, UART4_CTS, UART5_CTS, UART6_CTS, UART7_CTS, UART8_CTS, UART9_CTS};
#endif //STM32H7xx

#ifdef DEVICE_TM4C1294
#define UART0_TX		        hwGPIO_Pin_A1
#define UART0_RX		        hwGPIO_Pin_A0

#define UART1_TX		        hwGPIO_Pin_B1
#define UART1_RX		        hwGPIO_Pin_B0

#define UART2_TX		        hwGPIO_Pin_A7
#define UART2_RX		        hwGPIO_Pin_A6

#define UART3_TX		        hwGPIO_Pin_A5
#define UART3_RX		        hwGPIO_Pin_A4

#define UART4_TX		        hwGPIO_Pin_K1
#define UART4_RX		        hwGPIO_Pin_K0

#define UART5_TX		        hwGPIO_Pin_C7
#define UART5_RX		        hwGPIO_Pin_C6

#define UART6_TX		        hwGPIO_Pin_P1
#define UART6_RX		        hwGPIO_Pin_P0

#define UART7_TX		        hwGPIO_Pin_C5
#define UART7_RX		        hwGPIO_Pin_C4

const hwGPIO_Pin UART_TX_Pins[] = {UART0_TX, UART1_TX, UART2_TX, UART3_TX, UART4_TX, UART5_TX, UART6_TX, UART7_TX};
const hwGPIO_Pin UART_RX_Pins[] = {UART0_RX, UART1_RX, UART2_RX, UART3_RX, UART4_RX, UART5_RX, UART6_RX, UART7_RX};
#endif //DEVICE_TM4C1294

//*** SERIAL ***

#endif //UART_PIN_H