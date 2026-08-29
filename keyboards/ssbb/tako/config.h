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
    { 642, 768, 638, 870, 709 }, \
    { 836, 762, 825, 757, 730 }, \
    { 749, 776, 655, 611, 689 }, \
    { 827, 631, 308, 309, 306 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 491, 620, 486, 718, 559 }, \
    { 685, 612, 676, 606, 583 }, \
    { 599, 628, 505, 462, 538 }, \
    { 676, 480, 158, 157, 156 }  \
}
 
#define EC_HIGH_THRESHOLD_LEFT { \
    { 547, 693, 792, 623, 587 }, \
    { 741, 723, 836, 810, 712 }, \
    { 738, 581, 673, 561, 834 }, \
    { 931, 970, 555, 558, 555 }  \
}

#define EC_LOW_THRESHOLD_LEFT { \
    { 396, 545, 641, 477, 443 }, \
    { 588, 577, 687, 654, 561 }, \
    { 591, 437, 525, 412, 685 }, \
    { 783, 818, 407, 408, 409 }  \
}

 // clang-format on
