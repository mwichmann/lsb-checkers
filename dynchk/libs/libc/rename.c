// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef rename
static int(*funcptr) (const char * , const char * ) = 0;

int rename (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rename");
	validate_Rdaddress( arg0, "rename - arg0");
	validate_NULL_TYPETYPE(  arg0, "rename - arg0");
	validate_Rdaddress( arg1, "rename - arg1");
	validate_NULL_TYPETYPE(  arg1, "rename - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_rename (const char * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rename");
	return funcptr(arg0, arg1);
}

