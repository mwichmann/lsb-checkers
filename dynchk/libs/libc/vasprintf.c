// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#undef vasprintf
static int(*funcptr) (char * * , const char * , va_list ) = 0;

int vasprintf (char * * arg0 , const char * arg1 , va_list arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vasprintf");
	validate_Rdaddress(* arg0, "vasprintf");
	validate_Rdaddress( arg0, "vasprintf");
	validate_NULL_TYPETYPE(  arg0, "vasprintf");
	validate_Rdaddress( arg1, "vasprintf");
	validate_NULL_TYPETYPE(  arg1, "vasprintf");
	validate_NULL_TYPETYPE(  arg2, "vasprintf");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_vasprintf (char * * arg0 , const char * arg1 , va_list arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vasprintf");
	return funcptr(arg0, arg1, arg2);
}

