// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/clnt.h>
#undef clnt_perror
static void(*funcptr) (struct CLIENT * , const char * ) = 0;

void clnt_perror (struct CLIENT * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clnt_perror");
	validate_Rdaddress( arg0, "clnt_perror - arg0");
	validate_NULL_TYPETYPE(  arg0, "clnt_perror - arg0");
	validate_Rdaddress( arg1, "clnt_perror - arg1");
	validate_NULL_TYPETYPE(  arg1, "clnt_perror - arg1");
	funcptr(arg0, arg1);
}

void __lsb_clnt_perror (struct CLIENT * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clnt_perror");
	funcptr(arg0, arg1);
}

