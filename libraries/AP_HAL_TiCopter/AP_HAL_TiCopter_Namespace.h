
#ifndef __AP_HAL_TiCopter_NAMESPACE_H__
#define __AP_HAL_TiCopter_NAMESPACE_H__

/* While not strictly required, names inside the TiCopter namespace are prefixed
 * with TiCopter for clarity. (Some of our users aren't familiar with all of the
 * C++ namespace rules.)
 */

namespace TiCopter {
    class TiCopterUARTDriver;
    class TiCopterI2CDriver;
    class TiCopterSPIDeviceManager;
    class TiCopterSPIDeviceDriver;
    class TiCopterAnalogSource;
    class TiCopterAnalogIn;
    class TiCopterStorage;
    class TiCopterGPIO;
    class TiCopterDigitalSource;
    class TiCopterRCInput;
    class TiCopterRCOutput;
    class TiCopterSemaphore;
    class TiCopterScheduler;
    class TiCopterUtil;
    class TiCopterPrivateMember;
}

#endif // __AP_HAL_TiCopter_NAMESPACE_H__

