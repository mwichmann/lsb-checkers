// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <wctype.h>
static int(*funcptr)(wint_t) = 0;

int wctob(wint_t arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wctob");
	validate_NULL_TYPETYPE(arg0, "wctob");
	return funcptr(arg0);
}

int lsb_wctob(wint_t arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wctob");
	return funcptr(arg0);
}

