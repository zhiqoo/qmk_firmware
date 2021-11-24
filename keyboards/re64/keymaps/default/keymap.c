/* Copyright 2020 kushima8
 * Copyright 2020 utubo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include <stdio.h>

enum layer_number {
    _FIRST = 0,
    _FN,
    _SECOND,
    _THIRD,
};

#define FIRST  TO(_FIRST)
#define FN  MO(_FN)
#define SECOND TO(_SECOND)
#define THIRD TO(_THIRD)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_FIRST] = LAYOUT(
    // ,-------+-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------+-------+-------.
        KC_ESC ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,KC_6   ,                     KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,KC_EQL ,KC_BSLS,KC_GRV ,
    // |-------+-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------+-------+-------|
        KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                             KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_LBRC,KC_RBRC,KC_BSPC,
    // |-------+-------+-------+-------+-------+-------|                            |-------+-------+-------+-------+-------+-------+-------+-------|
        KC_LCTL,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                             KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT,KC_ENT ,
    // |-------+-------+-------+-------+-------+-------|                            |-------+-------+-------+-------+-------+-------+-------|
        KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,                             KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,FN     ,
    // |-------+-------+-------+-------+-------+-------+-------+-------|    |-------+-------+-------+-------+-------+-------+-------+-------|
        KC_LCTL,FN     ,KC_LALT                ,KC_SPC ,KC_SPC ,SECOND ,     SECOND ,KC_SPC ,KC_SPC         ,KC_RALT,KC_RGUI
    // `-------+-------+-------+-------+-------+-------+-------+-------|    |-------+-------+-------+-------+-------+-------'
    ),
    [_FN] = LAYOUT(
    // ,-------+-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------+-------+-------.
        _______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,                     KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,KC_INS ,KC_DEL ,
    // |-------+-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------+-------+-------|
        KC_CAPS,_______,RGB_TOG,RGB_HUI,RGB_SAI,RGB_VAI,                             _______,_______,KC_PSCR,KC_SLCK,KC_PAUS,KC_UP  ,_______,_______,
    // |-------+-------+-------+-------+-------+-------|                            |-------+-------+-------+-------+-------+-------+-------+-------|
        _______,_______,RGB_MOD,RGB_HUD,RGB_SAD,RGB_VAD,                             _______,_______,KC_HOME,KC_PGUP,KC_LEFT,KC_RGHT,_______,
    // |-------+-------+-------+-------+-------+-------|                            |-------+-------+-------+-------+-------+-------+-------|
        _______,_______,_______,_______,_______,_______,                             _______,_______,KC_END ,KC_PGDN,KC_DOWN,_______,_______,
    // |-------+-------+-------+-------+-------+-------+-------+-------|    |-------+-------+-------+-------+-------+-------+-------+-------|
        _______,_______,_______                ,_______,_______,_______,     _______,_______,_______         ,_______,_______
    // `-------+-------+-------+-------+-------+-------+-------+-------|    |-------+-------+-------+-------+-------+-------'
    ),
    [_SECOND] = LAYOUT(
    // ,-------+-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------+-------+-------.
        KC_ESC ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,KC_6   ,                     KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,KC_EQL ,KC_BSLS,KC_GRV ,
    // |-------+-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------+-------+-------|
        KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                             KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_LBRC,KC_RBRC,KC_BSPC,
    // |-------+-------+-------+-------+-------+-------|                            |-------+-------+-------+-------+-------+-------+-------+-------|
        KC_LCTL,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                             KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT,KC_ENT ,
    // |-------+-------+-------+-------+-------+-------|                            |-------+-------+-------+-------+-------+-------+-------|
        KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,                             KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,FN     ,
    // |-------+-------+-------+-------+-------+-------+-------+-------|    |-------+-------+-------+-------+-------+-------+-------+-------|
        KC_LCTL,FN     ,KC_LALT                ,KC_SPC ,KC_SPC ,THIRD  ,     THIRD  ,KC_SPC ,KC_SPC         ,KC_RALT,KC_RGUI
    // `-------+-------+-------+-------+-------+-------+-------+-------|    |-------+-------+-------+-------+-------+-------'
    ),
    [_THIRD] = LAYOUT(
    // ,-------+-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------+-------+-------.
        KC_ESC ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,KC_6   ,                     KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,KC_EQL ,KC_BSLS,KC_GRV ,
    // |-------+-------+-------+-------+-------+-------+-------|                    |-------+-------+-------+-------+-------+-------+-------+-------|
        KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                             KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_LBRC,KC_RBRC,KC_BSPC,
    // |-------+-------+-------+-------+-------+-------|                            |-------+-------+-------+-------+-------+-------+-------+-------|
        KC_LCTL,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                             KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT,KC_ENT ,
    // |-------+-------+-------+-------+-------+-------|                            |-------+-------+-------+-------+-------+-------+-------|
        KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,                             KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,FN     ,
    // |-------+-------+-------+-------+-------+-------+-------+-------|    |-------+-------+-------+-------+-------+-------+-------+-------|
        KC_LCTL,FN     ,KC_LALT                ,KC_SPC ,KC_SPC ,FIRST  ,     FIRST  ,KC_SPC ,KC_SPC         ,KC_RALT,KC_RGUI
    // `-------+-------+-------+-------+-------+-------+-------+-------|    |-------+-------+-------+-------+-------+-------'
    ),
};

#ifdef OLED_DRIVER_ENABLE

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
        case _FIRST:
            oled_write_ln_P(PSTR("1st"), false);
            break;
        case _FN:
            oled_write_ln_P(PSTR("FN"), false);
            break;
        case _SECOND:
            oled_write_ln_P(PSTR("2nd"), false);
            break;
        case _THIRD:
            oled_write_ln_P(PSTR("3rd"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
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
    #endif

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

#endif

#ifdef ENCODER_ENABLE

/* Rotary encoder settings */
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // Left rotary
        switch (get_highest_layer(layer_state)) {
            case _FIRST:
            case _SECOND:
            case _THIRD:
                tap_code(clockwise ? KC_WH_U : KC_WH_D);
                break;
            case _FN:
                tap_code(clockwise ? KC_UP : KC_DOWN);
                break;
            default:
                break;
        }
    } else if (index == 1) {
        // Right rotary Note:Reverse Rotation
        switch (get_highest_layer(layer_state)) {
            case _FIRST:
            case _SECOND:
            case _THIRD:
                tap_code(clockwise ? KC_WH_U : KC_WH_D);
                break;
            case _FN:
                tap_code(clockwise ? KC_UP : KC_DOWN);
                break;
            default:
                break;
        }
    }
}

#endif
