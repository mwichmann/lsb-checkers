// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#include <search.h>
#undef tdelete
static void *(*funcptr) (const void * , void * * , __compar_fn_t ) = 0;

extern int __lsb_check_params;
void * tdelete (const void * arg0 , void * * arg1 , __compar_fn_t arg2 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tdelete");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "tdelete - arg0");
		validate_NULL_TYPETYPE(  arg0, "tdelete - arg0");
	validate_Rdaddress( arg1, "tdelete - arg1");
	validate_Rdaddress(* arg1, "tdelete - arg1");
		validate_NULL_TYPETYPE(  arg1, "tdelete - arg1");
		validate_NULL_TYPETYPE(  arg2, "tdelete - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

