// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef xdr_short
static bool_t(*funcptr) (struct XDR * , short * ) = 0;

bool_t xdr_short (struct XDR * arg0 , short * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_short");
	validate_NULL_TYPETYPE(arg0, "xdr_short");
	validate_NULL_TYPETYPE(arg1, "xdr_short");
	return funcptr(arg0, arg1);
}

bool_t lsb_xdr_short (struct XDR * arg0 , short * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_short");
	return funcptr(arg0, arg1);
}

