// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#include <sys/types.h>
static int(*funcptr)(SVCXPRT *, xdrproc_t, caddr_t) = 0;

bool_t svc_sendreply(SVCXPRT * arg0, xdrproc_t arg1, caddr_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svc_sendreply");
	validate_NULL_TYPETYPE(arg0, "svc_sendreply");
	validate_NULL_TYPETYPE(arg1, "svc_sendreply");
	validate_NULL_TYPETYPE(arg2, "svc_sendreply");
	return funcptr(arg0, arg1, arg2);
}

bool_t lsb_svc_sendreply(SVCXPRT * arg0, xdrproc_t arg1, caddr_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svc_sendreply");
	return funcptr(arg0, arg1, arg2);
}

