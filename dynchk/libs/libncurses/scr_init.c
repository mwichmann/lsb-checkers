// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef scr_init
static int(*funcptr) (const char * ) = 0;

int scr_init (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scr_init");
	validate_Rdaddress( arg0, "scr_init - arg0");
	validate_NULL_TYPETYPE(  arg0, "scr_init - arg0");
	return funcptr(arg0);
}

int __lsb_scr_init (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scr_init");
	return funcptr(arg0);
}

