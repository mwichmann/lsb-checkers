// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef strtoull
static unsigned long long(*funcptr) (const char * , char * * , int ) = 0;

unsigned long long strtoull (const char * arg0 , char * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtoull");
	validate_Rdaddress( arg0, "strtoull");
	validate_NULL_TYPETYPE(  arg0, "strtoull");
	validate_Rdaddress(* arg1, "strtoull");
	validate_Rdaddress( arg1, "strtoull");
	validate_NULL_TYPETYPE(  arg1, "strtoull");
	validate_NULL_TYPETYPE(  arg2, "strtoull");
	return funcptr(arg0, arg1, arg2);
}

unsigned long long __lsb_strtoull (const char * arg0 , char * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtoull");
	return funcptr(arg0, arg1, arg2);
}

