
/*
 * < CONFIG BOOT OPTION
 */
#undef  CONFIG_XIP_FLASH

/*
 * < CLINTWOOD Config
 */
#undef  CONFIG_CLINTWOOD

/*
 * < CONFIG Mass Production
 */
#undef  CONFIG_MP_INCLUDED

/*
 * < CONFIG Linux
 */
#undef  CONFIG_LINUX_FW_EN

/*
 * < CONFIG Shell CMD
 */
#define CONFIG_SUPPORT_ATCMD 1
#define CONFIG_ATCMD_IO_LOGUART 1
#undef  CONFIG_ATCMD_IO_UART
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
#define CONFIG_AP_CORE_CA32 1
#undef  CONFIG_AP_CORE_KM4

/*
 * < CONFIG BT
 */
#undef  CONFIG_BT_MENU

/*
 * < CONFIG WIFI
 */
#define CONFIG_WLAN_MENU 1
#define CONFIG_AS_INIC_KM4_NP_CA32_AP 1
#undef  CONFIG_SINGLE_CORE_WIFI_KM4
#undef  CONFIG_WIFI_CSI_ENABLE
#undef  CONFIG_WIFI_ANTDIV_ENABLE

/*
 * < CONFIG LWIP
 */


/*
 * < MENUCONFIG FOR KM0 CONFIG
 */

/*
 * < CONFIG CHIP
 */
#define CONFIG_AMEBASMART 1
#define ARM_CORE_CM0 1
#define CONFIG_FPGA 1
#define CONFIG_AMEBASMART_A_CUT 1

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
 * < CONFIG WIFI FW
 */
#define CONFIG_WIFI_FW_EN 1
#undef  CONFIG_WIFI_FW_VERIFY
#undef  CONFIG_SOCZB_PTA_VERIFY

/*
 * < Build Option
 */
#define CONFIG_TOOLCHAIN_ASDK 1
#undef  CONFIG_TOOLCHAIN_ARM_GCC
#undef  CONFIG_LINK_ROM_LIB
#define CONFIG_LINK_ROM_SYMB 1

