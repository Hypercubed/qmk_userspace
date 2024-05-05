#include "quantum.h"
#include "ascii.h"
#include "unicode_mod.h"

uint8_t unicode_saved_mods;
led_t   unicode_saved_led_state;

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
    ascii_input_finish();
}

bool process_ascii_overrides(uint16_t keycode) {
    switch (keycode) {
        case 0xAE:
            SEND_ASCII("0174");
            return false; // ®
        case 0xBD:
            SEND_ASCII("0189");
            return false; // ½
        case 0xBE:
            SEND_ASCII("0190");
            return false; // ¾
        case 0xBF:
            SEND_ASCII("168");
            return false; // ¿
        case 0xD7:
            SEND_ASCII("0215");
            return false; // ×
        case 0xF7:
            SEND_ASCII("0247");
            return false; // ÷
        case 0x221E:
            SEND_ASCII("236");
            return false; // ∞
        case 0xE6:
            SEND_ASCII("145");
            return false; // æ
        case 0xE7: SEND_ASCII("0231"); return false; // ç

        case 0xE9:
            SEND_ASCII("0233");
            return false; // é
        case 0xFD:
            SEND_ASCII("0253");
            return false; // ý
        case 0xFA:
            SEND_ASCII("0250");
            return false; // ú
        case 0xED:
            SEND_ASCII("0237");
            return false; // í
        case 0xF3:
            SEND_ASCII("0243");
            return false; // ó
        case 0xE1:
            SEND_ASCII("0225");
            return false; // á
        case 0xEB:
            SEND_ASCII("0235");
            return false; // ë
        case 0xFF:
            SEND_ASCII("0255");
            return false; // ÿ
        case 0xFC:
            SEND_ASCII("0252");
            return false; // ü
        case 0xEF:
            SEND_ASCII("0239");
            return false; // ï
        case 0xF6:
            SEND_ASCII("0246");
            return false; // ö
        case 0xE4:
            SEND_ASCII("0228");
            return false; // ä
        case 0xE8:
            SEND_ASCII("0232");
            return false; // è
        case 0xF9:
            SEND_ASCII("0249");
            return false; // ù
        case 0xEC:
            SEND_ASCII("0236");
            return false; // ì
        case 0xF2:
            SEND_ASCII("0242");
            return false; // ò
        case 0xE0:
            SEND_ASCII("0224");
            return false; // à
        case 0xF5:
            SEND_ASCII("0245");
            return false; // õ
        case 0xF1:
            SEND_ASCII("0241");
            return false; // ñ
        case 0xE3:
            SEND_ASCII("0227");
            return false; // ã
        case 0xEA:
            SEND_ASCII("0234");
            return false; // ê
        case 0xFB:
            SEND_ASCII("0251");
            return false; // û
        case 0xEE:
            SEND_ASCII("0238");
            return false; // î
        case 0xF4:
            SEND_ASCII("0244");
            return false; // ô
        case 0xE2:
            SEND_ASCII("0226");
            return false; // â
        case 0xE5:
            SEND_ASCII("0229");
            return false; // å

        case 0xC9:
            SEND_ASCII("0201");
            return false; // É

        case 0xDA:
            SEND_ASCII("0218");
            return false; // Ú
        case 0xCD:
            SEND_ASCII("0205");
            return false; // Í
        case 0xD3:
            SEND_ASCII("0211");
            return false; // Ó
        case 0xC1:
            SEND_ASCII("0193");
            return false; // Á
        case 0xCB:
            SEND_ASCII("0203");
            return false; // Ë
        case 0x178:
            SEND_ASCII("0159");
            return false; // Ÿ
        case 0xDC:
            SEND_ASCII("0220");
            return false; // Ü
        case 0xCF:
            SEND_ASCII("0207");
            return false; // Ï
        case 0xD6:
            SEND_ASCII("0214");
            return false; // Ö
        case 0xC4:
            SEND_ASCII("0196");
            return false; // Ä
        case 0xC8:
            SEND_ASCII("0200");
            return false; // È
        case 0xD9:
            SEND_ASCII("0217");
            return false; // Ù
        case 0xCC:
            SEND_ASCII("0204");
            return false; // Ì
        case 0xD2:
            SEND_ASCII("0210");
            return false; // Ò
        case 0xC0:
            SEND_ASCII("0192");
            return false; // À
        case 0xD5:
            SEND_ASCII("0213");
            return false; // Õ
        case 0xD1:
            SEND_ASCII("0209");
            return false; // Ñ
        case 0xC3:
            SEND_ASCII("0195");
            return false; // Ã
        case 0xCA:
            SEND_ASCII("0202");
            return false; // Ê
        case 0xDB: SEND_ASCII("0219"); return false; // Û
        case 0xCE:
            SEND_ASCII("0206");
            return false; // Î
        case 0xD4:
            SEND_ASCII("0212");
            return false; // Ô
        case 0xC2:
            SEND_ASCII("0194");
            return false; // Â
        case 0xDD:
            SEND_ASCII("0221");
            return false; // Ý
    }
    return true;
}
