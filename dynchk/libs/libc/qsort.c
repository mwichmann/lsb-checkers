// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdlib.h>
#undef qsort
static void(*funcptr) (void * , size_t , size_t , const __compar_fn_t ) = 0;

extern int __lsb_check_params;
void qsort (void * arg0 , size_t arg1 , size_t arg2 , const __compar_fn_t arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "qsort");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "qsort - arg0");
		validate_NULL_TYPETYPE(  arg0, "qsort - arg0");
		validate_NULL_TYPETYPE(  arg1, "qsort - arg1");
		validate_NULL_TYPETYPE(  arg2, "qsort - arg2");
		validate_NULL_TYPETYPE(  arg3, "qsort - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

