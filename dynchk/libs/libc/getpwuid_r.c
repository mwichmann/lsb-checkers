// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <pwd.h>
#include <stddef.h>
#undef getpwuid_r
static int(*funcptr) (uid_t , struct passwd * , char * , size_t , struct passwd * * ) = 0;

int getpwuid_r (uid_t arg0 , struct passwd * arg1 , char * arg2 , size_t arg3 , struct passwd * * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getpwuid_r");
	validate_NULL_TYPETYPE(  arg0, "getpwuid_r - arg0");
	validate_Rdaddress( arg1, "getpwuid_r - arg1");
	validate_NULL_TYPETYPE(  arg1, "getpwuid_r - arg1");
	validate_Rdaddress( arg2, "getpwuid_r - arg2");
	validate_NULL_TYPETYPE(  arg2, "getpwuid_r - arg2");
	validate_NULL_TYPETYPE(  arg3, "getpwuid_r - arg3");
	validate_Rdaddress( arg4, "getpwuid_r - arg4");
	validate_Rdaddress(* arg4, "getpwuid_r - arg4");
	validate_NULL_TYPETYPE(  arg4, "getpwuid_r - arg4");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int __lsb_getpwuid_r (uid_t arg0 , struct passwd * arg1 , char * arg2 , size_t arg3 , struct passwd * * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getpwuid_r");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

