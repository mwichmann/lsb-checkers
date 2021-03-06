// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <spawn.h>
#include <sys/types.h>
#undef posix_spawn_file_actions_addopen
static int(*funcptr) (posix_spawn_file_actions_t * , int , const char * , int , mode_t ) = 0;

extern int __lsb_check_params;
int posix_spawn_file_actions_addopen (posix_spawn_file_actions_t * arg0 , int arg1 , const char * arg2 , int arg3 , mode_t arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for posix_spawn_file_actions_addopen()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawn_file_actions_addopen", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawn_file_actions_addopen", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawn_file_actions_addopen", "GLIBC_2.2");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawn_file_actions_addopen", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawn_file_actions_addopen", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawn_file_actions_addopen", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "posix_spawn_file_actions_addopen", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load posix_spawn_file_actions_addopen. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "posix_spawn_file_actions_addopen() - validating");
		validate_RWaddress( arg0, "posix_spawn_file_actions_addopen - arg0 (__file_actions)");
		validate_NULL_TYPETYPE(  arg0, "posix_spawn_file_actions_addopen - arg0 (__file_actions)");
		validate_NULL_TYPETYPE(  arg1, "posix_spawn_file_actions_addopen - arg1 (__fd)");
		validate_Rdaddress( arg2, "posix_spawn_file_actions_addopen - arg2 (__path)");
		validate_NULL_TYPETYPE(  arg2, "posix_spawn_file_actions_addopen - arg2 (__path)");
		validate_NULL_TYPETYPE(  arg3, "posix_spawn_file_actions_addopen - arg3 (__oflag)");
		validate_NULL_TYPETYPE(  arg4, "posix_spawn_file_actions_addopen - arg4 (__mode)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

