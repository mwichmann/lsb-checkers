// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdrrec_create
static void(*funcptr) (XDR * , u_int , u_int , caddr_t , int(* )(char *, char *, int), int(* )(char *, char *, int)) = 0;

extern int __lsb_check_params;
void xdrrec_create (XDR * arg0 , u_int arg1 , u_int arg2 , caddr_t arg3 , int(* arg4 )(char *, char *, int), int(* arg5 )(char *, char *, int))
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "xdrrec_create", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xdrrec_create()");
		validate_RWaddress( arg0, "xdrrec_create - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdrrec_create - arg0");
		validate_NULL_TYPETYPE(  arg1, "xdrrec_create - arg1");
		validate_NULL_TYPETYPE(  arg2, "xdrrec_create - arg2");
		validate_NULL_TYPETYPE(  arg3, "xdrrec_create - arg3");
		validate_Rdaddress( arg4, "xdrrec_create - arg4");
		validate_NULL_TYPETYPE(  arg4, "xdrrec_create - arg4");
		validate_Rdaddress( arg5, "xdrrec_create - arg5");
		validate_NULL_TYPETYPE(  arg5, "xdrrec_create - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

