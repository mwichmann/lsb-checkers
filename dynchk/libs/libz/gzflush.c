// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef gzflush
static int(*funcptr) (gzFile , int ) = 0;

int gzflush (gzFile arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzflush");
	validate_NULL_TYPETYPE(  arg0, "gzflush - arg0");
	validate_NULL_TYPETYPE(  arg1, "gzflush - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_gzflush (gzFile arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzflush");
	return funcptr(arg0, arg1);
}

