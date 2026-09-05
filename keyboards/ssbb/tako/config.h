/* Copyright 2023 ssbb
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define MATRIX_ROWS 8
#define MATRIX_COLS 5
#define EC_DEBUG true

#define DIODE_DIRECTION COL2ROW

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define VIAL_KEYBOARD_UID {0x64, 0x70, 0x69, 0x46, 0xB0, 0x10, 0x7F, 0xC9}

// Calibration:
// Baseline read - what you see in console when keyboard IDLE.
//
// EC_LOW_THRESHOLD[][] = BASELINE_READ + 100
// EC_HIGH_THRESHOLD[][] = HIGH_THRESHOLD + 300
//
// You could change 300 to something else to adjust actuation depth.

// clang-format off
#define EC_HIGH_THRESHOLD_LEFT { \
    { 190, 190, 190, 190, 190 }, \
    { 190, 190, 190, 190, 190 }, \
    { 190, 190, 190, 190, 190 }, \
    { 190, 190, 190, 190, 190 }  \
}

#define EC_LOW_THRESHOLD_LEFT { \
    { 150, 150, 150, 150, 150 }, \
    { 150, 150, 150, 150, 150 }, \
    { 150, 150, 150, 150, 150 }, \
    { 150, 150, 150, 150, 150 }  \
}

/*
#define EC_HIGH_THRESHOLD_LEFT { \
    { 521, 465, 566, 520, 499 }, \
    { 566, 567, 721, 589, 498 }, \
    { 682, 571, 659, 495, 504 }, \
    { 862, 930, 571, 570, 575 }  \
}

#define EC_LOW_THRESHOLD_LEFT { \
    { 321, 265, 366, 320, 299 }, \
    { 366, 367, 521, 389, 298 }, \
    { 482, 371, 459, 295, 304 }, \
    { 662, 730, 371, 370, 375 }  \
}
*/


 
#define EC_HIGH_THRESHOLD_RIGHT { \
    { 190, 190, 190, 190, 190 }, \
    { 190, 190, 190, 190, 190 }, \
    { 190, 190, 190, 190, 190 }, \
    { 190, 190, 190, 190, 190 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 150, 150, 150, 150, 150 }, \
    { 150, 150, 150, 150, 150 }, \
    { 150, 150, 150, 150, 150 }, \
    { 150, 150, 150, 150, 150 }  \
}

/*
#define EC_HIGH_THRESHOLD_RIGHT { \
    { 540, 655, 524, 574, 596 }, \
    { 531, 674, 543, 525, 582 }, \
    { 574, 580, 587, 509, 566 }, \
    { 840, 620, 305, 305, 305 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 340, 455, 324, 374, 396 }, \
    { 331, 474, 343, 325, 382 }, \
    { 374, 380, 387, 309, 366 }, \
    { 640, 420, 105, 105, 105 }  \
}
*/


 // clang-format on
