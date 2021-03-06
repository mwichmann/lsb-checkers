// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#undef mouse_trafo
static bool(*funcptr) (int * , int * , bool ) = 0;

extern int __lsb_check_params;
bool mouse_trafo (int * arg0 , int * arg1 , bool arg2 )
{
	int reset_flag = __lsb_check_params;
	bool ret_value  ;
	__lsb_output(4, "Invoking wrapper for mouse_trafo()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mouse_trafo");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mouse_trafo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mouse_trafo() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "mouse_trafo - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "mouse_trafo - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "mouse_trafo - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "mouse_trafo - arg1");
		validate_NULL_TYPETYPE(  arg2, "mouse_trafo - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

