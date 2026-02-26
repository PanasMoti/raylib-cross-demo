#include "load_cfg.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int handler(void* data, const char* section, const char* name, const char* value) {
    config* pconfig = (config*)data;
    BEGIN_MATCH
    MATCH(window, width)
    MATCH(window, height)
    MATCH(window, title)
    MATCH(window, bgcolor)
    END_MATCH;
    return 1;
}

int free_config(config *cfg) {
    // free strings
    free((void*)cfg->window.title);
    free((void*)cfg->window.bgcolor);
    return 1;
}
