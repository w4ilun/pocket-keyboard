/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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
#include <stdint.h>
#include <stdbool.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    {{KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_LEFT},
     {KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO},
     {KC_FN0, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_GRV, KC_ENT, KC_UP},
     {KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_BSLS, KC_HOME, KC_END, KC_RSFT, KC_DOWN},
     {KC_LCTL, KC_LGUI, KC_LALT, KC_VOLD, KC_MUTE, KC_VOLU, KC_SPC, KC_SPC, KC_BTN1, KC_BTN3, KC_BTN2, KC_RALT, KC_RCTL, KC_NO, KC_RGHT},},
     //mouse layer
    {{KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_MS_L},
     {KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO},
     {KC_TRNS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_GRV, KC_ENT, KC_MS_U},
     {KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_BSLS, KC_HOME, KC_END, KC_RSFT, KC_MS_D},
     {KC_LCTL, KC_LGUI, KC_LALT, KC_VOLD, KC_MUTE, KC_VOLU, KC_SPC, KC_SPC, KC_BTN1, KC_BTN3, KC_BTN2, KC_RALT, KC_RCTL, KC_NO, KC_MS_R},},
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
	[0] = ACTION_LAYER_MOMENTARY(1), //to Fn overlay
};
