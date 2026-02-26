#include "str2int.h"
#include <stdlib.h>

#include "int_nicknames.h"

i8 strtoi8(const char* s) {
    return (i8) strtol(s, NULL, 10);
}
i16 strtoi16(const char* s) {
    return (i16) strtol(s, NULL, 10);
}
i32 strtoi32(const char* s) {
    return (i32) strtol(s, NULL, 10);
}
i64 strtoi64(const char* s) {
    return (i64) strtoll(s, NULL, 10);
}
u8 strtou8(const char* s) {
    return (u8) strtoul(s, NULL, 10);
}
u16 strtou16(const char* s) {
    return (u16) strtoul(s, NULL, 10);
}
u32 strtou32(const char* s) {
    return (u32) strtoul(s, NULL, 10);
}
u64 strtou64(const char* s) {
    return (u64) strtoull(s, NULL, 10);
}
