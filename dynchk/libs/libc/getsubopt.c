// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdlib.h>
#undef getsubopt
static int(*funcptr) (char * * , char *const  * , char * * ) = 0;

extern int __lsb_check_params;
int getsubopt (char * * arg0 , char *const  * arg1 , char * * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for getsubopt()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "getsubopt", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getsubopt", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getsubopt", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "getsubopt", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getsubopt", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "getsubopt", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getsubopt", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load getsubopt. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getsubopt() - validating");
		validate_RWaddress( arg0, "getsubopt - arg0 (__optionp)");
		validate_NULL_TYPETYPE(  arg0, "getsubopt - arg0 (__optionp)");
		validate_Rdaddress( arg1, "getsubopt - arg1 (__tokens)");
		validate_NULL_TYPETYPE(  arg1, "getsubopt - arg1 (__tokens)");
		validate_RWaddress( arg2, "getsubopt - arg2 (__valuep)");
		validate_NULL_TYPETYPE(  arg2, "getsubopt - arg2 (__valuep)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

