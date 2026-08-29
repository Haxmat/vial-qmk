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

#define EC_HIGH_THRESHOLD_RIGHT { \
    { 640, 776, 611, 852, 750 }, \
    { 805, 750, 821, 830, 772 }, \
    { 739, 734, 636, 634, 651 }, \
    { 815, 615, 301, 300, 300 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 490, 626, 461, 702, 600 }, \
    { 655, 600, 671, 680, 622 }, \
    { 589, 584, 486, 484, 501 }, \
    { 665, 465, 151, 150, 150 }  \
}
 
#define EC_HIGH_THRESHOLD_LEFT { \
   { 560, 751, 771, 639, 590 }, \
   { 779, 741, 804, 802, 717 }, \
   { 756, 588, 672, 568, 835 }, \
   { 980, 956, 557, 558, 573 }  \
}

#define EC_LOW_THRESHOLD_LEFT { \
   { 410, 601, 621, 489, 440 }, \
   { 629, 591, 654, 652, 567 }, \
   { 606, 438, 522, 418, 685 }, \
   { 850, 806, 407, 408, 423 }  \
}
 // clang-format on
