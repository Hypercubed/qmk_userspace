#include "quantum.h"
#include "compose.h"
#include "print.h"
#include "unicode_mod.h"

uint16_t k1 = 0;
uint16_t k2 = 0;

bool process_record_compose(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case COMPOSE:
            if (record->event.pressed) {
#ifdef CONSOLE_ENABLE
                printf("k1: %d\n", k1);
                printf("k2: %d\n", k2);
                printf("KC_A: %d\n", KC_A);
                printf("KC_E: %d\n", KC_E);
#endif

                COMPOSE(MATCH(KC_A, KC_E), PAIR(0xE6, 0xC6));     // ae -> æ,Æ)
                COMPOSE(MATCH(KC_O, KC_C), 0xA9);                 // oc -> ©,)
                COMPOSE(MATCH(KC_O, KC_R), 0xAE);                 // or -> ®,)
                COMPOSE(MATCH(KC_T, KC_M), 0x2122);               // tm -> ™,)
                COMPOSE(MATCH(KC_COMMA, KC_COMMA), 0xAB);         // << -> «,)
                COMPOSE(MATCH(KC_DOT, KC_DOT), 0xBB);             // >> -> »,)
                COMPOSE(MATCH(KC_BACKSLASH, KC_SLASH), 0x2228);   // \/ -> ∨,)
                COMPOSE(MATCH(KC_SLASH, KC_BACKSLASH), 0x2227);   // /\ -> ∧,)
                COMPOSE(MATCH(KC_1, KC_2), 0xBD);                 // 12 -> ½,)
                COMPOSE(MATCH(KC_1, KC_4), 0xBC);                 // 14 -> ¼,)
                COMPOSE(MATCH(KC_3, KC_4), 0xBE);                 // 34 -> ¾,)
                COMPOSE(MATCH(KC_6, KC_O), 0xB0);                 // ^o -> °,)
                COMPOSE(MATCH(KC_MINUS, KC_SEMICOLON), 0xF7);     // -: -> ÷,)
                COMPOSE(MATCH(KC_H, KC_MINUS), 0x210F);           // h- -> ℏ,)
                COMPOSE(MATCH(KC_1, KC_SLASH), 0x203D);           // !? -> ‽,)
                COMPOSE(MATCH(KC_O, KC_O), 0x221E);               // oo -> ∞,)
                COMPOSE(MATCH(KC_SLASH, KC_SLASH), 0xBF);         // ?? -> ¿,)
                COMPOSE(MATCH(KC_3, KC_B), 0x266D);               // #b -> ♭,)
                COMPOSE(MATCH(KC_SEMICOLON, KC_0), 0x263A);       // :) -> ☺,)
                COMPOSE(MATCH(KC_COMMA, KC_C), PAIR(0xE7, 0xC7)); // ,c -> ç,Ç)
                COMPOSE(MATCH(KC_8, KC_8), 0xD7);                 // ** -> ×,)
                COMPOSE(MATCH(KC_1, KC_1), 0xA1);                 // !! -> ¡,)
                COMPOSE(MATCH(KC_EQUAL, KC_MINUS), 0xB1);         // +- -> ±,)
                COMPOSE(MATCH(KC_MINUS, KC_EQUAL), 0x2213);       // -+ -> ∓,)
                COMPOSE(MATCH(KC_O, KC_E), PAIR(0x153, 0x152));   // oe -> œ,Œ)
                COMPOSE(MATCH(KC_O, KC_X), 0xA4);                 // ox -> ¤,)
                COMPOSE(MATCH(KC_6, KC_1), 0xB9);                 // ^1 -> ¹,)
                COMPOSE(MATCH(KC_6, KC_2), 0xB2);                 // ^2 -> ²,)
                COMPOSE(MATCH(KC_6, KC_3), 0xB3);                 // ^3 -> ³,)
                COMPOSE(MATCH(KC_MINUS, KC_0), 0x2080);           // _0 -> ₀,)
                COMPOSE(MATCH(KC_MINUS, KC_1), 0x2081);           // _1 -> ₁,)
                COMPOSE(MATCH(KC_MINUS, KC_2), 0x2082);           // _2 -> ₂,)
                COMPOSE(MATCH(KC_MINUS, KC_3), 0x2083);           // _3 -> ₃,)

                COMPOSE(MATCH(KC_QUOT, KC_E), PAIR(0xE9, 0xC9));       // 'e -> é,É)
                COMPOSE(MATCH(KC_QUOT, KC_Y), PAIR(0xFD, 0x1EF2));     // 'y -> ý,Ỳ)
                COMPOSE(MATCH(KC_QUOT, KC_U), PAIR(0xFA, 0xDA));       // 'u -> ú,Ú)
                COMPOSE(MATCH(KC_QUOT, KC_I), PAIR(0xED, 0xCD));       // 'i -> í,Í)
                COMPOSE(MATCH(KC_QUOT, KC_O), PAIR(0xF3, 0xD3));       // 'o -> ó,Ó)
                COMPOSE(MATCH(KC_QUOT, KC_A), PAIR(0xE1, 0xC1));       // 'a -> á,Á)
                COMPOSE(MATCH(KC_SEMICOLON, KC_E), PAIR(0xEB, 0xCB));  // :e -> ë,Ë)
                COMPOSE(MATCH(KC_SEMICOLON, KC_Y), PAIR(0xFF, 0x178)); // :y -> ÿ,Ÿ)
                COMPOSE(MATCH(KC_SEMICOLON, KC_U), PAIR(0xFC, 0xDC));  // :u -> ü,Ü)
                COMPOSE(MATCH(KC_SEMICOLON, KC_I), PAIR(0xEF, 0xCF));  // :i -> ï,Ï)
                COMPOSE(MATCH(KC_SEMICOLON, KC_O), PAIR(0xF6, 0xD6));  // :o -> ö,Ö)
                COMPOSE(MATCH(KC_SEMICOLON, KC_A), PAIR(0xE4, 0xC4));  // :a -> ä,Ä)
                COMPOSE(MATCH(KC_GRAVE, KC_E), PAIR(0xE8, 0xC8));      // `e -> è,È)
                COMPOSE(MATCH(KC_GRAVE, KC_U), PAIR(0xF9, 0xD9));      // `u -> ù,Ù)
                COMPOSE(MATCH(KC_GRAVE, KC_I), PAIR(0xEC, 0xCC));      // `i -> ì,Ì)
                COMPOSE(MATCH(KC_GRAVE, KC_O), PAIR(0xF2, 0xD2));      // `o -> ò,Ò)
                COMPOSE(MATCH(KC_GRAVE, KC_A), PAIR(0xE0, 0xC0));      // `a -> à,À)
                COMPOSE(MATCH(KC_GRAVE, KC_O), PAIR(0xF5, 0xD5));      // ~o -> õ,Õ)
                COMPOSE(MATCH(KC_GRAVE, KC_N), PAIR(0xF1, 0xD1));      // ~n -> ñ,Ñ)
                COMPOSE(MATCH(KC_GRAVE, KC_A), PAIR(0xE3, 0xC3));      // ~a -> ã,Ã)
                COMPOSE(MATCH(KC_6, KC_E), PAIR(0xEA, 0xCA));          // ^e -> ê,Ê)
                COMPOSE(MATCH(KC_6, KC_U), PAIR(0xFB, 0xDB));          // ^u -> û,Û)
                COMPOSE(MATCH(KC_6, KC_I), PAIR(0xEE, 0xCE));          // ^i -> î,Î)
                COMPOSE(MATCH(KC_6, KC_O), PAIR(0xF4, 0xD4));          // ^o -> ô,Ô)
                COMPOSE(MATCH(KC_6, KC_A), PAIR(0xE2, 0xC2));          // ^a -> â,Â)
                COMPOSE(MATCH(KC_O, KC_A), PAIR(0xE5, 0x212B));        // oa -> å,Å)
            }
            return false;
    }

    if (!record->event.pressed) {
        // TODO: restrict to basic keys
        // handle shift

        k1 = k2;
        k2 = keycode;
#ifdef CONSOLE_ENABLE
        printf("k1: %d\n", k1);
        printf("k2: %d\n", k2);
#endif
    }

    return true;
}
