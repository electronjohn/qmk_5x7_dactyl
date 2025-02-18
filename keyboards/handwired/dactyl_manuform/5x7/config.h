/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { D4, F5, F7, C6, F6, D7 } // 4, A2, A0, 5, A1, 6




#define MATRIX_COL_PINS { B6, B5, B2, B4, B3, E6, B1 } // 10, 9, 16, 8, 14, 7, 15

#define MATRIX_ROW_PINS_RIGHT { F6, D4, D7, F7, C6, F5 } // A1, 4, 6, A0, 5, A2

#define MATRIX_COL_PINS_RIGHT { B1, E6, B3, B4, B2, B5, B6} // 15, 7, 14, 8, 16, 9, 10 

#define DIODE_DIRECTION COL2ROW

#define SPLIT_HAND_PIN D1 //2

#define	SPLIT_HAND_PIN_LOW_IS_LEFT

#define SOFT_SERIAL_PIN D0 //3