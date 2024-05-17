
/*
 * < CONFIG DSP Enable
 */
#undef  CONFIG_DSP_EN

/*
 * < CONFIG TrustZone
 */

/*
 * < CONFIG Link Option
 */
#define CONFIG_IMG1_FLASH 1
#undef  CONFIG_IMG1_SRAM
#undef  CONFIG_CODE_XIP_DATA_PSRAM
#undef  CONFIG_CODE_PSRAM_DATA_SRAM
#undef  CONFIG_CODE_PSRAM_DATA_PSRAM
#define CONFIG_CODE_XIP_DATA_SRAM 1

/*
 * < CONFIG Mass Production
 */
#undef  CONFIG_MP_INCLUDED

/*
 * < CONFIG Shell CMD
 */
#undef  CONFIG_NEW_ATCMD
#undef  CONFIG_LONGER_CMD

/*
 * < CONFIG VFS
 */
#define CONFIG_VFS_LITTLEFS_INCLUDED 1
#undef  CONFIG_VFS_FATFS_INCLUDED

/*
 * < CONFIG OTA OPTION
 */
#undef  CONFIG_UPGRADE_BOOTLOADER

/*
 * < CONFIG Application Processor
 */
#define CONFIG_AP_CORE_KM4 1
#undef  CONFIG_AP_CORE_KR4
#define CONFIG_WIFI_INIC 1

/*
 * < CONFIG BT
 */
#undef  CONFIG_BT_MENU

/*
 * < CONFIG WIFI
 */
#define CONFIG_WLAN_MENU 1
#define CONFIG_WLAN_KM4_AP_KR4_NP 1
#undef  CONFIG_WLAN_KR4_AP_KM4_NP
#undef  CONFIG_WIFI_KM4_SINGLE_CORE
#undef  CONFIG_WIFI_KR4_SINGLE_CORE
#undef  CONFIG_HIGH_TP_TEST
#define CONFIG_WLAN 1
#define CONFIG_AS_INIC_NP 1
#define CONFIG_FW_DRIVER_COEXIST 1
#undef  CONFIG_WIFI_CSI_ENABLE

/*
 * < CONFIG LWIP
 */


/*
 * < MENUCONFIG FOR KR4 CONFIG
 */

/*
 * < CONFIG CHIP
 */
#define CONFIG_AMEBALITE 1
#define RSICV_CORE_KR4 1
#undef  CONFIG_FPGA
#define CONFIG_AMEBALITE_A_CUT 1

/*
 * < CONFIG OS
 */
#define CONFIG_KERNEL 1
#define PLATFORM_FREERTOS 1
#define TASK_SCHEDULER_DISABLED (0)

/*
 * < CONFIG FUNCTION TEST
 */
#undef  CONFIG_PER_TEST

/*
 * < SSL Config
 */
#define CONFIG_USE_MBEDTLS_ROM 1
#define CONFIG_MBED_TLS_ENABLED 1
#undef  CONFIG_SSL_ROM_TEST

/*
 * < Audio Config
 */
#undef  CONFIG_AUDIO_FWK
#undef  CONFIG_MEDIA_PLAYER

/*
 * < CONFIG IPC Message Queue
 */
#undef  CONFIG_IMQ_EN

/*
 * < To set debug msg flag
 */
#undef  CONFIG_DEBUG_RXI_DUMP
#define CONFIG_DEBUG_BACK_TRACE 1
#define CONFIG_DEBUG_CRASH_DUMP 1
#define CONFIG_STACK_DUMP_DEPTH (100)
#define CONFIG_DEBUG_CRASH_DUMP_RUNS (1)

/*
 * < Build Option
 */
#define CONFIG_TOOLCHAIN_VSDK 1
#undef  CONFIG_LINK_ROM_LIB
#define CONFIG_LINK_ROM_SYMB 1

