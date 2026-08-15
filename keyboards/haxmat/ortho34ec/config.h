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

#define CONSOLE_ENABLED

#define MATRIX_ROW_PINS \
    { D4, C6, D7, B2 }

#define MATRIX_COL_CHANNELS \
    { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

#define MUX_SEL_PINS \
    { F4, F5, F7, B5 }

#define APLEX_EN_PIN B6

#define DISCHARGE_PIN B3

#define ANALOG_PORT F6

#define POWER_PIN B1


#define MATRIX_ROWS 4
#define MATRIX_COLS 10
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
 
 #define EC_HIGH_THRESHOLD { \
     { 535, 701, 792, 645, 583, 535, 701, 792, 645, 583 }, \
     { 707, 890, 796, 807, 727, 535, 701, 792, 645, 583 }, \
     { 749, 593, 697, 570, 822, 535, 701, 792, 645, 583 }, \
     { 937, 906, 578, 578, 574, 535, 701, 792, 645, 583 }  \
 }
 
 #define EC_LOW_THRESHOLD { \
     { 335, 501, 592, 445, 383, 335, 501, 592, 445, 383 }, \
     { 507, 690, 596, 607, 527, 335, 501, 592, 445, 383 }, \
     { 549, 393, 497, 370, 622, 335, 501, 592, 445, 383 }, \
     { 737, 706, 378, 378, 374, 335, 501, 592, 445, 383 }  \
 }

 // clang-format on
