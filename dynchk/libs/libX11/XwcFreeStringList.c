// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <X11/Xutil.h>
#undef XwcFreeStringList
static void(*funcptr) (wchar_t * * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XwcFreeStringList (wchar_t * * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XwcFreeStringList");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XwcFreeStringList()");
	validate_RWaddress( arg0, "XwcFreeStringList - arg0");
		validate_NULL_TYPETYPE(  arg0, "XwcFreeStringList - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

