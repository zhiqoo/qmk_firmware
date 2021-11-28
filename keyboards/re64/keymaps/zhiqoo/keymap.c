#include QMK_KEYBOARD_H
#include <stdio.h>

enum layer_number {
    _L0 = 0,
    _L1,
    _L2,
    _L3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_L0] = LAYOUT(
        // ,--------+--------+--------+--------+--------+--------+--------.                      ,--------+--------+--------+--------+--------+--------+--------+--------.
              KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                           KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSLS,  KC_GRV,
        // |--------+--------+--------+--------+--------+--------+--------'                      |--------+--------+--------+--------+--------+--------+--------+--------|
             TO(_L1),    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
        // |--------+--------+--------+--------+--------+--------|                               |--------+--------+--------+--------+--------+--------+--------+--------'
                KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,                                 XXXXXXX, XXXXXXX, XXXXXXX,    KC_L, KC_SCLN, KC_QUOT,  KC_ENT,
        // |--------+--------+--------+--------+--------+--------|                               |--------+--------+--------+--------+--------+--------+--------|
             KC_LSFT,    KC_Z,    KC_X,    KC_B,    KC_C,    KC_V,                                 XXXXXXX, XXXXXXX, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, XXXXXXX,
        // |--------+--------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------+--------'
             KC_LCTL, MO(_L2),  KC_SPC,                    KC_GRV,  KC_ENT, KC_SLEP,      KC_WAKE, KC_HENK,  KC_SPC,          KC_RALT, KC_RGUI
        // `--------+--------+--------+-----------------+--------+--------+--------'    `--------+--------+--------+--------+--------+--------'
    ),
    [_L1] = LAYOUT(
        // ,--------+--------+--------+--------+--------+--------+--------.                      ,--------+--------+--------+--------+--------+--------+--------+--------.
              KC_ESC,    KC_1,    KC_7,    KC_8,    KC_9,    KC_5,    KC_6,                          KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,
        // |--------+--------+--------+--------+--------+--------+--------'                      |--------+--------+--------+--------+--------+--------+--------+--------|
             TO(_L0),    KC_Q,    KC_W,    KC_Y,    KC_R,    KC_T,                                 XXXXXXX, XXXXXXX, KC_PSCR, KC_SLCK, KC_PAUS,   KC_UP, XXXXXXX, XXXXXXX,
        // |--------+--------+--------+--------+--------+--------|                               |--------+--------+--------+--------+--------+--------+--------+--------'
                KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,                                 XXXXXXX, XXXXXXX, KC_HOME,    KC_L, KC_LEFT, KC_RGHT, XXXXXXX,
        // |--------+--------+--------+--------+--------+--------|                               |--------+--------+--------+--------+--------+--------+--------|
             KC_LSFT,    KC_N,    KC_M,    KC_J,    KC_C,    KC_V,                                 XXXXXXX, XXXXXXX,  KC_END, KC_PGDN, KC_DOWN, XXXXXXX, XXXXXXX,
        // |--------+--------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------+--------'
             KC_LCTL, MO(_L2),  KC_SPC,                    KC_GRV,  KC_ENT, KC_SLEP,      KC_WAKE, XXXXXXX, XXXXXXX,          XXXXXXX, KC_RGUI
        // `--------+--------+--------+-----------------+--------+--------+--------'    `--------+--------+--------+--------+--------+--------'
    ),
    [_L2] = LAYOUT(
        // ,--------+--------+--------+--------+--------+--------+--------.                      ,--------+--------+--------+--------+--------+--------+--------+--------.
              KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_0, KC_PSCR,                           KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSLS,  KC_GRV,
        // |--------+--------+--------+--------+--------+--------+--------'                      |--------+--------+--------+--------+--------+--------+--------+--------|
             TO(_L3),    KC_U,    KC_I,    KC_O,    KC_P,    KC_K,                                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
        // |--------+--------+--------+--------+--------+--------|                               |--------+--------+--------+--------+--------+--------+--------+--------'
                KC_A,    KC_L, KC_LBRC, KC_SCLN,    KC_G,    KC_H,                                    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,  KC_ENT,
        // |--------+--------+--------+--------+--------+--------|                               |--------+--------+--------+--------+--------+--------+--------|
             KC_LSFT, KC_QUOT, KC_COMM,  KC_DOT,    KC_C,    KC_V,                                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, MO(_L1),
        // |--------+--------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------+--------'
             KC_LCTL, MO(_L2),  KC_SPC,                    KC_GRV,  KC_ENT, KC_SLEP,      KC_WAKE,  KC_SPC,  KC_SPC,          KC_RALT, KC_RGUI
        // `--------+--------+--------+-----------------+--------+--------+--------'    `--------+--------+--------+--------+--------+--------'
    ),
    [_L3] = LAYOUT(
        // ,--------+--------+--------+--------+--------+--------+--------.                      ,--------+--------+--------+--------+--------+--------+--------+--------.
              KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                           KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSLS,  KC_GRV,
        // |--------+--------+--------+--------+--------+--------+--------'                      |--------+--------+--------+--------+--------+--------+--------+--------|
              KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
        // |--------+--------+--------+--------+--------+--------|                               |--------+--------+--------+--------+--------+--------+--------+--------'
             KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,  KC_ENT,
        // |--------+--------+--------+--------+--------+--------|                               |--------+--------+--------+--------+--------+--------+--------|
             KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, MO(_L1),
        // |--------+--------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------+--------'
             KC_LCTL, TO(_L0), KC_LALT,                    KC_GRV,  KC_SPC, KC_SLEP,      KC_WAKE,  KC_SPC,  KC_SPC,          KC_RALT, KC_RGUI
        // `--------+--------+--------+-----------------+--------+--------+--------'    `--------+--------+--------+--------+--------+--------'
    ),
};


#ifdef OLED_ENABLE

static void print_status_narrow(void) {
    oled_write_ln_P(PSTR(""), false);
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _L0:
            oled_write_ln_P(PSTR("1st"), false);
            break;
        case _L1:
            oled_write_ln_P(PSTR("2nd"), false);
            break;
        case _L2:
            oled_write_ln_P(PSTR("3rd"), false);
            break;
        case _L3:
            oled_write_ln_P(PSTR("4th"), false);
            break;
        default:
            oled_write_P(PSTR("n/a"), false);
    }

    #ifdef RGBLIGHT_ENABLE
        oled_write_ln_P(PSTR(""), false);
        oled_write_ln_P(PSTR("LED"), false);
        oled_write_ln_P(PSTR(""), false);
        static char rgbMode[6] = {0};
        snprintf(rgbMode, sizeof(rgbMode), "M:%-3d", rgblight_get_mode());
        oled_write(rgbMode, false);
        static char rgbHue[6] = {0};
        snprintf(rgbHue, sizeof(rgbHue), "H:%-3d", rgblight_get_hue());
        oled_write(rgbHue, false);
        static char rgbSat[6] = {0};
        snprintf(rgbSat, sizeof(rgbSat), "S:%-3d", rgblight_get_sat());
        oled_write(rgbSat, false);
        static char rgbVal[6] = {0};
        snprintf(rgbVal, sizeof(rgbVal), "V:%-3d", rgblight_get_val());
        oled_write(rgbVal, false);
    #endif // RGBLIGHT_ENABLE

}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) return OLED_ROTATION_270;
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    }
}

#endif // OLED_ENABLE

#ifdef ENCODER_ENABLE

keyevent_t encoder_left_ccw  = {
    .key = (keypos_t){.row = 1, .col = 6},
    .pressed = false
};

keyevent_t encoder_left_cw  = {
    .key = (keypos_t){.row = 2, .col = 6},
    .pressed = false
};

keyevent_t encoder_right_ccw  = {
    .key = (keypos_t){.row = 3, .col = 6},
    .pressed = false
};

keyevent_t encoder_right_cw  = {
    .key = (keypos_t){.row = 4, .col = 6},
    .pressed = false
};

void matrix_scan_user(void) {
    if (IS_PRESSED(encoder_left_ccw)) {
        encoder_left_ccw.pressed = false;
        encoder_left_ccw.time = (timer_read() | 1);
        action_exec(encoder_left_ccw);
    }

    if (IS_PRESSED(encoder_left_cw)) {
        encoder_left_cw.pressed = false;
        encoder_left_cw.time = (timer_read() | 1);
        action_exec(encoder_left_cw);
    }

    if (IS_PRESSED(encoder_right_ccw)) {
        encoder_right_ccw.pressed = false;
        encoder_right_ccw.time = (timer_read() | 1);
        action_exec(encoder_right_ccw);
    }

    if (IS_PRESSED(encoder_right_cw)) {
        encoder_right_cw.pressed = false;
        encoder_right_cw.time = (timer_read() | 1);
        action_exec(encoder_right_cw);
    }
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // Left rotary
        if (!clockwise){
            encoder_left_cw.pressed = true;
            encoder_left_cw.time = (timer_read() | 1);
            action_exec(encoder_left_cw);
        } else {
            encoder_left_ccw.pressed = true;
            encoder_left_ccw.time = (timer_read() | 1);
            action_exec(encoder_left_ccw);
        }
    } else if (index == 1) { // Right rotary Note:Reverse Rotation
        if (!clockwise){
            encoder_right_cw.pressed = true;
            encoder_right_cw.time = (timer_read() | 1);
            action_exec(encoder_right_cw);
        } else {
            encoder_right_ccw.pressed = true;
            encoder_right_ccw.time = (timer_read() | 1);
            action_exec(encoder_right_ccw);
        }
    }
    return true;
}
#endif // ENCODER_ENABLE

#ifdef RGBLIGHT_LAYERS
const rgblight_segment_t PROGMEM rgb_layer_1st[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_RED},      {1, 4, HSV_CYAN},   {5, 2, HSV_YELLOW}, //left
    {7, 1, HSV_WHITE},    {8, 5, HSV_CYAN},
    {13, 1, HSV_MAGENTA}, {14, 3, HSV_CYAN},  {17, 2, HSV_YELLOW},
    {19, 1, HSV_MAGENTA}, {20, 3, HSV_CYAN},  {23, 2, HSV_YELLOW},
    {25, 1, HSV_MAGENTA}, {26, 1, HSV_WHITE}, {27, 2, HSV_MAGENTA}, {29, 1, HSV_RED},
    {30, 34, HSV_BLACK}, // right
    {64, 6, HSV_WHITE}, // left back
    {67, 6, HSV_WHITE} //right back
);

const rgblight_segment_t PROGMEM rgb_layer_2nd[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_RED},      {1, 4, HSV_BLUE},   {5, 2, HSV_PURPLE}, // left
    {7, 1, HSV_WHITE},    {8, 5, HSV_BLUE},
    {13, 1, HSV_MAGENTA}, {14, 3, HSV_BLUE},  {17, 2, HSV_PURPLE},
    {19, 1, HSV_MAGENTA}, {20, 3, HSV_BLUE},  {23, 2, HSV_PURPLE},
    {25, 1, HSV_MAGENTA}, {26, 1, HSV_WHITE}, {27, 2, HSV_MAGENTA}, {29, 1, HSV_RED},
    {30, 34, HSV_BLACK}, // right
    {64, 6, HSV_WHITE}, // left back
    {67, 6, HSV_WHITE} //right back
);

const rgblight_segment_t PROGMEM rgb_layer_3rd[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_BLACK},  {1, 6, HSV_WHITE}, // left
    {7, 1, HSV_BLACK},  {8, 5, HSV_WHITE},
    {13, 1, HSV_BLACK}, {14, 5, HSV_WHITE},
    {19, 1, HSV_BLACK}, {20, 5, HSV_WHITE},
    {25, 1, HSV_BLACK}, {26, 1, HSV_RED}, {27, 3, HSV_BLACK},
    {30, 34, HSV_BLACK}, // right
    {64, 6, HSV_WHITE}, // left back
    {67, 6, HSV_WHITE} //right back
);

const rgblight_segment_t PROGMEM rgb_layer_4th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_RED}, {1, 6, HSV_PINK}, // left
    {7, 1, HSV_PURPLE}, {8, 5, HSV_YELLOW},
    {13, 1, HSV_PURPLE}, {14, 5, HSV_GREEN},
    {19, 1, HSV_PURPLE}, {20, 5, HSV_CYAN},
    {25, 5, HSV_BLUE},
    {30, 8, HSV_PINK}, // right
    {38, 7, HSV_YELLOW}, {45, 1, HSV_PURPLE},
    {46, 6, HSV_GREEN}, {52, 1, HSV_PURPLE},
    {53, 5, HSV_CYAN}, {58, 2, HSV_PURPLE},
    {60, 4, HSV_BLUE},
    {64, 6, HSV_WHITE}, // left back
    {67, 6, HSV_WHITE} //right back
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_layer_1st,
    rgb_layer_2nd,
    rgb_layer_3rd,
    rgb_layer_4th
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
}

// layer_state_t layer_state_set_user(layer_state_t state) {
//     rgblight_set_layer_state(0, get_highest_layer(state) == _L0);
//     rgblight_set_layer_state(1, get_highest_layer(state) == _L1);
//     rgblight_set_layer_state(2, get_highest_layer(state) == _L2);
//     rgblight_set_layer_state(3, get_highest_layer(state) == _L3);
//
//     return state;
// }

#endif // RGBLIGHT_LAYERS
