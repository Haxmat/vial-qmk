#include QMK_KEYBOARD_H

/* * Miryoku Colemak-DH 
 * Matrix-Aligned for 8-row JSON definition
 */

enum layers { _BASE, _NAV, _MOUSE, _MEDIA, _NUM, _SYM, _FUN, _BUTTON };

// Home Row Mods
#define HR_A LGUI_T(KC_A)
#define HR_R LALT_T(KC_R)
#define HR_S LCTL_T(KC_S)
#define HR_T LSFT_T(KC_T)
#define HR_N RSFT_T(KC_N)
#define HR_E RCTL_T(KC_E)
#define HR_I LALT_T(KC_I)
#define HR_O RGUI_T(KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_split_3x5_3(
    // Left Rows 0, 1, 2 (Top down)
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,           
    HR_A,    HR_R,    HR_S,    HR_T,    KC_G,           
    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,           

    // Left Thumbs (Row 3) - Padded to match matrix [3,3], [3,2], [3,1]
    LT(_MEDIA, KC_ESC), LT(_NAV, KC_SPC), LT(_MOUSE, KC_TAB),

    // Right Rows 4, 5, 6 (Top down)
    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
    KC_M,    HR_N,    HR_E,    HR_I,    HR_O,
    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,

    // Right Thumbs (Row 7)
    LT(_SYM, KC_ENT), LT(_NUM, KC_BSPC), LT(_FUN, KC_DEL)
  ),

  [_NAV] = LAYOUT_split_3x5_3(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_TRNS,       
    KC_TRNS, KC_ALGR, KC_TRNS, KC_TRNS, KC_TRNS,       
             KC_TRNS, KC_TRNS, KC_TRNS,       

    KC_AGIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO,
    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
             KC_ENT,  KC_BSPC, KC_DEL
  ),

  [_MOUSE] = LAYOUT_split_3x5_3(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_TRNS,       
    KC_TRNS, KC_ALGR, KC_TRNS, KC_TRNS, KC_TRNS,       
             KC_TRNS, KC_TRNS, KC_TRNS,       

    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
             KC_BTN2, KC_BTN1, KC_BTN3
  ),

  [_MEDIA] = LAYOUT_split_3x5_3(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_TRNS,       
    KC_TRNS, KC_ALGR, KC_TRNS, KC_TRNS, KC_TRNS,       
             KC_TRNS, KC_TRNS, KC_TRNS,       

    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_TRNS, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_MSTP, KC_MPLY, KC_MUTE
  ),

  [_NUM] = LAYOUT_split_3x5_3(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,       
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,        
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,       
             KC_DOT,  KC_0,    KC_MINS,       

    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_RCTL, KC_RSFT, KC_LALT, KC_RGUI,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_ALGR, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_SYM] = LAYOUT_split_3x5_3(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,       
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,       
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,       
             KC_LPRN, KC_RPRN, KC_UNDS,       

    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_RCTL, KC_RSFT, KC_LALT, KC_RGUI,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_ALGR, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_FUN] = LAYOUT_split_3x5_3(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,       
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCROLL_LOCK, 
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,      
             KC_APP,  KC_SPC,  KC_TAB,        

    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_RCTL, KC_RSFT, KC_LALT, KC_RGUI,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_ALGR, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_BUTTON] = LAYOUT_split_3x5_3(
    KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_AGIN,       
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_TRNS,       
    KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_AGIN,       
             KC_BTN3, KC_BTN1, KC_BTN2,       

    KC_AGIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO,
    KC_TRNS, KC_RCTL, KC_RSFT, KC_LALT, KC_RGUI,
    KC_AGIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO,
             KC_BTN2, KC_BTN1, KC_BTN3
  )
};