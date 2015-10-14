
#include "SPIDriver.h"

using namespace TiCopter;

TiCopterSPIDeviceDriver::TiCopterSPIDeviceDriver()
{}

void TiCopterSPIDeviceDriver::init()
{}

AP_HAL::Semaphore* TiCopterSPIDeviceDriver::get_semaphore()
{
    return &_semaphore;
}

bool TiCopterSPIDeviceDriver::transaction(const uint8_t *tx, uint8_t *rx, uint16_t len)
{
    return true;
}


void TiCopterSPIDeviceDriver::cs_assert()
{}

void TiCopterSPIDeviceDriver::cs_release()
{}

uint8_t TiCopterSPIDeviceDriver::transfer (uint8_t data)
{
    return 0;
}

void TiCopterSPIDeviceDriver::transfer (const uint8_t *data, uint16_t len)
{
}

TiCopterSPIDeviceManager::TiCopterSPIDeviceManager()
{}

void TiCopterSPIDeviceManager::init(void *)
{}

AP_HAL::SPIDeviceDriver* TiCopterSPIDeviceManager::device(enum AP_HAL::SPIDevice, uint8_t index)
{
    return &_device;
}

