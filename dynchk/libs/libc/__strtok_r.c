// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef __strtok_r
static char *(*funcptr) (char * , const char * , char * * ) = 0;

char * __strtok_r (char * arg0 , const char * arg1 , char * * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtok_r");
	validate_Rdaddress( arg0, "__strtok_r");
	validate_RWaddress(  arg0, "__strtok_r");
	validate_Rdaddress( arg1, "__strtok_r");
	validate_NULL_TYPETYPE(  arg1, "__strtok_r");
	validate_Rdaddress(* arg2, "__strtok_r");
	validate_Rdaddress( arg2, "__strtok_r");
	validate_RWaddress(  arg2, "__strtok_r");
	return funcptr(arg0, arg1, arg2);
}

char * __lsb___strtok_r (char * arg0 , const char * arg1 , char * * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtok_r");
	return funcptr(arg0, arg1, arg2);
}

