// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <wctype.h>
#undef iswxdigit
static int(*funcptr) (wint_t ) = 0;

int iswxdigit (wint_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iswxdigit");
	validate_NULL_TYPETYPE(  arg0, "iswxdigit - arg0");
	return funcptr(arg0);
}

int __lsb_iswxdigit (wint_t arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iswxdigit");
	return funcptr(arg0);
}

