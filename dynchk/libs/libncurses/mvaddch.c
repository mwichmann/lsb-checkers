// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, int, const chtype) = 0;

int mvaddch(int arg0, int arg1, const chtype arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvaddch");
	validate_NULL_TYPETYPE(arg0, "mvaddch");
	validate_NULL_TYPETYPE(arg1, "mvaddch");
	validate_NULL_TYPETYPE(arg2, "mvaddch");
	return funcptr(arg0, arg1, arg2);
}

int lsb_mvaddch(int arg0, int arg1, const chtype arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvaddch");
	return funcptr(arg0, arg1, arg2);
}

