// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <unistd.h>
#undef lseek
static off_t(*funcptr) (int , off_t , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
off_t lseek (int arg0 , off_t arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	off_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lseek");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "lseek()");
		validate_NULL_TYPETYPE(  arg0, "lseek - arg0");
		validate_NULL_TYPETYPE(  arg1, "lseek - arg1");
		validate_NULL_TYPETYPE(  arg2, "lseek - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

