// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static bool_t(*funcptr)(struct XDR *, double *) = 0;

bool_t xdr_double(struct XDR * arg0, double * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_double");
	validate_NULL_TYPETYPE(arg0, "xdr_double");
	validate_NULL_TYPETYPE(arg1, "xdr_double");
	return funcptr(arg0, arg1);
}

bool_t lsb_xdr_double(struct XDR * arg0, double * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_double");
	return funcptr(arg0, arg1);
}

