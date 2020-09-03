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

// defautl contiki-ng string convert.
#define  CONTIKI_TARGET_STRING      CONFIG_CONTIKI_TARGET
#define  CONTIKI_BOARD_STRING       CONFIG_CONTIKI_BOARD