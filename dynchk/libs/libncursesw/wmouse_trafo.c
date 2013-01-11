// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#undef wmouse_trafo
static unsigned char(*funcptr) (const WINDOW * , int * , int * , bool ) = 0;

extern int __lsb_check_params;
unsigned char wmouse_trafo (const WINDOW * arg0 , int * arg1 , int * arg2 , bool arg3 )
{
	int reset_flag = __lsb_check_params;
	unsigned char ret_value  ;
	__lsb_output(4, "Invoking wrapper for wmouse_trafo()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wmouse_trafo");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wmouse_trafo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wmouse_trafo() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "wmouse_trafo - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "wmouse_trafo - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "wmouse_trafo - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "wmouse_trafo - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "wmouse_trafo - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "wmouse_trafo - arg2");
		validate_NULL_TYPETYPE(  arg3, "wmouse_trafo - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

