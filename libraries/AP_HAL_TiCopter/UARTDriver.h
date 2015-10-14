
#ifndef __AP_HAL_TiCopter_UARTDRIVER_H__
#define __AP_HAL_TiCopter_UARTDRIVER_H__

#include "AP_HAL_TiCopter.h"

class TiCopter::TiCopterUARTDriver : public AP_HAL::UARTDriver {
public:
    TiCopterUARTDriver();
    /* TiCopter implementations of UARTDriver virtual methods */
    void begin(uint32_t b);
    void begin(uint32_t b, uint16_t rxS, uint16_t txS);
    void end();
    void flush();
    bool is_initialized();
    void set_blocking_writes(bool blocking);
    bool tx_pending();

    /* TiCopter implementations of Stream virtual methods */
    int16_t available();
    int16_t txspace();
    int16_t read();

    /* TiCopter implementations of Print virtual methods */
    size_t write(uint8_t c);
    size_t write(const uint8_t *buffer, size_t size);
};

#endif // __AP_HAL_TiCopter_UARTDRIVER_H__
