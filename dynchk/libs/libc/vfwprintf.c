// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <wchar.h>
#undef vfwprintf
static int(*funcptr) (FILE * , const wchar_t * , va_list ) = 0;

int vfwprintf (FILE * arg0 , const wchar_t * arg1 , va_list arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfwprintf");
	validate_Rdaddress( arg0, "vfwprintf - arg0");
	validate_NULL_TYPETYPE(  arg0, "vfwprintf - arg0");
	validate_Rdaddress( arg1, "vfwprintf - arg1");
	validate_NULL_TYPETYPE(  arg1, "vfwprintf - arg1");
	validate_NULL_TYPETYPE(  arg2, "vfwprintf - arg2");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_vfwprintf (FILE * arg0 , const wchar_t * arg1 , va_list arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfwprintf");
	return funcptr(arg0, arg1, arg2);
}

