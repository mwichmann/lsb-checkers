// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wctype.h>
#include <wchar.h>
#undef mbsnrtowcs
static size_t(*funcptr) (wchar_t * , const char * * , size_t , size_t , mbstate_t * ) = 0;

size_t mbsnrtowcs (wchar_t * arg0 , const char * * arg1 , size_t arg2 , size_t arg3 , mbstate_t * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbsnrtowcs");
	validate_Rdaddress( arg0, "mbsnrtowcs");
	validate_NULL_TYPETYPE(  arg0, "mbsnrtowcs");
	validate_Rdaddress(* arg1, "mbsnrtowcs");
	validate_Rdaddress( arg1, "mbsnrtowcs");
	validate_NULL_TYPETYPE(  arg1, "mbsnrtowcs");
	validate_NULL_TYPETYPE(  arg2, "mbsnrtowcs");
	validate_NULL_TYPETYPE(  arg3, "mbsnrtowcs");
	validate_Rdaddress( arg4, "mbsnrtowcs");
	validate_NULL_TYPETYPE(  arg4, "mbsnrtowcs");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

size_t __lsb_mbsnrtowcs (wchar_t * arg0 , const char * * arg1 , size_t arg2 , size_t arg3 , mbstate_t * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbsnrtowcs");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

