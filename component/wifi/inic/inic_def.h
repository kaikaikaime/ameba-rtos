/**
  ******************************************************************************
  * @file    inic_def.h
  * @author
  * @version
  * @date
  * @brief
  ******************************************************************************
  * @attention
  *
  * This module is a confidential and proprietary property of RealTek and
  * possession or use of this module requires written permission of RealTek.
  *
  * Copyright(c) 2024, Realtek Semiconductor Corporation. All rights reserved.
  ******************************************************************************
  */

#ifndef INIC_DEF_H
#define INIC_DEF_H

enum INIC_WIFI_C2H_API_ID {
	INIC_API_PROCESS_DONE = 0,
	INIC_API_SCAN_USER_CALLBACK = 1,
	INIC_API_SCAN_EACH_REPORT_USER_CALLBACK = 2,
	INIC_API_AUTO_RECONNECT = 3,
	INIC_API_EAP_AUTO_RECONNECT = 4,
	INIC_API_AP_CH_SWITCH = 5,
	INIC_API_HDL = 6,
	INIC_API_PROMISC_CALLBACK = 7,
	INIC_API_GET_LWIP_INFO = 8,
	INIC_API_SET_NETIF_INFO = 9,
	INIC_API_CFG80211_SCAN_REPORT = 10,
	INIC_API_IP_TABLE_CHK = 11,

	/*NAN related*/
	INIC_API_CFG80211_NAN_REPORT_MATCH_EVENT = 12,
	INIC_API_CFG80211_NAN_DEL_FUNC = 13,
	INIC_API_CFG80211_NAN_CFGVENDOR_EVENT = 14,
	INIC_API_CFG80211_NAN_CFGVENDOR_CMD_REPLY = 15,
	/*P2P related*/
	INIC_API_CFG80211_P2P_CH_RDY = 16,
};

enum INIC_WIFI_H2C_API_ID {
	//basic
	INIC_API_WIFI_CONNECT = 1,
	INIC_API_WIFI_DISCONNECT = 2,
	INIC_API_WIFI_IS_CONNECTED_TO_AP = 3,
	INIC_API_WIFI_IS_RUNNING = 4,
	INIC_API_WIFI_SET_CHANNEL = 5,
	INIC_API_WIFI_GET_CHANNEL = 6,
	INIC_API_WIFI_SET_USR_CFG = 7,
	INIC_API_WIFI_GET_DISCONN_REASCON = 8,
	INIC_API_WIFI_ON = 9,
	INIC_API_WIFI_INIT_AP = 10,
	INIC_API_WIFI_DEINIT_AP = 11,
	INIC_API_WIFI_START_AP = 12,
	INIC_API_WIFI_STOP_AP = 13,
	INIC_API_WIFI_SCAN_NETWROKS = 14,
	INIC_API_WIFI_GET_SCANNED_AP_INFO = 15,
	INIC_API_WIFI_SCAN_ABORT = 16,
	//ext
	INIC_API_WIFI_SET_MAC_ADDR = 17,
	INIC_API_WIFI_GET_MAC_ADDR = 18,
	INIC_API_WIFI_DRIVE_IS_MP = 19,
	INIC_API_WIFI_GET_ASSOCIATED_CLIENT_LIST = 20,
	INIC_API_WIFI_GET_SETTING = 21,
	INIC_API_WIFI_SET_IPS_EN = 22,
	INIC_API_WIFI_SET_LPS_EN = 23,
	INIC_API_WIFI_SET_LPS_LISTEN_INTERVAL = 24,
	INIC_API_WIFI_SET_MFP_SUPPORT = 25,
	INIC_API_WIFI_SET_GROUP_ID = 26,
	INIC_API_WIFI_SET_PMK_CACHE_EN = 27,
	INIC_API_WIFI_SAE_STATUS = 28,
	INIC_API_WIFI_FT_STATUS = 29,
	INIC_API_WIFI_GET_SW_STATISTIC = 30,
	INIC_API_WIFI_GET_PHY_STATISTIC = 31,
	INIC_API_WIFI_SET_NETWORK_MODE = 32,
	INIC_API_WIFI_SET_WPS_PHASE = 33,
	INIC_API_WIFI_SET_GEN_IE = 34,
	INIC_API_WIFI_SET_EAP_PHASE = 35,
	INIC_API_WIFI_GET_EAP_PHASE = 36,
	INIC_API_WIFI_SET_EAP_METHOD = 37,
	INIC_API_WIFI_SEND_EAPOL = 38,
	INIC_API_WIFI_CONFIG_AUTORECONNECT = 39,
	INIC_API_WIFI_GET_AUTORECONNECT = 40,
	INIC_API_WIFI_CUS_IE = 41,
	INIC_API_WIFI_SET_IND_MGNT = 42,
	INIC_API_WIFI_SEND_MGNT = 43,
	INIC_API_WIFI_SET_TXRATE_BY_TOS = 44,
	INIC_API_WIFI_SET_EDCA_PARAM = 45,
	INIC_API_WIFI_SET_TX_CCA = 46,
	INIC_API_WIFI_SET_CTS2SEFL_DUR_AND_SEND = 47,
	INIC_API_WIFI_GET_ANTENNA_INFO = 48,
	INIC_API_WIFI_GET_BAND_TYPE = 49,
	INIC_API_WIFI_DEL_STA = 50,
	INIC_API_WIFI_AP_CH_SWITCH = 51,
	INIC_API_WIFI_CONFIG_CSI = 52,
	INIC_API_WIFI_GET_CSI_REPORT = 53,
	INIC_API_WIFI_GET_CCMP_KEY = 54,
	INIC_API_WIFI_SET_TX_POWER = 55,
	//inter
	INIC_API_WIFI_COEX_SET_PTA = 56,
	INIC_API_WIFI_SET_WPA_MODE = 57,
	INIC_API_WIFI_SET_PMF_MODE = 58,
	INIC_API_WIFI_COEX_BT_RFK = 59,
	INIC_API_WIFI_COEX_ZB_RFK = 60,
	INIC_API_WIFI_SET_BT_SEL = 61,
	INIC_API_WIFI_ADD_KEY = 62,
	INIC_API_WIFI_GET_CHPLAN = 63,
	INIC_API_WPA_4WAY_FAIL = 64,
	INIC_API_WPA_PMKSA_OPS = 65,
	INIC_API_WIFI_SET_OWE_PARAM = 66,

	//promisc
	INIC_API_WIFI_PROMISC_INIT = 67,
	//nan
	INIC_API_NAN_INIT = 68,
	INIC_API_NAN_DEINIT = 69,
	INIC_API_NAN_START = 70,
	INIC_API_NAN_STOP = 71,
	INIC_API_NAN_ADD_FUNC = 72,
	INIC_API_NAN_DEL_FUNC = 73,
	INIC_API_NAN_CFGVENFOR = 74,
	//p2p
	INIC_API_P2P_ROLE = 75,
	INIC_API_P2P_REMAIN_ON_CH = 76,
	//misc
	INIC_API_WIFI_IP_UPDATE = 77,
	INIC_API_WIFI_IWPRIV_INFO = 78, //dbg cmd
	INIC_API_WIFI_MP_CMD = 79, //mp cmd
	INIC_API_WIFI_GET_NETWORK_MODE = 80,
	INIC_API_WIFI_MSG_TO = 81,
	INIC_API_WIFI_SPEAKER = 82,
	INIC_API_WIFI_SET_CHPLAN = 83,
	INIC_API_WIFI_SET_EDCCA_MODE = 84,
	INIC_API_WIFI_GET_EDCCA_MODE = 85,
	INIC_API_WIFI_SET_COUNTRY_CODE = 86,
	INIC_API_WIFI_GET_COUNTRY_CODE = 87,

	INIC_API_WAR_OFFLOAD_CTRL = 88,
	//sdio bridge
	INIC_API_BRIDGE_SYNC_HOST_MAC = 89,
	INIC_API_BRIDGE_DHCP = 90,
	INIC_API_BRIDGE_GET_IP = 91,
};

enum IPC_LWIP_INFO_TYPE {
	INIC_WLAN_GET_IP = 0,
	INIC_WLAN_GET_GW = 1,
	INIC_WLAN_GET_GWMSK = 2,
	INIC_WLAN_GET_HW_ADDR = 3,
	INIC_WLAN_IS_VALID_IP = 4
};

#endif

