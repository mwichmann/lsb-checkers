// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <xcb/xproto.h>
#undef xcb_get_font_path_unchecked
static xcb_get_font_path_cookie_t(*funcptr) (xcb_connection_t * ) = 0;

extern int __lsb_check_params;
xcb_get_font_path_cookie_t xcb_get_font_path_unchecked (xcb_connection_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	xcb_get_font_path_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_get_font_path_unchecked()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_get_font_path_unchecked");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_get_font_path_unchecked. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_get_font_path_unchecked() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_get_font_path_unchecked - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_get_font_path_unchecked - arg0 (c)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

