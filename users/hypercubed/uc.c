#include "quantum.h"
#include "send_string_keycodes.h"
#include "print.h"
#include "uc.h"
#include "ac.h"

// const uint32_t PROGMEM unicode_map[] = {
//     [UC_U_ALPHA] = L'A',
//     [UC_U_BETA] = L'B',
//     [UC_U_TAU] = L'T',
//     [UC_IEXL] = L'¡',
//     [UC_CENT] = L'¢',
//     [UC_PND] = L'£',
//     [UC_CURREN] = L'¤',
//     [UC_YEN] = L'¥',
//     [UC_SECTION] = L'§',
//     [UC_COPY] = L'©',
//     [UC_LDQUOTE] = L'«',
//     [UC_NOT] = L'¬',
//     [UC_REG] = L'®',
//     [UC_DEGREE] = L'°',
//     [UC_PLSMINS] = L'±',
//     [UC_SUP2] = L'²',
//     [UC_SUP3] = L'³',
//     [UC_PARA] = L'¶',
//     [UC_SUP1] = L'¹',
//     [UC_RDQUOTE] = L'»',
//     [UC_QRTR] = L'¼',
//     [UC_HALF] = L'½',
//     [UC_TQTR] = L'¾',
//     [UC_IQST] = L'¿',
//     [UC_U_AELIG] = L'Æ',
//     [UC_L_AELIG] = L'æ',
//     [UC_CCEDIL] = L'Ç',
//     [UC_MUL] = L'×',
//     [UC_DIV] = L'÷',
//     [UC_FNOF] = L'ƒ',
//     [UC_U_GAMMA] = L'Γ',
//     [UC_U_DELTA] = L'Δ',
//     [UC_U_EPSILON] = L'Ε',
//     [UC_U_ZETA] = L'Ζ',
//     [UC_U_ETA] = L'Η',
//     [UC_U_THETA] = L'Θ',
//     [UC_U_IOTA] = L'Ι',
//     [UC_U_KAPPA] = L'Κ',
//     [UC_U_LAMBDA] = L'Λ',
//     [UC_U_MU] = L'Μ',
//     [UC_U_NU] = L'Ν',
//     [UC_U_XI] = L'Ξ',
//     [UC_U_OMICRON] = L'Ο',
//     [UC_U_PI] = L'Π',
//     [UC_U_RHO] = L'Ρ',
//     [UC_U_SIGMA] = L'Σ',
//     [UC_U_UPSILON] = L'Υ',
//     [UC_U_PHI] = L'Φ',
//     [UC_U_CHI] = L'Χ',
//     [UC_U_PSI] = L'Ψ',
//     [UC_U_OMEGA] = L'Ω',
//     [UC_L_ALPHA] = L'α',
//     [UC_L_BETA] = L'β',
//     [UC_L_GAMMA] = L'γ',
//     [UC_L_DELTA] = L'δ',
//     [UC_L_EPSILON] = L'ε',
//     [UC_L_ZETA] = L'ζ',
//     [UC_L_ETA] = L'η',
//     [UC_L_THETA] = L'θ',
//     [UC_L_IOTA] = L'ι',
//     [UC_L_KAPPA] = L'κ',
//     [UC_L_LAMBDA] = L'λ',
//     [UC_L_MU] = L'μ',
//     [UC_L_NU] = L'ν',
//     [UC_L_XI] = L'ξ',
//     [UC_L_OMICRON] = L'ο',
//     [UC_L_PI] = L'π',
//     [UC_L_RHO] = L'ρ',
//     [UC_L_SIGMA] = L'σ',
//     [UC_L_TAU] = L'τ',
//     [UC_L_UPSILON] = L'υ',
//     [UC_L_PHI] = L'φ',
//     [UC_L_CHI] = L'χ',
//     [UC_L_PSI] = L'ψ',
//     [UC_L_OMEGA] = L'ω',
//     [UC_EMDASH] = L'—',
//     [UC_DVLINE] = L'‖',
//     [UC_DAGG] = L'†',
//     [UC_DDAG] = L'‡',
//     [UC_BULT] = L'•',
//     [UC_TDOT] = L'‥',
//     [UC_ELLIPSES] = L'…',
//     [UC_INTROBANG] = L'‽',
//     [UC_OLINE] = L'‾',
//     [UC_EURO] = L'€',
//     [UC_CSET] = L'ℂ',
//     [UC_HBAR] = L'ℏ',
//     [UC_NSET] = L'ℕ',
//     [UC_QSET] = L'ℚ',
//     [UC_ZSET] = L'ℤ',
//     [UC_RSET] = L'ℝ',
//     [UC_ANG] = L'Å',
//     [UC_RN1] = L'Ⅰ',
//     [UC_RN2] = L'Ⅱ',
//     [UC_RN3] = L'Ⅲ',
//     [UC_RN4] = L'Ⅳ',
//     [UC_FROM] = L'←',
//     [UC_UARR] = L'↑',
//     [UC_TO] = L'→',
//     [UC_DARR] = L'↓',
//     [UC_TO_FROM] = L'↔',
//     [UC_IMPL_REV] = L'⇐',
//     [UC_UPPER] = L'⇑',
//     [UC_IMPLY] = L'⇒',
//     [UC_LOWER] = L'⇓',
//     [UC_BICOND] = L'⇔',
//     [UC_FORALL] = L'∀',
//     [UC_PDIF] = L'∂',
//     [UC_EXISTS] = L'∃',
//     [UC_NEXISTS] = L'∄',
//     [UC_EMPTY] = L'∅',
//     [UC_NABLA] = L'∇',
//     [UC_ELEOF] = L'∈',
//     [UC_NELEOF] = L'∉',
//     [UC_MINSPLS] = L'∓',
//     [UC_ROOT] = L'√',
//     [UC_PROP] = L'∝',
//     [UC_INIFIN] = L'∞',
//     [UC_AND] = L'∧',
//     [UC_OR] = L'∨',
//     [UC_INTERSECT] = L'∩',
//     [UC_MUNION] = L'∪',
//     [UC_INT] = L'∫',
//     [UC_THEREFORE ] = L'∴',
//     [UC_AEQL] = L'≃',
//     [UC_ALEQL] = L'≈',
//     [UC_NEQ] = L'≠',
//     [UC_EQUIV] = L'≡',
//     [UC_LTEQ] = L'≤',
//     [UC_GTEQ] = L'≥',
//     [UC_SUBSET] = L'⊂',
//     [UC_SUPERSET] = L'⊃',
//     [UC_SUBSETOREQ] = L'⊆',
//     [UC_SUPERSETOREQ] = L'⊇',
//     [UC_SQ_LS] = L'⊏',
//     [UC_SQ_RS] = L'⊐',
//     [UC_RT_TACK] = L'⊢',
//     [UC_LT_TACK] = L'⊣',
//     [UC_DOWN_TACK] = L'⊤',
//     [UC_UP_TACK] = L'⊥',
//     [UC_LT_CIEL] = L'⌈',
//     [UC_LCEIL] = L'⌉',
//     [UC_LT_FLOOR] = L'⌊',
//     [UC_RFLOOR] = L'⌋',
//     [UC_RNOT] = L'⌐',
//     [UC_SQUARE] = L'□',
//     [UC_WDOT] = L'○',
//     [UC_LWDOT] = L'◯',
//     [UC_FLAT] = L'♭',
//     [UC_TVLINE] = L'⦀',
//     [UC_LWSQBKT] = L'〚',
//     [UC_RWSQBKT] = L'〛',
//     [UC_L_SIGMAF] = L'ς',
// };

uint32_t get_code(uint32_t x, uint32_t y) {
    uint8_t mods = get_mods() | get_weak_mods();
    #ifndef NO_ACTION_ONESHOT
        mods |= get_oneshot_mods();
    #endif
    bool shift = mods & MOD_MASK_SHIFT;
    bool caps  = host_keyboard_led_state().caps_lock;
    return (shift ^ caps) ? y : x;
}

bool send(uint32_t x, uint32_t y, keyrecord_t *record) {
    if (record->event.pressed) {
        uint32_t code = get_code(x, y);

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
    }
    return false;
}

bool process_greek(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GR_GRV: return SEND(UC_SECTION, UC_SECTION);
        case GR_1: return SEND(UC_DAGG, UC_RN1);
        case GR_2: return SEND(UC_DDAG, UC_RN2);
        case GR_3: return SEND(UC_NABLA, UC_RN3);
        case GR_4: return SEND(UC_CENT, UC_RN4);
        case GR_5: return SEND(UC_DEGREE, UC_DEGREE);
        case GR_6: return SEND(UC_SQUARE, UC_SQUARE);
        case GR_7: return SEND(UC_DIV, UC_DIV);
        case GR_8: return SEND(UC_MUL, UC_MUL);
        case GR_0: return SEND(UC_WDOT, UC_LWDOT);
        case GR_9: return SEND(UC_PARA, UC_PARA);
        case GR_MINS: return SEND(UC_EMDASH, UC_OLINE);
        case GR_EQL: return SEND(UC_ALEQL, UC_ALEQL);
        case GR_Q: return SEND(UC_L_AELIG, UC_U_AELIG);
        case GR_W: return SEND(UC_L_SIGMAF, UC_ANG);
        case GR_E: return SEND(UC_L_EPSILON, UC_U_EPSILON);
        case GR_R: return SEND(UC_L_RHO, UC_U_RHO);
        case GR_T: return SEND(UC_L_TAU, UC_U_TAU);
        case GR_Y: return SEND(UC_L_UPSILON, UC_U_UPSILON);
        case GR_U: return SEND(UC_L_THETA, UC_U_THETA);
        case GR_I: return SEND(UC_L_IOTA, UC_U_IOTA);
        case GR_O: return SEND(UC_L_OMICRON, UC_U_OMICRON);
        case GR_P: return SEND(UC_L_PI, UC_U_PI);
        case GR_LBRC: return SEND(UC_LWSQBKT, UC_LWSQBKT);
        case GR_RBRC: return SEND(UC_RWSQBKT, UC_RWSQBKT);
        case GR_BSLS: return SEND(UC_NOT, UC_RNOT);
        case GR_A: return SEND(UC_L_ALPHA, UC_U_ALPHA);
        case GR_S: return SEND(UC_L_SIGMA, UC_U_SIGMA);
        case GR_D: return SEND(UC_L_DELTA, UC_U_DELTA);
        case GR_F: return SEND(UC_L_PHI, UC_U_PHI);
        case GR_G: return SEND(UC_L_GAMMA, UC_U_GAMMA);
        case GR_H: return SEND(UC_L_ETA, UC_U_ETA);
        case GR_J: return SEND(UC_L_XI, UC_U_XI);
        case GR_K: return SEND(UC_L_KAPPA, UC_U_KAPPA);
        case GR_L: return SEND(UC_L_LAMBDA, UC_U_LAMBDA);
        case GR_SCLN: return SEND(UC_TDOT, UC_ELLIPSES);
        case GR_QUOT: return SEND(UC_BULT, UC_WDOT);
        case GR_Z: return SEND(UC_L_ZETA, UC_U_ZETA);
        case GR_X: return SEND(UC_L_CHI, UC_U_CHI);
        case GR_C: return SEND(UC_L_PSI, UC_U_PSI);
        case GR_V: return SEND(UC_L_OMEGA, UC_U_OMEGA);
        case GR_B: return SEND(UC_L_BETA, UC_U_BETA);
        case GR_N: return SEND(UC_L_NU, UC_U_NU);
        case GR_M: return SEND(UC_L_MU, UC_U_MU);
        case GR_COMM: return SEND(UC_LDQUOTE, UC_LDQUOTE);
        case GR_DOT: return SEND(UC_RDQUOTE, UC_RDQUOTE);
        case GR_SLSH: return SEND(UC_INT, UC_ROOT);
        default:
            return true; // Process all other keycodes normally
    }
}

bool process_symbol(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SYM_1: return SEND(UC_IEXL, UC_SUP1);
        case SYM_2: return SEND(UC_SUP2, UC_SUP2);
        case SYM_3: return SEND(UC_SUP3, UC_PND);
        case SYM_4: return SEND(UC_CURREN, UC_CURREN);
        case SYM_5: return SEND(UC_EURO, UC_EURO);
        case SYM_6: return SEND(UC_QRTR, UC_QRTR);
        case SYM_7: return SEND(UC_HALF, UC_HALF);
        case SYM_8: return SEND(UC_TQTR, UC_INIFIN);
        case SYM_9: return SEND(UC_PROP, UC_PROP);
        case SYM_0: return SEND(UC_EMPTY, UC_EMPTY);
        case SYM_MINS: return SEND(UC_YEN, UC_YEN);
        case SYM_EQL: return SEND(UC_MUL, UC_DIV);
        case SYM_Q: return SEND(UC_AND, UC_AND);
        case SYM_W: return SEND(UC_OR, UC_OR);
        case SYM_E: return SEND(UC_INTERSECT, UC_INTERSECT);
        case SYM_R: return SEND(UC_MUNION, UC_REG);
        case SYM_T: return SEND(UC_SUBSET, UC_SUBSETOREQ);
        case SYM_Y: return SEND(UC_SUPERSET, UC_SUPERSETOREQ);
        case SYM_U: return SEND(UC_FORALL, UC_FORALL);
        case SYM_I: return SEND(UC_INIFIN, UC_INIFIN);
        case SYM_O: return SEND(UC_EXISTS, UC_NEXISTS);
        case SYM_P: return SEND(UC_PDIF, UC_PDIF);
        case SYM_LBRC: return SEND(UC_LDQUOTE, UC_LDQUOTE);
        case SYM_RBRC: return SEND(UC_RDQUOTE, UC_RDQUOTE);
        case SYM_BSLS: return SEND(UC_DVLINE, UC_TVLINE);
        case SYM_A: return SEND(UC_UP_TACK, UC_ANG);
        case SYM_S: return SEND(UC_DOWN_TACK, UC_DOWN_TACK);
        case SYM_D: return SEND(UC_RT_TACK, UC_NABLA);
        case SYM_F: return SEND(UC_LT_TACK, UC_FNOF);
        case SYM_G: return SEND(UC_UARR, UC_UARR);
        case SYM_H: return SEND(UC_DARR, UC_HBAR);
        case SYM_J: return SEND(UC_FROM, UC_FROM);
        case SYM_K: return SEND(UC_TO, UC_TO);
        case SYM_L: return SEND(UC_TO_FROM, UC_TO_FROM);
        case SYM_SCLN: return SEND(UC_PARA, UC_DEGREE);
        case SYM_QUOT: return SEND(UC_NOT, UC_NOT);
        case SYM_Z: return SEND(UC_LT_FLOOR, UC_RFLOOR);
        case SYM_X: return SEND(UC_LT_CIEL, UC_LCEIL);
        case SYM_C: return SEND(UC_NEQ, UC_COPY);
        case SYM_V: return SEND(UC_AEQL, UC_AEQL);
        case SYM_B: return SEND(UC_EQUIV, UC_EQUIV);
        case SYM_N: return SEND(UC_LTEQ, UC_LTEQ);
        case SYM_M: return SEND(UC_GTEQ, UC_GTEQ);
        case SYM_COMM: return SEND(UC_SQ_LS, UC_SQ_LS);
        case SYM_DOT: return SEND(UC_SQ_RS, UC_CCEDIL);
        case SYM_SLSH: return SEND(UC_IQST, UC_INTROBANG);
        default:
            return true; // Process all other keycodes normally
    }
}

bool process_record_unicode(uint16_t keycode, keyrecord_t *record) {
    if (!process_greek(keycode, record)) return false;
    if (!process_symbol(keycode, record)) return false;
    return true; // Process all other keycodes normally
}
