// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdr_u_int
static bool_t(*funcptr) (XDR * , u_int * ) = 0;

extern int __lsb_check_params;
bool_t xdr_u_int (XDR * arg0 , u_int * arg1 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "xdr_u_int", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xdr_u_int()");
		validate_RWaddress( arg0, "xdr_u_int - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdr_u_int - arg0");
		validate_RWaddress( arg1, "xdr_u_int - arg1");
		validate_NULL_TYPETYPE(  arg1, "xdr_u_int - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

