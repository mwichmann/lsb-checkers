// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <wctype.h>
static int(*funcptr)(wint_t) = 0;

int iswspace(wint_t arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iswspace");
	validate_NULL_TYPETYPE(arg0, "iswspace");
	return funcptr(arg0);
}

int lsb_iswspace(wint_t arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iswspace");
	return funcptr(arg0);
}

