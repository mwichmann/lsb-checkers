// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <unistd.h>
#undef getlogin_r
static int(*funcptr) (char * , size_t ) = 0;

extern int __lsb_check_params;
int getlogin_r (char * arg0 , size_t arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for getlogin_r()");
	if(!funcptr)
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getlogin_r", "GLIBC_2.0");
		#endif
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "getlogin_r", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getlogin_r", "GLIBC_2.0");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getlogin_r", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "getlogin_r", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "getlogin_r", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getlogin_r", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load getlogin_r. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getlogin_r() - validating");
		validate_RWaddress( arg0, "getlogin_r - arg0 (__name)");
		validate_NULL_TYPETYPE(  arg0, "getlogin_r - arg0 (__name)");
		validate_NULL_TYPETYPE(  arg1, "getlogin_r - arg1 (__name_len)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

