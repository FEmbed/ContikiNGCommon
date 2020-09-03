#include <sdkconfig.h>

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