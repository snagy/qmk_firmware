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
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_all( \
    S000, L001, L002, L003, L004, L005, L006,            R507, R508, R509, R510, R511, R512, R513, R913,  \
    S300, L101, L102, L103, L104, L105, L106,            R607, R608, R609, R610, R611, R612, R613, R813, \
    S400, L201, L202, L203, L204, L205, L206,            R707, R708, R709, R710, R711, R712, R713, \
          L301, L302, L303, L304, L305, L306,            R807, R808, R809, R810, R811, R812, \
          L401, L402, L403, L404, L405, L406,            R907, R908, R909, R910, R911, R912 \
) \
{ \
    { S000,  L001, L002, L003, L004, L005, L006 }, \
    { KC_NO, L101, L102, L103, L104, L105, L106}, \
    { KC_NO, L201, L202, L203, L204, L205, L206}, \
    { S300,  L301, L302, L303, L304, L305, L306}, \
    { S400,  L401, L402, L403, L404, L405, L406}, \
    { R507,  R508, R509, R510, R511, R512, R513 }, \
    { R607, R608, R609, R610, R611, R612, R613 }, \
    { R707, R708, R709, R710, R711, R712, R713 }, \
    { R807, R808, R809, R810, R811, R812, R813 }, \
    { R907, R908, R909, R910, R911, R912, R913 }, \
}
