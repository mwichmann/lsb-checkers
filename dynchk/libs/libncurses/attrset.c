// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef attrset
static int(*funcptr) (int ) = 0;

int attrset (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "attrset");
	validate_NULL_TYPETYPE(arg0, "attrset");
	return funcptr(arg0);
}

int lsb_attrset (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "attrset");
	return funcptr(arg0);
}

