// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <getopt.h>
#undef getopt_long
static int(*funcptr) (int , char *const  [], const char * , const struct option * , int * ) = 0;

extern int __lsb_check_params;
int getopt_long (int arg0 , char *const  arg1 [], const char * arg2 , const struct option * arg3 , int * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "getopt_long", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getopt_long()");
		validate_NULL_TYPETYPE(  arg0, "getopt_long - arg0");
		validate_NULL_TYPETYPE(  arg1, "getopt_long - arg1");
		validate_Rdaddress( arg2, "getopt_long - arg2");
		validate_NULL_TYPETYPE(  arg2, "getopt_long - arg2");
		validate_Rdaddress( arg3, "getopt_long - arg3");
		validate_NULL_TYPETYPE(  arg3, "getopt_long - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "getopt_long - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "getopt_long - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

