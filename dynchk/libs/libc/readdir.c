// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <dirent.h>
#undef readdir
static struct dirent *(*funcptr) (DIR * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
struct dirent * readdir (DIR * arg0 )
{
	int reset_flag = __lsb_check_params;
	struct dirent * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "readdir");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "readdir()");
	validate_Rdaddress( arg0, "readdir - arg0");
		validate_NULL_TYPETYPE(  arg0, "readdir - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

