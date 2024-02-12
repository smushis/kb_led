// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MO(1), KC_LSFT, 
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_GRV, KC_RALT, KC_RGUI, KC_MENU, KC_RCTL)
};

const is31_led PROGMEM g_is31_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |        G location
 *   |  |        |        B location
 *   |  |        |        | */
    {0, CS1_SW1, CS2_SW1, CS3_SW1},
    {0, CS1_SW2, CS2_SW2, CS3_SW2},
    {0, CS1_SW3, CS2_SW3, CS3_SW3},
    {0, CS1_SW4, CS2_SW4, CS3_SW4},
    {0, CS1_SW5, CS2_SW5, CS3_SW5},
    {0, CS1_SW6, CS2_SW6, CS3_SW6},
    {0, CS1_SW7, CS2_SW7, CS3_SW7},
    {0, CS1_SW8, CS2_SW8, CS3_SW8},
    {0, CS1_SW9, CS2_SW9, CS3_SW9},
    {0, CS1_SW10, CS2_SW10, CS3_SW10},
    {0, CS1_SW11, CS2_SW11, CS3_SW11},
    {0, CS4_SW9, CS5_SW9, CS6_SW9},
    {0, CS4_SW10, CS5_SW10, CS6_SW10},
    {0, CS4_SW11, CS5_SW11, CS6_SW11},
    {0, CS4_SW1, CS5_SW1, CS6_SW1},
    {0, CS4_SW2, CS5_SW2, CS6_SW2},
    {0, CS4_SW3, CS5_SW3, CS6_SW3},
    {0, CS4_SW4, CS5_SW4, CS6_SW4},
    {0, CS4_SW5, CS5_SW5, CS6_SW5},
    {0, CS4_SW6, CS5_SW6, CS6_SW6},
    {0, CS4_SW7, CS5_SW7, CS6_SW7},
    {0, CS4_SW8, CS5_SW8, CS6_SW8},
    {0, CS7_SW9, CS8_SW9, CS9_SW9},
    {0, CS7_SW10, CS8_SW10, CS9_SW10},
    {0, CS7_SW11, CS8_SW11, CS9_SW11},
    {0, CS7_SW6, CS8_SW6, CS9_SW6},
    {0, CS7_SW7, CS8_SW7, CS9_SW7},
}

const is31_led PROGMEM g_is31_scaling[ISSI_MANUAL_SCALING] = {
/*   LED Index
 *   |  R scaling
 *   |  |    G scaling
 *   |  |    |    B scaling
 *   |  |    |    | */
    {5, 120, 155, 167},
    {9, 120, 155, 167},
    ....
}