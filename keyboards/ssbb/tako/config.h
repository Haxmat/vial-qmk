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
    { 622, 805, 688, 665, 705 }, \
    { 699, 773, 606, 598, 804 }, \
    { 608, 703, 647, 611, 631 }, \
    { 747, 688, 308, 306, 306 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 470, 654, 539, 514, 556 }, \
    { 551, 622, 455, 445, 657 }, \
    { 460, 555, 497, 460, 481 }, \
    { 597, 543, 160, 157, 155 }  \
}


 

#define EC_HIGH_THRESHOLD_LEFT { \
    { 617, 563, 662, 509, 680 }, \
    { 611, 660, 738, 819, 669 }, \
    { 742, 606, 569, 541, 763 }, \
    { 978, 997, 565, 566, 567 }  \
}

#define EC_LOW_THRESHOLD_LEFT { \
    { 465, 412, 513, 360, 529 }, \
    { 460, 511, 588, 669, 519 }, \
    { 592, 455, 418, 392, 615 }, \
    { 830, 847, 415, 416, 416 }  \
}

 // clang-format on
