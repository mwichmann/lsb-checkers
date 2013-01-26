// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/mman.h>
#undef shm_unlink
static int(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
int shm_unlink (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for shm_unlink()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "shm_unlink", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "shm_unlink", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "shm_unlink", "GLIBC_2.2");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "shm_unlink", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "shm_unlink", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "shm_unlink", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "shm_unlink", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load shm_unlink. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "shm_unlink() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "shm_unlink - arg0 (__name)");
		}
		validate_NULL_TYPETYPE(  arg0, "shm_unlink - arg0 (__name)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
