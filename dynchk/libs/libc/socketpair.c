// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef socketpair
static int(*funcptr) (int , int , int , int [2]) = 0;

int socketpair (int arg0 , int arg1 , int arg2 , int arg3 [2])
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "socketpair");
	validate_NULL_TYPETYPE(arg0, "socketpair");
	validate_NULL_TYPETYPE(arg1, "socketpair");
	validate_NULL_TYPETYPE(arg2, "socketpair");
	validate_NULL_TYPETYPE(arg3, "socketpair");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_socketpair (int arg0 , int arg1 , int arg2 , int arg3 [2])
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "socketpair");
	return funcptr(arg0, arg1, arg2, arg3);
}

