// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/msg.h>
#undef msgsnd
static int(*funcptr) (int , const void * , size_t , int ) = 0;

int msgsnd (int arg0 , const void * arg1 , size_t arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "msgsnd");
	validate_NULL_TYPETYPE(  arg0, "msgsnd - arg0");
	validate_Rdaddress( arg1, "msgsnd - arg1");
	validate_NULL_TYPETYPE(  arg1, "msgsnd - arg1");
	validate_NULL_TYPETYPE(  arg2, "msgsnd - arg2");
	validate_NULL_TYPETYPE(  arg3, "msgsnd - arg3");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_msgsnd (int arg0 , const void * arg1 , size_t arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "msgsnd");
	return funcptr(arg0, arg1, arg2, arg3);
}

