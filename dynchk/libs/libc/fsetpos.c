// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef fsetpos
static int(*funcptr) (FILE * , const fpos_t * ) = 0;

int fsetpos (FILE * arg0 , const fpos_t * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fsetpos");
	validate_Rdaddress( arg0, "fsetpos - arg0");
	validate_NULL_TYPETYPE(  arg0, "fsetpos - arg0");
	validate_Rdaddress( arg1, "fsetpos - arg1");
	validate_NULL_TYPETYPE(  arg1, "fsetpos - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_fsetpos (FILE * arg0 , const fpos_t * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fsetpos");
	return funcptr(arg0, arg1);
}

