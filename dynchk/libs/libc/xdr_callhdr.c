// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#include <rpc/rpc_msg.h>
#undef xdr_callhdr
static bool_t(*funcptr) (XDR * , struct rpc_msg * ) = 0;

bool_t xdr_callhdr (XDR * arg0 , struct rpc_msg * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_callhdr");
	validate_NULL_TYPETYPE(arg0, "xdr_callhdr");
	validate_NULL_TYPETYPE(arg1, "xdr_callhdr");
	return funcptr(arg0, arg1);
}

bool_t lsb_xdr_callhdr (XDR * arg0 , struct rpc_msg * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_callhdr");
	return funcptr(arg0, arg1);
}

