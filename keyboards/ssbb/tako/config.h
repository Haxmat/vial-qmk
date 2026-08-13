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
     { 687, 786, 668, 847, 698 }, \
     { 747, 861, 840, 695, 802 }, \
     { 776, 809, 797, 674, 724 }, \
     { 788, 638, 310, 310, 310 }  \
 }
 
 #define EC_LOW_THRESHOLD_RIGHT { \
     { 487, 586, 468, 647, 498 }, \
     { 547, 661, 640, 495, 602 }, \
     { 576, 609, 597, 474, 524 }, \
     { 588, 438, 110, 110, 110 }  \
 }
 
 #define EC_HIGH_THRESHOLD_LEFT { \
     { 570, 722, 795, 647, 604 }, \
     { 744, 888, 841, 832, 748 }, \
     { 744, 601, 702, 590, 820 }, \
     { 951, 921, 574, 569, 577 }  \
 }
 
 #define EC_LOW_THRESHOLD_LEFT { \
     { 370, 522, 595, 447, 404 }, \
     { 544, 688, 641, 632, 548 }, \
     { 544, 401, 502, 390, 620 }, \
     { 751, 721, 374, 369, 377 }  \
 }


 // clang-format on
