#include "hex2color.h"
#include <string.h>
#include <stdint.h>
int hex_value(char c)
{
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return -1;
}

int parse_byte(const char *str, unsigned char *out)
{
    int hi = hex_value(str[0]);
    int lo = hex_value(str[1]);

    if (hi < 0 || lo < 0) return 0;

    *out = (unsigned char)((hi << 4) | lo);
    return 1;
}

Color ColorFromHex(const char *hex)
{
    Color color = {0, 0, 0, 255}; // default: black, fully opaque

    if (!hex) return color;

    if (hex[0] == '#') hex++;

    size_t len = strlen(hex);
    if (len != 6 && len != 8)
        return color;

    if (!parse_byte(hex + 0, &color.r)) return color;
    if (!parse_byte(hex + 2, &color.g)) return color;
    if (!parse_byte(hex + 4, &color.b)) return color;

    if (len == 8)
    {
        if (!parse_byte(hex + 6, &color.a)) return color;
    }

    return color;
}
