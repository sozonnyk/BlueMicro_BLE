#include <stdint.h>
#include "hid_keycodes.h"
#include "keyboard_config.h"
#include "advanced_keycodes.h"
#include "Key.h"
#include <array>


#include <stdint.h>
#include "KeyScanner.h"
#include "firmware_config.h" 
#include "RotaryEncoder.h"


#ifndef KEYMAP_H
#define KEYMAP_H

extern DynamicState keyboardstate;

#define _L0 0
#define _L1 1

extern std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix;


void setupKeymap();
void encoder_callback(int step);

#endif /* KEYMAP_H */