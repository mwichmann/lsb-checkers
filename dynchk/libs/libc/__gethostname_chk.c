// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <unistd.h>
#undef __gethostname_chk
static int(*funcptr) (char * , size_t , size_t ) = 0;

extern int __lsb_check_params;
int __gethostname_chk (char * arg0 , size_t arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for __gethostname_chk()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "__gethostname_chk", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load __gethostname_chk. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__gethostname_chk() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "__gethostname_chk - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "__gethostname_chk - arg0");
		validate_NULL_TYPETYPE(  arg1, "__gethostname_chk - arg1");
		validate_NULL_TYPETYPE(  arg2, "__gethostname_chk - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

