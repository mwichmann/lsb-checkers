// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
static int(*funcptr)(gzFile, int) = 0;

int gzputc(gzFile arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzputc");
	validate_NULL_TYPETYPE(arg0, "gzputc");
	validate_NULL_TYPETYPE(arg1, "gzputc");
	return funcptr(arg0, arg1);
}

int lsb_gzputc(gzFile arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzputc");
	return funcptr(arg0, arg1);
}

