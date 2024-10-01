#include "keymap.h"

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {KEYMAP( KC_A, KC_B, KC_C, KC_D, KC_E )};



void setupKeymap() {
    uint32_t encoder_pad_a = ENCODER_PAD_A;
    uint32_t encoder_pad_b = ENCODER_PAD_B;

    RotaryEncoder.begin(encoder_pad_a, encoder_pad_b);
    RotaryEncoder.setCallback(encoder_callback);
    RotaryEncoder.start();
}

void encoder_callback(int step) {
    uint8_t layer = keyboardstate.layer;

    if (step > 0) {
        switch(layer) {
            case _L0: KeyScanner::add_to_encoderKeys(KC_AUDIO_VOL_UP); break;
            case _L1: KeyScanner::add_to_encoderKeys(KC_RIGHT); break;
        }
    } else {
        switch(layer) {
            case _L0: KeyScanner::add_to_encoderKeys(KC_AUDIO_VOL_DOWN); break;
            case _L1: KeyScanner::add_to_encoderKeys(KC_LEFT); break;
        }
    }
}