// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef rmdir
static int(*funcptr) (const char * ) = 0;

int rmdir (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rmdir");
	validate_Rdaddress( arg0, "rmdir - arg0");
	validate_NULL_TYPETYPE(  arg0, "rmdir - arg0");
	return funcptr(arg0);
}

int __lsb_rmdir (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rmdir");
	return funcptr(arg0);
}

