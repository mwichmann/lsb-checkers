// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#undef xdr_short
static bool_t(*funcptr) (XDR * , short * ) = 0;

extern int __lsb_check_params;
bool_t xdr_short (XDR * arg0 , short * arg1 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_short");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "xdr_short()");
		validate_RWaddress( arg0, "xdr_short - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdr_short - arg0");
		validate_RWaddress( arg1, "xdr_short - arg1");
		validate_NULL_TYPETYPE(  arg1, "xdr_short - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

