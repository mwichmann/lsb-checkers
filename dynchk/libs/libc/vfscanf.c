// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stdio.h>
#undef vfscanf
static int(*funcptr) (FILE * , const char * , va_list ) = 0;

extern int __lsb_check_params;
int vfscanf (FILE * arg0 , const char * arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfscanf");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "vfscanf()");
		validate_RWaddress( arg0, "vfscanf - arg0");
		validate_NULL_TYPETYPE(  arg0, "vfscanf - arg0");
		validate_Rdaddress( arg1, "vfscanf - arg1");
		validate_NULL_TYPETYPE(  arg1, "vfscanf - arg1");
		validate_NULL_TYPETYPE(  arg2, "vfscanf - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

