#include QMK_KEYBOARD_H
#include <stdio.h>


#ifdef RGBLIGHT_LAYERS
/* you can change color parameters as you want below */
#define MY_HSV_CYAN    0x66, 0xC7, 0xBC
#define MY_HSV_MAGENTA 0x00, 0xEB, 0xD1
#define MY_HSV_RED     0x00, 0xFF, 0xD6
#define MY_HSV_BLUE    0xA7, 0xE3, 0xC1
#define MY_HSV_PURPLE  0xC3, 0xEB, 0xD1
#define MY_HSV_GREEN   0x4F, 0xFF, 0xB2
#define MY_HSV_YELLOW  0x1A, 0xFF, 0xE2
/* if you want to change current lighting matrix for each layers, you can edit L154- */
#endif

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
             TO(_L0),    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                 XXXXXXX, XXXXXXX, KC_PSCR, KC_SLCK, KC_PAUS,   KC_UP, XXXXXXX, XXXXXXX,
        // |--------+--------+--------+--------+--------+--------|                               |--------+--------+--------+--------+--------+--------+--------+--------'
                KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,                                 XXXXXXX, XXXXXXX, KC_HOME,    KC_L, KC_LEFT, KC_RGHT, XXXXXXX,
        // |--------+--------+--------+--------+--------+--------|                               |--------+--------+--------+--------+--------+--------+--------|
             KC_LSFT,    KC_N,    KC_M,    KC_J,    KC_C,    KC_V,                                 XXXXXXX, XXXXXXX,  KC_END, KC_PGDN, KC_DOWN, XXXXXXX, XXXXXXX,
        // |--------+--------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------+--------'
             KC_LCTL, _______,  KC_SPC,                    KC_GRV,  KC_ENT, KC_SLEP,      KC_WAKE, XXXXXXX, XXXXXXX,          XXXXXXX, KC_RGUI
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
             KC_LSFT, KC_QUOT, KC_COMM,  KC_DOT,    KC_C,    KC_V,                                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, TO(_L1),
        // |--------+--------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------+--------'
             KC_LCTL, _______,  KC_SPC,                    KC_GRV,  KC_ENT, KC_SLEP,      KC_WAKE,  KC_SPC,  KC_SPC,          KC_RALT, KC_RGUI
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
             KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, TO(_L1),
        // |--------+--------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------+--------'
             KC_LCTL, TO(_L0), KC_LALT,                    KC_GRV,  KC_SPC, KC_SLEP,      KC_WAKE,  KC_SPC,  KC_SPC,          KC_RALT, KC_RGUI
        // `--------+--------+--------+-----------------+--------+--------+--------'    `--------+--------+--------+--------+--------+--------'
    ),
};


#ifdef OLED_ENABLE

static void print_status_narrow(void) {
    oled_write_ln_P(PSTR(""), false);
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
    static const char PROGMEM logo[] = {
        0x81, 0x82, 0x83, 0x84, 0x85,
        0x86, 0x87, 0x88, 0x89, 0x8A,
        0x8B, 0x8C, 0x8D, 0x8E, 0x8F,
        0x90, 0x91, 0x92, 0x93, 0x94,
        0x95, 0x96, 0x97, 0x98, 0x99,
        0x9A, 0x9B, 0x9C, 0x9D, 0x9E,
        0xA1, 0xA2, 0xA3, 0xA4, 0xA5,
        0xA6, 0xA7, 0xA8, 0xA9, 0xAA,
        0xAB, 0xAC, 0xAD, 0xAE, 0xAF,
        0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xB5, 0xB6, 0xB7, 0xB8, 0xB9,
        0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0x00
    };
    oled_write_P(logo, false);
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

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // Left rotary
        if (clockwise){
            tap_code(KC_WH_D);
        } else {
            tap_code(KC_WH_U);
        }
    } else if (index == 1) { // Right rotary
        if (clockwise){
            tap_code(KC_VOLU); // might be inverted
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}
#endif // ENCODER_ENABLE

#ifdef RGBLIGHT_LAYERS

const rgblight_segment_t PROGMEM rgb_layer_1st[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, MY_HSV_RED},      {1, 4, MY_HSV_CYAN},   {5, 2, MY_HSV_YELLOW}, // left row1
    {7, 1, HSV_WHITE},       {8, 5, MY_HSV_CYAN}, // left row2
    {13, 1, MY_HSV_MAGENTA}, {14, 3, MY_HSV_CYAN},  {17, 2, MY_HSV_YELLOW}, // left row3
    {19, 1, MY_HSV_MAGENTA}, {20, 3, MY_HSV_CYAN},  {23, 2, MY_HSV_YELLOW}, // left row4
    {25, 1, MY_HSV_MAGENTA}, {26, 1, HSV_WHITE},    {27, 2, MY_HSV_MAGENTA}, {29, 1, MY_HSV_RED}, // left row5
    {30, 34, HSV_OFF}, // right
    {64, 6, HSV_OFF} // left back
);

const rgblight_segment_t PROGMEM rgb_layer_2nd[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, MY_HSV_RED},      {1, 4, MY_HSV_BLUE},   {5, 2, MY_HSV_PURPLE}, // left row1
    {7, 1, HSV_WHITE},       {8, 5, MY_HSV_BLUE},  // left row2
    {13, 1, MY_HSV_MAGENTA}, {14, 3, MY_HSV_BLUE},  {17, 2, MY_HSV_PURPLE}, // left row3
    {19, 1, MY_HSV_MAGENTA}, {20, 3, MY_HSV_BLUE},  {23, 2, MY_HSV_PURPLE}, // left row4
    {25, 1, MY_HSV_MAGENTA}, {26, 1, HSV_WHITE},    {27, 2, MY_HSV_MAGENTA}, {29, 1, MY_HSV_RED}, // left row5
    {30, 34, HSV_OFF}, // right
    {64, 6, HSV_OFF} // left back
);

const rgblight_segment_t PROGMEM rgb_layer_3rd[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_OFF},      {1, 6, HSV_WHITE}, // left row1
    {7, 1, HSV_OFF},      {8, 5, HSV_WHITE}, // left row2
    {13, 1, HSV_OFF},     {14, 5, HSV_WHITE}, // left row3
    {19, 1, HSV_OFF},     {20, 5, HSV_WHITE}, // left row4
    {25, 1, HSV_OFF},     {26, 1, MY_HSV_RED},   {27, 3, HSV_OFF}, // left row5
    {30, 34, HSV_OFF}, // right
    {64, 6, HSV_OFF} // left back
);

const rgblight_segment_t PROGMEM rgb_layer_4th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, MY_HSV_RED},      {1, 6, MY_HSV_MAGENTA}, // left row1
    {7, 1, MY_HSV_PURPLE},   {8, 5, MY_HSV_YELLOW}, // left row2
    {13, 1, MY_HSV_PURPLE},  {14, 5, MY_HSV_GREEN}, // left row3
    {19, 1, MY_HSV_PURPLE},  {20, 5, MY_HSV_CYAN}, // left row4
    {25, 5, MY_HSV_BLUE}, // left row5
    {30, 8, MY_HSV_MAGENTA}, // right row1
    {38, 7, MY_HSV_YELLOW},  {45, 1, MY_HSV_PURPLE}, // right row2
    {46, 6, MY_HSV_GREEN},   {52, 1, MY_HSV_PURPLE}, // right row3
    {53, 5, MY_HSV_CYAN},    {58, 2, MY_HSV_PURPLE}, // right row4
    {60, 4, MY_HSV_BLUE}, // right row5
    {64, 6, HSV_OFF} // left back
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

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _L0));
    rgblight_set_layer_state(1, layer_state_cmp(state, _L1));
    rgblight_set_layer_state(2, layer_state_cmp(state, _L2));
    rgblight_set_layer_state(3, layer_state_cmp(state, _L3));
    return state;
}

#endif // RGBLIGHT_LAYERS
