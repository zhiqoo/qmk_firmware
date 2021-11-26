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

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

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
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
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
    if (index == 0) {
        // Left rotary
        if (!clockwise){
            encoder_left_cw.pressed = true;
            encoder_left_cw.time = (timer_read() | 1);
            action_exec(encoder_left_cw);
        } else {
            encoder_left_ccw.pressed = true;
            encoder_left_ccw.time = (timer_read() | 1);
            action_exec(encoder_left_ccw);
        }
    } else if (index == 1) {
        // Right rotary Note:Reverse Rotation
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
