
#ifndef __AP_HAL_TiCopter_ANALOGIN_H__
#define __AP_HAL_TiCopter_ANALOGIN_H__

#include "AP_HAL_TiCopter.h"

class TiCopter::TiCopterAnalogSource : public AP_HAL::AnalogSource {
public:
    TiCopterAnalogSource(float v);
    float read_average();
    float read_latest();
    void set_pin(uint8_t p);
    void set_stop_pin(uint8_t p);
    void set_settle_time(uint16_t settle_time_ms);
    float voltage_average();
    float voltage_latest();
    float voltage_average_ratiometric() { return voltage_average(); }
private:
    float _v;
};

class TiCopter::TiCopterAnalogIn : public AP_HAL::AnalogIn {
public:
    TiCopterAnalogIn();
    void init(void* implspecific);
    AP_HAL::AnalogSource* channel(int16_t n);
    float board_voltage(void);
};
#endif // __AP_HAL_TiCopter_ANALOGIN_H__
