// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdr_u_short
static bool_t(*funcptr) (XDR * , u_short * ) = 0;

bool_t xdr_u_short (XDR * arg0 , u_short * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_u_short");
	validate_NULL_TYPETYPE(arg0, "xdr_u_short");
	validate_NULL_TYPETYPE(arg1, "xdr_u_short");
	return funcptr(arg0, arg1);
}

bool_t lsb_xdr_u_short (XDR * arg0 , u_short * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_u_short");
	return funcptr(arg0, arg1);
}

