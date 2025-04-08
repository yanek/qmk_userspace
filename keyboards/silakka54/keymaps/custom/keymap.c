// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keymap_us.h"
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
    SYM,
    NAV
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BSE] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_NO,
        KC_NO,   HR_A,    HR_S,    HR_D,    HR_F,    KC_G,                               KC_H,    HR_J,    HR_K,    HR_L,    HR_SCLN, KC_QUOT,
        KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RALT,
                                            KC_NO, MO(NAV), KC_SPC,             KC_ENT,  MO(SYM), KC_RALT
    ),

    [SYM] = LAYOUT(
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
        KC_NO,   KC_GRV,  EU_LABK, EU_RABK, KC_MINUS, EU_PIPE,                          EU_DCIR, EU_LBRC, EU_RCBR, EU_DLR,  EU_DQUO, KC_NO,
        KC_NO,   EU_EXLM, KC_ASTR, KC_SLSH, KC_EQUAL, EU_AMPR,                          EU_HASH, EU_LPRN, EU_RPRN, KC_SCLN, EU_QUES, EU_BSLS,
        KC_NO,   EU_TILD, KC_PLUS, KC_LBRC, KC_RBRC,  EU_PERC,                          EU_AT,   EU_COLN, KC_COMM, KC_DOT,  KC_QUOT, KC_NO,
                                            KC_TRNS, KC_TRNS, EU_UNDS,          KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [NAV] = LAYOUT(
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_PSCR,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
        KC_NO,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,                              KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_NO,   KC_NO,
        KC_NO,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,                              KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                            KC_TRNS, KC_TRNS, KC_SPC,          KC_ENT, KC_TRNS, KC_TRNS
    ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
                       'L', 'L', 'L',  'R', 'R', 'R'
    );
