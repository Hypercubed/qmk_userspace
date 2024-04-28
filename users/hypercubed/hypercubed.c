#include "hypercubed.h"

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
    [U_GR_L_ZETA] = L'ζ',
    [U_GR_U_ZETA] = L'Ζ',
    [U_GR_L_CHI]  = L'χ',
    [U_GR_U_CHI]  = L'Χ',
    [U_GR_L_XI]   = L'ξ',
    [U_GR_U_XI]   = L'Ξ',
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
    [U_SYM_ALEQL]      = L'≈',
    [U_SYM_EQUIV]     = L'≡',
    [U_SYM_LTEQ]      = L'≤',
    [U_SYM_NSET]      = L'ℕ',
    [U_SYM_GTEQ]      = L'≥',
    [U_SYM_SQ_LS]     = L'⊏',
    [U_SYM_SQ_RS]     = L'⊐',
    [U_SYM_IQST]      = L'¿',
    [U_SYM_INTROBANG] = L'‽'
};

bool process_greek(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
            // GREEK 1234 ROW
        case GR_GRV:
            return register_unicode_up(U_GR_SECTION, U_GR_SECTION, record);
        case GR_1:
            return register_unicode_up(U_GR_DAGG, U_GR_DAGG, record);
        case GR_2:
            return register_unicode_up(U_GR_DDAG, U_GR_DDAG, record);
        case GR_3:
            return register_unicode_up(U_GR_NABLA, U_GR_NABLA, record);
        case GR_4:
            return register_unicode_up(U_GR_CENT, U_GR_CENT, record);
        case GR_5:
            return register_unicode_up(U_GR_DEGREE, U_GR_DEGREE, record);
        case GR_6:
            return register_unicode_up(U_GR_SQUARE, U_GR_SQUARE, record);
        case GR_7:
            return register_unicode_up(U_GR_DIV, U_GR_DIV, record);
        case GR_8:
            return register_unicode_up(U_GR_MUL, U_GR_MUL, record);
        case GR_9:
            return register_unicode_up(U_GR_PARA, U_GR_PARA, record);
        case GR_0:
            return register_unicode_up(U_GR_WDOT, U_GR_LWDOT, record);
        case GR_MINS:
            return register_unicode_up(U_GR_EMDASH, U_GR_EMDASH, record);
        case GR_EQL:
            return register_unicode_up(U_GR_AEQL, U_GR_AEQL, record);

            // GREEK QWER ROW
        case GR_Q:
            return register_unicode_up(U_GR_L_THETA, U_GR_U_THETA, record);
        case GR_W:
            return register_unicode_up(U_GR_L_OMEGA, U_GR_U_OMEGA, record);
        case GR_E:
            return register_unicode_up(U_GR_L_EPSILON, U_GR_U_EPSILON, record);
        case GR_R:
            return register_unicode_up(U_GR_L_RHO, U_GR_U_RHO, record);
        case GR_T:
            return register_unicode_up(U_GR_L_TAU, U_GR_U_TAU, record);
        case GR_Y:
            return register_unicode_up(U_GR_L_PSI, U_GR_U_PSI, record);
        case GR_U:
            return register_unicode_up(U_GR_L_UPSILON, U_GR_U_UPSILON, record);
        case GR_I:
            return register_unicode_up(U_GR_L_IOTA, U_GR_U_IOTA, record);
        case GR_O:
            return register_unicode_up(U_GR_L_OMICRON, U_GR_U_OMICRON, record);
        case GR_P:
            return register_unicode_up(U_GR_L_PI, U_GR_U_PI, record);
        case GR_LBRC:
            return register_unicode_up(U_GR_LWSQBKT, U_GR_LWSQBKT, record);
        case GR_RBRC:
            return register_unicode_up(U_GR_RWSQBKT, U_GR_RWSQBKT, record);
        case GR_BSLS:
            return register_unicode_up(U_GR_NOT, U_GR_RNOT, record);

            // GREEK ASDF ROW
        case GR_A:
            return register_unicode_up(U_GR_L_ALPHA, U_GR_U_ALPHA, record);
        case GR_S:
            return register_unicode_up(U_GR_L_SIGMA, U_GR_U_SIGMA, record);
        case GR_D:
            return register_unicode_up(U_GR_L_DELTA, U_GR_U_DELTA, record);
        case GR_F:
            return register_unicode_up(U_GR_L_PHI, U_GR_U_PHI, record);
        case GR_G:
            return register_unicode_up(U_GR_L_GAMMA, U_GR_U_GAMMA, record);
        case GR_H:
            return register_unicode_up(U_GR_L_ETA, U_GR_U_ETA, record);
        case GR_J:
            return register_unicode_up(U_GR_L_XI, U_GR_U_XI, record);
        case GR_K:
            return register_unicode_up(U_GR_L_KAPPA, U_GR_U_KAPPA, record);
        case GR_L:
            return register_unicode_up(U_GR_L_LAMBDA, U_GR_U_LAMBDA, record);
        case GR_SCLN:
            return register_unicode_up(U_GR_TDOT, U_GR_ELLIPSES, record);
        case GR_QUOT:
            return register_unicode_up(U_GR_BULT, U_GR_WCIRCLE, record);

            // GREEK ZXCV ROW
        case GR_Z:
            return register_unicode_up(U_GR_L_ZETA, U_GR_U_ZETA, record);
        case GR_X:
            return register_unicode_up(U_GR_L_CHI, U_GR_U_CHI, record);
        case GR_C:
            return register_unicode_up(U_GR_L_XI, U_GR_U_XI, record);
        case GR_B:
            return register_unicode_up(U_GR_L_BETA, U_GR_U_BETA, record);
        case GR_N:
            return register_unicode_up(U_GR_L_NU, U_GR_U_NU, record);
        case GR_M:
            return register_unicode_up(U_GR_L_MU, U_GR_U_MU, record);
        case GR_COMM:
            return register_unicode_up(U_GR_LDQUOTE, U_GR_LDQUOTE, record);
        case GR_DOT:
            return register_unicode_up(U_GR_RDQUOTE, U_GR_RDQUOTE, record);
        case GR_SLSH:
            return register_unicode_up(U_GR_INT, U_GR_ROOT, record);

        default:
            return true; // Process all other keycodes normally
    }
}

bool process_symbol(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
            // SYMBOLS 1234 ROW
        case SYM_1:
            return register_unicode_up(U_SYM_SUP1, U_SYM_IEXL, record);
        case SYM_2:
            return register_unicode_up(U_SYM_SUP2, U_SYM_SUP2, record);
        case SYM_3:
            return register_unicode_up(U_SYM_SUP3, U_SYM_PND, record);
        case SYM_4:
            return register_unicode_up(U_SYM_HALF, U_SYM_YEN, record);
        case SYM_5:
            return register_unicode_up(U_SYM_TQTR, U_SYM_EURO, record);
        case SYM_8:
            return register_unicode_up(U_SYM_DEGREE, U_SYM_DEGREE, record);
        case SYM_0:
            return register_unicode_up(U_SYM_EMPTY, U_SYM_EMPTY, record);
        case SYM_EQL:
            return register_unicode_up(U_SYM_PLSMINS, U_SYM_MINSPLS, record);

            // SYMBOLS QWER ROW
        case SYM_Q:
            return register_unicode_up(U_SYM_AND, U_SYM_QSET, record);
        case SYM_W:
            return register_unicode_up(U_SYM_OR, U_SYM_OR, record);
        case SYM_E:
            return register_unicode_up(U_SYM_INTERSECT, U_SYM_INTERSECT, record);
        case SYM_R:
            return register_unicode_up(U_SYM_MUNION, U_SYM_RSET, record);
        case SYM_T:
            return register_unicode_up(U_SYM_SUBSET, U_SYM_SUBSETOREQ, record);
        case SYM_Y:
            return register_unicode_up(U_SYM_SUPERSET, U_SYM_SUPERSETOREQ, record);
        case SYM_U:
            return register_unicode_up(U_SYM_FORALL, U_SYM_FORALL, record);
        case SYM_I:
            return register_unicode_up(U_SYM_INIFIN, U_SYM_INIFIN, record);
        case SYM_O:
            return register_unicode_up(U_SYM_EXISTS, U_SYM_NEXISTS, record);
        case SYM_P:
            return register_unicode_up(U_SYM_PDIF, U_SYM_PDIF, record);
        case SYM_LBRC:
            return register_unicode_up(U_SYM_ELEOF, U_SYM_NELEOF, record);
        case SYM_BSLS:
            return register_unicode_up(U_SYM_DVLINE, U_SYM_TVLINE, record);

            // SYMBOLS ASDF ROW
        case SYM_A:
            return register_unicode_up(U_SYM_UP_TACK, U_SYM_ANG, record);
        case SYM_S:
            return register_unicode_up(U_SYM_DOWN_TACK, U_SYM_DOWN_TACK, record);
        case SYM_D:
            return register_unicode_up(U_SYM_RT_TACK, U_SYM_NABLA, record);
        case SYM_F:
            return register_unicode_up(U_SYM_LT_TACK, U_SYM_FLAT, record);
        case SYM_G:
            return register_unicode_up(U_SYM_UARR, U_SYM_UPPER, record);
        case SYM_H:
            return register_unicode_up(U_SYM_DARR, U_SYM_LOWER, record);
        case SYM_J:
            return register_unicode_up(U_SYM_FROM, U_SYM_IMPL_REV, record);
        case SYM_K:
            return register_unicode_up(U_SYM_TO, U_SYM_IMPLY, record);
        case SYM_L:
            return register_unicode_up(U_SYM_TO_FROM, U_SYM_BICOND, record);
        case SYM_SCLN:
            return register_unicode_up(U_SYM_THEREFORE, U_SYM_THEREFORE, record);

            // SYMBOLS ZXCV ROW
        case SYM_Z:
            return register_unicode_up(U_SYM_LT_FLOOR, U_SYM_ZSET, record);
        case SYM_X:
            return register_unicode_up(U_SYM_LT_CIEL, U_SYM_LT_CIEL, record);
        case SYM_C:
            return register_unicode_up(U_SYM_NEQ, U_SYM_CSET, record);
        case SYM_V:
            return register_unicode_up(U_SYM_AEQL, U_SYM_ALEQL, record);
        case SYM_B:
            return register_unicode_up(U_SYM_EQUIV, U_SYM_EQUIV, record);
        case SYM_N:
            return register_unicode_up(U_SYM_LTEQ, U_SYM_NSET, record);
        case SYM_M:
            return register_unicode_up(U_SYM_GTEQ, U_SYM_GTEQ, record);
        case SYM_COMM:
            return register_unicode_up(U_SYM_SQ_LS, U_SYM_SQ_LS, record);
        case SYM_DOT:
            return register_unicode_up(U_SYM_SQ_RS, U_SYM_SQ_RS, record);
        case SYM_SLSH:
            return register_unicode_up(U_SYM_IQST, U_SYM_INTROBANG, record);

        default:
            return true; // Process all other keycodes normally
    }
}

bool process_record_unicode(uint16_t keycode, keyrecord_t *record) {
    if (!process_greek(keycode, record)) return false;
    if (!process_symbol(keycode, record)) return false;
    return true; // Process all other keycodes normally
}
