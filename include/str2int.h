#ifndef __PANASMOTI_RAYLIB_CROSS_DEMO_STR2INT_H__
#define __PANASMOTI_RAYLIB_CROSS_DEMO_STR2INT_H__

#include <stdint.h>
#include <stdlib.h>

// signed integers
extern int8_t strtoi8(const char* s);
extern int16_t strtoi16(const char* s);
extern int32_t strtoi32(const char* s);
extern int64_t strtoi64(const char* s);

// unsigned integers
extern uint8_t strtou8(const char* s);
extern uint16_t strtou16(const char* s);
extern uint32_t strtou32(const char* s);
extern uint64_t strtou64(const char* s);

#endif // __PANASMOTI_RAYLIB_CROSS_DEMO_STR2INT_H__
