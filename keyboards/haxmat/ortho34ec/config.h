#define MATRIX_ROWS 4
#define MATRIX_COLS 10
#define EC_DEBUG true


#define TAPPING_TERM 185
#define FLOW_TAP 0
#define QUICK_TAP_TERM 0
#define COMBO_TERM 50

#define DIODE_DIRECTION COL2ROW
// Calibration:
// Baseline read - what you see in console when keyboard IDLE.
//
// EC_LOW_THRESHOLD[][] = BASELINE_READ + 100
// EC_HIGH_THRESHOLD[][] = HIGH_THRESHOLD + 300
//
// You could change 300 to something else to adjust actuation depth.

// clang-format off
 
#define EC_HIGH_THRESHOLD { \
    { 451, 475, 431, 503, 585, 682, 471, 484, 575, 569 }, \
    { 565, 486, 408, 484, 431, 423, 551, 579, 471, 519 }, \
    { 375, 484, 424, 375, 471, 625, 421, 447, 411, 448 }, \
    { 550, 561, 959, 760, 620, 578, 954, 936, 598, 578 }  \
}

#define EC_LOW_THRESHOLD { \
    { 240, 276, 231, 303, 385, 483, 273, 287, 376, 372 }, \
    { 366, 288, 210, 285, 233, 223, 349, 380, 274, 323 }, \
    { 175, 285, 222, 175, 272, 427, 223, 249, 212, 249 }, \
    { 349, 362, 758, 561, 421, 382, 753, 737, 399, 377 }  \
}


 // clang-format on
