// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef fgetpos
static int(*funcptr) (FILE * , fpos_t * ) = 0;

int fgetpos (FILE * arg0 , fpos_t * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fgetpos");
	validate_Rdaddress( arg0, "fgetpos - arg0");
	validate_NULL_TYPETYPE(  arg0, "fgetpos - arg0");
	validate_Rdaddress( arg1, "fgetpos - arg1");
	validate_NULL_TYPETYPE(  arg1, "fgetpos - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_fgetpos (FILE * arg0 , fpos_t * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fgetpos");
	return funcptr(arg0, arg1);
}

