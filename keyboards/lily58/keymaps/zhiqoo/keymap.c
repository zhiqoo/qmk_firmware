#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _LWR,
  _RSE,
  _ADJ,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
   // ,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_GESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_EQL,
   // |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_MINS,
   // |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
   // |--------+--------+--------+--------+--------+--------|--------.  ,--------|--------+--------+--------+--------+--------+--------|
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,    KC_RBRC,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, SFT_T(KC_BSLS),
   // `--------------------------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------------------------'
                                   KC_LALT, KC_LCTL,C(KC_SPC), KC_SPC,     KC_ENT, KC_BSPC,MO(_LWR), KC_RGUI
   //                            `-----------------------------------'  `-----------------------------------'
),

[_LWR] = LAYOUT(
  // ,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  // |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       _______, _______, _______, _______, _______, _______,                      XXXXXXX, XXXXXXX, KC_VOLD,   KC_UP, KC_VOLU, KC_PSCR,
  // |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       _______, _______, _______, _______, _______, _______,                      XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,
  // |--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
       _______, _______, _______, _______, _______, _______, KC_LCBR,    KC_RCBR, XXXXXXX, XXXXXXX, KC_BSPC,KC_DEL,C(KC_SLSH), _______,
  // `--------------------------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------------------------'
                                  _______, _______, _______, _______,    _______, _______, _______, _______
  //                            `-----------------------------------'  `-----------------------------------'
),

[_RSE] = LAYOUT(
  // ,-----------------------------------------------------.                    ,-----------------------------------------------------.
       _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  // |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  // |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  // |--------+--------+--------+--------+--------+--------|--------.  ,--------|--------+--------+--------+--------+--------+--------|
       _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  // `--------------------------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------------------------'
                                  _______, _______, _______, _______,    _______, _______, _______, _______
  //                            `-----------------------------------'  `-----------------------------------'
),

[_ADJ] = LAYOUT(
    // ,-----------------------------------------------------.                    ,-----------------------------------------------------.
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // |--------+--------+--------+--------+--------+--------|--------.  ,--------|--------+--------+--------+--------+--------+--------|
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // `--------------------------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------------------------'
                                    _______, _______, _______, _______,    _______, _______, _______, _______
    //                            `-----------------------------------'  `-----------------------------------'
)
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LWR, _RSE, _ADJ);
}

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void oled_task_user(void) {
  if (is_keyboard_master()) {
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
