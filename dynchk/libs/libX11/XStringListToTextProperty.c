// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(char * *, int, XTextProperty *) = 0;

int XStringListToTextProperty(char * * arg0, int arg1, XTextProperty * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XStringListToTextProperty");
	validate_NULL_TYPETYPE(arg0, "XStringListToTextProperty");
	validate_NULL_TYPETYPE(arg1, "XStringListToTextProperty");
	validate_NULL_TYPETYPE(arg2, "XStringListToTextProperty");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XStringListToTextProperty(char * * arg0, int arg1, XTextProperty * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XStringListToTextProperty");
	return funcptr(arg0, arg1, arg2);
}

