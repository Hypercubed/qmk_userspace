#include "quantum.h"
#include "send_string_keycodes.h"
#include "print.h"
#include "unicode_mod.h"
#include "ascii.h"

uint32_t get_code(uint32_t x, uint32_t y) {
    uint8_t mods = get_mods() | get_weak_mods();
#ifndef NO_ACTION_ONESHOT
    mods |= get_oneshot_mods();
#endif
    bool shift = mods & MOD_MASK_SHIFT;
    bool caps  = host_keyboard_led_state().caps_lock;
    return (shift ^ caps) ? y : x;
}

bool _register_code(uint32_t code) {
#ifdef CONSOLE_ENABLE
    printf("Code point (decimal): %ld\n", code);
    printf("Code point (hexadecimal): 0x%lX\n", code);
#endif

    if (get_unicode_input_mode() == UNICODE_MODE_WINDOWS) {
        if (!process_ascii_overrides(code)) {
            return false;
        }
    }
    register_unicode(code);
    return false;
}

bool register_code_pair(uint32_t x, uint32_t y) {
    uint32_t code = get_code(x, y);
    return _register_code(code);
}

bool process_code_pair(uint32_t x, uint32_t y, keyrecord_t *record) {
    if (record->event.pressed) {
        return register_code_pair(x, y);
    }
    return false;
}

bool process_greek(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GR_GRV:
            PROCESS(0xA7); // §,
        case GR_1:
            PROCESS(PAIR(0x2020, 0x2160)); // †,Ⅰ
        case GR_2:
            PROCESS(PAIR(0x2021, 0x2161)); // ‡,Ⅱ
        case GR_3:
            PROCESS(PAIR(0x2207, 0x2162)); // ∇,Ⅲ
        case GR_4:
            PROCESS(PAIR(0xA2, 0x2163)); // ¢,Ⅳ
        case GR_5:
            PROCESS(0xB0); // °,
        case GR_6:
            PROCESS(0x25A1); // □,
        case GR_7:
            PROCESS(0xF7); // ÷,
        case GR_8:
            PROCESS(0xD7); // ×,
        case GR_9:
            PROCESS(0xB6); // ¶,
        case GR_0:
            PROCESS(PAIR(0x25CB, 0x25EF)); // ○,◯
        case GR_MINS:
            PROCESS(PAIR(0x2014, 0x203E)); // —,‾
        case GR_EQL:
            PROCESS(0x2248); // ≈,

        case GR_Q:
            PROCESS(PAIR(0xE6, 0xC6)); // æ,Æ
        case GR_W:
            PROCESS(PAIR(0x3C2, 0xC7)); // ς,Ç
        case GR_E:
            PROCESS(PAIR(0x3B5, 0x395)); // ε,Ε
        case GR_R:
            PROCESS(PAIR(0x3C1, 0x3A1)); // ρ,Ρ
        case GR_T:
            PROCESS(PAIR(0x3C4, 0x54)); // τ,T
        case GR_Y:
            PROCESS(PAIR(0x3C5, 0x3A5)); // υ,Υ
        case GR_U:
            PROCESS(PAIR(0x3B8, 0x398)); // θ,Θ
        case GR_I:
            PROCESS(PAIR(0x3B9, 0x399)); // ι,Ι
        case GR_O:
            PROCESS(PAIR(0x3BF, 0x39F)); // ο,Ο
        case GR_P:
            PROCESS(PAIR(0x3C0, 0x3A0)); // π,Π
        case GR_LBRC:
            PROCESS(0x301A); // 〚,
        case GR_RBRC:
            PROCESS(0x301B); // 〛,
        case GR_BSLS:
            PROCESS(PAIR(0xAC, 0x2310)); // ¬,⌐

        case GR_A:
            PROCESS(PAIR(0x3B1, 0x41)); // α,A
        case GR_S:
            PROCESS(PAIR(0x3C3, 0x3A3)); // σ,Σ
        case GR_D:
            PROCESS(PAIR(0x3B4, 0x394)); // δ,Δ
        case GR_F:
            PROCESS(PAIR(0x3C6, 0x3A6)); // φ,Φ
        case GR_G:
            PROCESS(PAIR(0x3B3, 0x393)); // γ,Γ
        case GR_H:
            PROCESS(PAIR(0x3B7, 0x397)); // η,Η
        case GR_J:
            PROCESS(PAIR(0x3BE, 0x39E)); // ξ,Ξ
        case GR_K:
            PROCESS(PAIR(0x3BA, 0x39A)); // κ,Κ
        case GR_L:
            PROCESS(PAIR(0x3BB, 0x39B)); // λ,Λ
        case GR_SCLN:
            PROCESS(PAIR(0x2025, 0x2026)); // ‥,…
        case GR_QUOT:
            PROCESS(PAIR(0x2022, 0x25CB)); // •,○

        case GR_Z:
            PROCESS(PAIR(0x3B6, 0x396)); // ζ,Ζ
        case GR_X:
            PROCESS(PAIR(0x3C7, 0x3A7)); // χ,Χ
        case GR_C:
            PROCESS(PAIR(0x3C8, 0x3A8)); // ψ,Ψ
        case GR_V:
            PROCESS(PAIR(0x3C9, 0x3A9)); // ω,Ω
        case GR_B:
            PROCESS(PAIR(0x3B2, 0x42)); // β,B
        case GR_N:
            PROCESS(PAIR(0x3BD, 0x39D)); // ν,Ν
        case GR_M:
            PROCESS(PAIR(0x3BC, 0x39C)); // μ,Μ
        case GR_COMM:
            PROCESS(0xAB); // «,
        case GR_DOT:
            PROCESS(0xBB); // »,
        case GR_SLSH:
            PROCESS(PAIR(0x222B, 0x221A)); // ∫,√
        default:
            return true; // Process all other keycodes normally
    }
}

bool process_symbol(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SYM_1:
            PROCESS(PAIR(0xA1, 0xB9)); // ¡,¹
        case SYM_2:
            PROCESS(0xB2); // ²,
        case SYM_3:
            PROCESS(PAIR(0xB3, 0xA3)); // ³,£
        case SYM_4:
            PROCESS(0xA4); // ¤,
        case SYM_5:
            PROCESS(0x20AC); // €,
        case SYM_6:
            PROCESS(0xBC); // ¼,
        case SYM_7:
            PROCESS(0xBD); // ½,
        case SYM_8:
            PROCESS(PAIR(0xBE, 0x221E)); // ¾,∞
        case SYM_9:
            PROCESS(0x221D); // ,∝
        case SYM_0:
            PROCESS(0x2205); // ∅,
        case SYM_MINS:
            PROCESS(0xA5); // ¥,
        case SYM_EQL:
            PROCESS(PAIR(0xB1, 0x2213)); // ±,∓

        case SYM_Q:
            PROCESS(0x2227); // ∧,
        case SYM_W:
            PROCESS(0x2228); // ∨,
        case SYM_E:
            PROCESS(0x2229); // ∩,
        case SYM_R:
            PROCESS(PAIR(0x222A, 0xAE)); // ∪,®
        case SYM_T:
            PROCESS(PAIR(0x2282, 0x2286)); // ⊂,⊆
        case SYM_Y:
            PROCESS(PAIR(0x2283, 0x2287)); // ⊃,⊇
        case SYM_U:
            PROCESS(0x2200); // ∀,
        case SYM_I:
            PROCESS(0x221E); // ∞,
        case SYM_O:
            PROCESS(PAIR(0x2203, 0x2204)); // ∃,∄
        case SYM_P:
            PROCESS(PAIR(0x2202, 0x2117)); // ∂,℗

        case SYM_BSLS:
            PROCESS(PAIR(0x2016, 0x2980)); // ‖,⦀

        case SYM_P7:
            PROCESS(PAIR(0x2077, 0x2166)); // ⁷,Ⅶ
        case SYM_P8:
            PROCESS(PAIR(0x2078, 0x2167)); // ⁸,Ⅷ
        case SYM_P9:
            PROCESS(PAIR(0x2079, 0x2168)); // ⁹,Ⅸ

        case SYM_A:
            PROCESS(PAIR(0x22A5, 0x212B)); // ⊥,Å
        case SYM_S:
            PROCESS(0x22A4); // ⊤,
        case SYM_D:
            PROCESS(0x22A2); // ⊢,
        case SYM_F:
            PROCESS(PAIR(0x22A3, 0x192)); // ⊣,ƒ
        case SYM_G:
            PROCESS(0x2191); // ↑,
        case SYM_H:
            PROCESS(PAIR(0x2193, 0x210F)); // ↓,ℏ
        case SYM_J:
            PROCESS(0x2190); // ←,
        case SYM_K:
            PROCESS(0x2192); // →,
        case SYM_L:
            PROCESS(PAIR(0x2194, 0x21D4)); // ↔,⇔
        case SYM_SCLN:
            PROCESS(0x2234); // ∴,

        case SYM_P4:
            PROCESS(PAIR(0x2074, 0x2163)); // ⁴,Ⅳ
        case SYM_P5:
            PROCESS(PAIR(0x2075, 0x2164)); // ⁵,Ⅴ
        case SYM_P6:
            PROCESS(PAIR(0x2076, 0x2165)); // ⁶,Ⅵ

        case SYM_Z:
            PROCESS(PAIR(0x230A, 0x230B)); // ⌊,⌋
        case SYM_X:
            PROCESS(PAIR(0x2308, 0x2309)); // ⌈,⌉
        case SYM_C:
            PROCESS(PAIR(0x2260, 0xA9)); // ≠,©
        case SYM_V:
            PROCESS(PAIR(0x2243, 0x2248)); // ≃,≈
        case SYM_B:
            PROCESS(0x2261); // ≡,

        case SYM_COMM:
            PROCESS(PAIR(0x2264, 0x2272)); // ≤,≲
        case SYM_DOT:
            PROCESS(PAIR(0x2265, 0x2273)); // ≥,≳
        case SYM_SLSH:
            PROCESS(PAIR(0xBF, 0x203D)); // ¿,‽

        case SYM_UP:
            PROCESS(PAIR(0x2191, 0x21D1)); // ↑,⇑
        case SYM_P1:
            PROCESS(PAIR(0xB9, 0x2160)); // ¹,Ⅰ
        case SYM_P2:
            PROCESS(PAIR(0xB2, 0x2161)); // ²,Ⅱ
        case SYM_P3:
            PROCESS(PAIR(0xB3, 0x2162)); // ³,Ⅲ
        default:
            return true; // Process all other keycodes normally
    }
}

bool process_record_unicode(uint16_t keycode, keyrecord_t *record) {
    if (!process_greek(keycode, record)) return false;
    if (!process_symbol(keycode, record)) return false;
    return true; // Process all other keycodes normally
}
