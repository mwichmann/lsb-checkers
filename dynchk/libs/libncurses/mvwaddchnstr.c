// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(WINDOW *, int, int, const chtype *, int) = 0;

int mvwaddchnstr(WINDOW * arg0, int arg1, int arg2, const chtype * arg3, int arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwaddchnstr");
	validate_NULL_TYPETYPE(arg0, "mvwaddchnstr");
	validate_NULL_TYPETYPE(arg1, "mvwaddchnstr");
	validate_NULL_TYPETYPE(arg2, "mvwaddchnstr");
	validate_NULL_TYPETYPE(arg3, "mvwaddchnstr");
	validate_NULL_TYPETYPE(arg4, "mvwaddchnstr");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int lsb_mvwaddchnstr(WINDOW * arg0, int arg1, int arg2, const chtype * arg3, int arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwaddchnstr");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

