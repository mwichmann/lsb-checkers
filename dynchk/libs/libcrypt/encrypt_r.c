// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <crypt.h>
#undef encrypt_r
static void(*funcptr) (const char * , int , struct crypt_data * ) = 0;

extern int __lsb_check_params;
void encrypt_r (const char * arg0 , int arg1 , struct crypt_data * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for encrypt_r()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "encrypt_r", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "encrypt_r", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "encrypt_r", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "encrypt_r", "GLIBC_2.0");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "encrypt_r", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "encrypt_r", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "encrypt_r", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load encrypt_r. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "encrypt_r() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "encrypt_r - arg0 (block)");
		}
		validate_NULL_TYPETYPE(  arg0, "encrypt_r - arg0 (block)");
		validate_NULL_TYPETYPE(  arg1, "encrypt_r - arg1 (edflag)");
		if( arg2 ) {
		validate_RWaddress( arg2, "encrypt_r - arg2 (data)");
		}
		validate_NULL_TYPETYPE(  arg2, "encrypt_r - arg2 (data)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

