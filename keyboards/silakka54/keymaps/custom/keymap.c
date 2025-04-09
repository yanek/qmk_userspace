/*
  Copyright (c) 2025 Noé Ksiazek

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include QMK_KEYBOARD_H

#include "keycodes.h"
#include "keymap_eurkey.h"
#include "modifiers.h"

#define HR_F    MT(MOD_LCTL, KC_F)
#define HR_D    MT(MOD_LSFT, KC_D)
#define HR_S    MT(MOD_LALT, KC_S)
#define HR_A    MT(MOD_LGUI, KC_A)

#define HR_J    MT(MOD_RCTL, KC_J)
#define HR_K    MT(MOD_RSFT, KC_K)
#define HR_L    MT(MOD_LALT, KC_L)
#define HR_SCLN MT(MOD_RGUI, KC_SCLN)

enum {
    BSE,
    NAV,
    SYM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BSE] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    XXXXXXX,
        CW_TOGG, HR_A,    HR_S,    HR_D,    HR_F,    KC_G,           KC_H,    HR_J,    HR_K,    HR_L,    HR_SCLN, KC_QUOT,
        XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,           KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RALT,
                                 XXXXXXX, MO(NAV), KC_SPC,           KC_ENT, MO(SYM), KC_RALT
    ),

    [NAV] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_PSCR,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX,        KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, XXXXXXX,
        XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   _______, _______, _______,        _______, _______, _______
    ),

    [SYM] = LAYOUT(
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        XXXXXXX, KC_GRV,  EU_LABK, EU_RABK, KC_MINS,  EU_PIPE,       EU_DCIR, EU_LCBR, EU_RCBR, EU_DLR,  EU_DQUO, XXXXXXX,
        XXXXXXX, EU_EXLM, KC_ASTR, KC_SLSH, KC_EQL,   EU_AMPR,       EU_HASH, EU_LPRN, EU_RPRN, KC_SCLN, EU_QUES, EU_BSLS,
        XXXXXXX, EU_TILD, KC_PLUS, KC_LBRC, KC_RBRC,  EU_PERC,       EU_AT,   EU_COLN, KC_COMM, KC_DOT,  KC_QUOT, XXXXXXX,
                                   _______,  _______, EU_UNDS,       _______, _______, _______
    ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
                       'L', 'L', 'L', 'R', 'R', 'R'
    );
