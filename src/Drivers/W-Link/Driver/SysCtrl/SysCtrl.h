
#ifndef SYSCTRL_H
#define SYSCTRL_H

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

#ifdef	__cplusplus
extern "C" {
#endif

extern uint32_t g_ui32SysClock;

void SysCtrl_Init(uint32_t ui32SysClock);

#ifdef  __cplusplus
}
#endif // __cplusplus

#endif //SYSCTRL_H