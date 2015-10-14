
#ifndef __AP_HAL_TiCopter_CLASS_H__
#define __AP_HAL_TiCopter_CLASS_H__

#include <AP_HAL/AP_HAL.h>

#include "AP_HAL_TiCopter_Namespace.h"
#include "PrivateMember.h"

class HAL_TiCopter : public AP_HAL::HAL {
public:
    HAL_TiCopter();
    void init(int argc, char * const * argv) const;
private:
    TiCopter::TiCopterPrivateMember *_member;
};

extern const HAL_TiCopter AP_HAL_TiCopter;

#endif // __AP_HAL_TiCopter_CLASS_H__

