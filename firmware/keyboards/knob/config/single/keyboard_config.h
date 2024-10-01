#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"

#define KEYBOARD_SIDE SINGLE
#define DEVICE_NAME_M "Knob"
#define DEVICE_MODEL "Knob v1"
#define MANUFACTURER_NAME "Andrew" 

#define KEYMAP( \
    K00, K01, K02, K03, K04 \
) { \
    { K00, K01, K02, K03, K04 } \
}

#endif /* KEYBOARD_CONFIG_H */
