// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef _pthread_cleanup_pop
static void(*funcptr) (struct _pthread_cleanup_buffer * , int ) = 0;

void _pthread_cleanup_pop (struct _pthread_cleanup_buffer * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_pthread_cleanup_pop");
	validate_RWaddress(arg0, "_pthread_cleanup_pop");
	validate_NULL_TYPETYPE(arg1, "_pthread_cleanup_pop");
	funcptr(arg0, arg1);
}

void lsb__pthread_cleanup_pop (struct _pthread_cleanup_buffer * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_pthread_cleanup_pop");
	funcptr(arg0, arg1);
}

