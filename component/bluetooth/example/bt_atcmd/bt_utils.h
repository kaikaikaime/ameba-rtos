/*
 *******************************************************************************
 * Copyright(c) 2022, Realtek Semiconductor Corporation. All rights reserved.
 *******************************************************************************
 */

#ifndef __ATCMD_BT_UTILS_H__
#define __ATCMD_BT_UTILS_H__

#include <basic_types.h>
#include <stdint.h>

#if defined(CONFIG_ATCMD_IO_UART) && CONFIG_ATCMD_IO_UART
#include <log_service.h>
#endif

#ifdef __cplusplus
extern "C"
{
#endif

#if (defined(CONFIG_ATCMD_IO_UART) && CONFIG_ATCMD_IO_UART) && (!defined(ATCMD_BT_CUT_DOWN) || !ATCMD_BT_CUT_DOWN)

#define BT_AT_PRINT(fmt, args...)             at_printf(fmt, ##args)
#define MESH_DATA_IOUART_DUMP(buf, len)       bt_iouart_dump_hex("0x", buf, len, false)
/* 0201 0b0a ...*/
#define BT_AT_DUMP16A(str, buf, len)          bt_iouart_dump(2, str, buf, len)

#else /* CONFIG_ATCMD_IO_UART && !ATCMD_BT_CUT_DOWN */

#define BT_AT_PRINT(fmt, args...)
#define MESH_DATA_IOUART_DUMP(buf, len)
#define BT_AT_DUMP16A(str, buf, len)

#endif /* CONFIG_ATCMD_IO_UART && !ATCMD_BT_CUT_DOWN */

#define BT_AT_PRINTOK() BT_AT_PRINT("OK\r\n")
#define BT_AT_PRINTERROR() BT_AT_PRINT("ERROR\r\n")

void ble_addr_to_str(void *paddr, char *str, uint32_t len);

int str_to_int(char *str);

bool hexdata_str_to_bd_addr(char *str, uint8_t *addr_buf, uint8_t buf_len);

bool hexnum_str_to_array(char *str, uint8_t *byte_arr, uint8_t arr_len);

bool hexdata_str_to_array(char *str, uint8_t *byte_arr, uint8_t arr_len);

#if (defined(CONFIG_ATCMD_IO_UART) && CONFIG_ATCMD_IO_UART) && (!defined(ATCMD_BT_CUT_DOWN) || !ATCMD_BT_CUT_DOWN)

void bt_iouart_dump_hex(const char *str, void *buf, uint16_t len, bool reverse);

void bt_iouart_dump(uint8_t unit, const char *str, void *buf, uint16_t len);

#endif

#ifdef __cplusplus
}
#endif

#endif /* __ATCMD_BT_UTILS_H__ */