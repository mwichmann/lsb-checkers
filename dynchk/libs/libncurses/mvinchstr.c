// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvinchstr
static int(*funcptr) (int , int , chtype * ) = 0;

int mvinchstr (int arg0 , int arg1 , chtype * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinchstr");
	validate_NULL_TYPETYPE(  arg0, "mvinchstr - arg0");
	validate_NULL_TYPETYPE(  arg1, "mvinchstr - arg1");
	validate_Rdaddress( arg2, "mvinchstr - arg2");
	validate_NULL_TYPETYPE(  arg2, "mvinchstr - arg2");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_mvinchstr (int arg0 , int arg1 , chtype * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinchstr");
	return funcptr(arg0, arg1, arg2);
}

