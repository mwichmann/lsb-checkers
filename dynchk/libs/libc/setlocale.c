// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <locale.h>
#undef setlocale
static char *(*funcptr) (int , const char * ) = 0;

char * setlocale (int arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setlocale");
	validate_NULL_TYPETYPE(  arg0, "setlocale - arg0");
	validate_Rdaddress( arg1, "setlocale - arg1");
	validate_NULL_TYPETYPE(  arg1, "setlocale - arg1");
	return funcptr(arg0, arg1);
}

char * __lsb_setlocale (int arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setlocale");
	return funcptr(arg0, arg1);
}

