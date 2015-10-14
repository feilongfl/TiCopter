#include "AnalogIn.h"

using namespace TiCopter;

TiCopterAnalogSource::TiCopterAnalogSource(float v) :
    _v(v)
{}

float TiCopterAnalogSource::read_average() {
    return _v;
}

float TiCopterAnalogSource::voltage_average() {
    return 5.0f * _v / 1024.0f;
}

float TiCopterAnalogSource::voltage_latest() {
    return 5.0f * _v / 1024.0f;
}

float TiCopterAnalogSource::read_latest() {
    return _v;
}

void TiCopterAnalogSource::set_pin(uint8_t p)
{}

void TiCopterAnalogSource::set_stop_pin(uint8_t p)
{}

void TiCopterAnalogSource::set_settle_time(uint16_t settle_time_ms)
{}

TiCopterAnalogIn::TiCopterAnalogIn()
{}

void TiCopterAnalogIn::init(void* machtnichts)
{}

AP_HAL::AnalogSource* TiCopterAnalogIn::channel(int16_t n) {
    return new TiCopterAnalogSource(1.11);
}

float TiCopterAnalogIn::board_voltage(void)
{
    return 0;
}
