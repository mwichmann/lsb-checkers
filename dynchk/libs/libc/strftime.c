// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef strftime
static size_t(*funcptr) (char * , size_t , const char * , const struct tm * ) = 0;

size_t strftime (char * arg0 , size_t arg1 , const char * arg2 , const struct tm * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strftime");
	validate_NULL_TYPETYPE(arg0, "strftime");
	validate_NULL_TYPETYPE(arg1, "strftime");
	validate_NULL_TYPETYPE(arg2, "strftime");
	validate_NULL_TYPETYPE(arg3, "strftime");
	return funcptr(arg0, arg1, arg2, arg3);
}

size_t lsb_strftime (char * arg0 , size_t arg1 , const char * arg2 , const struct tm * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strftime");
	return funcptr(arg0, arg1, arg2, arg3);
}

