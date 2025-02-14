#include QMK_KEYBOARD_H

#define _COLEMAK 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_ortho_5x6(
        KC_ESC,  KC_1,  KC_2,  KC_3,    KC_4,    KC_5,          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
        KC_TAB,  KC_Q,  KC_W,  KC_F,    KC_P,    KC_B,          KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_MINS,
        KC_LCTL, KC_A,  KC_R,  KC_S,    KC_T,    KC_G,          KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
        KC_LSFT, KC_Z,  KC_X,  KC_C,    KC_D,    KC_V,          KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                        RAISE, KC_LALT, KC_ENT, KC_LGUI,        KC_BSPC,  KC_SPC, KC_RALT, LOWER
    ),
    [_RAISE] = LAYOUT_ortho_5x6(
        KC_ESC,  KC_F1, KC_F2, KC_F3,   KC_F4,   KC_F5,         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_NO,
        KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,         KC_BSLS, KC_LCBR, KC_RCBR, KC_AMPR, KC_ASTR, KC_NO,
        KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,         KC_CIRC, KC_LPRN, KC_RPRN, KC_MINS, KC_EXLM, KC_EQL,
        KC_TRNS, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,         KC_TILD, KC_LBRC, KC_RBRC, KC_DLR,  KC_HASH, KC_PLUS,
                        KC_NO, KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   LCA(KC_DEL)
    ),
    [_LOWER] = LAYOUT_ortho_5x6(
        KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, KC_NO,
        KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                        KC_NO, KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO
    )
};
