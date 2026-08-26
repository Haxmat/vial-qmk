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
    { 645, 749, 624, 843, 684 }, \
    { 770, 813, 789, 894, 860 }, \
    { 739, 731, 627, 634, 653 }, \
    { 809, 611, 300, 300, 300 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 495, 599, 474, 693, 534 }, \
    { 620, 663, 639, 744, 710 }, \
    { 589, 581, 477, 484, 503 }, \
    { 659, 461, 150, 150, 150 }  \
}
 
#define EC_HIGH_THRESHOLD_LEFT { \
    { 572, 828, 787, 631, 573 }, \
    { 669, 737, 810, 798, 717 }, \
    { 731, 583, 677, 564, 827 }, \
    { 950, 939, 557, 563, 556 }  \
}

#define EC_LOW_THRESHOLD_LEFT { \
    { 422, 678, 637, 481, 423 }, \
    { 519, 587, 660, 648, 567 }, \
    { 581, 433, 527, 414, 677 }, \
    { 820, 789, 407, 413, 406 }  \
}






 // clang-format on
