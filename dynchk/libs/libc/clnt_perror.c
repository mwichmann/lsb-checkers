// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <rpc/clnt.h>
#undef clnt_perror
static void(*funcptr) (struct CLIENT * , const char * ) = 0;

extern int __lsb_check_params;
void clnt_perror (struct CLIENT * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "clnt_perror", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "clnt_perror()");
		validate_RWaddress( arg0, "clnt_perror - arg0");
		validate_NULL_TYPETYPE(  arg0, "clnt_perror - arg0");
		validate_Rdaddress( arg1, "clnt_perror - arg1");
		validate_NULL_TYPETYPE(  arg1, "clnt_perror - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

