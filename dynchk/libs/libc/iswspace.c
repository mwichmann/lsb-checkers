// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <wctype.h>
#undef iswspace
static int(*funcptr) (wint_t ) = 0;

int iswspace (wint_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iswspace");
	validate_NULL_TYPETYPE(  arg0, "iswspace - arg0");
	return funcptr(arg0);
}

int __lsb_iswspace (wint_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iswspace");
	return funcptr(arg0);
}

