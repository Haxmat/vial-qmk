#include QMK_KEYBOARD_H

// Define Layer Names
enum layers {
    _BASE,
    _NAV,
    _SYM,
    _MEDIA,
    _MOUSE,
    _FUN,
    _NUM
};

#define KC_SLCK KC_SCROLL_LOCK
#define KC_REDO KC_AGAIN 
// Define Mod-Tap and Layer-Tap shortcuts for readability
#define BASE_A MT(MOD_LGUI, KC_A)
#define BASE_R MT(MOD_LALT, KC_R)
#define BASE_S MT(MOD_LCTL, KC_S)
#define BASE_T MT(MOD_LSFT, KC_T)
#define BASE_N MT(MOD_RSFT, KC_N)
#define BASE_E MT(MOD_LCTL, KC_E)
#define BASE_I MT(MOD_LALT, KC_I)
#define BASE_O MT(MOD_LGUI, KC_O)

#define LT_TAB  LT(_NAV, KC_TAB)
#define LT_SPC  LT(_MEDIA, KC_SPC)
#define LT_ENT  LT(_SYM, KC_ENT)
#define LT_BSPC LT(_NUM, KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        KC_Q,      KC_W,      KC_F,      KC_P,      KC_B,      KC_J,      KC_L,      KC_U,      KC_Y,      KC_QUOT,
        BASE_A,    BASE_R,    BASE_S,    BASE_T,    KC_G,      KC_M,      BASE_N,    BASE_E,    BASE_I,    BASE_O,
        KC_Z,      KC_X,      KC_C,      KC_D,      KC_V,      KC_K,      KC_H,      KC_COMM,   KC_DOT,    KC_SLSH,
        KC_NO,   KC_NO,   KC_NO,   LT_TAB,    LT_SPC,    LT_ENT,    LT_BSPC,   KC_NO,   KC_NO,   KC_NO
    ),

    [_NAV] = LAYOUT(
        _______,   _______,   _______,   _______,   _______,   KC_REDO,    KC_PSTE,   KC_COPY,   KC_CUT,    KC_UNDO,
        KC_LGUI,   KC_LALT,   KC_LCTL,   KC_LSFT,   _______,   KC_CAPS,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,
        _______,   _______,   _______,   _______,   _______,   KC_INS,    KC_HOME,   KC_PGDN,   KC_PGUP,   KC_END,
        _______,   _______,   _______,   _______,   _______,   KC_ENT,    KC_BSPC, _______,   _______,   _______
    ),

    [_SYM] = LAYOUT(
        KC_LCBR,   S(KC_7),   S(KC_8),   S(KC_9),   KC_RCBR,   _______,   _______,   _______,   _______,   _______,
        KC_COLN,   S(KC_4),   S(KC_5),   S(KC_6),   KC_PLUS,   _______,   KC_RSFT,   KC_LCTL,   KC_LALT,   KC_LGUI,
        KC_NUHS,   S(KC_1),   S(KC_2),   S(KC_3),   S(KC_NUBS),_______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   KC_LPRN,   KC_RPRN,   _______,   _______, _______,   _______,   _______
    ),

    [_MEDIA] = LAYOUT(
        KC_SLEP,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   _______,   _______,   _______,   _______,   _______,
        KC_MPRV,   KC_VOLD,   KC_MUTE,   KC_VOLU,   KC_MNXT,   KC_MPRV,   KC_VOLD,   KC_MUTE,   KC_VOLU,   KC_MNXT,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______, _______,   _______,   KC_MSTP,   KC_MPLY, _______,   _______,   _______
    ),

    [_MOUSE] = LAYOUT(
        _______,   _______,   _______,   _______,   _______,   KC_REDO,    KC_PSTE,   KC_COPY,   KC_CUT,    KC_UNDO,
        KC_LGUI,   KC_LALT,   KC_LCTL,   KC_LSFT,   _______,   _______,   KC_MS_L,   KC_MS_D,   KC_MS_U,   KC_MS_R,
        _______,   _______,   _______,   _______,   _______,   _______,   KC_WH_L,   KC_WH_D,   KC_WH_U,   KC_WH_R,
        _______,   _______,   _______, _______,   _______,   KC_BTN1,   KC_BTN2, _______,   _______,   _______
    ),

    [_FUN] = LAYOUT(
        KC_F12,    KC_F7,     KC_F8,     KC_F9,     KC_PSCR,   _______,   _______,   _______,   _______,   _______,
        KC_F11,    KC_F4,     KC_F5,     KC_F6,     KC_SLCK,   _______,   KC_RSFT,   KC_LCTL,   KC_LALT,   KC_LGUI,
        KC_F10,    KC_F1,     KC_F2,     KC_F3,     KC_PAUS,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______, KC_APP,    KC_SPC,    _______,   _______, _______,   _______,   _______
    ),

    [_NUM] = LAYOUT(
        KC_LBRC,   KC_7,      KC_8,      KC_9,      KC_RBRC,   _______,   _______,   _______,   _______,   _______,
        KC_SCLN,   KC_4,      KC_5,      KC_6,      KC_EQL,    _______,   KC_RSFT,   KC_LCTL,   KC_LALT,   KC_LGUI,
        KC_GRV,    KC_1,      KC_2,      KC_3,      KC_NUBS,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______, KC_DOT,    KC_0,      _______,   _______, _______,   _______,   _______
    )
};