
#include <AP_HAL/AP_HAL.h>
#if CONFIG_HAL_BOARD == HAL_BOARD_TiCopter

#include "HAL_TiCopter_Class.h"
#include "AP_HAL_TiCopter_Private.h"

using namespace TiCopter;

static TiCopterUARTDriver uartADriver;
static TiCopterUARTDriver uartBDriver;
static TiCopterUARTDriver uartCDriver;
static TiCopterSemaphore  i2cSemaphore;
static TiCopterI2CDriver  i2cDriver(&i2cSemaphore);
static TiCopterSPIDeviceManager spiDeviceManager;
static TiCopterAnalogIn analogIn;
static TiCopterStorage storageDriver;
static TiCopterGPIO gpioDriver;
static TiCopterRCInput rcinDriver;
static TiCopterRCOutput rcoutDriver;
static TiCopterScheduler schedulerInstance;
static TiCopterUtil utilInstance;

HAL_TiCopter::HAL_TiCopter() :
    AP_HAL::HAL(
        &uartADriver,
        &uartBDriver,
        &uartCDriver,
        NULL,            /* no uartD */
        NULL,            /* no uartE */
        &i2cDriver,
        NULL, /* only one i2c */
        NULL, /* only one i2c */
        &spiDeviceManager,
        &analogIn,
        &storageDriver,
        &uartADriver,
        &gpioDriver,
        &rcinDriver,
        &rcoutDriver,
        &schedulerInstance,
        &utilInstance),
    _member(new TiCopterPrivateMember(123))
{}

void HAL_TiCopter::init(int argc,char* const argv[]) const {
    /* initialize all drivers and private members here.
     * up to the programmer to do this in the correct order.
     * Scheduler should likely come first. */
    scheduler->init(NULL);
    uartA->begin(115200);
    _member->init();
}

const HAL_TiCopter AP_HAL_TiCopter;

#endif
