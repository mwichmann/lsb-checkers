// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stdlib.h>
#include <search.h>
#undef tsearch
static void *(*funcptr) (const void * , void * * , __compar_fn_t ) = 0;

extern int __lsb_check_params;
void * tsearch (const void * arg0 , void * * arg1 , __compar_fn_t arg2 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "tsearch", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "tsearch()");
		validate_Rdaddress( arg0, "tsearch - arg0");
		validate_NULL_TYPETYPE(  arg0, "tsearch - arg0");
		validate_RWaddress( arg1, "tsearch - arg1");
		validate_NULL_TYPETYPE(  arg1, "tsearch - arg1");
		validate_NULL_TYPETYPE(  arg2, "tsearch - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

