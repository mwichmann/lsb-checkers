// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdrmem_create
static void(*funcptr) (XDR * , caddr_t , u_int , enum xdr_op ) = 0;

extern int __lsb_check_params;
void xdrmem_create (XDR * arg0 , caddr_t arg1 , u_int arg2 , enum xdr_op arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "xdrmem_create", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xdrmem_create()");
		validate_RWaddress( arg0, "xdrmem_create - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdrmem_create - arg0");
		validate_NULL_TYPETYPE(  arg1, "xdrmem_create - arg1");
		validate_NULL_TYPETYPE(  arg2, "xdrmem_create - arg2");
		validate_NULL_TYPETYPE(  arg3, "xdrmem_create - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

