
#ifndef PWM_INDEX_H
#define PWM_INDEX_H

#define DEFAULT_PWM_INDEX

#if defined(DEVICE_RTL8710AF) || defined(DEVICE_RTL8195AM)
#undef DEFAULT_PWM_INDEX
typedef enum
{
	hwPWM_Channel_1 = 0,
	hwPWM_Channel_2,
	hwPWM_Channel_3,
	hwPWM_Channel_4,
	hwPWM_Channel_MAX
}hwPWM_Channel;
#endif //DEVICE_RTL8710AF || DEVICE_RTL8195AM

#ifdef STM32F207xx
#undef DEFAULT_PWM_INDEX
typedef enum
{
	hwPWM_Channel_1 = 0,
	hwPWM_Channel_2,
	hwPWM_Channel_3,
	hwPWM_Channel_4,
	hwPWM_Channel_5,
	hwPWM_Channel_6,
	hwPWM_Channel_7,
	hwPWM_Channel_8,
	hwPWM_Channel_9,
	hwPWM_Channel_10,
	hwPWM_Channel_11,
	hwPWM_Channel_12,
	hwPWM_Channel_MAX
}hwPWM_Channel;
#endif //STM32F207xx

#ifdef STM32F767xx
#undef DEFAULT_PWM_INDEX
typedef enum
{
	hwPWM_Channel_1 = 0,
	hwPWM_Channel_2,
	hwPWM_Channel_3,
	hwPWM_Channel_4,
	hwPWM_Channel_5,
	hwPWM_Channel_6,
	hwPWM_Channel_7,
	hwPWM_Channel_8,
	hwPWM_Channel_9,
	hwPWM_Channel_10,
	hwPWM_Channel_11,
	hwPWM_Channel_12,
	hwPWM_Channel_MAX
}hwPWM_Channel;
#endif //STM32F767xx

#ifdef STM32H723xx
#undef DEFAULT_PWM_INDEX
typedef enum
{
	hwPWM_Channel_1 = 0,
	hwPWM_Channel_2,
	hwPWM_Channel_3,
	hwPWM_Channel_4,
	hwPWM_Channel_5,
	hwPWM_Channel_6,
	hwPWM_Channel_7,
	hwPWM_Channel_8,
	hwPWM_Channel_9,
	hwPWM_Channel_10,
	hwPWM_Channel_11,
	hwPWM_Channel_12,
	hwPWM_Channel_MAX
}hwPWM_Channel;
#endif //STM32H723xx

#ifdef DEVICE_TM4C1294
#undef DEFAULT_PWM_INDEX
typedef enum
{
	hwPWM_Channel_1 = 0,
	hwPWM_Channel_2,
	hwPWM_Channel_3,
	hwPWM_Channel_4,
	hwPWM_Channel_5,
	hwPWM_Channel_6,
	hwPWM_Channel_7,
	hwPWM_Channel_8,
  	hwPWM_Channel_MAX,
}hwPWM_Channel;
#endif //DEVICE_TM4C1294

#ifdef DEFAULT_PWM_INDEX
typedef enum
{
	hwPWM_Channel_1 = 0,
  	hwPWM_Channel_MAX,
}hwPWM_Channel;
#endif //DEFAULT_PWM_INDEX

#endif //PWM_INDEX_H