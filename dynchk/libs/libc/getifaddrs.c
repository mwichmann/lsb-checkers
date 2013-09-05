// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ifaddrs.h>
#undef getifaddrs
static int(*funcptr) (struct ifaddrs * * ) = 0;

extern int __lsb_check_params;
int getifaddrs (struct ifaddrs * * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for getifaddrs()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "getifaddrs", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load getifaddrs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getifaddrs() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "getifaddrs - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "getifaddrs - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
