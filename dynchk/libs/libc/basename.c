// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef basename
static char *(*funcptr) (const char * ) = 0;

char * basename (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "basename");
	validate_NULL_TYPETYPE(arg0, "basename");
	return funcptr(arg0);
}

char * lsb_basename (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "basename");
	return funcptr(arg0);
}

