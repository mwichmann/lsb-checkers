// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <dirent.h>
#undef opendir
static DIR *(*funcptr) (const char * ) = 0;

DIR * opendir (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "opendir");
	validate_Rdaddress( arg0, "opendir - arg0");
	validate_NULL_TYPETYPE(  arg0, "opendir - arg0");
	return funcptr(arg0);
}

DIR * __lsb_opendir (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "opendir");
	return funcptr(arg0);
}

