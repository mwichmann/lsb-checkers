// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/clnt.h>
static char *(*funcptr)(enum clnt_stat) = 0;

char * clnt_sperrno(enum clnt_stat arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clnt_sperrno");
	validate_NULL_TYPETYPE(arg0, "clnt_sperrno");
	return funcptr(arg0);
}

char * lsb_clnt_sperrno(enum clnt_stat arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clnt_sperrno");
	return funcptr(arg0);
}

