#include "kb.h"
#include "keymap_canadian_multilingual.h"

enum astro46_layers {
    _DEFAULT,
    _NUMBERS,
    _FNCTION,
    _ACCENTA,
};

enum tap {
    TD_EG_CI,
    TD_COM_CC,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_EG_CI] = ACTION_TAP_DANCE_DOUBLE(CA_EGRV, CA_CIRC),
    [TD_COM_CC] = ACTION_TAP_DANCE_DOUBLE(CA_COMM, CA_CCED),
};

#define _DEFAULT 0
#define _NUMBERS 1
#define _FNCTION 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_DEFAULT] = KEYMAP(KC_TAB,         KC_Q,         KC_Y,    KC_O,    KC_U,    KC_Z,    CA_CIRC,
                        CA_CCED,        KC_W,         KC_D,    KC_N,    KC_C,    KC_K,    KC_BSPC,
                        RCTL_T(KC_ESC), KC_H,         KC_I,    KC_E,    KC_A,    TD(TD_COM_CC), OSM(MOD_LGUI),
                        KC_DEL,         KC_G,         KC_T,    KC_R,    KC_S,    KC_P,    CA_SCLN,
                        OSM(MOD_LSFT),  KC_J,         TD(TD_EG_CI), CA_EACU, CA_DOT,  KC_X,
                                        KC_V,         KC_M,    KC_L,    KC_F,    KC_B,    KC_BSLS,
                        OSM(MOD_LALT),  MO(_NUMBERS), KC_ENT,
                        KC_SPC,         MO(_FNCTION), OSM(MOD_LCTL)),

    [_NUMBERS] = KEYMAP(CA_SLSH,      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,
                        KC_TRNS,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
                        KC_TRNS,      CA_LPRN, ALGR(CA_EGRV), ALGR(KC_LBRC), KC_TRNS, KC_TRNS, KC_TRNS,
                        KC_TRNS,      ALGR(CA_SCLN), KC_TRNS, KC_TRNS, CA_MINS, CA_EQL,  KC_TRNS,
                        KC_LSFT,      CA_RPRN, ALGR(KC_BSLS), ALGR(KC_RBRC), KC_TRNS, KC_TRNS,
                        KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                        KC_TRNS,      KC_TRNS, KC_TRNS,
                        DF(_DEFAULT), KC_TRNS, KC_ALGR),

    [_FNCTION] = KEYMAP(KC_TRNS, KC_BTN1, KC_MS_UP, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS,
                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLU,
                        KC_TRNS, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS,
                        KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_VOLD,
                        KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MUTE,
                        KC_TRNS, KC_TRNS, KC_TRNS,
                        DF(_DEFAULT), KC_TRNS, RESET),
};

void matrix_init_user(void) {
    set_single_persistent_default_layer(_DEFAULT);
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

