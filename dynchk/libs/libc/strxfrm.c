// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef strxfrm
static size_t(*funcptr) (char * , const char * , size_t ) = 0;

size_t strxfrm (char * arg0 , const char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strxfrm");
	validate_NULL_TYPETYPE(arg0, "strxfrm");
	validate_NULL_TYPETYPE(arg1, "strxfrm");
	validate_NULL_TYPETYPE(arg2, "strxfrm");
	return funcptr(arg0, arg1, arg2);
}

size_t lsb_strxfrm (char * arg0 , const char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strxfrm");
	return funcptr(arg0, arg1, arg2);
}

