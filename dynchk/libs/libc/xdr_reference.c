// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdr_reference
static bool_t(*funcptr) (XDR * , caddr_t * , u_int , xdrproc_t ) = 0;

extern int __lsb_check_params;
bool_t xdr_reference (XDR * arg0 , caddr_t * arg1 , u_int arg2 , xdrproc_t arg3 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_reference");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "xdr_reference()");
		validate_RWaddress( arg0, "xdr_reference - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdr_reference - arg0");
		validate_RWaddress( arg1, "xdr_reference - arg1");
		validate_NULL_TYPETYPE(  arg1, "xdr_reference - arg1");
		validate_NULL_TYPETYPE(  arg2, "xdr_reference - arg2");
		validate_NULL_TYPETYPE(  arg3, "xdr_reference - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

