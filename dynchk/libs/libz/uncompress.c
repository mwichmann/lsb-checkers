// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef uncompress
static int(*funcptr) (Bytef * , uLongf * , const Bytef * , uLong ) = 0;

int uncompress (Bytef * arg0 , uLongf * arg1 , const Bytef * arg2 , uLong arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "uncompress");
	validate_NULL_TYPETYPE(arg0, "uncompress");
	validate_NULL_TYPETYPE(arg1, "uncompress");
	validate_NULL_TYPETYPE(arg2, "uncompress");
	validate_NULL_TYPETYPE(arg3, "uncompress");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_uncompress (Bytef * arg0 , uLongf * arg1 , const Bytef * arg2 , uLong arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "uncompress");
	return funcptr(arg0, arg1, arg2, arg3);
}

