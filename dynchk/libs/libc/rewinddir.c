// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <dirent.h>
#undef rewinddir
static void(*funcptr) (DIR * ) = 0;

extern int __lsb_check_params;
void rewinddir (DIR * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rewinddir");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "rewinddir - arg0");
		validate_NULL_TYPETYPE(  arg0, "rewinddir - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

