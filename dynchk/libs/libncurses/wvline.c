// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
static int(*funcptr)(WINDOW *, chtype, int) = 0;

int wvline(WINDOW * arg0, chtype arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wvline");
	validate_NULL_TYPETYPE(arg0, "wvline");
	validate_NULL_TYPETYPE(arg1, "wvline");
	validate_NULL_TYPETYPE(arg2, "wvline");
	return funcptr(arg0, arg1, arg2);
}

int lsb_wvline(WINDOW * arg0, chtype arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wvline");
	return funcptr(arg0, arg1, arg2);
}

