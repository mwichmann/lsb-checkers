// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(WINDOW *, int, int, chtype *) = 0;

int mvwinchstr(WINDOW * arg0, int arg1, int arg2, chtype * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwinchstr");
	validate_NULL_TYPETYPE(arg0, "mvwinchstr");
	validate_NULL_TYPETYPE(arg1, "mvwinchstr");
	validate_NULL_TYPETYPE(arg2, "mvwinchstr");
	validate_NULL_TYPETYPE(arg3, "mvwinchstr");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_mvwinchstr(WINDOW * arg0, int arg1, int arg2, chtype * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwinchstr");
	return funcptr(arg0, arg1, arg2, arg3);
}

