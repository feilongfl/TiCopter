
#include "Scheduler.h"

using namespace TiCopter;

extern const AP_HAL::HAL& hal;

TiCopterScheduler::TiCopterScheduler()
{}

void TiCopterScheduler::init(void* machtnichts)
{}

void TiCopterScheduler::delay(uint16_t ms)
{}

uint64_t TiCopterScheduler::millis64() {
    return 10000;
}

uint64_t TiCopterScheduler::micros64() {
    return 200000;
}

uint32_t TiCopterScheduler::millis() {
    return millis64();
}

uint32_t TiCopterScheduler::micros() {
    return micros64();
}

void TiCopterScheduler::delay_microseconds(uint16_t us)
{}

void TiCopterScheduler::register_delay_callback(AP_HAL::Proc k,
            uint16_t min_time_ms)
{}

void TiCopterScheduler::register_timer_process(AP_HAL::MemberProc k)
{}

void TiCopterScheduler::register_io_process(AP_HAL::MemberProc k)
{}

void TiCopterScheduler::register_timer_failsafe(AP_HAL::Proc, uint32_t period_us)
{}

void TiCopterScheduler::suspend_timer_procs()
{}

void TiCopterScheduler::resume_timer_procs()
{}

bool TiCopterScheduler::in_timerprocess() {
    return false;
}

void TiCopterScheduler::begin_atomic()
{}

void TiCopterScheduler::end_atomic()
{}

bool TiCopterScheduler::system_initializing() {
    return false;
}

void TiCopterScheduler::system_initialized()
{}

void TiCopterScheduler::panic(const prog_char_t *errormsg) {
    hal.console->println_P(errormsg);
    for(;;);
}

void TiCopterScheduler::reboot(bool hold_in_bootloader) {
    for(;;);
}
