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
     { 600, 763, 627, 830, 661 }, \
     { 719, 812, 735, 896, 760 }, \
     { 748, 807, 770, 661, 697 }, \
     { 726, 620, 311, 311, 307 }  \
 }
 
 #define EC_LOW_THRESHOLD_RIGHT { \
     { 400, 563, 427, 630, 461 }, \
     { 519, 612, 535, 696, 560 }, \
     { 548, 607, 570, 461, 497 }, \
     { 526, 420, 111, 111, 107 }  \
 }


 
 #define EC_HIGH_THRESHOLD_LEFT { \
     { 535, 701, 792, 645, 583 }, \
     { 707, 890, 796, 807, 727 }, \
     { 749, 593, 697, 570, 822 }, \
     { 937, 906, 578, 578, 574 }  \
 }
 
 #define EC_LOW_THRESHOLD_LEFT { \
     { 335, 501, 592, 445, 383 }, \
     { 507, 690, 596, 607, 527 }, \
     { 549, 393, 497, 370, 622 }, \
     { 737, 706, 378, 378, 374 }  \
 }

 // clang-format on
