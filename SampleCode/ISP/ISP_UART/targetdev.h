/***************************************************************************//**
 * @file     targetdev.h
 * @brief    ISP support function header file
 * @version  0x32
 *
 * @note
 * Copyright (C) 2019 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#include "NUC1261.h"
#include "ISP_USER.h"


/* rename for uart_transfer.c */
#define UART_T					UART0
#define UART_T_IRQHandler		UART02_IRQHandler
#define UART_T_IRQn				UART02_IRQn

#define CONFIG_SIZE 8 // in bytes

/*** (C) COPYRIGHT 2019 Nuvoton Technology Corp. ***/
