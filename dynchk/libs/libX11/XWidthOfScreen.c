// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Screen *) = 0;

int XWidthOfScreen(Screen * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XWidthOfScreen");
	validate_NULL_TYPETYPE(arg0, "XWidthOfScreen");
	return funcptr(arg0);
}

int lsb_XWidthOfScreen(Screen * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XWidthOfScreen");
	return funcptr(arg0);
}

