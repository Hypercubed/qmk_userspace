#pragma once

#ifndef UNICODE_TYPE_DELAY
#    define UNICODE_TYPE_DELAY 10
#endif

#define ASCII_REG "0174"
#define ASCII_DIV "0247"
#define ASCII_MUL "0215"
#define ASCII_HALF "0189"
#define ASCII_TQTR "0190"
#define ASCII_INIFIN "236"
#define ASCII_IQST "168"
#define ASCII_L_AELIG "145"

#define SEND_ASCII(X) register_asciimap(PSTR(X))

bool process_ascii_overrides(uint16_t keycode);
