// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef mbrtowc
static size_t(*funcptr) (wchar_t * , const char * , size_t , mbstate_t * ) = 0;

size_t mbrtowc (wchar_t * arg0 , const char * arg1 , size_t arg2 , mbstate_t * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbrtowc");
	validate_NULL_TYPETYPE(arg0, "mbrtowc");
	validate_NULL_TYPETYPE(arg1, "mbrtowc");
	validate_NULL_TYPETYPE(arg2, "mbrtowc");
	validate_NULL_TYPETYPE(arg3, "mbrtowc");
	return funcptr(arg0, arg1, arg2, arg3);
}

size_t lsb_mbrtowc (wchar_t * arg0 , const char * arg1 , size_t arg2 , mbstate_t * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbrtowc");
	return funcptr(arg0, arg1, arg2, arg3);
}

