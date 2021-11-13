all:
	swig -tcl8 cimpl.i
	gcc -fpic -c cimpl_wrap.c -I /usr/include/tcl8.6/
	gcc -shared cimpl_wrap.o -o cimpl.so -lm -ltcl

clean:
	rm -rf *.c *.o *.so