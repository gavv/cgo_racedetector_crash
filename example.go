package example

/*
#cgo LDFLAGS: -L. -lfoo

#include "libfoo/foo.h"

void go_callback_proxy();
*/
import "C"

//export go_callback
func go_callback() {
	println("go_callback")
}

func example() {
	println("example")
	C.foo_register_callback(C.foo_callback_t(C.go_callback_proxy))
}
