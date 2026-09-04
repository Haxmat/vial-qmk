/* Copyright 2023 ssbb and Copyright 2026 HF
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

#define STM32_HSECLK 8000000U

#define MATRIX_ROW_PINS \
    { A15, B3, B4 }

#define MATRIX_COL_CHANNELS \
    { 6, 4, 3, 0, 1, 2, 5 }

#define MUX_SEL_PINS \
    { A6, A7, A4 }

#define APLEX_EN_PIN B5

#define DISCHARGE_PIN A5

#define ANALOG_PORT B1

#define EE_HANDS

#define SERIAL_DRIVER usart
#define SERIAL_USART_TX_PIN A2 // solder the flipped jumper on the stemcell to route the RX pin to the TX port and vice-versa
#define SERIAL_USART_DRIVER SD2
#define SERIAL_USART_HALF_DUPLEX

#define POWER_PIN B8


#define MATRIX_ROWS 6
#define MATRIX_COLS 7


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
    { 521, 465, 566, 520, 499, 500, 500 }, \
    { 566, 567, 721, 589, 498, 500, 500 }, \
    { 682, 571, 659, 495, 504, 500, 500 } \
}

#define EC_LOW_THRESHOLD_LEFT { \
    { 321, 265, 366, 320, 299, 300, 300 }, \
    { 366, 367, 521, 389, 298, 300, 300 }, \
    { 662, 730, 371, 370, 375, 300, 300 }  \
}



 
#define EC_HIGH_THRESHOLD_RIGHT { \
    { 540, 655, 524, 574, 596, 500, 500 }, \
    { 531, 674, 543, 525, 582, 500, 500 }, \
    { 840, 620, 305, 305, 305, 500, 500 }  \
}

#define EC_LOW_THRESHOLD_RIGHT { \
    { 340, 455, 324, 374, 396, 300, 300 }, \
    { 331, 474, 343, 325, 382, 300, 300 }, \
    { 640, 420, 105, 105, 105, 300, 300 }  \
}


 // clang-format on
