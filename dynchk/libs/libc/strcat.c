// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef strcat
static char *(*funcptr) (char * , const char * ) = 0;

char * strcat (char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strcat");
	validate_Rdaddress( arg0, "strcat - arg0");
	validate_NULL_TYPETYPE(  arg0, "strcat - arg0");
	validate_Rdaddress( arg1, "strcat - arg1");
	validate_NULL_TYPETYPE(  arg1, "strcat - arg1");
	return funcptr(arg0, arg1);
}

char * __lsb_strcat (char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strcat");
	return funcptr(arg0, arg1);
}

