// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XDR *, char * *) = 0;

bool_t xdr_wrapstring(XDR * arg0, char * * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_wrapstring");
	validate_NULL_TYPETYPE(arg0, "xdr_wrapstring");
	validate_NULL_TYPETYPE(arg1, "xdr_wrapstring");
	return funcptr(arg0, arg1);
}

bool_t lsb_xdr_wrapstring(XDR * arg0, char * * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_wrapstring");
	return funcptr(arg0, arg1);
}

