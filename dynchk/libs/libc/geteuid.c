// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef geteuid
static uid_t(*funcptr) () = 0;

uid_t geteuid ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "geteuid");
	return funcptr();
}

uid_t lsb_geteuid ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "geteuid");
	return funcptr();
}

