// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/types.h>
static bool_t(*funcptr)(struct XDR *, caddr_t, u_int) = 0;

bool_t xdr_opaque(struct XDR * arg0, caddr_t arg1, u_int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_opaque");
	validate_NULL_TYPETYPE(arg0, "xdr_opaque");
	validate_NULL_TYPETYPE(arg1, "xdr_opaque");
	validate_NULL_TYPETYPE(arg2, "xdr_opaque");
	return funcptr(arg0, arg1, arg2);
}

bool_t lsb_xdr_opaque(struct XDR * arg0, caddr_t arg1, u_int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_opaque");
	return funcptr(arg0, arg1, arg2);
}

