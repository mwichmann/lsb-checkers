// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#undef xdr_double
static bool_t(*funcptr) (XDR * , double * ) = 0;

bool_t xdr_double (XDR * arg0 , double * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_double");
	validate_Rdaddress( arg0, "xdr_double - arg0");
	validate_NULL_TYPETYPE(  arg0, "xdr_double - arg0");
	validate_Rdaddress( arg1, "xdr_double - arg1");
	validate_NULL_TYPETYPE(  arg1, "xdr_double - arg1");
	return funcptr(arg0, arg1);
}

bool_t __lsb_xdr_double (XDR * arg0 , double * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_double");
	return funcptr(arg0, arg1);
}

