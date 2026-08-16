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
    { 682, 745, 650, 838, 681 }, \
    { 747, 853, 788, 737, 849 }, \
    { 775, 798, 767, 669, 693 }, \
    { 808, 632, 302, 302, 300 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 532, 595, 500, 688, 531 }, \
    { 597, 703, 638, 587, 699 }, \
    { 625, 648, 617, 519, 543 }, \
    { 658, 482, 152, 152, 150 }  \
}
 
#define EC_HIGH_THRESHOLD_LEFT { \
    { 578, 722, 783, 629, 583 }, \
    { 712, 760, 810, 782, 735 }, \
    { 725, 576, 677, 574, 829 }, \
    { 935, 899, 559, 558, 592 }  \
}

#define EC_LOW_THRESHOLD_LEFT { \
    { 428, 572, 633, 479, 433 }, \
    { 562, 610, 660, 632, 585 }, \
    { 575, 426, 527, 424, 679 }, \
    { 785, 749, 409, 408, 442 }  \
}





 // clang-format on
