// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <spawn.h>
#include <sched.h>
#undef posix_spawnattr_setschedparam
static int(*funcptr) (posix_spawnattr_t * , const struct sched_param * ) = 0;

extern int __lsb_check_params;
int posix_spawnattr_setschedparam (posix_spawnattr_t * arg0 , const struct sched_param * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for posix_spawnattr_setschedparam()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawnattr_setschedparam", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawnattr_setschedparam", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawnattr_setschedparam", "GLIBC_2.2");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawnattr_setschedparam", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawnattr_setschedparam", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawnattr_setschedparam", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawnattr_setschedparam", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load posix_spawnattr_setschedparam. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "posix_spawnattr_setschedparam() - validating");
		validate_RWaddress( arg0, "posix_spawnattr_setschedparam - arg0 (__attr)");
		validate_NULL_TYPETYPE(  arg0, "posix_spawnattr_setschedparam - arg0 (__attr)");
		validate_Rdaddress( arg1, "posix_spawnattr_setschedparam - arg1 (__schedparam)");
		validate_NULL_TYPETYPE(  arg1, "posix_spawnattr_setschedparam - arg1 (__schedparam)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
