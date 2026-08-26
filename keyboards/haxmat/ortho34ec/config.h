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
     { 210, 210, 210, 210, 210, 210, 210, 210, 210, 210}, \
     { 210, 210, 210, 210, 210, 210, 210, 210, 210, 210}, \
     { 210, 210, 210, 210, 210, 210, 210, 210, 210, 210}, \
     { 230, 230, 230, 230, 230, 230, 230, 230, 230, 230}  \
 }
 
 #define EC_LOW_THRESHOLD { \
     { 130, 130, 130, 130, 130, 130, 130, 130, 130, 130}, \
     { 130, 130, 130, 130, 130, 130, 130, 130, 130, 130}, \
     { 130, 130, 130, 130, 130, 130, 130, 130, 130, 130 }, \
     { 150, 150, 150, 150, 150, 150, 150, 150, 150, 150 }  \
 }

 // clang-format on
