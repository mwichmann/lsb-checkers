// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stdio.h>
#include <X11/ICE/ICEutil.h>
#undef IceReadAuthFileEntry
static IceAuthFileEntry *(*funcptr) (FILE ) = 0;

extern int __lsb_check_params;
IceAuthFileEntry * IceReadAuthFileEntry (FILE arg0 )
{
	int reset_flag = __lsb_check_params;
	IceAuthFileEntry * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " IceReadAuthFileEntry ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "IceReadAuthFileEntry()");
		validate_NULL_TYPETYPE(  arg0, "IceReadAuthFileEntry - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

