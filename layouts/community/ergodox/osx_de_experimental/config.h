#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include QMK_KEYBOARD_CONFIG_H
#undef TAPPING_TERM
#undef ONESHOT_TIMEOUT
#undef LEADER_TIMEOUT
#define TAPPING_TERM 120
#define ONESHOT_TIMEOUT 200
#define LEADER_TIMEOUT 200 // leader key sequence timeout in millis
//#define  AUTO_SHIFT_TIMEOUT 135
#endif
