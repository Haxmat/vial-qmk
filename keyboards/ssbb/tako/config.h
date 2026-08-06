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
#define EC_HIGH_THRESHOLD_LEFT {  \
    { 494, 785, 678, 656, 553}, \
    { 676, 803, 691, 747, 738 }, \
    { 707, 606, 790, 551, 810 }, \
    { 920, 913, 583, 585, 587 }  \
}

#define EC_HIGH_THRESHOLD_RIGHT { \
    { 691, 741, 635, 870, 722 }, \
    { 700, 736, 681, 799, 784 }, \
    { 770, 762, 795, 636, 725 }, \
    { 620, 613, 316, 316, 316 }  \
}

#define EC_LOW_THRESHOLD_LEFT { \
    { 294, 585, 478, 456, 353 }, \
    { 476, 603, 491, 547, 538 }, \
    { 507, 406, 590, 351, 610 }, \
    { 756, 747, 383, 385, 387 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 491, 541, 435, 670, 522 },  \
    { 500, 536, 481, 599, 584 },  \
    { 570, 562, 595, 436, 525 },  \
    { 420, 413, 116, 116, 116 }   \
}
// clang-format on