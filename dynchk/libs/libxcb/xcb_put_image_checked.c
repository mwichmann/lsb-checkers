// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <stdint.h>
#include <xcb/xproto.h>
#undef xcb_put_image_checked
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , uint8_t , xcb_drawable_t , xcb_gcontext_t , uint16_t , uint16_t , int16_t , int16_t , uint8_t , uint8_t , uint32_t , const unsigned char * ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_put_image_checked (xcb_connection_t * arg0 , uint8_t arg1 , xcb_drawable_t arg2 , xcb_gcontext_t arg3 , uint16_t arg4 , uint16_t arg5 , int16_t arg6 , int16_t arg7 , uint8_t arg8 , uint8_t arg9 , uint32_t arg10 , const unsigned char * arg11 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_put_image_checked()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_put_image_checked");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_put_image_checked. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_put_image_checked() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_put_image_checked - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_put_image_checked - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_put_image_checked - arg1 (format)");
		validate_NULL_TYPETYPE(  arg2, "xcb_put_image_checked - arg2 (drawable)");
		validate_NULL_TYPETYPE(  arg3, "xcb_put_image_checked - arg3 (gc)");
		validate_NULL_TYPETYPE(  arg4, "xcb_put_image_checked - arg4 (width)");
		validate_NULL_TYPETYPE(  arg5, "xcb_put_image_checked - arg5 (height)");
		validate_NULL_TYPETYPE(  arg6, "xcb_put_image_checked - arg6 (dst_x)");
		validate_NULL_TYPETYPE(  arg7, "xcb_put_image_checked - arg7 (dst_y)");
		validate_NULL_TYPETYPE(  arg8, "xcb_put_image_checked - arg8 (left_pad)");
		validate_NULL_TYPETYPE(  arg9, "xcb_put_image_checked - arg9 (depth)");
		validate_NULL_TYPETYPE(  arg10, "xcb_put_image_checked - arg10 (data_len)");
		if( arg11 ) {
		validate_Rdaddress( arg11, "xcb_put_image_checked - arg11 (data)");
		}
		validate_NULL_TYPETYPE(  arg11, "xcb_put_image_checked - arg11 (data)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
	__lsb_check_params = reset_flag;
	return ret_value;
}

