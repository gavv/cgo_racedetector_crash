#include "foo.h"

#include <stdio.h>

static foo_callback_t g_callback;

void foo_register_callback(foo_callback_t callback) {
    fprintf(stderr, "foo_register_callback\n");
    g_callback = callback;
}

__attribute__((destructor)) static void foo_destructor() {
    fprintf(stderr, "foo_destructor\n");
    g_callback();
}
