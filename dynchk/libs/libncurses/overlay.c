// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <term.h>
#include <curses.h>
#undef overlay
static int(*funcptr) (const WINDOW * , WINDOW * ) = 0;

int overlay (const WINDOW * arg0 , WINDOW * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "overlay");
	validate_Rdaddress( arg0, "overlay - arg0");
	validate_NULL_TYPETYPE(  arg0, "overlay - arg0");
	validate_Rdaddress( arg1, "overlay - arg1");
	validate_NULL_TYPETYPE(  arg1, "overlay - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_overlay (const WINDOW * arg0 , WINDOW * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "overlay");
	return funcptr(arg0, arg1);
}

