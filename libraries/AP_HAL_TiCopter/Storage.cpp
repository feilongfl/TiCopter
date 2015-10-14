
#include <string.h>
#include "Storage.h"

using namespace TiCopter;

TiCopterStorage::TiCopterStorage()
{}

void TiCopterStorage::init(void*)
{}

void TiCopterStorage::read_block(void* dst, uint16_t src, size_t n) {
    memset(dst, 0, n);
}

void TiCopterStorage::write_block(uint16_t loc, const void* src, size_t n)
{}

