#define MATRIX_ROWS 4
#define MATRIX_COLS 10
#define EC_DEBUG true


#define TAPPING_TERM 185
#define FLOW_TAP 0
#define QUICK_TAP_TERM 0
#define COMBO_TERM 50

#define DIODE_DIRECTION COL2ROW

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define VIAL_KEYBOARD_UID {0x93, 0xD0, 0xA3, 0x3E, 0xF3, 0x45, 0x38, 0xB5}

// Calibration:
// Baseline read - what you see in console when keyboard IDLE.
//
// EC_LOW_THRESHOLD[][] = BASELINE_READ + 100
// EC_HIGH_THRESHOLD[][] = HIGH_THRESHOLD + 300
//
// You could change 300 to something else to adjust actuation depth.

// clang-format off
 
 #define EC_HIGH_THRESHOLD { \
     { 535, 701, 792, 645, 583, 535, 701, 792, 645, 583 }, \
     { 707, 890, 796, 807, 727, 535, 701, 792, 645, 583 }, \
     { 749, 593, 697, 570, 822, 535, 701, 792, 645, 583 }, \
     { 937, 906, 578, 578, 574, 535, 701, 792, 645, 583 }  \
 }
 
 #define EC_LOW_THRESHOLD { \
     { 335, 501, 592, 445, 383, 335, 501, 592, 445, 383 }, \
     { 507, 690, 596, 607, 527, 335, 501, 592, 445, 383 }, \
     { 549, 393, 497, 370, 622, 335, 501, 592, 445, 383 }, \
     { 737, 706, 378, 378, 374, 335, 501, 592, 445, 383 }  \
 }

 // clang-format on
