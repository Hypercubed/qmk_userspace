#include "hypercubed.h"
#include "send_string_keycodes.h"
#include "print.h"

void leader_unicode(void) {
    if (leader_sequence_two_keys(KC_1, KC_2)) {
        register_unicode(UC_HALF);
    } else if (leader_sequence_two_keys(KC_3, KC_4)) {
        register_unicode(UC_QRTR);
    } else if (leader_sequence_two_keys(KC_SLSH, KC_0)) {
        register_unicode(UC_EMPTY);
    } else if (leader_sequence_two_keys(KC_BSLS, KC_SLSH)) { // \/
        register_unicode(UC_OR);
    } else if (leader_sequence_two_keys(KC_SLSH, KC_BSLS)) {
        register_unicode(UC_AND);
    } else if (leader_sequence_two_keys(KC_EQL, KC_MINS)) {
        register_unicode(UC_PLSMINS);
    } else if (leader_sequence_two_keys(KC_MINS, KC_EQL)) {
        register_unicode(UC_MINSPLS);
    } else if (leader_sequence_two_keys(KC_GRV, KC_A)) {
        register_unicode(UC_L_ALPHA);
    } else if (leader_sequence_three_keys(KC_GRV, KC_LSFT, KC_A)) {
        register_unicode(UC_ANG);
    } else if (leader_sequence_two_keys(KC_BSLS, KC_R)) {
        register_unicode(UC_RSET);
    } else if (leader_sequence_two_keys(KC_6, KC_1)) {
        register_unicode(UC_SUP1);
    } else if (leader_sequence_two_keys(KC_6, KC_2)) {
        register_unicode(UC_SUP2);
    } else if (leader_sequence_two_keys(KC_6, KC_3)) {
        register_unicode(UC_SUP3);
    } else if (leader_sequence_three_keys(KC_SLSH, KC_SLSH, KC_SLSH)) {
        register_unicode(UC_ELLIPSES);
    }
}
