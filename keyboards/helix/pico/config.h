#pragma once

#define VENDOR_ID       0x3265
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0002
#define MANUFACTURER    Yushakobo
#define PRODUCT         HelixPico

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

#define USE_SERIAL

#define SOFT_SERIAL_PIN D2

#define MASTER_LEFT

#define MATRIX_ROWS 8 // Rows are doubled-up
#define MATRIX_ROW_PINS { D4, C6, D7, E6 }
#define MATRIX_COLS 7
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2 }

#define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 5

#ifdef OLED_ENABLE
  #define OLED_FONT_H "common/glcdfont.c"
  #define OLED_TIMEOUT 1000
  #define OLED_FADE_OUT
  #define OLED_FADE_OUT_INTERVAL 1
#endif

#ifdef AUDIO_ENABLE
  #define AUDIO_PIN B5
  #define STARTUP_SONG SONG(STARTUP_SOUND)
  #define AUDIO_CLICKY
#endif

#ifdef RGBLIGHT_ENABLE
  #define RGB_DI_PIN D3
  #define RGBLED_NUM 25 // double if split
  #define RGBLIGHT_ANIMATIONS
  #define RGBLIGHT_HUE_STEP 10
  #define RGBLIGHT_SAT_STEP 17
#endif

// #ifndef IOS_DEVICE_ENABLE
//   #if RGBLED_NUM <= 6
//     #define RGBLIGHT_LIMIT_VAL 255
//   #else
//     #define RGBLIGHT_LIMIT_VAL 130
//   #endif
//   #define RGBLIGHT_VAL_STEP 17
// #else
//   #if RGBLED_NUM <= 6
//     #define RGBLIGHT_LIMIT_VAL 90
//   #else
//     #define RGBLIGHT_LIMIT_VAL 45
//   #endif
//   #define RGBLIGHT_VAL_STEP 4
// #endif

// #if defined(RGBLIGHT_ENABLE) && !defined(IOS_DEVICE_ENABLE)
// // USB_MAX_POWER_CONSUMPTION value for Helix keyboard
// //  120  RGBoff
// //  330  RGB 6
// //  300  RGB 32
// //  310  OLED & RGB 32
//   #define USB_MAX_POWER_CONSUMPTION 400
// #else
//   // fix iPhone and iPad power adapter issue
//   // iOS device need lessthan 100
//   #define USB_MAX_POWER_CONSUMPTION 100
// #endif
