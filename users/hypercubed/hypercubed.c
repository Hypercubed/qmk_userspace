#include "hypercubed.h"
#include "keymap_us_international.h"

const uint32_t PROGMEM unicode_map[] = {
    // GREEK 1234 ROW
    [U_GR_SECTION] = L'§',
    [U_GR_DAGG]    = L'†',
    [U_GR_DDAG]    = L'‡',
    [U_GR_NABLA]   = L'∇',
    [U_GR_CENT]    = L'¢',
    [U_GR_DEGREE]  = L'°',
    [U_GR_SQUARE]  = L'□',
    [U_GR_DIV]     = L'÷',
    [U_GR_MUL]     = L'×',
    [U_GR_PARA]    = L'¶',
    [U_GR_WDOT]    = L'○',
    [U_GR_LWDOT]   = L'◯',
    [U_GR_EMDASH]  = L'—',
    [U_GR_AEQL]    = L'≈',

    // GREEK QWER ROW
    [U_GR_L_THETA]   = L'θ',
    [U_GR_U_THETA]   = L'Θ',
    [U_GR_L_OMEGA]   = L'ω',
    [U_GR_U_OMEGA]   = L'Ω',
    [U_GR_L_EPSILON] = L'ε',
    [U_GR_U_EPSILON] = L'Ε',
    [U_GR_L_RHO]     = L'ρ',
    [U_GR_U_RHO]     = L'Ρ',
    [U_GR_L_TAU]     = L'τ',
    [U_GR_U_TAU]     = L'T',
    [U_GR_L_PSI]     = L'ψ',
    [U_GR_U_PSI]     = L'Ψ',
    [U_GR_L_UPSILON] = L'υ',
    [U_GR_U_UPSILON] = L'Υ',
    [U_GR_L_IOTA]    = L'ι',
    [U_GR_U_IOTA]    = L'Ι',
    [U_GR_L_OMICRON] = L'ο',
    [U_GR_U_OMICRON] = L'Ο',
    [U_GR_L_PI]      = L'π',
    [U_GR_U_PI]      = L'Π',
    [U_GR_LWSQBKT]   = L'⟦',
    [U_GR_RWSQBKT]   = L'⟧',
    [U_GR_NOT]       = L'¬',
    [U_GR_RNOT]      = L'⌐',

    // GREEK ASDF ROW
    [U_GR_L_ALPHA]  = L'α',
    [U_GR_U_ALPHA]  = L'A',
    [U_GR_L_SIGMA]  = L'σ',
    [U_GR_U_SIGMA]  = L'Σ',
    [U_GR_L_DELTA]  = L'δ',
    [U_GR_U_DELTA]  = L'Δ',
    [U_GR_L_PHI]    = L'φ',
    [U_GR_U_PHI]    = L'Φ',
    [U_GR_L_GAMMA]  = L'γ',
    [U_GR_U_GAMMA]  = L'Γ',
    [U_GR_L_ETA]    = L'η',
    [U_GR_U_ETA]    = L'Η',
    [U_GR_L_XI]     = L'ξ',
    [U_GR_U_XI]     = L'Ξ',
    [U_GR_L_KAPPA]  = L'κ',
    [U_GR_U_KAPPA]  = L'Κ',
    [U_GR_L_LAMBDA] = L'λ',
    [U_GR_U_LAMBDA] = L'Λ',
    [U_GR_TDOT]     = L'‥',
    [U_GR_ELLIPSES] = L'…',
    [U_GR_BULT]     = L'•',
    [U_GR_WCIRCLE]  = L'○',

    // GREEK ZXCV ROW
    [U_GR_L_ZETA]  = L'ζ',
    [U_GR_U_ZETA]  = L'Ζ',
    [U_GR_L_CHI]   = L'χ',
    [U_GR_U_CHI]   = L'Χ',
    [U_GR_L_XI]    = L'ξ',
    [U_GR_U_XI]    = L'Ξ',
    [U_GR_L_BETA]  = L'β',
    [U_GR_U_BETA]  = L'B',
    [U_GR_L_NU]    = L'ν',
    [U_GR_U_NU]    = L'Ν',
    [U_GR_L_MU]    = L'μ',
    [U_GR_U_MU]    = L'Μ',
    [U_GR_LDQUOTE] = L'«',
    [U_GR_RDQUOTE] = L'»',
    [U_GR_INT]     = L'∫',
    [U_GR_ROOT]    = L'√',

    // SYMBOLS 1234 ROW
    [U_SYM_SUP1]    = L'¹',
    [U_SYM_IEXL]    = L'¡',
    [U_SYM_SUP2]    = L'²',
    [U_SYM_SUP3]    = L'³',
    [U_SYM_PND]     = L'£',
    [U_SYM_HALF]    = L'½',
    [U_SYM_YEN]     = L'¥',
    [U_SYM_TQTR]    = L'¾',
    [U_SYM_EURO]    = L'€',
    [U_SYM_DEGREE]  = L'°',
    [U_SYM_EMPTY]   = L'∅',
    [U_SYM_PLSMINS] = L'±',
    [U_SYM_MINSPLS] = L'∓',

    // SYMBOLS QWER ROW
    [U_SYM_AND]          = L'∧',
    [U_SYM_QSET]         = L'ℚ',
    [U_SYM_OR]           = L'∨',
    [U_SYM_INTERSECT]    = L'∩',
    [U_SYM_MUNION]       = L'∪',
    [U_SYM_RSET]         = L'ℝ',
    [U_SYM_SUBSET]       = L'⊂',
    [U_SYM_SUBSETOREQ]   = L'⊆',
    [U_SYM_SUPERSET]     = L'⊃',
    [U_SYM_SUPERSETOREQ] = L'⊇',
    [U_SYM_FORALL]       = L'∀',
    [U_SYM_INIFIN]       = L'∞',
    [U_SYM_EXISTS]       = L'∃',
    [U_SYM_NEXISTS]      = L'∄',
    [U_SYM_PDIF]         = L'∂',
    [U_SYM_ELEOF]        = L'∈',
    [U_SYM_NELEOF]       = L'∉',
    [U_SYM_DVLINE]       = L'‖',
    [U_SYM_TVLINE]       = L'⦀',

    // SYMBOLS ASDF ROW
    [U_SYM_UP_TACK]   = L'⟘',
    [U_SYM_ANG]       = L'Å',
    [U_SYM_DOWN_TACK] = L'⊤',
    [U_SYM_RT_TACK]   = L'⊢',
    [U_SYM_NABLA]     = L'∇',
    [U_SYM_LT_TACK]   = L'⊣',
    [U_SYM_FLAT]      = L'♭',
    [U_SYM_UARR]      = L'↑',
    [U_SYM_UPPER]     = L'⇑',
    [U_SYM_DARR]      = L'↓',
    [U_SYM_LOWER]     = L'⇓',
    [U_SYM_FROM]      = L'←',
    [U_SYM_IMPL_REV]  = L'⇐',
    [U_SYM_TO]        = L'→',
    [U_SYM_IMPLY]     = L'⇒',
    [U_SYM_TO_FROM]   = L'↔',
    [U_SYM_BICOND]    = L'⇔',
    [U_SYM_THEREFORE] = L'∴',

    // SYMBOLS ZXCV ROW
    [U_SYM_LT_FLOOR]  = L'⌊',
    [U_SYM_ZSET]      = L'ℤ',
    [U_SYM_LT_CIEL]   = L'⌈',
    [U_SYM_NEQ]       = L'≠',
    [U_SYM_CSET]      = L'ℂ',
    [U_SYM_AEQL]      = L'≃',
    [U_SYM_ALEQL]     = L'≈',
    [U_SYM_EQUIV]     = L'≡',
    [U_SYM_LTEQ]      = L'≤',
    [U_SYM_NSET]      = L'ℕ',
    [U_SYM_GTEQ]      = L'≥',
    [U_SYM_SQ_LS]     = L'⊏',
    [U_SYM_SQ_RS]     = L'⊐',
    [U_SYM_IQST]      = L'¿',
    [U_SYM_INTROBANG] = L'‽'};

#define MODS_SHIFT_MASK (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT))

uint8_t get_index(uint16_t x, uint16_t y) {
    uint8_t mods = get_mods() | get_weak_mods();
#ifndef NO_ACTION_ONESHOT
    mods |= get_oneshot_mods();
#endif
    bool shift = mods & MOD_MASK_SHIFT;
    bool caps  = host_keyboard_led_state().caps_lock;
    return (shift ^ caps) ? y : x;
}

void send_unicode_up(uint16_t keycode) {
    bool is_windows_HexNumpad = get_unicode_input_mode() == UNICODE_MODE_WINDOWS;

    if (is_windows_HexNumpad) {
        switch (keycode) {
            case U_GR_DIV:
                SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P0) SS_TAP(X_P2) SS_TAP(X_P4) SS_TAP(X_P7) SS_UP(X_LALT));
                return;
            case U_GR_MUL:
                SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P0) SS_TAP(X_P2) SS_TAP(X_P1) SS_TAP(X_P5) SS_UP(X_LALT));
                return;
            case U_SYM_HALF:
                SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P0) SS_TAP(X_P1) SS_TAP(X_P8) SS_TAP(X_P9) SS_UP(X_LALT));
                return;
            case U_SYM_TQTR:
                SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P0) SS_TAP(X_P1) SS_TAP(X_P9) SS_TAP(X_P0) SS_UP(X_LALT));
                return;
            case U_SYM_INIFIN:
                SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P2) SS_TAP(X_P3) SS_TAP(X_P6) SS_UP(X_LALT));
                return;
            case UC_IQST:
                SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_P1) SS_TAP(X_P6) SS_TAP(X_P8) SS_UP(X_LALT));
                return;
        }
    }
    register_unicodemap(keycode);
}

inline bool send(uint16_t x, uint16_t y, keyrecord_t *record) {
    if (record->event.pressed) {
        SEND_UNICODE_UP(x, y);
    }
    return false;
}

bool process_greek(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
            // GREEK 1234 ROW
        case GR_GRV:
            return SEND(U_GR_SECTION, U_GR_SECTION);
        case GR_1:
            return SEND(U_GR_DAGG, U_GR_DAGG);
        case GR_2:
            return SEND(U_GR_DDAG, U_GR_DDAG);
        case GR_3:
            return SEND(U_GR_NABLA, U_GR_NABLA);
        case GR_4:
            return SEND(U_GR_CENT, U_GR_CENT);
        case GR_5:
            return SEND(U_GR_DEGREE, U_GR_DEGREE);
        case GR_6:
            return SEND(U_GR_SQUARE, U_GR_SQUARE);
        case GR_7:
            return SEND(U_GR_DIV, U_GR_DIV);
        case GR_8:
            return SEND(U_GR_MUL, U_GR_MUL);
            return false;
        case GR_9:
            return SEND(U_GR_PARA, U_GR_PARA);
        case GR_0:
            return SEND(U_GR_WDOT, U_GR_LWDOT);
        case GR_MINS:
            return SEND(U_GR_EMDASH, U_GR_EMDASH);
        case GR_EQL:
            return SEND(U_GR_AEQL, U_GR_AEQL);
            // GREEK QWER ROW
        case GR_Q:
            return SEND(U_GR_L_THETA, U_GR_U_THETA);
        case GR_W:
            return SEND(U_GR_L_OMEGA, U_GR_U_OMEGA);
        case GR_E:
            return SEND(U_GR_L_EPSILON, U_GR_U_EPSILON);
        case GR_R:
            return SEND(U_GR_L_RHO, U_GR_U_RHO);
        case GR_T:
            return SEND(U_GR_L_TAU, U_GR_U_TAU);
        case GR_Y:
            return SEND(U_GR_L_PSI, U_GR_U_PSI);
        case GR_U:
            return SEND(U_GR_L_UPSILON, U_GR_U_UPSILON);
        case GR_I:
            return SEND(U_GR_L_IOTA, U_GR_U_IOTA);
        case GR_O:
            return SEND(U_GR_L_OMICRON, U_GR_U_OMICRON);
        case GR_P:
            return SEND(U_GR_L_PI, U_GR_U_PI);
        case GR_LBRC:
            return SEND(U_GR_LWSQBKT, U_GR_LWSQBKT);
        case GR_RBRC:
            return SEND(U_GR_RWSQBKT, U_GR_RWSQBKT);
        case GR_BSLS:
            return SEND(U_GR_NOT, U_GR_RNOT);

            // GREEK ASDF ROW
        case GR_A:
            return SEND(U_GR_L_ALPHA, U_GR_U_ALPHA);
        case GR_S:
            return SEND(U_GR_L_SIGMA, U_GR_U_SIGMA);
        case GR_D:
            return SEND(U_GR_L_DELTA, U_GR_U_DELTA);
        case GR_F:
            return SEND(U_GR_L_PHI, U_GR_U_PHI);
        case GR_G:
            return SEND(U_GR_L_GAMMA, U_GR_U_GAMMA);
        case GR_H:
            return SEND(U_GR_L_ETA, U_GR_U_ETA);
        case GR_J:
            return SEND(U_GR_L_XI, U_GR_U_XI);
        case GR_K:
            return SEND(U_GR_L_KAPPA, U_GR_U_KAPPA);
        case GR_L:
            return SEND(U_GR_L_LAMBDA, U_GR_U_LAMBDA);
        case GR_SCLN:
            return SEND(U_GR_TDOT, U_GR_ELLIPSES);
        case GR_QUOT:
            return SEND(U_GR_BULT, U_GR_WCIRCLE);

            // GREEK ZXCV ROW
        case GR_Z:
            return SEND(U_GR_L_ZETA, U_GR_U_ZETA);
        case GR_X:
            return SEND(U_GR_L_CHI, U_GR_U_CHI);
        case GR_C:
            return SEND(U_GR_L_XI, U_GR_U_XI);
        case GR_B:
            return SEND(U_GR_L_BETA, U_GR_U_BETA);
        case GR_N:
            return SEND(U_GR_L_NU, U_GR_U_NU);
        case GR_M:
            return SEND(U_GR_L_MU, U_GR_U_MU);
        case GR_COMM:
            return SEND(U_GR_LDQUOTE, U_GR_LDQUOTE);
        case GR_DOT:
            return SEND(U_GR_RDQUOTE, U_GR_RDQUOTE);
        case GR_SLSH:
            return SEND(U_GR_INT, U_GR_ROOT);

        default:
            return true; // Process all other keycodes normally
    }
}

bool process_symbol(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
            // SYMBOLS 1234 ROW
        case SYM_1:
            return SEND(U_SYM_SUP1, U_SYM_IEXL);
        case SYM_2:
            return SEND(U_SYM_SUP2, U_SYM_SUP2);
        case SYM_3:
            return SEND(U_SYM_SUP3, U_SYM_PND);
        case SYM_4:
            return SEND(U_SYM_HALF, U_SYM_YEN);
        case SYM_5:
            return SEND(U_SYM_TQTR, U_SYM_EURO);
        case SYM_8:
            return SEND(U_SYM_DEGREE, U_SYM_DEGREE);
        case SYM_0:
            return SEND(U_SYM_EMPTY, U_SYM_EMPTY);
        case SYM_EQL:
            return SEND(U_SYM_PLSMINS, U_SYM_MINSPLS);

            // SYMBOLS QWER ROW
        case SYM_Q:
            return SEND(U_SYM_AND, U_SYM_QSET);
        case SYM_W:
            return SEND(U_SYM_OR, U_SYM_OR);
        case SYM_E:
            return SEND(U_SYM_INTERSECT, U_SYM_INTERSECT);
        case SYM_R:
            return SEND(U_SYM_MUNION, U_SYM_RSET);
        case SYM_T:
            return SEND(U_SYM_SUBSET, U_SYM_SUBSETOREQ);
        case SYM_Y:
            return SEND(U_SYM_SUPERSET, U_SYM_SUPERSETOREQ);
        case SYM_U:
            return SEND(U_SYM_FORALL, U_SYM_FORALL);
        case SYM_I:
            return SEND(U_SYM_INIFIN, U_SYM_INIFIN);
        case SYM_O:
            return SEND(U_SYM_EXISTS, U_SYM_NEXISTS);
        case SYM_P:
            return SEND(U_SYM_PDIF, U_SYM_PDIF);
        case SYM_LBRC:
            return SEND(U_SYM_ELEOF, U_SYM_NELEOF);
        case SYM_BSLS:
            return SEND(U_SYM_DVLINE, U_SYM_TVLINE);

            // SYMBOLS ASDF ROW
        case SYM_A:
            return SEND(U_SYM_UP_TACK, U_SYM_ANG);
        case SYM_S:
            return SEND(U_SYM_DOWN_TACK, U_SYM_DOWN_TACK);
        case SYM_D:
            return SEND(U_SYM_RT_TACK, U_SYM_NABLA);
        case SYM_F:
            return SEND(U_SYM_LT_TACK, U_SYM_FLAT);
        case SYM_G:
            return SEND(U_SYM_UARR, U_SYM_UPPER);
        case SYM_H:
            return SEND(U_SYM_DARR, U_SYM_LOWER);
        case SYM_J:
            return SEND(U_SYM_FROM, U_SYM_IMPL_REV);
        case SYM_K:
            return SEND(U_SYM_TO, U_SYM_IMPLY);
        case SYM_L:
            return SEND(U_SYM_TO_FROM, U_SYM_BICOND);
        case SYM_SCLN:
            return SEND(U_SYM_THEREFORE, U_SYM_THEREFORE);

            // SYMBOLS ZXCV ROW
        case SYM_Z:
            return SEND(U_SYM_LT_FLOOR, U_SYM_ZSET);
        case SYM_X:
            return SEND(U_SYM_LT_CIEL, U_SYM_LT_CIEL);
        case SYM_C:
            return SEND(U_SYM_NEQ, U_SYM_CSET);
        case SYM_V:
            return SEND(U_SYM_AEQL, U_SYM_ALEQL);
        case SYM_B:
            return SEND(U_SYM_EQUIV, U_SYM_EQUIV);
        case SYM_N:
            return SEND(U_SYM_LTEQ, U_SYM_NSET);
        case SYM_M:
            return SEND(U_SYM_GTEQ, U_SYM_GTEQ);
        case SYM_COMM:
            return SEND(U_SYM_SQ_LS, U_SYM_SQ_LS);
        case SYM_DOT:
            return SEND(U_SYM_SQ_RS, U_SYM_SQ_RS);
        case SYM_SLSH:
            return SEND(U_SYM_IQST, U_SYM_INTROBANG);
        case SYM_P1:
            return SEND(U_SYM_THUMBS_UP, U_SYM_THUMBS_DN);
        default:
            return true; // Process all other keycodes normally
    }
}

bool process_record_unicode(uint16_t keycode, keyrecord_t *record) {
    if (!process_greek(keycode, record)) return false;
    if (!process_symbol(keycode, record)) return false;
    return true; // Process all other keycodes normally
}

void leader_unicode(void) {
    if (leader_sequence_two_keys(KC_1, KC_2)) {
        register_unicodemap(U_SYM_HALF);
    } else if (leader_sequence_two_keys(KC_3, KC_4)) {
        register_unicodemap(U_SYM_TQTR);
    } else if (leader_sequence_two_keys(KC_SLSH, KC_0)) {
        register_unicodemap(U_SYM_EMPTY);
    } else if (leader_sequence_two_keys(KC_BSLS, KC_SLSH)) { // \/
        register_unicodemap(U_SYM_OR);
    } else if (leader_sequence_two_keys(KC_SLSH, KC_BSLS)) {
        register_unicodemap(U_SYM_AND);
    } else if (leader_sequence_two_keys(KC_EQL, KC_MINS)) {
        register_unicodemap(U_SYM_PLSMINS);
    } else if (leader_sequence_two_keys(KC_MINS, KC_EQL)) {
        register_unicodemap(U_SYM_MINSPLS);
    } else if (leader_sequence_two_keys(KC_GRV, KC_A)) {
        register_unicodemap(U_GR_L_ALPHA);
    } else if (leader_sequence_three_keys(KC_GRV, KC_LSFT, KC_A)) {
        register_unicodemap(U_SYM_ANG);
    } else if (leader_sequence_two_keys(KC_BSLS, KC_R)) {
        register_unicodemap(U_SYM_RSET);
    } else if (leader_sequence_two_keys(KC_6, KC_1)) {
        register_unicodemap(U_SYM_SUP1);
    } else if (leader_sequence_two_keys(KC_6, KC_2)) {
        register_unicodemap(U_SYM_SUP2);
    } else if (leader_sequence_two_keys(KC_6, KC_3)) {
        register_unicodemap(U_SYM_SUP3);
    } else if (leader_sequence_three_keys(KC_SLSH, KC_SLSH, KC_SLSH)) {
        register_unicodemap(U_GR_ELLIPSES);
    }
}


