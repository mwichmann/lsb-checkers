// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
static void(*funcptr)(chtype) = 0;

void bkgdset(chtype arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "bkgdset");
	validate_NULL_TYPETYPE(arg0, "bkgdset");
	funcptr(arg0);
}

void lsb_bkgdset(chtype arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "bkgdset");
	funcptr(arg0);
}

