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
    { 538, 463, 658, 658, 479 }, \
    { 629, 578, 651, 520, 513 }, \
    { 657, 578, 652, 533, 518 }, \
    { 872, 953, 568, 570, 571 }  \
}

#define EC_LOW_THRESHOLD_LEFT { \
    { 338, 263, 458, 458, 279 }, \
    { 429, 378, 451, 320, 313 }, \
    { 457, 378, 452, 333, 318 }, \
    { 672, 753, 368, 370, 371 }  \
}

#define EC_HIGH_THRESHOLD_RIGHT { \
    { 493, 614, 500, 554, 586 }, \
    { 484, 645, 533, 517, 551 }, \
    { 600, 617, 591, 507, 574 }, \
    { 757, 701, 304, 303, 304 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 293, 414, 300, 354, 386 }, \
    { 284, 445, 333, 317, 351 }, \
    { 400, 417, 391, 307, 374 }, \
    { 557, 501, 104, 103, 104 }  \
}



 // clang-format on
