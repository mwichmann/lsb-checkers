// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <rpc/xdr.h>
#undef xdr_reference
static bool_t(*funcptr) (struct XDR * , caddr_t * , u_int , xdrproc_t ) = 0;

bool_t xdr_reference (struct XDR * arg0 , caddr_t * arg1 , u_int arg2 , xdrproc_t arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_reference");
	validate_NULL_TYPETYPE(arg0, "xdr_reference");
	validate_NULL_TYPETYPE(arg1, "xdr_reference");
	validate_NULL_TYPETYPE(arg2, "xdr_reference");
	validate_NULL_TYPETYPE(arg3, "xdr_reference");
	return funcptr(arg0, arg1, arg2, arg3);
}

bool_t lsb_xdr_reference (struct XDR * arg0 , caddr_t * arg1 , u_int arg2 , xdrproc_t arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_reference");
	return funcptr(arg0, arg1, arg2, arg3);
}

