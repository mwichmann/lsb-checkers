// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
static int(*funcptr)(gzFile) = 0;

int gzrewind(gzFile arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzrewind");
	validate_NULL_TYPETYPE(arg0, "gzrewind");
	return funcptr(arg0);
}

int lsb_gzrewind(gzFile arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzrewind");
	return funcptr(arg0);
}

