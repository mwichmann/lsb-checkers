// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef feof
static int(*funcptr) (FILE * ) = 0;

int feof (FILE * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "feof");
	validate_Rdaddress( arg0, "feof - arg0");
	validate_NULL_TYPETYPE(  arg0, "feof - arg0");
	return funcptr(arg0);
}

int __lsb_feof (FILE * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "feof");
	return funcptr(arg0);
}

