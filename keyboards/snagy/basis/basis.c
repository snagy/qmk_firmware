/* Copyright 2020 Scott Nagy <i@sna.gy>
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
#include "basis.h"

// wtf is this?
#define MEDIA_KEY_DELAY 10

void encoder_update_kb(uint8_t index, bool clockwise) {
//   encoder_value = (encoder_value + (clockwise ? 1 : -1)) % 64;
//   queue_for_send = true;
    uint16_t mapped_code = 0;
    if (index == 2) {
        if (clockwise) {
            mapped_code = KC_DOWN;
        } else {
            mapped_code = KC_UP;
        }
    }
    else if(index == 1) {
        if (clockwise) {
            mapped_code = G(KC_G);
        } else {
            mapped_code = S(G(KC_G));
        }
    }
    else {

        if (clockwise) {
            mapped_code = G(A(KC_RIGHT));
        } else {
            mapped_code = G(A(KC_LEFT));
        }
    }
    uint16_t held_keycode_timer = timer_read();
    if(mapped_code != 0){
        register_code16(mapped_code);
        while (timer_elapsed(held_keycode_timer) < MEDIA_KEY_DELAY){ /* no-op */ }
        unregister_code16(mapped_code);
    }
}
