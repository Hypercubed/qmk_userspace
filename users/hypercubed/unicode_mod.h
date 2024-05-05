#pragma once

#include "quantum.h"

enum unicode_keycodes {
    COMPOSE = QK_KB_11,

    // GREEK 1234 ROW
    GR_GRV,
    GR_1,
    GR_2,
    GR_3,
    GR_4,
    GR_5,
    GR_6,
    GR_7,
    GR_8,
    GR_9,
    GR_0,
    GR_MINS,
    GR_EQL,

    // GREEK QWER ROW
    GR_Q,
    GR_W,
    GR_E,
    GR_R,
    GR_T,
    GR_Y,
    GR_U,
    GR_I,
    GR_O,
    GR_P,
    GR_LBRC,
    GR_RBRC,
    GR_BSLS,

    // GREEK ASDF ROW
    GR_A,
    GR_S,
    GR_D,
    GR_F,
    GR_G,
    GR_H,
    GR_J,
    GR_K,
    GR_L,
    GR_SCLN,
    GR_QUOT,

    // GREEK ZXC ROW
    GR_Z,
    GR_X,
    GR_C,
    GR_V,
    GR_B,
    GR_N,
    GR_M,
    GR_COMM,
    GR_DOT,
    GR_SLSH,

    // SYMBOLS 1234 ROW
    SYM_GRV,
    SYM_1,
    SYM_2,
    SYM_3,
    SYM_4,
    SYM_5,
    SYM_6,
    SYM_7,
    SYM_8,
    SYM_9,
    SYM_0,
    SYM_MINS,
    SYM_EQL,

    // SYMBOLS QWERTY ROW
    SYM_Q,
    SYM_W,
    SYM_E,
    SYM_R,
    SYM_T,
    SYM_Y,
    SYM_U,
    SYM_I,
    SYM_O,
    SYM_P,
    SYM_LBRC,
    SYM_RBRC,
    SYM_BSLS,
    SYM_P7,
    SYM_P8,
    SYM_P9,

    // SYMBOLS ASDF ROW
    SYM_A,
    SYM_S,
    SYM_D,
    SYM_F,
    SYM_G,
    SYM_H,
    SYM_J,
    SYM_K,
    SYM_L,
    SYM_SCLN,
    SYM_QUOT,
    SYM_P4,
    SYM_P5,
    SYM_P6,

    // SYMBOLS ZXC ROW
    SYM_Z,
    SYM_X,
    SYM_C,
    SYM_V,
    SYM_B,
    SYM_N,
    SYM_M,
    SYM_COMM,
    SYM_DOT,
    SYM_SLSH,
    SYM_UP,
    SYM_P1,
    SYM_P2,
    SYM_P3
};

#define REGISTER(X) _register_code(X)
#define PAIR(X, Y) get_code(X, Y)

#define PROCESS(X) if (record->event.pressed) { return _register_code(X); } return false;

bool register_code_pair(uint32_t x, uint32_t y);
bool process_code_pair(uint32_t x, uint32_t y, keyrecord_t *record);
bool _register_code(uint32_t code);
uint32_t get_code(uint32_t x, uint32_t y);

bool process_greek(uint16_t keycode, keyrecord_t *record);
bool process_symbol(uint16_t keycode, keyrecord_t *record);
bool process_record_unicode(uint16_t keycode, keyrecord_t *record);

