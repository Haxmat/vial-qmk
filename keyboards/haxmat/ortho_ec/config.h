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

#define SPLIT_HAND_PIN_ACTIVE_LOW false

#define SERIAL_USART_TX_PIN D3

#define POWER_PIN B1
#define POWER_PIN_RIGHT C6


#define MATRIX_ROWS 8
#define MATRIX_COLS 5
#define EC_DEBUG true

#define DIODE_DIRECTION COL2ROW

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define VIAL_KEYBOARD_UID {0xE4, 0xAC, 0x25, 0x4A, 0x1A, 0x1A, 0xDA, 0xEE}

// Calibration:
// Baseline read - what you see in console when keyboard IDLE.
//
// EC_LOW_THRESHOLD[][] = BASELINE_READ + 100
// EC_HIGH_THRESHOLD[][] = HIGH_THRESHOLD + 300
//
// You could change 300 to something else to adjust actuation depth.

// clang-format off
#define EC_HIGH_THRESHOLD_LEFT {  \
    { 459, 653, 699, 647, 701 }, \
    { 625, 612, 577, 772, 765 }, \
    { 686, 643, 605, 741, 750 }, \
    { 903, 909, 573, 573, 573 }  \
}

#define EC_HIGH_THRESHOLD_RIGHT { \
    { 504, 734, 649, 622, 688 }, \
    { 691, 846, 752, 599, 774 }, \
    { 735, 743, 824, 751, 682 }, \
    { 602, 590, 315, 314, 314 }  \
}

#define EC_LOW_THRESHOLD_LEFT { \
    { 259, 453, 499, 447, 501 }, \
    { 425, 412, 377, 572, 565 }, \
    { 486, 443, 405, 541, 550 }, \
    { 703, 709, 373, 373, 373 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 304, 534, 449, 422, 488 },  \
    { 491, 646, 552, 399, 574 },  \
    { 535, 543, 624, 551, 482 },  \
    { 402, 390, 115, 114, 114 }   \
}
// clang-format on