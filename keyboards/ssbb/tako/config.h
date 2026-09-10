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
    { 629, 765, 644, 827, 705 }, \
    { 741, 804, 862, 926, 657 }, \
    { 739, 780, 658, 639, 682 }, \
    { 817, 628, 307, 306, 309 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 479, 615, 491, 678, 557 }, \
    { 593, 654, 711, 779, 507 }, \
    { 591, 629, 507, 490, 533 }, \
    { 664, 478, 157, 157, 158 }  \
}

 

#define EC_HIGH_THRESHOLD_LEFT { \
    { 572, 859, 646, 632, 582 }, \
    { 736, 722, 768, 784, 706 }, \
    { 762, 591, 674, 572, 835 }, \
    { 933, 942, 561, 563, 561 }  \
}

#define EC_LOW_THRESHOLD_LEFT { \
    { 425, 712, 495, 484, 431 }, \
    { 585, 573, 618, 637, 557 }, \
    { 609, 444, 521, 420, 687 }, \
    { 783, 791, 412, 414, 412 }  \
}

 // clang-format on
