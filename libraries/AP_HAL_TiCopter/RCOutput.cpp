
#include "RCOutput.h"

using namespace TiCopter;

void TiCopterRCOutput::init(void* machtnichts) {}

void TiCopterRCOutput::set_freq(uint32_t chmask, uint16_t freq_hz) {}

uint16_t TiCopterRCOutput::get_freq(uint8_t ch) {
    return 50;
}

void TiCopterRCOutput::enable_ch(uint8_t ch)
{}

void TiCopterRCOutput::disable_ch(uint8_t ch)
{}

void TiCopterRCOutput::write(uint8_t ch, uint16_t period_us)
{}

uint16_t TiCopterRCOutput::read(uint8_t ch) {
    return 900;
}

void TiCopterRCOutput::read(uint16_t* period_us, uint8_t len)
{}

