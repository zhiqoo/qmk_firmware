#pragma once

#include "config_common.h"

#ifndef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D2
#define SERIAL_USE_MULTI_TRANSACTION
#endif

#if !defined(NO_ACTION_MACRO)
    #define NO_ACTION_MACRO
#endif
#if !defined(NO_ACTION_FUNCTION)
    #define NO_ACTION_FUNCTION
#endif

#define DIODE_DIRECTION COL2ROW

// Use the lily version to get the Lily58 logo instead of the qmk logo
#define OLED_FONT_H "lib/glcdfont_lily.c"
