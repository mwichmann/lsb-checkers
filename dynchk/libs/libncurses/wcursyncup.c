// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef wcursyncup
static void(*funcptr) (WINDOW * ) = 0;

void wcursyncup (WINDOW * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcursyncup");
	validate_Rdaddress( arg0, "wcursyncup - arg0");
	validate_NULL_TYPETYPE(  arg0, "wcursyncup - arg0");
	funcptr(arg0);
}

void __lsb_wcursyncup (WINDOW * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcursyncup");
	funcptr(arg0);
}

