// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static char *(*funcptr)(char *, const char *, char * *) = 0;

char * strtok_r(char * arg0, const char * arg1, char * * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtok_r");
	validate_NULL_TYPETYPE(arg0, "strtok_r");
	validate_NULL_TYPETYPE(arg1, "strtok_r");
	validate_NULL_TYPETYPE(arg2, "strtok_r");
	return funcptr(arg0, arg1, arg2);
}

char * lsb_strtok_r(char * arg0, const char * arg1, char * * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtok_r");
	return funcptr(arg0, arg1, arg2);
}

