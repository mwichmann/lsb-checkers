// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XDR *) = 0;

bool_t xdrrec_eof(XDR * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdrrec_eof");
	validate_NULL_TYPETYPE(arg0, "xdrrec_eof");
	return funcptr(arg0);
}

bool_t lsb_xdrrec_eof(XDR * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdrrec_eof");
	return funcptr(arg0);
}

