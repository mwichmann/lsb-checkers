// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef clear
static int(*funcptr) () = 0;

int clear ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clear");
	return funcptr();
}

int lsb_clear ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clear");
	return funcptr();
}

