// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <sys/types.h>
#include <unistd.h>
#undef swab
static void(*funcptr) (const void * , void * , ssize_t ) = 0;

extern int __lsb_check_params;
void swab (const void * arg0 , void * arg1 , ssize_t arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "swab", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "swab()");
		validate_Rdaddress( arg0, "swab - arg0");
		validate_NULL_TYPETYPE(  arg0, "swab - arg0");
		validate_RWaddress( arg1, "swab - arg1");
		validate_NULL_TYPETYPE(  arg1, "swab - arg1");
		validate_NULL_TYPETYPE(  arg2, "swab - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

