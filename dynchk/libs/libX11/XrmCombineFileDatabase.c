// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(char *, XrmDatabase *, int) = 0;

int XrmCombineFileDatabase(char * arg0, XrmDatabase * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmCombineFileDatabase");
	validate_NULL_TYPETYPE(arg0, "XrmCombineFileDatabase");
	validate_NULL_TYPETYPE(arg1, "XrmCombineFileDatabase");
	validate_NULL_TYPETYPE(arg2, "XrmCombineFileDatabase");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XrmCombineFileDatabase(char * arg0, XrmDatabase * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmCombineFileDatabase");
	return funcptr(arg0, arg1, arg2);
}

