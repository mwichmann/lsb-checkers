// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdr_pointer
static bool_t(*funcptr) (XDR * , char * * , u_int , xdrproc_t ) = 0;

extern int __lsb_check_params;
bool_t xdr_pointer (XDR * arg0 , char * * arg1 , u_int arg2 , xdrproc_t arg3 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_pointer");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "xdr_pointer - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdr_pointer - arg0");
	validate_Rdaddress( arg1, "xdr_pointer - arg1");
	validate_Rdaddress(* arg1, "xdr_pointer - arg1");
		validate_NULL_TYPETYPE(  arg1, "xdr_pointer - arg1");
		validate_NULL_TYPETYPE(  arg2, "xdr_pointer - arg2");
		validate_NULL_TYPETYPE(  arg3, "xdr_pointer - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

