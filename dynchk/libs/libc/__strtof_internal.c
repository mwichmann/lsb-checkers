// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static float(*funcptr)(const char *, char * *, int) = 0;

float __strtof_internal(const char * arg0, char * * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtof_internal");
	validate_NULL_TYPETYPE(arg0, "__strtof_internal");
	validate_RWaddress(arg1, "__strtof_internal");
	validate_NULL_TYPETYPE(arg2, "__strtof_internal");
	return funcptr(arg0, arg1, arg2);
}

float lsb___strtof_internal(const char * arg0, char * * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtof_internal");
	return funcptr(arg0, arg1, arg2);
}

