// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <time.h>
#undef strptime
static char *(*funcptr) (const char * , const char * , struct tm * ) = 0;

char * strptime (const char * arg0 , const char * arg1 , struct tm * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strptime");
	validate_NULL_TYPETYPE(arg0, "strptime");
	validate_NULL_TYPETYPE(arg1, "strptime");
	validate_NULL_TYPETYPE(arg2, "strptime");
	return funcptr(arg0, arg1, arg2);
}

char * lsb_strptime (const char * arg0 , const char * arg1 , struct tm * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strptime");
	return funcptr(arg0, arg1, arg2);
}

