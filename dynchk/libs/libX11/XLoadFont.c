// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, char *) = 0;

Font XLoadFont(Display * arg0, char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XLoadFont");
	validate_NULL_TYPETYPE(arg0, "XLoadFont");
	validate_NULL_TYPETYPE(arg1, "XLoadFont");
	return funcptr(arg0, arg1);
}

Font lsb_XLoadFont(Display * arg0, char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XLoadFont");
	return funcptr(arg0, arg1);
}

