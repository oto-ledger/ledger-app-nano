#include "coins.h"
#include "coins_dsl.h"

#ifndef IS_STANDALONE_APP

libn_coin_conf_t libn_coin_conf_D;

REGISTER_COINS(
    COIN(LIBN_COIN_TYPE_NANO, {
        /* coinName */ "Nano",
#if defined(TARGET_BLUE)
        /* coinBadge */ &C_blue_badge_nano,
#else
        /* coinBadge */ &C_nanos_badge_nano,
#endif
        /* bip32Prefix */ { HARDENED(44), HARDENED(165) },
        /* addressPrimaryPrefix */ "nano_",
        /* addressSecondaryPrefix */ "xrb_",
        /* addressDefaultPrefix */ LIBN_SECONDARY_PREFIX,
        /* defaultUnit */ "NANO",
        /* defaultUnitScale */ 30, // 1 Mnano = 10^30 raw
#if defined(TARGET_BLUE)
        /* colorBackground */ 0xF9F9F9,
        /* colorForeground */ 0x000000,
        /* colorAltBackground */ 0x4A90E2,
        /* colorAltForeground */ 0xE0FFFF,
        /* colorRejectBackground */ 0xC6C6C6,
        /* colorRejectForeground */ 0x000000,
        /* colorRejectOverBackground */ 0xADADAD,
        /* colorRejectOverForeground */ 0x000000,
        /* colorConfirmBackground */ 0x4A90E2,
        /* colorConfirmForeground */ 0xE0FFFF,
        /* colorConfirmOverBackground */ 0x3177C9,
        /* colorConfirmOverForeground */ 0xFFFFFF,
        /* iconToggleOff */ &C_blue_icon_toggle_off,
        /* iconToggleOn */ &C_blue_icon_toggle_on_nano,
#endif // TARGET_BLUE
    })
    COIN(LIBN_COIN_TYPE_BANANO, {
        /* coinName */ "Banano",
#if defined(TARGET_BLUE)
        /* coinBadge */ &C_blue_badge_banano,
#else
        /* coinBadge */ &C_nanos_badge_banano,
#endif
        /* bip32Prefix */ { HARDENED(44), HARDENED(198) },
        /* addressPrimaryPrefix */ "ban_",
        /* addressSecondaryPrefix */ "ban_",
        /* addressDefaultPrefix */ LIBN_PRIMARY_PREFIX,
        /* defaultUnit */ "BANANO",
        /* defaultUnitScale */ 29, // 1 BANANO = 10^29 raw
#if defined(TARGET_BLUE)
        /* colorBackground */ 0xF9F9F9,
        /* colorForeground */ 0x000000,
        /* colorAltBackground */ 0xFBDD11,
        /* colorAltForeground */ 0xFF6058,
        /* colorRejectBackground */ 0xC6C6C6,
        /* colorRejectForeground */ 0x000000,
        /* colorRejectOverBackground */ 0xADADAD,
        /* colorRejectOverForeground */ 0x000000,
        /* colorConfirmBackground */ 0xFBDD11,
        /* colorConfirmForeground */ 0xFF6058,
        /* colorConfirmOverBackground */ 0xE2C400,
        /* colorConfirmOverForeground */ 0xE6473F,
        /* iconToggleOff */ &C_blue_icon_toggle_off,
        /* iconToggleOn */ &C_blue_icon_toggle_on_banano,
#endif // TARGET_BLUE
    })
)

#endif
