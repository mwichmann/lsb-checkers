// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XDR *, float *) = 0;

bool_t xdr_float(XDR * arg0, float * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_float");
	validate_NULL_TYPETYPE(arg0, "xdr_float");
	validate_NULL_TYPETYPE(arg1, "xdr_float");
	return funcptr(arg0, arg1);
}

bool_t lsb_xdr_float(XDR * arg0, float * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_float");
	return funcptr(arg0, arg1);
}

