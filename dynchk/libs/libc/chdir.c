// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef chdir
static int(*funcptr) (const char * ) = 0;

int chdir (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "chdir");
	validate_Rdaddress( arg0, "chdir - arg0");
	validate_NULL_TYPETYPE(  arg0, "chdir - arg0");
	return funcptr(arg0);
}

int __lsb_chdir (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "chdir");
	return funcptr(arg0);
}

