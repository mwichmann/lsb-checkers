// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/clnt.h>
#undef clnt_pcreateerror
static void(*funcptr) (const char * ) = 0;

void clnt_pcreateerror (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clnt_pcreateerror");
	validate_Rdaddress( arg0, "clnt_pcreateerror - arg0");
	validate_NULL_TYPETYPE(  arg0, "clnt_pcreateerror - arg0");
	funcptr(arg0);
}

void __lsb_clnt_pcreateerror (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clnt_pcreateerror");
	funcptr(arg0);
}

