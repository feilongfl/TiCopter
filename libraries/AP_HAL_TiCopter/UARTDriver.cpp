
#include "UARTDriver.h"

using namespace TiCopter;

TiCopterUARTDriver::TiCopterUARTDriver() {}

void TiCopterUARTDriver::begin(uint32_t b) {}
void TiCopterUARTDriver::begin(uint32_t b, uint16_t rxS, uint16_t txS) {}
void TiCopterUARTDriver::end() {}
void TiCopterUARTDriver::flush() {}
bool TiCopterUARTDriver::is_initialized() { return false; }
void TiCopterUARTDriver::set_blocking_writes(bool blocking) {}
bool TiCopterUARTDriver::tx_pending() { return false; }

/* TiCopter implementations of Stream virtual methods */
int16_t TiCopterUARTDriver::available() { return 0; }
int16_t TiCopterUARTDriver::txspace() { return 1; }
int16_t TiCopterUARTDriver::read() { return -1; }

/* TiCopter implementations of Print virtual methods */
size_t TiCopterUARTDriver::write(uint8_t c) { return 0; }

size_t TiCopterUARTDriver::write(const uint8_t *buffer, size_t size)
{
    size_t n = 0;
    while (size--) {
        n += write(*buffer++);
    }
    return n;
}
