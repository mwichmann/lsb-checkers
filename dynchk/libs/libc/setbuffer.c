// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <stddef.h>
#undef setbuffer
static void(*funcptr) (FILE * , char * , size_t ) = 0;

void setbuffer (FILE * arg0 , char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setbuffer");
	validate_Rdaddress( arg0, "setbuffer - arg0");
	validate_NULL_TYPETYPE(  arg0, "setbuffer - arg0");
	validate_Rdaddress( arg1, "setbuffer - arg1");
	validate_NULL_TYPETYPE(  arg1, "setbuffer - arg1");
	validate_NULL_TYPETYPE(  arg2, "setbuffer - arg2");
	funcptr(arg0, arg1, arg2);
}

void __lsb_setbuffer (FILE * arg0 , char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setbuffer");
	funcptr(arg0, arg1, arg2);
}

