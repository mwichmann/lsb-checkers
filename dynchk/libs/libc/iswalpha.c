// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <wctype.h>
static int(*funcptr)(wint_t) = 0;

int iswalpha(wint_t arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iswalpha");
	validate_NULL_TYPETYPE(arg0, "iswalpha");
	return funcptr(arg0);
}

int lsb_iswalpha(wint_t arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iswalpha");
	return funcptr(arg0);
}

