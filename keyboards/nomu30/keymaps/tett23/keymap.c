/* Copyright 2019 Naoto Takai
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
#include QMK_KEYBOARD_H

#define _BASE 0
#define _LOWER 1


#define _______ KC_TRNS
#define KC_SFT_SPC SFT_T(KC_SPC)
#define KC_SFT_ENT SFT_T(KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS,
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, MO(_LOWER),
        KC_LGUI, KC_Z, KC_X, KC_C, SFT_T(KC_V), KC_B, SFT_T(KC_N), KC_M, SFT_T(KC_SPC)
    ),
    [_LOWER] = LAYOUT(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,     KC_8,   KC_9,  KC_0,    KC_EQL,
        _______, KC_SCLN, KC_QUOT, KC_LBRC, KC_RBRC, KC_ASTR, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______,
        _______, KC_GRV,  KC_SLSH, KC_LPRN, KC_RPRN, KC_BSLS, KC_COMM, KC_DOT,  KC_LSFT
    ),
};
