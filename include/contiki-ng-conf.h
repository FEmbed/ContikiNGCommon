#include <sdkconfig.h>
/**
 * Author: GeneKong
 * Email: gyx_edu@qq.com
 * 
 * This is Contiki NG default conf for platformio.
 * Threre are two conf, one is project-conf.h which use for prject only, 
 * another is contiki-ng framework configuration.
 * 
 * In this file, convert Kconfig settings to normall used only which contiki-ng
 * need.
 */

#ifdef CONFIG_CHIP_DEVICE_CC1352R
#define DeviceFamily_CC13X2
#define DEVICE_LINE_CC13XX
#define DEVICE_CC1352R
#define SUPPORTS_PROP_MODE      (1)
#define SUPPORTS_IEEE_MODE      (1)
#define SUPPORTS_BLE_BEACON     (1)
#define SUPPORTS_HIGH_PA        (0)
#define BOARD_SUPPORTS_BSL      (0)
#define ROUTING_CONF_RPL_LITE   (1)
#define NETSTACK_CONF_WITH_IPV6 (1)
#define MAC_CONF_WITH_CSMA      (1)
#endif

////////////////////////////////////////////////////////////////////////////////
/// defautl contiki-ng string convert.
////////////////////////////////////////////////////////////////////////////////
#define  CONTIKI_TARGET_STRING      CONFIG_CONTIKI_TARGET
#define  CONTIKI_BOARD_STRING       CONFIG_CONTIKI_BOARD

////////////////////////////////////////////////////////////////////////////////
/// override RF center frequency
////////////////////////////////////////////////////////////////////////////////
#ifdef  CONFIG_RF_CENTER_FRQ_169
#define DOT_15_4G_CONF_FREQ_BAND_ID 0
#elif defined(CONFIG_RF_CENTER_FRQ_450)
#define DOT_15_4G_CONF_FREQ_BAND_ID 1
#elif defined(CONFIG_RF_CENTER_FRQ_470)
#define DOT_15_4G_CONF_FREQ_BAND_ID 2
#elif defined(CONFIG_RF_CENTER_FRQ_780)
#define DOT_15_4G_CONF_FREQ_BAND_ID 3
#elif defined(CONFIG_RF_CENTER_FRQ_863)
#define DOT_15_4G_CONF_FREQ_BAND_ID 4
#elif defined(CONFIG_RF_CENTER_FRQ_896)
#define DOT_15_4G_CONF_FREQ_BAND_ID 5
#elif defined(CONFIG_RF_CENTER_FRQ_901)
#define DOT_15_4G_CONF_FREQ_BAND_ID 6
#elif defined(CONFIG_RF_CENTER_FRQ_915)
#define DOT_15_4G_CONF_FREQ_BAND_ID 7
#elif defined(CONFIG_RF_CENTER_FRQ_917)
#define DOT_15_4G_CONF_FREQ_BAND_ID 8
#elif defined(CONFIG_RF_CENTER_FRQ_920)
#define DOT_15_4G_CONF_FREQ_BAND_ID 9
#elif defined(CONFIG_RF_CENTER_FRQ_928)
#define DOT_15_4G_CONF_FREQ_BAND_ID 10
#elif defined(CONFIG_RF_CENTER_FRQ_950)
#define DOT_15_4G_CONF_FREQ_BAND_ID 11
#elif defined(CONFIG_RF_CENTER_FRQ_1427)
#define DOT_15_4G_CONF_FREQ_BAND_ID 12
#elif defined(CONFIG_RF_CENTER_FRQ_2450)
#define DOT_15_4G_CONF_FREQ_BAND_ID 13
#endif

////////////////////////////////////////////////////////////////////////////////
//  Module macros for contiki router
////////////////////////////////////////////////////////////////////////////////
#if CONFIG_MOD_RPL_BORDER_ROUTER
#include <rpl-border-router/module-macros.h>
#endif