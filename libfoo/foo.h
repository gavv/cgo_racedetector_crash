#pragma once

typedef void(*foo_callback_t)();

void foo_register_callback(foo_callback_t callback);
