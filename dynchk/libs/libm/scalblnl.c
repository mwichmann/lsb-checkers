// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef scalblnl
static long double(*funcptr) (long double , long ) = 0;

long double scalblnl (long double arg0 , long arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scalblnl");
	validate_NULL_TYPETYPE(  arg0, "scalblnl - arg0");
	validate_NULL_TYPETYPE(  arg1, "scalblnl - arg1");
	return funcptr(arg0, arg1);
}

long double __lsb_scalblnl (long double arg0 , long arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scalblnl");
	return funcptr(arg0, arg1);
}

