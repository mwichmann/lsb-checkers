// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <netdb.h>
#undef getaddrinfo
static int(*funcptr) (const char * , const char * , const struct addrinfo * , struct addrinfo * * ) = 0;

extern int __lsb_check_params;
int getaddrinfo (const char * arg0 , const char * arg1 , const struct addrinfo * arg2 , struct addrinfo * * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getaddrinfo");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getaddrinfo()");
		validate_Rdaddress( arg0, "getaddrinfo - arg0");
		validate_NULL_TYPETYPE(  arg0, "getaddrinfo - arg0");
		validate_Rdaddress( arg1, "getaddrinfo - arg1");
		validate_NULL_TYPETYPE(  arg1, "getaddrinfo - arg1");
		validate_Rdaddress( arg2, "getaddrinfo - arg2");
		validate_NULL_TYPETYPE(  arg2, "getaddrinfo - arg2");
		validate_RWaddress( arg3, "getaddrinfo - arg3");
		validate_NULL_TYPETYPE(  arg3, "getaddrinfo - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

