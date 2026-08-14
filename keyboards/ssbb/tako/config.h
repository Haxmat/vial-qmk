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
    { 682, 717, 647, 838, 652 }, \
    { 733, 741, 847, 806, 815 }, \
    { 783, 822, 724, 644, 725 }, \
    { 812, 646, 310, 304, 306 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 532, 567, 497, 688, 502 }, \
    { 583, 591, 697, 656, 665 }, \
    { 633, 672, 574, 494, 575 }, \
    { 662, 496, 160, 154, 156 }  \
}


 
#define EC_HIGH_THRESHOLD_LEFT { \
    { 581, 702, 803, 633, 595 }, \
    { 727, 890, 729, 821, 740 }, \
    { 761, 593, 695, 577, 837 }, \
    { 971, 907, 567, 571, 572 }  \
}

#define EC_LOW_THRESHOLD_LEFT { \
    { 431, 552, 653, 483, 445 }, \
    { 577, 740, 579, 671, 590 }, \
    { 611, 443, 545, 427, 687 }, \
    { 821, 757, 417, 421, 422 }  \
}




 // clang-format on
