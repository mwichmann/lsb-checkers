// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <pthread.h>
#undef __register_atfork
static int(*funcptr) (void(* )(), void(* )(), void(* )(), void * ) = 0;

extern int __lsb_check_params;
int __register_atfork (void(* arg0 )(), void(* arg1 )(), void(* arg2 )(), void * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "__register_atfork");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__register_atfork()");
		validate_Rdaddress( arg0, "__register_atfork - arg0");
		validate_NULL_TYPETYPE(  arg0, "__register_atfork - arg0");
		validate_Rdaddress( arg1, "__register_atfork - arg1");
		validate_NULL_TYPETYPE(  arg1, "__register_atfork - arg1");
		validate_Rdaddress( arg2, "__register_atfork - arg2");
		validate_NULL_TYPETYPE(  arg2, "__register_atfork - arg2");
		validate_RWaddress( arg3, "__register_atfork - arg3");
		validate_NULL_TYPETYPE(  arg3, "__register_atfork - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

