// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef getstr
static int(*funcptr) (char * ) = 0;

int getstr (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getstr");
	validate_NULL_TYPETYPE(arg0, "getstr");
	return funcptr(arg0);
}

int lsb_getstr (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getstr");
	return funcptr(arg0);
}

