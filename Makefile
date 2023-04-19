all:
	gcc -fPIC -shared -o  libfoo.so libfoo/foo.c
	go build .
	LD_LIBRARY_PATH=`pwd` go test -v -race .
