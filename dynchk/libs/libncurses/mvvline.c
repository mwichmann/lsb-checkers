// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvvline
static int(*funcptr) (int , int , chtype , int ) = 0;

int mvvline (int arg0 , int arg1 , chtype arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvvline");
	validate_NULL_TYPETYPE(  arg0, "mvvline - arg0");
	validate_NULL_TYPETYPE(  arg1, "mvvline - arg1");
	validate_NULL_TYPETYPE(  arg2, "mvvline - arg2");
	validate_NULL_TYPETYPE(  arg3, "mvvline - arg3");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_mvvline (int arg0 , int arg1 , chtype arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvvline");
	return funcptr(arg0, arg1, arg2, arg3);
}

