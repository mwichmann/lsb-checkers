// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef fseek
static int(*funcptr) (FILE * , long , int ) = 0;

int fseek (FILE * arg0 , long arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fseek");
	validate_Rdaddress( arg0, "fseek - arg0");
	validate_NULL_TYPETYPE(  arg0, "fseek - arg0");
	validate_NULL_TYPETYPE(  arg1, "fseek - arg1");
	validate_NULL_TYPETYPE(  arg2, "fseek - arg2");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_fseek (FILE * arg0 , long arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fseek");
	return funcptr(arg0, arg1, arg2);
}

