
#ifndef UART_INDEX_H
#define UART_INDEX_H

#define DEFAULT_UART_INDEX

#ifdef DEVICE_RTL8710AF
#undef DEFAULT_UART_INDEX
typedef enum hwUART_Index_t
{
  hwUART_Index_0 = 0,
  hwUART_Index_MAX,
}hwUART_Index;
// 定義標準輸出的 UART 索引
#define LOG_UART_INDEX hwUART_Index_0
#endif //DEVICE_RTL8710AF

#ifdef DEVICE_RTL8195AM
#undef DEFAULT_UART_INDEX
typedef enum hwUART_Index_t
{
  hwUART_Index_0 = 0,
  hwUART_Index_2 = 1,
  hwUART_Index_MAX = 2,
}hwUART_Index;
// 定義標準輸出的 UART 索引
#define LOG_UART_INDEX hwUART_Index_0
#endif //DEVICE_RTL8195AM

#ifdef STM32F207xx
#undef DEFAULT_UART_INDEX
typedef enum hwUART_Index_t
{
  hwUART_Index_0 = 0,
  hwUART_Index_1,
  hwUART_Index_2,
  hwUART_Index_3,
  hwUART_Index_4,
  hwUART_Index_5,
  hwUART_Index_MAX,
}hwUART_Index;
// 定義標準輸出的 UART 索引
#define LOG_UART_INDEX hwUART_Index_2
#endif //STM32F207xx

#ifdef STM32H723xx
#undef DEFAULT_UART_INDEX
typedef enum hwUART_Index_t
{
  hwUART_Index_0 = 0,
  hwUART_Index_1,
  hwUART_Index_2,
  hwUART_Index_3,
  hwUART_Index_4,
  hwUART_Index_5,
  hwUART_Index_6,
  hwUART_Index_7,
#if UART9_BASE
  hwUART_Index_8,
#endif
#if USART10_BASE
  hwUART_Index_9,
#endif
  hwUART_Index_L1,
  hwUART_Index_MAX,
}hwUART_Index;
// 定義標準輸出的 UART 索引
#define LOG_UART_INDEX hwUART_Index_2
#endif //STM32H723xx

#ifdef DEVICE_TM4C1294
#undef DEFAULT_UART_INDEX
typedef enum hwUART_Index_t
{
  hwUART_Index_0 = 0,
  hwUART_Index_1,
  hwUART_Index_2,
  hwUART_Index_3,
  hwUART_Index_4,
  hwUART_Index_5,
  hwUART_Index_6,
  hwUART_Index_7,
  hwUART_Index_MAX,
}hwUART_Index;
// 定義標準輸出的 UART 索引
#define LOG_UART_INDEX hwUART_Index_0
#endif //DEVICE_TM4C1294

#ifdef DEFAULT_UART_INDEX
typedef enum hwUART_Index_t
{
  hwUART_Index_0 = 0,
  hwUART_Index_MAX,
}hwUART_Index;
// 定義標準輸出的 UART 索引
#define LOG_UART_INDEX hwUART_Index_0
#endif //DEFAULT_UART_INDEX

#endif //UART_INDEX_H