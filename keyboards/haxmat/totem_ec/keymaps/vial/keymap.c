#include QMK_KEYBOARD_H

enum custom_layers {
    BASE,
    NAV,
    MOUSE,
    MEDIA,
    NUM,
    SYM,
    FUN
};

#define KC_SCLK KC_SCROLL_LOCK
#define KC_PST KC_PASTE

#define HR_A LGUI_T(KC_A)  // Pinky: GUI
#define HR_R LALT_T(KC_R)  // Ring:  Alt
#define HR_S LCTL_T(KC_S)  // Middle:Ctrl
#define HR_T LSFT_T(KC_T)  // Index: Shift

#define HR_N RSFT_T(KC_N)  // Index: Shift
#define HR_E RCTL_T(KC_E)  // Middle:Ctrl
#define HR_I LALT_T(KC_I)  // Ring:  Alt
#define HR_O RGUI_T(KC_O)  // Pinky: GUI

#define THM_ESC   LT(MEDIA, KC_ESC)
#define THM_SPC   LT(MOUSE, KC_SPC)
#define THM_TAB   LT(NAV, KC_TAB)

#define THM_ENT   LT(SYM, KC_ENT)
#define THM_BSPC  LT(NUM, KC_BSPC)
#define THM_DEL   LT(FUN, KC_DEL)

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT_split_3x5_3(
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,      KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
        HR_A,    HR_R,    HR_S,    HR_T,    KC_G,      KC_M,    HR_N,    HR_E,    HR_I,    HR_O,
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,      KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
                          THM_ESC, THM_TAB, THM_SPC,   THM_ENT, THM_BSPC, THM_DEL
    ),

    [NAV] = LAYOUT_split_3x5_3(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_AGIN, KC_PST,  KC_COPY, KC_CUT,  KC_UNDO,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS,   KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_ENT,  KC_BSPC, KC_DEL
    ),

    [MOUSE] = LAYOUT_split_3x5_3(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS,   KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_BTN1, KC_BTN2, KC_BTN3
    ),

    [MEDIA] = LAYOUT_split_3x5_3(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS,   KC_TRNS, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_MUTE, KC_MPLY, KC_MSTP
    ),

    [NUM] = LAYOUT_split_3x5_3(
        KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,    KC_TRNS, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_NUBS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_DOT,  KC_0,    KC_MINS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [SYM] = LAYOUT_split_3x5_3(
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,   KC_TRNS, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI,
        KC_NUHS, KC_EXLM, KC_AT,   KC_HASH, S(KC_NUBS),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_LPRN, KC_RPRN, KC_UNDS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [FUN] = LAYOUT_split_3x5_3(
        KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCLK,   KC_TRNS, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI,
        KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_APP,  KC_SPC,  KC_TAB,    KC_TRNS, KC_TRNS, KC_TRNS
    )
};