// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(WINDOW *) = 0;

int untouchwin(WINDOW * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "untouchwin");
	validate_NULL_TYPETYPE(arg0, "untouchwin");
	return funcptr(arg0);
}

int lsb_untouchwin(WINDOW * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "untouchwin");
	return funcptr(arg0);
}

