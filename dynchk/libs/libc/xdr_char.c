// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static bool_t(*funcptr)(struct XDR *, char *) = 0;

bool_t xdr_char(struct XDR * arg0, char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_char");
	validate_NULL_TYPETYPE(arg0, "xdr_char");
	validate_NULL_TYPETYPE(arg1, "xdr_char");
	return funcptr(arg0, arg1);
}

bool_t lsb_xdr_char(struct XDR * arg0, char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_char");
	return funcptr(arg0, arg1);
}

