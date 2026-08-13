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

#define CONSOLE_ENABLED

#define MATRIX_ROW_PINS \
    { D4, C6, D7, B2 }
#define MATRIX_ROW_PINS_RIGHT \
    { F4, F5, F7, B3 }

#define MATRIX_COL_CHANNELS \
    { 4, 6, 2, 1, 3 }
#define MATRIX_COL_CHANNELS_RIGHT \
    { 2, 4, 6, 7, 5 }

#define MUX_SEL_PINS \
    { F4, F5, F7 }
#define MUX_SEL_PINS_RIGHT \
    { B5, B4, E6 }

#define APLEX_EN_PIN B6
#define APLEX_EN_PIN_RIGHT D4

#define DISCHARGE_PIN B3
#define DISCHARGE_PIN_RIGHT D7

#define ANALOG_PORT F6

#define SPLIT_HAND_PIN D2
#define SERIAL_USART_TX_PIN D3

#define POWER_PIN B1
#define POWER_PIN_RIGHT C6


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
     { 783, 633, 733, 720, 592 }, \
     { 686, 693, 681, 628, 542 }, \
     { 653, 940, 689, 561, 597 }, \
     { 940, 897, 867, 890, 824 }  \
 }
 
 #define EC_LOW_THRESHOLD_LEFT { \
     { 583, 433, 533, 520, 392 }, \
     { 486, 493, 481, 428, 342 }, \
     { 453, 771, 489, 361, 397 }, \
     { 900, 697, 667, 690, 624 }  \
 }


 // clang-format on
