#include QMK_KEYBOARD_H
#define _LAYER_QWERTY 0
#define _LAYER_COLEMAK 1
#define _LAYER_NAV 2
#define _LAYER_FN 3
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[_LAYER_QWERTY] = LAYOUT_65_ansi_blocker( /* QWERTY */
			KC_GESC,       KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,    KC_7,  KC_8,    KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSPC,   KC_HOME,
		    KC_TAB,        KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,    KC_U,  KC_I,    KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_BSLASH, KC_DEL,
			MO(_LAYER_NAV),		   KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,    KC_J,  KC_K,    KC_L,     KC_SCLN,  KC_QUOT,           KC_ENT,    KC_HOME,
		    KC_LSFT,       KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_N,    KC_M,  KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT,           KC_UP,     KC_END,
		    KC_LCTL,       KC_LGUI,  KC_LALT,                KC_SPC,                KC_RALT,           MO(_LAYER_FN),    KC_LEFT,           KC_DOWN,   KC_RIGHT),
		[_LAYER_COLEMAK] = LAYOUT_65_ansi_blocker( /* COLEMAK */
			_______,       _______,  _______,  _______, _______,_______,  _______,    _______,  _______,    _______,     _______,     _______,  _______,  _______,   _______,
		    _______,        KC_Q,     KC_W,     KC_F,  	KC_P,  	KC_G,  KC_J,    KC_L,  KC_U,    KC_Y,     KC_SCLN,  _______,  _______, _______, _______,
			_______,		KC_A,     KC_R,     KC_S,  	KC_T,  	KC_D,  KC_H,    KC_N,  KC_E,    KC_I,     KC_O,  KC_QUOT,           _______,    _______,
		    _______,       	KC_Z,     KC_X,     KC_C,  	KC_V,  	KC_B,  KC_K,    KC_M,  KC_COMM, KC_DOT,   KC_SLSH,  _______,           _______,     _______,
		    _______,       _______,  _______,                	_______,                _______,           _______,    _______,           _______,   _______),
		[_LAYER_NAV] = LAYOUT_65_ansi_blocker( /* FN */
			KC_GESC,       KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  _______,   KC_HOME,
		    _______,       XXXXXXX,  XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_UP,   KC_END,  KC_DEL,  KC_BSPC,  XXXXXXX, XXXXXXX,    XXXXXXX,
			XXXXXXX,       XXXXXXX,  XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT,XXXXXXX, XXXXXXX,           _______,    XXXXXXX,
		    _______,       XXXXXXX,  XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           _______,    XXXXXXX,
		    _______,       _______,  _______,                  _______,                   _______,          _______, _______,           _______,    _______),
		[_LAYER_FN] = LAYOUT_65_ansi_blocker( /* FN */
			KC_GESC,       KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,   KC_HOME,
		    KC_TRNS,       RGB_TOG,  RGB_MOD, RGB_HUI,RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_SLCK,  KC_PAUS, RESET,    KC_PGUP,
			CTL_T(KC_CAPS),RGB_SPI,  RGB_SPD, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          EEP_RST,  KC_PGDN,
		    KC_LSFT,       DF(_LAYER_QWERTY),  DF(_LAYER_COLEMAK), KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_VOLU,  KC_MUTE,
		    KC_TRNS,       KC_TRNS,  KC_TRNS,                  KC_TRNS,                   KC_TRNS,          KC_TRNS,  KC_MPRV,          KC_VOLD,  KC_MNXT),
};
