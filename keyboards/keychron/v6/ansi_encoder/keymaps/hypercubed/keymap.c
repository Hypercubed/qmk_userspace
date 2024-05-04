/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"
#include "hypercubed.h"

// clang-format off

enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN,
  GREEK,
  SYMBOLS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_109(
        KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,    KC_VOLD,      KC_VOLU,    KC_MUTE,    KC_SNAP,  KC_SIRI,  RGB_MOD,  KC_F13,   KC_F14,   KC_F15,   KC_F16,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,       KC_MINS,      KC_EQL,     KC_BSPC,    KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,       KC_LBRC,      KC_RBRC,    KC_BSLS,    KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,    KC_QUOT,                  KC_ENT,                                   KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,     KC_SLSH,                  KC_RSFT,              KC_UP,              KC_P1,    KC_P2,    KC_P3,
        // Note: The way I like my MAC function keys
        KC_LCMMD, KC_LCTL,  KC_LOPTN,                               KC_SPC,                                 MO(GREEK),  MO(SYMBOLS),  MO(MAC_FN), KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
    [MAC_FN] = LAYOUT_ansi_109(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     RGB_TOG,    _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                  _______,  _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,              _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,            _______,  _______),
    [WIN_BASE] = LAYOUT_ansi_109(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,       KC_F12,     KC_MUTE,    KC_PSCR,  KC_CRTA,  RGB_MOD,  _______,  _______,  _______,  _______,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,       KC_MINS,      KC_EQL,     KC_BSPC,    KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,       KC_LBRC,      KC_RBRC,    KC_BSLS,    KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,    KC_QUOT,                  KC_ENT,                                   KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,     KC_SLSH,                  KC_RSFT,              KC_UP,              KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 MO(GREEK),  MO(SYMBOLS),  MO(WIN_FN), QK_LEADER,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
    [WIN_FN] = LAYOUT_ansi_109(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    RGB_TOG,    _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,        _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,        _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,                    _______,                                  _______,  _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,                    _______,              _______,            _______,  _______,  _______,
        QK_BOOT,  _______,  _______,                                _______,                                _______,  _______,        _______,    _______,    _______,  _______,  _______,  _______,            _______,  _______),
    [GREEK] = LAYOUT_ansi_109(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        GR_GRV,   GR_1,     GR_2,     GR_3,     GR_4,     GR_5,     GR_6,    GR_7,      GR_8,     GR_9,     GR_0,     GR_MINS,  GR_EQL,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  GR_Q,     GR_W,     GR_E,     GR_R,     GR_T,     GR_Y,    GR_U,      GR_I,     GR_O,     GR_P,     GR_LBRC,  GR_RBRC,   GR_BSLS,    _______,  _______,  _______,  _______,  _______,    _______,
        _______,  GR_A,     GR_S,     GR_D,     GR_F,     GR_G,     GR_H,    GR_J,      GR_K,     GR_L,     GR_SCLN,  GR_QUOT,             _______,                                  _______,  _______,    _______,    _______,
        _______,            GR_Z,     GR_X,     GR_C,     GR_V,     GR_B,    GR_N,      GR_M,     GR_COMM,  GR_DOT,   GR_SLSH,             _______,              _______,            _______,  _______,    _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,   _______,    _______,  _______,  _______,  _______,            _______,  _______),
    [SYMBOLS] = LAYOUT_ansi_109(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        SYM_GRV,  SYM_1,    SYM_2,    SYM_3,    SYM_4,    SYM_5,    SYM_6,    SYM_7,    SYM_8,    SYM_9,    SYM_0,    SYM_MINS, SYM_EQL,   _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  SYM_Q,    SYM_W,    SYM_E,    SYM_R,    SYM_T,    SYM_Y,    SYM_U,    SYM_I,    SYM_O,    SYM_P,    SYM_LBRC, SYM_RBRC,  SYM_BSLS,   _______,  _______,  _______,  _______,  _______,  _______,
        _______,  SYM_A,    SYM_S,    SYM_D,    SYM_F,    SYM_G,    SYM_H,    SYM_J,    SYM_K,    SYM_L,    SYM_SCLN, SYM_QUOT,            _______,                                  _______,  _______,  _______,  _______,
        _______,            SYM_Z,    SYM_X,    SYM_C,    SYM_V,    SYM_B,    SYM_N,    SYM_M,    SYM_COMM, SYM_DOT,  SYM_SLSH,            _______,              _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,   _______,    _______,  _______,  _______,  _______,            _______,  _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][1][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [MAC_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [WIN_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [GREEK]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [SYMBOLS]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) }
};
#endif // ENCODER_MAP_ENABLE

// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_unicode(keycode, record)) {
        return false;
    }
    if (!process_record_keychron(keycode, record)) {
        return false;
    }
    return true;
}

void housekeeping_task_user(void) {
    housekeeping_task_keychron();
}

void leader_start_user(void) {
    // Do something when the leader key is pressed
}

void leader_end_user(void) {
    leader_unicode();
}

// Using the DIP switch to change the behavior of the keyboard
// Will only work for Keychron V6?
bool dip_switch_update_user(uint8_t index, bool active) {
    if (index == 0) {
        bool is_windows = false;

#    if defined(OS_SWITCH_REVERT)
        is_windows = !active;
#    else
        is_windows = active;
#    endif
        set_unicode_input_mode(is_windows ? UNICODE_MODE_WINDOWS : UNICODE_MODE_MACOS);
    }
    return true;
}

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
//   debug_enable=true;
//   debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
