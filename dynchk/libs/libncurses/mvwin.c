// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvwin
static int(*funcptr) (WINDOW * , int , int ) = 0;

int mvwin (WINDOW * arg0 , int arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwin");
	validate_Rdaddress( arg0, "mvwin - arg0");
	validate_NULL_TYPETYPE(  arg0, "mvwin - arg0");
	validate_NULL_TYPETYPE(  arg1, "mvwin - arg1");
	validate_NULL_TYPETYPE(  arg2, "mvwin - arg2");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_mvwin (WINDOW * arg0 , int arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwin");
	return funcptr(arg0, arg1, arg2);
}

