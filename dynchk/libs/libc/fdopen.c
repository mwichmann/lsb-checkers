// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stdio.h>
#undef fdopen
static FILE *(*funcptr) (int , const char * ) = 0;

extern int __lsb_check_params;
FILE * fdopen (int arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	FILE * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "fdopen", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fdopen()");
		validate_NULL_TYPETYPE(  arg0, "fdopen - arg0");
		validate_Rdaddress( arg1, "fdopen - arg1");
		validate_NULL_TYPETYPE(  arg1, "fdopen - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

