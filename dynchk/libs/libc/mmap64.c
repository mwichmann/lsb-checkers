// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/mman.h>
#undef mmap64
static void *(*funcptr) (void * , size_t , int , int , int , off64_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void * mmap64 (void * arg0 , size_t arg1 , int arg2 , int arg3 , int arg4 , off64_t arg5 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mmap64");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "mmap64()");
	validate_Rdaddress( arg0, "mmap64 - arg0");
		validate_NULL_TYPETYPE(  arg0, "mmap64 - arg0");
		validate_NULL_TYPETYPE(  arg1, "mmap64 - arg1");
		validate_NULL_TYPETYPE(  arg2, "mmap64 - arg2");
		validate_NULL_TYPETYPE(  arg3, "mmap64 - arg3");
		validate_NULL_TYPETYPE(  arg4, "mmap64 - arg4");
		validate_NULL_TYPETYPE(  arg5, "mmap64 - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

