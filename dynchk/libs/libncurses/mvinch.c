// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvinch
static chtype(*funcptr) (int , int ) = 0;

chtype mvinch (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinch");
	validate_NULL_TYPETYPE(  arg0, "mvinch - arg0");
	validate_NULL_TYPETYPE(  arg1, "mvinch - arg1");
	return funcptr(arg0, arg1);
}

chtype __lsb_mvinch (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinch");
	return funcptr(arg0, arg1);
}

