// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef slk_attroff
static int(*funcptr) (const chtype ) = 0;

int slk_attroff (const chtype arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "slk_attroff");
	validate_NULL_TYPETYPE(  arg0, "slk_attroff - arg0");
	return funcptr(arg0);
}

int __lsb_slk_attroff (const chtype arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "slk_attroff");
	return funcptr(arg0);
}

