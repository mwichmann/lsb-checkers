// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <nl_types.h>
static int(*funcptr)(nl_catd, int, int, const char *) = 0;

char * catgets(nl_catd arg0, int arg1, int arg2, const char * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "catgets");
	validate_NULL_TYPETYPE(arg0, "catgets");
	validate_NULL_TYPETYPE(arg1, "catgets");
	validate_NULL_TYPETYPE(arg2, "catgets");
	validate_NULL_TYPETYPE(arg3, "catgets");
	return funcptr(arg0, arg1, arg2, arg3);
}

char * lsb_catgets(nl_catd arg0, int arg1, int arg2, const char * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "catgets");
	return funcptr(arg0, arg1, arg2, arg3);
}

