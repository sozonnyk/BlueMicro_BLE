#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H
#include "hardware_variants.h"

/* HARDWARE DEFINITION*/

#define MATRIX_ROWS 1
#define MATRIX_COLS 5

#define MATRIX_ROW_PINS { -1 }

#define MATRIX_COL_PINS {  8, 17, 47, 2, 29 }  // Replace with your actual GPIO pins

#define ENCODER_PAD_A 20  // Replace with your actual encoder GPIO pin
#define ENCODER_PAD_B 22  // Replace with your actual encoder GPIO pin

#define DIODE_DIRECTION COL2ROW

//#define BATTERY_TYPE BATT_LIPO
//#define VBAT_PIN  31
    
#endif /* HARDWARE_CONFIG_H */