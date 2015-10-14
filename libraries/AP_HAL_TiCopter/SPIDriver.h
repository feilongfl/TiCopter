
#ifndef __AP_HAL_TiCopter_SPIDRIVER_H__
#define __AP_HAL_TiCopter_SPIDRIVER_H__

#include "AP_HAL_TiCopter.h"
#include "Semaphores.h"

class TiCopter::TiCopterSPIDeviceDriver : public AP_HAL::SPIDeviceDriver {
public:
    TiCopterSPIDeviceDriver();
    void init();
    AP_HAL::Semaphore* get_semaphore();
    bool transaction(const uint8_t *tx, uint8_t *rx, uint16_t len);

    void cs_assert();
    void cs_release();
    uint8_t transfer (uint8_t data);
    void transfer (const uint8_t *data, uint16_t len);
private:
    TiCopterSemaphore _semaphore;
};

class TiCopter::TiCopterSPIDeviceManager : public AP_HAL::SPIDeviceManager {
public:
    TiCopterSPIDeviceManager();
    void init(void *);
    AP_HAL::SPIDeviceDriver* device(enum AP_HAL::SPIDevice, uint8_t index);
private:
    TiCopterSPIDeviceDriver _device;
};

#endif // __AP_HAL_TiCopter_SPIDRIVER_H__
