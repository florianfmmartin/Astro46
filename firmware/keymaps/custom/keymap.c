#include "kb.h"
#include "keymap_canadian_multilingual.h"

enum astro46_layers {
	_DEFAULT,
	_NUMBERS,
	_FUNC,
	_ACCENT,
};

#define _DEFAULT 0
#define _NUMBERS 1
#define _FNCTION 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_DEFAULT] = KEYMAP(KC_TAB,  KC_Q,         KC_W,    KC_E,   KC_R,    KC_T,    KC_LBRC,
						KC_RBRC, KC_Y,         KC_U,    KC_I,   KC_O,    KC_P,    KC_BSPC,
						KC_ESC,  KC_A,         KC_S,    KC_D,   KC_F,    KC_G,    KC_LCTL,
						KC_DEL,  KC_H,         KC_J,    KC_K,   KC_L,    KC_SCLN, KC_BSLS,
						KC_LSFT, KC_Z,         KC_X,    KC_C,   KC_V,    KC_B,
						KC_N,    KC_M,         KC_COMM, CA_DOT, KC_SLSH, CA_EGRV,
						KC_LGUI, MO(_NUMBERS), KC_ENT,
						KC_SPC,  MO(_FUNC),    KC_LALT),

	[_NUMBERS] = KEYMAP(KC_GRV,       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,
						KC_TRNS,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
						KC_TRNS,      CA_LPRN, ALGR(CA_EGRV), ALGR(KC_LBRC), KC_TRNS, KC_TRNS, KC_TRNS,
						KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,  KC_TRNS,
						KC_LSFT,      CA_RPRN, ALGR(KC_BSLS), ALGR(KC_RBRC), KC_TRNS, KC_TRNS,
						KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
						KC_TRNS,      KC_TRNS, KC_TRNS,
						DF(_DEFAULT), KC_TRNS, KC_TRNS),

	[_FNCTION] = KEYMAP(KC_MNXT,      KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
						KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
						KC_MPRV,      KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
						KC_TRNS,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS,
						KC_LSFT,      KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
						KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
						KC_TRNS,      KC_TRNS, KC_TRNS,
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

