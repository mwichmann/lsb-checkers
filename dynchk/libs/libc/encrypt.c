// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef encrypt
static void(*funcptr) (char * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void encrypt (char * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "encrypt");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "encrypt()");
	validate_Rdaddress( arg0, "encrypt - arg0");
		validate_NULL_TYPETYPE(  arg0, "encrypt - arg0");
		validate_NULL_TYPETYPE(  arg1, "encrypt - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

