#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>

#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/rom.h"
#include "driverlib/rom_map.h"
#include "driverlib/interrupt.h"
#include "driverlib/systick.h"
#include "driverlib/cpu.h"

#include "FreeRTOS.h"
#include "task.h"

#include "UART/UART.h"
#include "SysCtrl/SysCtrl.h"

#include "NeonRTOS.h"
#include "NeonTCPIP.h"
#include "NeonAppInterface.h"

void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) {
    // 堆疊溢出處理
    UART_Printf("Task %s Stack Overflow!!!", pcTaskName);
    while (1);
}

void vApplicationIdleHook(void) {
    // MCU 進入低功耗模式，等待中斷
    CPUwfi();
}

void vApplicationTickHook(void) {
}

int main(void) {
    SysCtrl_Init(120000000);   
    
    IntMasterEnable();

    Neon_App_Init();

    // 啟動 NeonRTOS 調度器
    NeonRTOS_start();

    while (1);
}
//