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
    { 6, 5, 4, 3, 2, 1, 12, 11, 10, 9}

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
