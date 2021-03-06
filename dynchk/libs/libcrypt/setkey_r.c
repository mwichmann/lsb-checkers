// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <crypt.h>
#undef setkey_r
static void(*funcptr) (const char * , struct crypt_data * ) = 0;

extern int __lsb_check_params;
void setkey_r (const char * arg0 , struct crypt_data * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for setkey_r()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "setkey_r", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "setkey_r", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "setkey_r", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "setkey_r", "GLIBC_2.0");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "setkey_r", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "setkey_r", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "setkey_r", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load setkey_r. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "setkey_r() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "setkey_r - arg0 (key)");
		}
		validate_NULL_TYPETYPE(  arg0, "setkey_r - arg0 (key)");
		if( arg1 ) {
		validate_RWaddress( arg1, "setkey_r - arg1 (data)");
		}
		validate_NULL_TYPETYPE(  arg1, "setkey_r - arg1 (data)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

