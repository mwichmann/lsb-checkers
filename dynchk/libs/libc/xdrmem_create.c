// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdrmem_create
static void(*funcptr) (XDR * , caddr_t , u_int , enum xdr_op ) = 0;

void xdrmem_create (XDR * arg0 , caddr_t arg1 , u_int arg2 , enum xdr_op arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdrmem_create");
	validate_Rdaddress( arg0, "xdrmem_create - arg0");
	validate_NULL_TYPETYPE(  arg0, "xdrmem_create - arg0");
	validate_NULL_TYPETYPE(  arg1, "xdrmem_create - arg1");
	validate_NULL_TYPETYPE(  arg2, "xdrmem_create - arg2");
	validate_NULL_TYPETYPE(  arg3, "xdrmem_create - arg3");
	funcptr(arg0, arg1, arg2, arg3);
}

void __lsb_xdrmem_create (XDR * arg0 , caddr_t arg1 , u_int arg2 , enum xdr_op arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdrmem_create");
	funcptr(arg0, arg1, arg2, arg3);
}

