// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int) = 0;

void setservent(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setservent");
	validate_NULL_TYPETYPE(arg0, "setservent");
	return funcptr(arg0);
}

void lsb_setservent(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setservent");
	return funcptr(arg0);
}

