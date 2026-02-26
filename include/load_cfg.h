#ifndef __PANASMOTI_RAYLIB_CROSS_DEMO_LOAD_CFG_H__
#define __PANASMOTI_RAYLIB_CROSS_DEMO_LOAD_CFG_H__

#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "str2int.h"

typedef struct {
    // [window]
    struct {
        int32_t width;
        int32_t height;
        const char* title;
    } window;
} config;

#define CHECK_MATCH(s, n) strcmp(section, s) == 0 && strcmp(name, n) == 0

#define CONV(T, v) \
    _Generic( (T), \
            int8_t: strtoi8, \
            int16_t: strtoi16, \
            int32_t: strtoi32, \
            int64_t: strtoi64, \
            uint8_t: strtoi8, \
            uint16_t: strtoi16, \
            uint32_t: strtoi32, \
            uint64_t: strtoi64, \
            char*: strdup, \
            const char*: strdup, \
            default: strdup \
            )( (v) )


#define TRY_MATCH(s, n, p) (CHECK_MATCH(#s, #n)) p->s.n = CONV(p->s.n, value)
#define MATCH(s, n) else if TRY_MATCH(s, n, pconfig);
#define BEGIN_MATCH if (0) {}
#define END_MATCH else return 0;


int handler(void* data, const char* section, const char* name,const char* value);

int free_config(config* cfg);

#endif // __PANASMOTI_RAYLIB_CROSS_DEMO_LOAD_CFG_H__
