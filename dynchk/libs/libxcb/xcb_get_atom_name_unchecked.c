// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <xcb/xproto.h>
#undef xcb_get_atom_name_unchecked
static xcb_get_atom_name_cookie_t(*funcptr) (xcb_connection_t * , xcb_atom_t ) = 0;

extern int __lsb_check_params;
xcb_get_atom_name_cookie_t xcb_get_atom_name_unchecked (xcb_connection_t * arg0 , xcb_atom_t arg1 )
{
	int reset_flag = __lsb_check_params;
	xcb_get_atom_name_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_get_atom_name_unchecked()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_get_atom_name_unchecked");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_get_atom_name_unchecked. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_get_atom_name_unchecked() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_get_atom_name_unchecked - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_get_atom_name_unchecked - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_get_atom_name_unchecked - arg1 (atom)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

