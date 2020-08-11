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

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring
#define MATRIX_ROW_PINS { A15, H1, B1, B2, B10 }
#define MATRIX_COL_PINS { B15, B9, B8, B7, B6, B5, B3 }
#define UNUSED_PINS
#define MATRIX_ROW_PINS_RIGHT { A10, A8, B12, B5, B7 }
#define MATRIX_COL_PINS_RIGHT { B0, B1, B2, B13, B14, B15, B3 }

#define ENCODERS_PAD_A { A10, B13, B11 }
#define ENCODERS_PAD_B { A8, B14, B12 }

#define ENCODER_RESOLUTION 1

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW


#define RGB_DI_PIN B4
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 14
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT { 7, 7 }
#define DRIVER_LED_TOTAL 14

#define WS2812_PWM_DRIVER PWMD3
#define WS2812_PWM_CHANNEL 1
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM3
#define WS2812_DMA_CHANNEL 3
#define WS2812_PWM_TARGET_PERIOD 800000

// 6 if these are set?
//   SYSCFG->CFGR1 |= SYSCFG_CFGR1_TIM16_DMA_RMP;
//   SYSCFG->CFGR1 |= SYSCFG_CFGR1_TIM16_DMA_RMP2;


/*
#define BACKLIGHT_PIN B8
#define BACKLIGHT_PWM_DRIVER PWMD16
#define BACKLIGHT_PWM_CHANNEL 1
#define BACKLIGHT_PAL_MODE 2
*/

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN A9  // USART TX pin
#define SELECT_SOFT_SERIAL_SPEED 1 // or 0, 2, 3, 4, 5
                                   //  0: about 460800 baud
                                   //  1: about 230400 baud (default)
                                   //  2: about 115200 baud
                                   //  3: about 57600 baud
                                   //  4: about 38400 baud
                                   //  5: about 19200 baud
#define SERIAL_USART_DRIVER SD1 // USART driver of TX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7

// TODO Make this work
//#define SPLIT_USB_DETECT FALSE
#define SPLIT_HAND_PIN H0

#define AUDIO_USE_CH1 FALSE
#define AUDIO_USE_CH2 TRUE