// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef gcvt
static char *(*funcptr) (double , int , char * ) = 0;

char * gcvt (double arg0 , int arg1 , char * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gcvt");
	validate_NULL_TYPETYPE(arg0, "gcvt");
	validate_NULL_TYPETYPE(arg1, "gcvt");
	validate_NULL_TYPETYPE(arg2, "gcvt");
	return funcptr(arg0, arg1, arg2);
}

char * lsb_gcvt (double arg0 , int arg1 , char * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gcvt");
	return funcptr(arg0, arg1, arg2);
}

