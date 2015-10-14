
#ifndef __AP_HAL_TiCopter_UTIL_H__
#define __AP_HAL_TiCopter_UTIL_H__

#include <AP_HAL/AP_HAL.h>
#include "AP_HAL_TiCopter_Namespace.h"

class TiCopter::TiCopterUtil : public AP_HAL::Util {
public:
    bool run_debug_shell(AP_HAL::BetterStream *stream) { return false; }
};

#endif // __AP_HAL_TiCopter_UTIL_H__
