// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(utmp *, utmp **) = 0;

utmp * getutent_r(utmp * arg0, utmp ** arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getutent_r");
	validate_NULL_TYPETYPE(arg0, "getutent_r");
	validate_NULL_TYPETYPE(arg1, "getutent_r");
	return funcptr(arg0, arg1);
}

utmp * lsb_getutent_r(utmp * arg0, utmp ** arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getutent_r");
	return funcptr(arg0, arg1);
}

