// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <locale.h>
#include <strings.h>
#undef stncasecmp_l
static int(*funcptr) (const char * , const char * , size_t , locale_t ) = 0;

extern int __lsb_check_params;
int stncasecmp_l (const char * arg0 , const char * arg1 , size_t arg2 , locale_t arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for stncasecmp_l()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "stncasecmp_l", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load stncasecmp_l. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "stncasecmp_l() - validating");
		validate_Rdaddress( arg0, "stncasecmp_l - arg0 (s1)");
		validate_NULL_TYPETYPE(  arg0, "stncasecmp_l - arg0 (s1)");
		validate_Rdaddress( arg1, "stncasecmp_l - arg1 (s2)");
		validate_NULL_TYPETYPE(  arg1, "stncasecmp_l - arg1 (s2)");
		validate_NULL_TYPETYPE(  arg2, "stncasecmp_l - arg2 (n)");
		validate_NULL_TYPETYPE(  arg3, "stncasecmp_l - arg3 (locale)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

