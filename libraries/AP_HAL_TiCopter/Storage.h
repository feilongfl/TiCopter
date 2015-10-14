
#ifndef __AP_HAL_TiCopter_STORAGE_H__
#define __AP_HAL_TiCopter_STORAGE_H__

#include "AP_HAL_TiCopter.h"

class TiCopter::TiCopterStorage : public AP_HAL::Storage {
public:
    TiCopterStorage();
    void init(void *);
    void read_block(void *dst, uint16_t src, size_t n);
    void write_block(uint16_t dst, const void* src, size_t n);
};

#endif // __AP_HAL_TiCopter_STORAGE_H__
