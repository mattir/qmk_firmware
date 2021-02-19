/* Copyright 2020 Matthew Gilbert <hello+github@mattir.com>
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

enum layers {
  QWERTY,
  LOWER,
  RAISE,
  FUNCS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [QWERTY] = LAYOUT(
      XXXXXXX, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, XXXXXXX,
      XXXXXXX, LALT_T(KC_A), LCTL_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RGUI_T(KC_K), RCTL_T(KC_L), RALT_T(KC_SCLN), XXXXXXX,
      XXXXXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_ESC, KC_HOME, KC_END, KC_TAB, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, XXXXXXX,
      KC_LEAD, KC_BSLS, KC_MINS, LT(LOWER, KC_SPC), LT(RAISE, KC_GRV), LT(RAISE, KC_ENT), LT(LOWER, KC_SPC), KC_BSPC, KC_QUOT, KC_LEAD
  ),
  [LOWER] = LAYOUT(
      XXXXXXX, KC_EXLM, KC_AT, KC_HASH, KC_LCBR, KC_RCBR, KC_1, KC_2, KC_3, KC_4, KC_5, XXXXXXX,
      XXXXXXX, KC_DLR, KC_PERC, KC_CIRC, KC_LPRN, KC_RPRN, KC_6, KC_7, KC_8, KC_9, KC_0, XXXXXXX,
      XXXXXXX, KC_AMPR, KC_COMM, KC_DOT, KC_LBRC, KC_RBRC, _______, _______, _______, _______, KC_EQL, KC_PLUS, KC_MINS, KC_ASTR, KC_SLSH, XXXXXXX,
      _______, _______, _______, _______, _______, _______, _______, KC_DEL, _______, _______
  ),
  [RAISE] = LAYOUT(
      XXXXXXX, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, XXXXXXX, KC_HOME, KC_UP, KC_END, XXXXXXX, XXXXXXX,
      XXXXXXX, LALT_T(KC_P6), LCTL_T(KC_P7), LGUI_T(KC_P8), LSFT_T(KC_P9), KC_P0, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, KC_PEQL, _______, _______, _______, _______, KC_PGDN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      _______, KC_PDOT, KC_PENT, _______, _______, _______, _______, _______, _______, _______
  ),
  [FUNCS] = LAYOUT(
      XXXXXXX, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, XXXXXXX, XXXXXXX, KC_VOLU, XXXXXXX, KC_POWER, XXXXXXX,
      XXXXXXX, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_BRIU, KC_MUTE, KC_VOLD, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, _______, _______, _______, _______, KC_BRID, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, LOWER, RAISE, FUNCS);
}

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_A) {
      tap_code16(SGUI(KC_L));
    }
    SEQ_TWO_KEYS(KC_S, KC_S) {
      tap_code16(SGUI(KC_5));
    }
    SEQ_TWO_KEYS(KC_E, KC_W) {
      SEND_STRING("matthew.gilbert@mailchimp.com");
    }
    SEQ_TWO_KEYS(KC_E, KC_H) {
      SEND_STRING("m@mattir.com");
    }
  }
}
