// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <string.h>
#undef strtok_r
static char *(*funcptr) (char * , const char * , char * * ) = 0;

extern int __lsb_check_params;
char * strtok_r (char * arg0 , const char * arg1 , char * * arg2 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for strtok_r()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "strtok_r", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "strtok_r", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "strtok_r", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "strtok_r", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "strtok_r", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "strtok_r", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "strtok_r", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load strtok_r. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strtok_r() - validating");
		validate_RWaddress( arg0, "strtok_r - arg0 (__s)");
		validate_NULL_TYPETYPE(  arg0, "strtok_r - arg0 (__s)");
		validate_Rdaddress( arg1, "strtok_r - arg1 (__delim)");
		validate_NULL_TYPETYPE(  arg1, "strtok_r - arg1 (__delim)");
		validate_RWaddress( arg2, "strtok_r - arg2 (__save_ptr)");
		validate_NULL_TYPETYPE(  arg2, "strtok_r - arg2 (__save_ptr)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

