// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef scr_set
static int(*funcptr) (const char * ) = 0;

int scr_set (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scr_set");
	validate_Rdaddress( arg0, "scr_set - arg0");
	validate_NULL_TYPETYPE(  arg0, "scr_set - arg0");
	return funcptr(arg0);
}

int __lsb_scr_set (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scr_set");
	return funcptr(arg0);
}

