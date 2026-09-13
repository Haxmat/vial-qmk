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
    { 357, 344, 279, 416, 286, 365, 467, 317, 307, 503 }, \
    { 259, 336, 443, 431, 348, 417, 354, 415, 381, 372 }, \
    { 200, 208, 321, 200, 290, 342, 469, 262, 386, 319 }, \
    { 378, 387, 694, 733, 453, 407, 732, 764, 423, 405 }  \
}

#define EC_LOW_THRESHOLD { \
    { 273, 244, 179, 317, 187, 265, 368, 217, 209, 403 }, \
    { 160, 235, 344, 332, 249, 317, 254, 316, 282, 272 }, \
    { 100, 108, 222, 100, 191, 243, 369, 163, 286, 220 }, \
    { 279, 287, 595, 634, 352, 306, 633, 664, 324, 304 }  \
}



 // clang-format on
