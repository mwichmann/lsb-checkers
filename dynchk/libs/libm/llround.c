// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef llround
static long long(*funcptr) (double ) = 0;

long long llround (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "llround");
	validate_NULL_TYPETYPE(arg0, "llround");
	return funcptr(arg0);
}

long long lsb_llround (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "llround");
	return funcptr(arg0);
}

