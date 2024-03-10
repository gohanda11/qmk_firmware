// Copyright 2021 gohanda_kbd (@gohanda_kbd)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VIAL_KEYBOARD_UID {0xC5, 0xE9, 0x5A, 0xC2, 0xE8, 0x7A, 0xF4, 0x35}
#define VIAL_UNLOCK_COMBO_ROWS {0, 1}
#define VIAL_UNLOCK_COMBO_COLS {0, 2}

/* VIA */
#define DYNAMIC_KEYMAP_LAYER_COUNT 8


/* key matrix size */
#define MATRIX_COLS 14
#define MATRIX_ROWS 4


/* tapping term */
// #define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
// #define IGNORE_MOD_TAP_INTERRUPT


/* Encoder */
#define ENCODERS_PAD_A { GP11 }
#define ENCODERS_PAD_B { GP12 }
#define ENCODER_RESOLUTION 4

/* Matrix*/
#define MATRIX_COL_PINS { GP20, GP21, GP22, GP23, GP24, GP25, GP26, GP8, GP10, GP11, GP12, GP13, GP14, GP15 }
#define MATRIX_ROW_PINS { GP29, GP28, GP19, GP18 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#undef LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#undef LOCKING_RESYNC_ENABLE


/* RGB LED */
#define WS2812_PIO_USE_PIO1
// #define RGB_DI_PIN GP0

#ifdef RGBLIGHT_ENABLE
    #define RGBLED_NUM 3
    #define RGBLIGHT_LIMIT_VAL 80
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17

    // #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
#endif


/* Trackball */

#ifdef POINTING_DEVICE_ENABLE

#    undef RP_SPI_USE_SPI0
#    define RP_SPI_USE_SPI0 TRUE
#    undef RP_SPI_USE_SPI1
#    define RP_SPI_USE_SPI1 FALSE
#    define SPI_DRIVER SPID0

//#    define SPI_SCK_PIN GP22 //6
//#    define SPI_MISO_PIN GP24 //4
//#    define SPI_MOSI_PIN GP23 //7
#    define SPI_SCK_PIN GP2
#    define SPI_MISO_PIN GP4
#    define SPI_MOSI_PIN GP3

#endif


#ifndef PMW33XX_CS_PIN
#    define PMW33XX_CS_PIN GP9
#endif


#define POINTING_DEVICE_ROTATION_270

// #define POINTING_DEVICE_INVERT_X
//#define POINTING_DEVICE_INVERT_Y

//トラックボールのゆっくりな変位を検出するため
#define POINTING_DEVICE_TASK_THROTTLE_MS 10


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
