// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef wsetscrreg
static int(*funcptr) (WINDOW * , int , int ) = 0;

int wsetscrreg (WINDOW * arg0 , int arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wsetscrreg");
	validate_Rdaddress( arg0, "wsetscrreg - arg0");
	validate_NULL_TYPETYPE(  arg0, "wsetscrreg - arg0");
	validate_NULL_TYPETYPE(  arg1, "wsetscrreg - arg1");
	validate_NULL_TYPETYPE(  arg2, "wsetscrreg - arg2");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_wsetscrreg (WINDOW * arg0 , int arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wsetscrreg");
	return funcptr(arg0, arg1, arg2);
}

