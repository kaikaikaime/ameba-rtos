/*
 *******************************************************************************
 * Copyright(c) 2021, Realtek Semiconductor Corporation. All rights reserved.
 *******************************************************************************
 */

#ifndef _HCI_PROCESS_H_
#define _HCI_PROCESS_H_

#include <stdint.h>

enum {
	HCI_SYNC,
	HCI_NOT_SYNC,
};

/* HCI Process */
uint8_t  hci_process(void);

/* HCI StandAlone */
bool hci_sa_recv_get_buf(hci_rx_t *info, uint32_t timeout);
uint8_t hci_sa_recv(hci_rx_t *info);
uint8_t hci_sa_send(uint8_t type, uint8_t *buf, uint16_t len, uint8_t is_sync);

#endif