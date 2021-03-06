// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <stdint.h>
#include <xcb/xproto.h>
#undef xcb_image_text_8
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , uint8_t , xcb_drawable_t , xcb_gcontext_t , int16_t , int16_t , const char * ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_image_text_8 (xcb_connection_t * arg0 , uint8_t arg1 , xcb_drawable_t arg2 , xcb_gcontext_t arg3 , int16_t arg4 , int16_t arg5 , const char * arg6 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_image_text_8()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_image_text_8");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_image_text_8. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_image_text_8() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_image_text_8 - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_image_text_8 - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_image_text_8 - arg1 (string_len)");
		validate_NULL_TYPETYPE(  arg2, "xcb_image_text_8 - arg2 (drawable)");
		validate_NULL_TYPETYPE(  arg3, "xcb_image_text_8 - arg3 (gc)");
		validate_NULL_TYPETYPE(  arg4, "xcb_image_text_8 - arg4 (x)");
		validate_NULL_TYPETYPE(  arg5, "xcb_image_text_8 - arg5 (y)");
		if( arg6 ) {
		validate_Rdaddress( arg6, "xcb_image_text_8 - arg6 (string)");
		}
		validate_NULL_TYPETYPE(  arg6, "xcb_image_text_8 - arg6 (string)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

