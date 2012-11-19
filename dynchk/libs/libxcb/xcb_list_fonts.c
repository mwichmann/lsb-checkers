// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <stdint.h>
#include <xcb/xproto.h>
#undef xcb_list_fonts
static xcb_list_fonts_cookie_t(*funcptr) (xcb_connection_t * , uint16_t , uint16_t , const char * ) = 0;

extern int __lsb_check_params;
xcb_list_fonts_cookie_t xcb_list_fonts (xcb_connection_t * arg0 , uint16_t arg1 , uint16_t arg2 , const char * arg3 )
{
	int reset_flag = __lsb_check_params;
	xcb_list_fonts_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_list_fonts()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_list_fonts");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_list_fonts. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_list_fonts() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_list_fonts - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_list_fonts - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_list_fonts - arg1 (max_names)");
		validate_NULL_TYPETYPE(  arg2, "xcb_list_fonts - arg2 (pattern_len)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xcb_list_fonts - arg3 (pattern)");
		}
		validate_NULL_TYPETYPE(  arg3, "xcb_list_fonts - arg3 (pattern)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

