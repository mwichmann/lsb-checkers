// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef init_pair
static int(*funcptr) (short , short , short ) = 0;

int init_pair (short arg0 , short arg1 , short arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "init_pair");
	validate_NULL_TYPETYPE(  arg0, "init_pair - arg0");
	validate_NULL_TYPETYPE(  arg1, "init_pair - arg1");
	validate_NULL_TYPETYPE(  arg2, "init_pair - arg2");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_init_pair (short arg0 , short arg1 , short arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "init_pair");
	return funcptr(arg0, arg1, arg2);
}

