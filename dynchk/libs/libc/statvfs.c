// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef statvfs
static int(*funcptr) (const char * , struct statvfs * ) = 0;

int statvfs (const char * arg0 , struct statvfs * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "statvfs");
	validate_NULL_TYPETYPE(arg0, "statvfs");
	validate_NULL_TYPETYPE(arg1, "statvfs");
	return funcptr(arg0, arg1);
}

int lsb_statvfs (const char * arg0 , struct statvfs * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "statvfs");
	return funcptr(arg0, arg1);
}

