#pragma once

#include "quantum.h"

#define LAYOUT( \
    A00, A01, A02, A03, A04, A05, A06, B00, B01, B02, B03, B04, B05, B06, \
    A10, A11, A12, A13, A14, A15,      B10, B11, B12, B13, B14, B15, B16, \
    A20, A21, A22, A23, A24, A25,      B20, B21, B22, B23, B24, B25, B26, \
         A31, A32, A33, A34, A35,           B31, B32, B33, B34, B35 \
   ) \
  { \
    { A00, A01, A02, A03, A04, A05, A06, B00, B01, B02, B03, B04, B05, B06 }, \
    { A10, A11, A12, A13, A14, A15,      B10, B11, B12, B13, B14, B15, B16 }, \
    { A20, A21, A22, A23, A24, A25,      B20, B21, B22, B23, B24, B25, B26 }, \
    {      A31, A32, A33, A34, A35,           B31, B32, B33, B34, B35 } \
  }



typedef union {
    uint32_t raw;
    struct {
        uint8_t cpi_idx;
        uint8_t scrl_div;
        uint8_t rotation_angle;
        int8_t scrl_inv;
        bool scrl_mode;
        report_mouse_t last_mouse;
    };
} cocot_config_t;

extern cocot_config_t cocot_config;

enum cocot_keycodes {

    COCOT_SAFE_RANGE = SAFE_RANGE,
    CPI_SW,
    SCRL_SW,
    ROT_R15,
    ROT_L15,
    SCRL_MO,
    SCRL_TO,
    SCRL_IN,
};

#define CPI_SW QK_KB_0
#define SCRL_SW QK_KB_1
#define ROT_R15 QK_KB_2
#define ROT_L15 QK_KB_3
#define SCRL_MO QK_KB_4
#define SCRL_TO QK_KB_5
#define SCRL_IN QK_KB_6



bool encoder_update_user(uint8_t index, bool clockwise);
bool encoder_update_kb(uint8_t index, bool clockwise);

bool cocot_get_scroll_mode(void);
void cocot_set_scroll_mode(bool mode);


void enable_click_layer(void);
void disable_click_layer(void);
int16_t my_abs(int16_t num);
int16_t mmouse_move_y_sign(int16_t num);
bool is_clickable_mode(void);


void render_logo(void);
void oled_write_layer_state(void);
