// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <wchar.h>
#undef fwide
static int(*funcptr) (FILE * , int ) = 0;

int fwide (FILE * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fwide");
	validate_Rdaddress( arg0, "fwide - arg0");
	validate_NULL_TYPETYPE(  arg0, "fwide - arg0");
	validate_NULL_TYPETYPE(  arg1, "fwide - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_fwide (FILE * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fwide");
	return funcptr(arg0, arg1);
}

