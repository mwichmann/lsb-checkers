// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(char *, int *, int *, unsigned int *, unsigned int *) = 0;

int XParseGeometry(char * arg0, int * arg1, int * arg2, unsigned int * arg3, unsigned int * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XParseGeometry");
	validate_NULL_TYPETYPE(arg0, "XParseGeometry");
	validate_NULL_TYPETYPE(arg1, "XParseGeometry");
	validate_NULL_TYPETYPE(arg2, "XParseGeometry");
	validate_NULL_TYPETYPE(arg3, "XParseGeometry");
	validate_NULL_TYPETYPE(arg4, "XParseGeometry");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int lsb_XParseGeometry(char * arg0, int * arg1, int * arg2, unsigned int * arg3, unsigned int * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XParseGeometry");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

