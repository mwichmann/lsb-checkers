// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef whline
static int(*funcptr) (WINDOW * , chtype , int ) = 0;

int whline (WINDOW * arg0 , chtype arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "whline");
	validate_Rdaddress( arg0, "whline - arg0");
	validate_NULL_TYPETYPE(  arg0, "whline - arg0");
	validate_NULL_TYPETYPE(  arg1, "whline - arg1");
	validate_NULL_TYPETYPE(  arg2, "whline - arg2");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_whline (WINDOW * arg0 , chtype arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "whline");
	return funcptr(arg0, arg1, arg2);
}

