// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#undef xdr_free
static void(*funcptr) (xdrproc_t , char * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void xdr_free (xdrproc_t arg0 , char * arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_free");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "xdr_free()");
		validate_NULL_TYPETYPE(  arg0, "xdr_free - arg0");
	validate_Rdaddress( arg1, "xdr_free - arg1");
		validate_NULL_TYPETYPE(  arg1, "xdr_free - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

