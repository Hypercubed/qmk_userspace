#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"

enum unicode_names {
    // GREEK 1234 ROW
    U_GR_SECTION,
    U_GR_DAGG,
    U_GR_DDAG,
    U_GR_NABLA,
    U_GR_CENT,
    U_GR_DEGREE,
    U_GR_SQUARE,
    U_GR_DIV,
    U_GR_MUL,
    U_GR_PARA,
    U_GR_WDOT,
    U_GR_LWDOT,
    U_GR_EMDASH,
    U_GR_AEQL,

    // GREEK QWER ROW
    U_GR_L_THETA,
    U_GR_U_THETA,
    U_GR_L_OMEGA,
    U_GR_U_OMEGA,
    U_GR_L_EPSILON,
    U_GR_U_EPSILON,
    U_GR_L_RHO,
    U_GR_U_RHO,
    U_GR_L_TAU,
    U_GR_U_TAU,
    U_GR_L_PSI,
    U_GR_U_PSI,
    U_GR_L_UPSILON,
    U_GR_U_UPSILON,
    U_GR_L_IOTA,
    U_GR_U_IOTA,
    U_GR_L_OMICRON,
    U_GR_U_OMICRON,
    U_GR_L_PI,
    U_GR_U_PI,
    U_GR_LWSQBKT,
    U_GR_RWSQBKT,
    U_GR_NOT,
    U_GR_RNOT,

    // GREEK ASDF ROW
    U_GR_L_ALPHA,
    U_GR_U_ALPHA,
    U_GR_L_SIGMA,
    U_GR_U_SIGMA,
    U_GR_L_DELTA,
    U_GR_U_DELTA,
    U_GR_L_PHI,
    U_GR_U_PHI,
    U_GR_L_GAMMA,
    U_GR_U_GAMMA,
    U_GR_L_ETA,
    U_GR_U_ETA,
    U_GR_L_XI,
    U_GR_U_XI,
    U_GR_L_KAPPA,
    U_GR_U_KAPPA,
    U_GR_L_LAMBDA,
    U_GR_U_LAMBDA,
    U_GR_TDOT,
    U_GR_ELLIPSES,
    U_GR_BULT,
    U_GR_WCIRCLE,

    // GREEK ZXCV ROW
    U_GR_L_ZETA,
    U_GR_U_ZETA,
    U_GR_L_CHI,
    U_GR_U_CHI,
    // U_GR_L_XI,
    // U_GR_U_XI,
    U_GR_L_BETA,
    U_GR_U_BETA,
    U_GR_L_NU,
    U_GR_U_NU,
    U_GR_L_MU,
    U_GR_U_MU,
    U_GR_LDQUOTE,
    U_GR_RDQUOTE,
    U_GR_INT,
    U_GR_ROOT,

    // SYMBOLS 1234 ROW
    U_SYM_SUP1,
    U_SYM_IEXL,
    U_SYM_SUP2,
    U_SYM_SUP3,
    U_SYM_PND,
    U_SYM_HALF,
    U_SYM_YEN,
    U_SYM_TQTR,
    U_SYM_EURO,
    U_SYM_DEGREE,
    U_SYM_EMPTY,
    U_SYM_PLSMINS,
    U_SYM_MINSPLS,

    // SYMBOLS QWER ROW
    U_SYM_AND,
    U_SYM_QSET,
    U_SYM_OR,
    U_SYM_INTERSECT,
    U_SYM_MUNION,
    U_SYM_RSET,
    U_SYM_SUBSET,
    U_SYM_SUBSETOREQ,
    U_SYM_SUPERSET,
    U_SYM_SUPERSETOREQ,
    U_SYM_FORALL,
    U_SYM_INIFIN,
    U_SYM_EXISTS,
    U_SYM_NEXISTS,
    U_SYM_PDIF,
    U_SYM_ELEOF,
    U_SYM_NELEOF,
    U_SYM_DVLINE,
    U_SYM_TVLINE,

    // SYMBOLS ASDF ROW
    U_SYM_UP_TACK,
    U_SYM_ANG,
    U_SYM_DOWN_TACK,
    U_SYM_RT_TACK,
    U_SYM_NABLA,
    U_SYM_LT_TACK,
    U_SYM_FLAT,
    U_SYM_UARR,
    U_SYM_UPPER,
    U_SYM_DARR,
    U_SYM_LOWER,
    U_SYM_FROM,
    U_SYM_IMPL_REV,
    U_SYM_TO,
    U_SYM_IMPLY,
    U_SYM_TO_FROM,
    U_SYM_BICOND,
    U_SYM_THEREFORE,

    // SYMBOLS ZXCV ROW
    U_SYM_LT_FLOOR,
    U_SYM_ZSET,
    U_SYM_LT_CIEL,
    U_SYM_NEQ,
    U_SYM_CSET,
    U_SYM_AEQL,
    U_SYM_ALEQL,
    U_SYM_EQUIV,
    U_SYM_LTEQ,
    U_SYM_NSET,
    U_SYM_GTEQ,
    U_SYM_SQ_LS,
    U_SYM_SQ_RS,
    U_SYM_IQST,
    U_SYM_INTROBANG,

    U_SYM_THUMBS_UP,
    U_SYM_THUMBS_DN
};

enum my_keycodes {
    // GREEK 1234 ROW
    GR_GRV = QK_KB_11,
    GR_1,
    GR_2,
    GR_3,
    GR_4,
    GR_5,
    GR_6,
    GR_7,
    GR_8,
    GR_9,
    GR_0,
    GR_MINS,
    GR_EQL,

    // GREEK QWER ROW
    GR_Q,
    GR_W,
    GR_E,
    GR_R,
    GR_T,
    GR_Y,
    GR_U,
    GR_I,
    GR_O,
    GR_P,
    GR_LBRC,
    GR_RBRC,
    GR_BSLS,

    // GREEK ASDF ROW
    GR_A,
    GR_S,
    GR_D,
    GR_F,
    GR_G,
    GR_H,
    GR_J,
    GR_K,
    GR_L,
    GR_SCLN,
    GR_QUOT,

    // GREEK ZXC ROW
    GR_Z,
    GR_X,
    GR_C,
    GR_B,
    GR_N,
    GR_M,
    GR_COMM,
    GR_DOT,
    GR_SLSH,

    // SYMBOLS 1234 ROW
    SYM_1,
    SYM_2,
    SYM_3,
    SYM_4,
    SYM_5,
    SYM_8,
    SYM_0,
    SYM_EQL,

    // SYMBOLS QWERTY ROW
    SYM_Q,
    SYM_W,
    SYM_E,
    SYM_R,
    SYM_T,
    SYM_Y,
    SYM_U,
    SYM_I,
    SYM_O,
    SYM_P,
    SYM_LBRC,
    SYM_BSLS,

    // SYMBOLS ASDF ROW
    SYM_A,
    SYM_S,
    SYM_D,
    SYM_F,
    SYM_G,
    SYM_H,
    SYM_J,
    SYM_K,
    SYM_L,
    SYM_SCLN,

    // SYMBOLS ZXC ROW
    SYM_Z,
    SYM_X,
    SYM_C,
    SYM_V,
    SYM_B,
    SYM_N,
    SYM_M,
    SYM_COMM,
    SYM_DOT,
    SYM_SLSH,
    SYM_P1
};

// Undefined Key Codes
#define GR_V _______
#define SYM_6 _______
#define SYM_7 _______
#define SYM_9 _______
#define SYM_MINS _______
#define SYM_RBRC _______
#define SYM_QUOT _______
#define SYM_P2 _______
#define SYM_P3 _______
#define SYM_GRV _______

// Helpers
#define SEND(X, Y) send(X, Y, record)
#define SEND_UNICODE_UP(X, Y) send_unicode_up(get_index(x, y))

bool process_greek(uint16_t keycode, keyrecord_t *record);
bool process_symbol(uint16_t keycode, keyrecord_t *record);
bool process_record_unicode(uint16_t keycode, keyrecord_t *record);
void leader_unicode(void);

#endif
