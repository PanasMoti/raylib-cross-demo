#ifndef __PANASMOTI_RAYLIB_CROSS_DEMO_HEX2COLOR_H__
#define __PANASMOTI_RAYLIB_CROSS_DEMO_HEX2COLOR_H__
#include <raylib.h>

int hex_value(char c);
int parse_byte(const char* str, unsigned char *out);
Color ColorFromHex(const char* hex);

#endif // __PANASMOTI_RAYLIB_CROSS_DEMO_HEX2COLOR_H__
