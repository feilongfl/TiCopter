
#include "GPIO.h"

using namespace TiCopter;

TiCopterGPIO::TiCopterGPIO()
{}

void TiCopterGPIO::init()
{}

void TiCopterGPIO::pinMode(uint8_t pin, uint8_t output)
{}

int8_t TiCopterGPIO::analogPinToDigitalPin(uint8_t pin)
{
	return -1;
}


uint8_t TiCopterGPIO::read(uint8_t pin) {
    return 0;
}

void TiCopterGPIO::write(uint8_t pin, uint8_t value)
{}

void TiCopterGPIO::toggle(uint8_t pin)
{}

/* Alternative interface: */
AP_HAL::DigitalSource* TiCopterGPIO::channel(uint16_t n) {
    return new TiCopterDigitalSource(0);
}

/* Interrupt interface: */
bool TiCopterGPIO::attach_interrupt(uint8_t interrupt_num, AP_HAL::Proc p,
        uint8_t mode) {
    return true;
}

bool TiCopterGPIO::usb_connected(void)
{
    return false;
}

TiCopterDigitalSource::TiCopterDigitalSource(uint8_t v) :
    _v(v)
{}

void TiCopterDigitalSource::mode(uint8_t output)
{}

uint8_t TiCopterDigitalSource::read() {
    return _v;
}

void TiCopterDigitalSource::write(uint8_t value) {
    _v = value;
}

void TiCopterDigitalSource::toggle() {
    _v = !_v;
}
