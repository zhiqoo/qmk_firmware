#pragma once

#include "config_common.h"

#define OLED_FONT_H "./lib/glcdfont_re64.c"
#define OLED_TIMEOUT 30000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 1

#define VENDOR_ID    0x3938
#define PRODUCT_ID   0x3634
#define DEVICE_VER   0x0002
#define MANUFACTURER kushima8
#define PRODUCT      Re64
#define DESCRIPTION  60% split keyboard

#define MATRIX_ROWS 10
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { E6, B4, B3, B2, B5 }
#define MATRIX_COL_PINS { D4, F4, F5, F6, F7, B1, D7 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW // = COL = Anode (+), ROW = Cathode (-)

/* Split hand configration */
// #define SPLIT_HAND_MATRIX_GRID B5, B1
// #define SPLIT_HAND_MATRIX_GRID_LOW_IS_RIGHT
#define MASTER_LEFT

#define ENCODERS_PAD_A { C6 }
#define ENCODERS_PAD_B { B6 }
#define ENCODERS_PAD_A_RIGHT { B6 }
#define ENCODERS_PAD_B_RIGHT { C6 }
#define ENCODER_RESOLUTION 2


#define SOFT_SERIAL_PIN D2
#define SERIAL_USE_MULTI_TRANSACTION

#define DEBOUNCE 5

#define RGB_DI_PIN D3
#define RGBLIGHT_LAYERS
#define RGBLED_NUM 76
// #define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_LIMIT_VAL 120
// #define RGBLIGHT_HUE_STEP 8
// #define RGBLIGHT_SAT_STEP 8
// #define RGBLIGHT_VAL_STEP 8

#define RGBLED_SPLIT { 36, 40 }
#define RGBLIGHT_MAX_LAYERS 4

#define LED_LAYOUT( \
L00, L01, L02, L03, L04, L05, L06,        R00, R01, R02, R03, R04, R05, R06, R07, \
L10, L11, L12, L13, L14, L15,             R10, R11, R12, R13, R14, R15, R16, R17, \
L20, L21, L22, L23, L24, L25,             R20, R21, R22, R23, R24, R25, R26, \
L30, L31, L32, L33, L34, L35,             R30, R31, R32, R33, R34, R35, R36, \
L40, L41, L42,      L43, L44,             R40, R41,      R42, R43, \
               L50, L51, L52,             R50, R51, R52, \
               L60, L61, L62,             R60, R61, R62) \
{ \
    L06, L05, L04, L03, L02, L01, L00, \
    L10, L11, L12, L13, L14, L15, \
    L25, L24, L23, L22, L21, L20, \
    L30, L31, L32, L33, L34, L35, \
    L44, L43, L42,      L41, L40, \
    L50, L51, L52, \
    L62, L61, L60, \
    \
    R00, R01, R02, R03, R04, R05, R06, R07, \
    R17, R16, R15, R14, R13, R12, R11, R10, \
    R20, R21, R22, R23, R24, R25, R26, \
    R36, R35, R34, R33, R32, R31, R30, \
    R40, R41,      R42, R43, \
    R52, R51, R50, \
    R60, R61, R62 \
}

  #define RGBLIGHT_LED_MAP LED_LAYOUT( \
     0,  1,  2,  3,  4,  5,  6,        30, 31, 32, 33, 34, 35, 36, 37, \
     7,  8,  9, 10, 11, 12,            38, 39, 40, 41, 42, 43, 44, 45, \
    13, 14, 15, 16, 17, 18,            46, 47, 48, 49, 50, 51, 52, \
    19, 20, 21, 22, 23, 24,            53, 54, 55, 56, 57, 58, 59, \
    25, 26, 27,     28, 29,            60, 61,     62, 63, \
                64, 65, 66,            67, 68, 69, \
                70, 71, 72,            73, 74, 75 \
)

// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
// #define NO_ACTION_MACRO
// #define NO_ACTION_FUNCTION
