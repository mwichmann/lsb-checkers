// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef catan
static double(*funcptr) () = 0;

double catan ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "catan");
	return funcptr();
}

double lsb_catan ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "catan");
	return funcptr();
}

