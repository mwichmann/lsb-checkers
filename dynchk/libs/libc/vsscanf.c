// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#undef vsscanf
static int(*funcptr) (const char * , const char * , va_list ) = 0;

int vsscanf (const char * arg0 , const char * arg1 , va_list arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vsscanf");
	validate_Rdaddress( arg0, "vsscanf - arg0");
	validate_NULL_TYPETYPE(  arg0, "vsscanf - arg0");
	validate_Rdaddress( arg1, "vsscanf - arg1");
	validate_NULL_TYPETYPE(  arg1, "vsscanf - arg1");
	validate_NULL_TYPETYPE(  arg2, "vsscanf - arg2");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_vsscanf (const char * arg0 , const char * arg1 , va_list arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vsscanf");
	return funcptr(arg0, arg1, arg2);
}

