// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <unistd.h>
#undef confstr
static size_t(*funcptr) (int , char * , size_t ) = 0;

size_t confstr (int arg0 , char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "confstr");
	validate_NULL_TYPETYPE(  arg0, "confstr - arg0");
	validate_Rdaddress( arg1, "confstr - arg1");
	validate_RWaddress(  arg1, "confstr - arg1");
	validate_NULL_TYPETYPE(  arg2, "confstr - arg2");
	return funcptr(arg0, arg1, arg2);
}

size_t __lsb_confstr (int arg0 , char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "confstr");
	return funcptr(arg0, arg1, arg2);
}

