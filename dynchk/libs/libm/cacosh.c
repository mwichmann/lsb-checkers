// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef cacosh
static double(*funcptr) () = 0;

double cacosh ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cacosh");
	return funcptr();
}

double lsb_cacosh ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cacosh");
	return funcptr();
}

