/*
Copyright 2020 Scott Nagy <i@sna.gy>

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


/* USB Device descriptor parameter */
#define VENDOR_ID       0x534E
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0002
#define MANUFACTURER    Tangent Space
#define PRODUCT         Basis Keyboard
#define DESCRIPTION     Split ortho keyboard with three rotary encoders

#define SPLIT_USB_DETECT

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring
#define MATRIX_ROW_PINS { B3, B7, D5, F4, F7 }
#define MATRIX_COL_PINS { E6, B4, D7, D6, D4, D3, D2 }
#define UNUSED_PINS
#define MATRIX_ROW_PINS_RIGHT { F7, F6, F5, B3, B2 }
#define MATRIX_COL_PINS_RIGHT { D4, D6, D7, B4, C6, C7, B1 }

#define ENCODERS_PAD_A { B2, F0, F6 }
#define ENCODERS_PAD_B { B1, F1, F5 }

#define ENCODER_RESOLUTION 1

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN B6  // USART TX pin
#define SELECT_SOFT_SERIAL_SPEED 1 // or 0, 2, 3, 4, 5
                                   //  0: about 460800 baud
                                   //  1: about 230400 baud (default)
                                   //  2: about 115200 baud
                                   //  3: about 57600 baud
                                   //  4: about 38400 baud
                                   //  5: about 19200 baud
#define SERIAL_USART_DRIVER SD1 // USART driver of TX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
