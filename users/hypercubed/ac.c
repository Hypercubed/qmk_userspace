#include "quantum.h"
#include "ac.h"
#include "uc.h"

uint8_t          unicode_saved_mods;
led_t            unicode_saved_led_state;

void ascii_input_start(void) {
    unicode_saved_led_state = host_keyboard_led_state();

    unicode_saved_mods = get_mods(); // Save current mods
    clear_mods();                    // Unregister mods to start from a clean state
    clear_weak_mods();

    // For increased reliability, use numpad keys for inputting digits
    if (!unicode_saved_led_state.num_lock) {
        tap_code(KC_NUM_LOCK);
    }
    register_code(KC_LEFT_ALT);
    wait_ms(UNICODE_TYPE_DELAY);
}

void ascii_input_finish(void) {
    unregister_code(KC_LEFT_ALT);
    if (!unicode_saved_led_state.num_lock) {
        tap_code(KC_NUM_LOCK);
    }
    set_mods(unicode_saved_mods); // Reregister previously set mods
}

void register_asciimap(const char* str) {
    ascii_input_start();
    int i = 0;
    while (i < 4) {
        char ch = str[i++];
        if (!ch || (ch < '0') || (ch > '9')) break;
        uint16_t code = KC_KP_0;
        if (ch >= '1') code = ch - '1' + KC_KP_1;
        tap_code(code);
    }
    // for (int i = 0; i < strlen(str); ++i) {
    //     char ch = str[i];
    //     uint16_t code = KC_KP_0;
    //     if (ch >= '1') code = ch - '1' + KC_KP_1;
    //     tap_code(code);
    // }
    ascii_input_finish();
}

bool process_ascii_overrides(uint16_t keycode) {
    switch (keycode) {
        case UC_REG:
            SEND_ASCII(ASCII_REG);
            return false;
        case UC_DIV:
            SEND_ASCII(ASCII_DIV);
            return false;
        case UC_MUL:
            SEND_ASCII(ASCII_MUL);
            return false;
        case UC_HALF:
            SEND_ASCII(ASCII_HALF);
            return false;
        case UC_TQTR:
            SEND_ASCII(ASCII_TQTR);
            return false;
        case UC_INIFIN:
            SEND_ASCII(ASCII_INIFIN);
            return false;
        case UC_IQST:
            SEND_ASCII(ASCII_IQST);
            return false;
        case UC_L_AELIG:
            SEND_ASCII(ASCII_L_AELIG);
            return false;
    }
    return true;
}
