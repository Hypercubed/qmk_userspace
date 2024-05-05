#pragma once

#define MATCH(X, Y) (k1 == X && k2 == Y)
#define COMPOSE(C, K) if (C) { tap_code(KC_BSPC); tap_code(KC_BSPC); return REGISTER(K); }

bool process_record_compose(uint16_t keycode, keyrecord_t *record);
