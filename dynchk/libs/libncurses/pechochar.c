// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
static int(*funcptr)(WINDOW *, chtype) = 0;

int pechochar(WINDOW * arg0, chtype arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pechochar");
	validate_NULL_TYPETYPE(arg0, "pechochar");
	validate_NULL_TYPETYPE(arg1, "pechochar");
	return funcptr(arg0, arg1);
}

int lsb_pechochar(WINDOW * arg0, chtype arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pechochar");
	return funcptr(arg0, arg1);
}

