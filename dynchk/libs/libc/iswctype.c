// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <wctype.h>
#include <wctype.h>
#undef iswctype
static int(*funcptr) (wint_t , wctype_t ) = 0;

int iswctype (wint_t arg0 , wctype_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iswctype");
	validate_NULL_TYPETYPE(arg0, "iswctype");
	validate_NULL_TYPETYPE(arg1, "iswctype");
	return funcptr(arg0, arg1);
}

int lsb_iswctype (wint_t arg0 , wctype_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "iswctype");
	return funcptr(arg0, arg1);
}

