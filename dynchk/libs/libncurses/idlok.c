// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef idlok
static int(*funcptr) (WINDOW * , bool ) = 0;

extern int __lsb_check_params;
int idlok (WINDOW * arg0 , bool arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for idlok()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "idlok");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load idlok. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "idlok() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "idlok - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "idlok - arg0");
		validate_NULL_TYPETYPE(  arg1, "idlok - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

