
#ifndef __AP_HAL_TiCopter_RCINPUT_H__
#define __AP_HAL_TiCopter_RCINPUT_H__

#include "AP_HAL_TiCopter.h"

class TiCopter::TiCopterRCInput : public AP_HAL::RCInput {
public:
    TiCopterRCInput();
    void init(void* machtnichts);
    bool  new_input();
    uint8_t num_channels();
    uint16_t read(uint8_t ch);
    uint8_t read(uint16_t* periods, uint8_t len);

    bool set_overrides(int16_t *overrides, uint8_t len);
    bool set_override(uint8_t channel, int16_t override);
    void clear_overrides();
};

#endif // __AP_HAL_TiCopter_RCINPUT_H__
