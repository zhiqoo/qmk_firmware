#pragma once

#define VENDOR_ID       0x3265
// #define PRODUCT_ID      0x0001
#define PRODUCT_ID      0x0004 // pretends helix/rev3_4rows to fit VIA
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
