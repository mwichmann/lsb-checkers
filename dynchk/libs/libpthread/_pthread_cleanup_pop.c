// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef _pthread_cleanup_pop
static void(*funcptr) (struct _pthread_cleanup_buffer * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void _pthread_cleanup_pop (struct _pthread_cleanup_buffer * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_pthread_cleanup_pop");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_pthread_cleanup_pop()");
	validate_Rdaddress( arg0, "_pthread_cleanup_pop - arg0");
		validate_RWaddress(  arg0, "_pthread_cleanup_pop - arg0");
		validate_NULL_TYPETYPE(  arg1, "_pthread_cleanup_pop - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

