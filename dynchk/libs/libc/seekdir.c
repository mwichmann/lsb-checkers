// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <dirent.h>
#undef seekdir
static void(*funcptr) (DIR * , long ) = 0;

extern int __lsb_check_params;
void seekdir (DIR * arg0 , long arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "seekdir");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "seekdir - arg0");
		validate_NULL_TYPETYPE(  arg0, "seekdir - arg0");
		validate_NULL_TYPETYPE(  arg1, "seekdir - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

