// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdr_opaque
static bool_t(*funcptr) (XDR * , caddr_t , u_int ) = 0;

extern int __lsb_check_params;
bool_t xdr_opaque (XDR * arg0 , caddr_t arg1 , u_int arg2 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_opaque");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "xdr_opaque - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdr_opaque - arg0");
		validate_NULL_TYPETYPE(  arg1, "xdr_opaque - arg1");
		validate_NULL_TYPETYPE(  arg2, "xdr_opaque - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

