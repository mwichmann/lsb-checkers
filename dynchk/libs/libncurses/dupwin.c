// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef dupwin
static WINDOW *(*funcptr) (WINDOW * ) = 0;

WINDOW * dupwin (WINDOW * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dupwin");
	validate_Rdaddress( arg0, "dupwin - arg0");
	validate_NULL_TYPETYPE(  arg0, "dupwin - arg0");
	return funcptr(arg0);
}

WINDOW * __lsb_dupwin (WINDOW * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dupwin");
	return funcptr(arg0);
}

