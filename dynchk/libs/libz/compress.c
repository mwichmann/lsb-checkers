// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef compress
static int(*funcptr) (Bytef * , uLongf * , const Bytef * , uLong ) = 0;

int compress (Bytef * arg0 , uLongf * arg1 , const Bytef * arg2 , uLong arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "compress");
	validate_Rdaddress( arg0, "compress - arg0");
	validate_NULL_TYPETYPE(  arg0, "compress - arg0");
	validate_Rdaddress( arg1, "compress - arg1");
	validate_NULL_TYPETYPE(  arg1, "compress - arg1");
	validate_Rdaddress( arg2, "compress - arg2");
	validate_NULL_TYPETYPE(  arg2, "compress - arg2");
	validate_NULL_TYPETYPE(  arg3, "compress - arg3");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_compress (Bytef * arg0 , uLongf * arg1 , const Bytef * arg2 , uLong arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "compress");
	return funcptr(arg0, arg1, arg2, arg3);
}

