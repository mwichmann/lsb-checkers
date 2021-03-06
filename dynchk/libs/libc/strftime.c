// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <time.h>
#undef strftime
static size_t(*funcptr) (char * , size_t , const char * , const struct tm * ) = 0;

extern int __lsb_check_params;
size_t strftime (char * arg0 , size_t arg1 , const char * arg2 , const struct tm * arg3 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for strftime()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "strftime", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "strftime", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "strftime", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "strftime", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "strftime", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "strftime", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "strftime", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load strftime. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strftime() - validating");
		validate_RWaddress( arg0, "strftime - arg0 (__s)");
		validate_NULL_TYPETYPE(  arg0, "strftime - arg0 (__s)");
		validate_NULL_TYPETYPE(  arg1, "strftime - arg1 (__maxsize)");
		validate_Rdaddress( arg2, "strftime - arg2 (__format)");
		validate_NULL_TYPETYPE(  arg2, "strftime - arg2 (__format)");
		validate_Rdaddress( arg3, "strftime - arg3 (__tp)");
		validate_NULL_TYPETYPE(  arg3, "strftime - arg3 (__tp)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

