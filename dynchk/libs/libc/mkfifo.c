// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/stat.h>
#undef mkfifo
static int(*funcptr) (const char * , mode_t ) = 0;

extern int __lsb_check_params;
int mkfifo (const char * arg0 , mode_t arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "mkfifo", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mkfifo()");
		validate_Rdaddress( arg0, "mkfifo - arg0");
		validate_NULL_TYPETYPE(  arg0, "mkfifo - arg0");
		validate_NULL_TYPETYPE(  arg1, "mkfifo - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

