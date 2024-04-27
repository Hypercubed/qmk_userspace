#include "hypercubed.h"

const uint32_t PROGMEM unicode_map[] = {
    // GREEK
    [U_GK_A_LOWER] = L'α', [U_GK_A_UPPER] = L'A',
    [U_GK_B_LOWER] = L'β', [U_GK_B_UPPER] = L'B',
    [U_GK_G_LOWER] = L'γ', [U_GK_G_UPPER] = L'Γ',
    [U_GK_D_LOWER] = L'δ', [U_GK_D_UPPER] = L'Δ',
    [U_GK_E_LOWER] = L'ε', [U_GK_E_UPPER] = L'Ε',
    [U_GK_Z_LOWER] = L'ζ', [U_GK_Z_UPPER] = L'Ζ',
    [U_GK_H_LOWER] = L'η', [U_GK_H_UPPER] = L'Η',
    [U_GK_Q_LOWER] = L'θ', [U_GK_Q_UPPER] = L'Θ',
    [U_GK_I_LOWER] = L'ι', [U_GK_I_UPPER] = L'Ι',
    [U_GK_K_LOWER] = L'κ', [U_GK_K_UPPER] = L'Κ',
    [U_GK_L_LOWER] = L'λ', [U_GK_L_UPPER] = L'Λ',
    [U_GK_M_LOWER] = L'μ', [U_GK_M_UPPER] = L'Μ',
    [U_GK_N_LOWER] = L'ν', [U_GK_N_UPPER] = L'Ν',
    [U_GK_X_LOWER] = L'ξ', [U_GK_X_UPPER] = L'Ξ',
    [U_GK_O_LOWER] = L'ο', [U_GK_O_UPPER] = L'Ο',
    [U_GK_P_LOWER] = L'π', [U_GK_P_UPPER] = L'Π',
    [U_GK_R_LOWER] = L'ρ', [U_GK_R_UPPER] = L'Ρ',
    [U_GK_S_LOWER] = L'σ', [U_GK_S_UPPER] = L'Σ',
    [U_GK_T_LOWER] = L'τ', [U_GK_T_UPPER] = L'Τ',
    [U_GK_U_LOWER] = L'υ', [U_GK_U_UPPER] = L'Υ',
    [U_GK_F_LOWER] = L'φ', [U_GK_F_UPPER] = L'Φ',
    [U_GK_C_LOWER] = L'χ', [U_GK_C_UPPER] = L'Χ',
    [U_GK_V_LOWER] = L'ψ', [U_GK_V_UPPER] = L'Ψ',
    [U_GK_W_LOWER] = L'ω', [U_GK_W_UPPER] = L'Ω',

    // GREEK EXTA SYMBOLS
    [U_SYM_DAGG] = L'†',
    [U_SYM_DDAG] = L'‡',
    [U_SYM_NABLA] = L'∇',
    [U_SYM_CENT] = L'¢',
    [U_SYM_DEGREE] = L'°',
    [U_SYM_SQUARE] = L'□',
    [U_SYM_DIV] = L'÷',
    [U_SYM_MUL] = L'×',
    [U_SYM_PARA] = L'¶',
    [U_SYM_WDOT] = L'○',
    [U_SYM_11835] = L'⸻',
    [U_SYM_AEQL] = L'≈',
    [U_SYM_LDAQ] = L'«',
    [U_SYM_RDAQ] = L'»',
    [U_SYM_INTG] = L'∫',
    [U_SYM_8229] = L'‥',
    [U_SYM_BULT] = L'•',

    // SYMBOLS QWERTY ROW
    [U_SYM_AND] = L'∧',
    [U_SYM_OR] = L'∨',
    [U_SYM_INTERSECT] = L'∩',
    [U_SYM_MUNION] = L'∪',
    [U_SYM_SUBSET] = L'⊂',
    [U_SYM_SUPERSET] = L'⊃',
    [U_SYM_FORALL] = L'∀',
    [U_SYM_INIFIN] = L'∞',
    [U_SYM_EXISTS] = L'∃',
    [U_SYM_PDIF] = L'∂',
    [U_SYM_ELEOF] = L'∈',
    [U_SYM_QSET] = L'ℚ',
    [U_SYM_RSET] = L'ℝ',
    [U_SYM_SUBSETOREQ] = L'⊆',
    [U_SYM_SUPERSETOREQ] = L'⊇',
    [U_SYM_NEXISTS] = L'∄',
    [U_SYM_NELEOF] = L'∉',

    // SYMBOLS ASDF ROW
    [U_SYM_UP_TACK] = L'⟘',
    [U_SYM_DOWN_TACK] = L'⊤',
    [U_SYM_RT_TACK] = L'⊢',
    [U_SYM_LT_TACK] = L'⊣',
    [U_SYM_UARR] = L'↑',
    [U_SYM_DARR] = L'↓',
    [U_SYM_FROM] = L'←',
    [U_SYM_TO] = L'→',
    [U_SYM_TO_FROM] = L'↔',
    [U_SYM_ANG] = L'Å',
    // [U_SYM_NABLA] = L'∇',
    [U_SYM_UPPER] = L'⇑',
    [U_SYM_LOWER] = L'⇓',
    [U_SYM_IMPL_REV] = L'⇐',
    [U_SYM_IMPLY] = L'⇒',
    [U_SYM_BICOND] = L'⇔',

    // SYMBOLS ZXC ROW
    [U_SYM_LT_FLOOR] = L'⌊',
    [U_SYM_LT_CIEL] = L'⌈',
    [U_SYM_NEQ] = L'≠',
    [U_SYM_AEQL] = L'≃',
    [U_SYM_EQUIV] = L'≡',
    [U_SYM_LTEQ] = L'≤',
    [U_SYM_GTEQ] = L'≥',
    [U_SYM_SQ_LS] = L'⊏',
    [U_SYM_SQ_RS] = L'⊐',
    [U_SYM_ZSET] = L'ℤ',
    [U_SYM_CSET] = L'ℂ',
    [U_SYM_ROUGHLY] = L'≈',
    [U_SYM_NSET] = L'ℕ',

    // SYMBOLS NUM ROW
    [U_SYM_SUP1] = L'¹',
    [U_SYM_SUP2] = L'²',
    [U_SYM_SUP3] = L'³',
    [U_SYM_HALF] = L'½',
    [U_SYM_THREE_QTR] = L'¾',
    [U_SYM_PLUS_MINUS] = L'±',
    [U_SYM_IEXL] = L'¡',
    [U_SYM_PND] = L'£',
    [U_SYM_DEGR] = L'°',
    [U_SYM_MINUS_PLUS] = L'∓'
};

bool process_greek(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // GREEK CHARACHTERS
        case GK_ALPHA: return register_unicode_up(U_GK_A_LOWER, U_GK_A_UPPER, record);
        case GK_BETA: return register_unicode_up(U_GK_B_LOWER, U_GK_B_UPPER, record);
        case GK_GAMMA: return register_unicode_up(U_GK_G_LOWER, U_GK_G_UPPER, record);
        case GK_DELTA: return register_unicode_up(U_GK_D_LOWER, U_GK_D_UPPER, record);
        case GK_EPSILON: return register_unicode_up(U_GK_E_LOWER, U_GK_E_UPPER, record);
        case GK_ZETA: return register_unicode_up(U_GK_Z_LOWER, U_GK_Z_UPPER, record);
        case GK_ETA: return register_unicode_up(U_GK_H_LOWER, U_GK_H_UPPER, record);
        case GK_THETA: return register_unicode_up(U_GK_Q_LOWER, U_GK_Q_UPPER, record);
        case GK_IOTA: return register_unicode_up(U_GK_I_LOWER, U_GK_I_UPPER, record);
        case GK_KAPPA: return register_unicode_up(U_GK_K_LOWER, U_GK_K_UPPER, record);
        case GK_LAMBDA: return register_unicode_up(U_GK_L_LOWER, U_GK_L_UPPER, record);
        case GK_MU: return register_unicode_up(U_GK_M_LOWER, U_GK_M_UPPER, record);
        case GK_NU: return register_unicode_up(U_GK_N_LOWER, U_GK_N_UPPER, record);
        case GK_XI: return register_unicode_up(U_GK_X_LOWER, U_GK_X_UPPER, record);
        case GK_OMICRON: return register_unicode_up(U_GK_O_LOWER, U_GK_O_UPPER, record);
        case GK_PI: return register_unicode_up(U_GK_P_LOWER, U_GK_P_UPPER, record);
        case GK_RHO: return register_unicode_up(U_GK_R_LOWER, U_GK_R_UPPER, record);
        case GK_SIGMA: return register_unicode_up(U_GK_S_LOWER, U_GK_S_UPPER, record);
        case GK_TAU: return register_unicode_up(U_GK_T_LOWER, U_GK_T_UPPER, record);
        case GK_UPSILON: return register_unicode_up(U_GK_U_LOWER, U_GK_U_UPPER, record);
        case GK_PHI: return register_unicode_up(U_GK_F_LOWER, U_GK_F_UPPER, record);
        case GK_CHI: return register_unicode_up(U_GK_C_LOWER, U_GK_C_UPPER, record);
        case GK_PSI: return register_unicode_up(U_GK_V_LOWER, U_GK_V_UPPER, record);
        case GK_OMEGA: return register_unicode_up(U_GK_W_LOWER, U_GK_W_UPPER, record);

        // GREEK EXTRA SYMBOLS
        case GK_1: return register_unicode_up(U_SYM_DAGG, U_SYM_DAGG, record);
        case GK_2: return register_unicode_up(U_SYM_DDAG, U_SYM_DDAG, record);
        case GK_3: return register_unicode_up(U_SYM_NABLA, U_SYM_NABLA, record);
        case GK_4: return register_unicode_up(U_SYM_CENT, U_SYM_CENT, record);
        case GK_5: return register_unicode_up(U_SYM_DEGREE, U_SYM_DEGREE, record);
        case GK_6: return register_unicode_up(U_SYM_SQUARE, U_SYM_SQUARE, record);
        case GK_7: return register_unicode_up(U_SYM_DIV, U_SYM_DIV, record);
        case GK_8: return register_unicode_up(U_SYM_MUL, U_SYM_MUL, record);
        case GK_9: return register_unicode_up(U_SYM_PARA, U_SYM_PARA, record);
        case GK_0: return register_unicode_up(U_SYM_WDOT, U_SYM_WDOT, record);
        case GK_MINS: return register_unicode_up(U_SYM_11835, U_SYM_11835, record);
        case GK_EQL: return register_unicode_up(U_SYM_AEQL, U_SYM_AEQL, record);
        case GK_COMM: return register_unicode_up(U_SYM_LDAQ, U_SYM_LDAQ, record);
        case GK_DOT: return register_unicode_up(U_SYM_RDAQ, U_SYM_RDAQ, record);
        case GK_SLSH: return register_unicode_up(U_SYM_INTG, U_SYM_INTG, record);
        case GK_SCLN: return register_unicode_up(U_SYM_8229, U_SYM_8229, record);
        case GK_QUOT: return register_unicode_up(U_SYM_BULT, U_SYM_BULT, record);
        default:
            return true; // Process all other keycodes normally
    }
}

bool process_symbol(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // SYMBOLS NUM ROW (R1)
        case SYM_1: return register_unicode_up(U_SYM_SUP1, U_SYM_IEXL, record);
        case SYM_2: return register_unicode_up(U_SYM_SUP2, U_SYM_SUP2, record);
        case SYM_3: return register_unicode_up(U_SYM_SUP3, U_SYM_PND, record);
        case SYM_4: return register_unicode_up(U_SYM_HALF, U_SYM_HALF, record);
        case SYM_5: return register_unicode_up(U_SYM_THREE_QTR, U_SYM_THREE_QTR, record);
        // case SYM_6:
        // case SYM_7:
        case SYM_8: return register_unicode_up(U_SYM_DEGR, U_SYM_DEGR, record);
        // case SYM_9:
        // case SYM_0:
        // case SYM_MINS:
        case SYM_EQL: return register_unicode_up(U_SYM_PLUS_MINUS, U_SYM_MINUS_PLUS, record);

        // SYMBOLS QWERTY ROW (R2)
        case SYM_Q: return register_unicode_up(U_SYM_AND, U_SYM_QSET, record);
        case SYM_W: return register_unicode_up(U_SYM_OR, U_SYM_OR, record);
        case SYM_E: return register_unicode_up(U_SYM_INTERSECT, U_SYM_INTERSECT, record);
        case SYM_R: return register_unicode_up(U_SYM_MUNION, U_SYM_RSET, record);
        case SYM_T: return register_unicode_up(U_SYM_SUBSET, U_SYM_SUBSETOREQ, record);
        case SYM_Y: return register_unicode_up(U_SYM_SUPERSET, U_SYM_SUPERSETOREQ, record);
        case SYM_U: return register_unicode_up(U_SYM_FORALL, U_SYM_FORALL, record);
        case SYM_I: return register_unicode_up(U_SYM_INIFIN, U_SYM_INIFIN, record);
        case SYM_O: return register_unicode_up(U_SYM_EXISTS, U_SYM_NEXISTS, record);
        case SYM_P: return register_unicode_up(U_SYM_PDIF, U_SYM_PDIF, record);
        case SYM_LBRC: return register_unicode_up(U_SYM_ELEOF, U_SYM_NELEOF, record);

        // SYMBOLS ASDF ROW (R3)
        case SYM_A: return register_unicode_up(U_SYM_UP_TACK, U_SYM_ANG, record);
        case SYM_S: return register_unicode_up(U_SYM_DOWN_TACK, U_SYM_DOWN_TACK, record);
        case SYM_D: return register_unicode_up(U_SYM_RT_TACK, U_SYM_NABLA, record);
        case SYM_F: return register_unicode_up(U_SYM_LT_TACK, U_SYM_LT_TACK, record);
        case SYM_G: return register_unicode_up(U_SYM_UARR, U_SYM_UPPER, record);
        case SYM_H: return register_unicode_up(U_SYM_DARR, U_SYM_LOWER, record);
        case SYM_J: return register_unicode_up(U_SYM_FROM, U_SYM_IMPL_REV, record);
        case SYM_K: return register_unicode_up(U_SYM_TO, U_SYM_IMPLY, record);
        case SYM_L: return register_unicode_up(U_SYM_TO_FROM, U_SYM_BICOND, record);

        // SYMBOLS ZXC ROW (R4)
        case SYM_Z: return register_unicode_up(U_SYM_LT_FLOOR, U_SYM_ZSET, record);
        case SYM_X: return register_unicode_up(U_SYM_LT_CIEL, U_SYM_CSET, record);
        case SYM_C: return register_unicode_up(U_SYM_NEQ, U_SYM_ROUGHLY, record);
        // case SYM_V
        // case SYM_B
        case SYM_N: return register_unicode_up(U_SYM_LTEQ, U_SYM_NSET, record);
        case SYM_M: return register_unicode_up(U_SYM_GTEQ, U_SYM_GTEQ, record);
        case SYM_COMM: return register_unicode_up(U_SYM_SQ_LS, U_SYM_SQ_LS, record);
        case SYM_DOT: return register_unicode_up(U_SYM_SQ_RS, U_SYM_SQ_RS, record);
        default:
            return true; // Process all other keycodes normally
    }
}

bool process_record_unicode(uint16_t keycode, keyrecord_t *record) {
    if (!process_greek(keycode, record)) return false;
    if (!process_symbol(keycode, record)) return false;
    return true; // Process all other keycodes normally
}
