// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <stdint.h>
#include <xcb/xproto.h>
#undef xcb_get_image_unchecked
static xcb_get_image_cookie_t(*funcptr) (xcb_connection_t * , uint8_t , xcb_drawable_t , int16_t , int16_t , uint16_t , uint16_t , uint32_t ) = 0;

extern int __lsb_check_params;
xcb_get_image_cookie_t xcb_get_image_unchecked (xcb_connection_t * arg0 , uint8_t arg1 , xcb_drawable_t arg2 , int16_t arg3 , int16_t arg4 , uint16_t arg5 , uint16_t arg6 , uint32_t arg7 )
{
	int reset_flag = __lsb_check_params;
	xcb_get_image_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_get_image_unchecked()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_get_image_unchecked");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_get_image_unchecked. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_get_image_unchecked() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_get_image_unchecked - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_get_image_unchecked - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_get_image_unchecked - arg1 (format)");
		validate_NULL_TYPETYPE(  arg2, "xcb_get_image_unchecked - arg2 (drawable)");
		validate_NULL_TYPETYPE(  arg3, "xcb_get_image_unchecked - arg3 (x)");
		validate_NULL_TYPETYPE(  arg4, "xcb_get_image_unchecked - arg4 (y)");
		validate_NULL_TYPETYPE(  arg5, "xcb_get_image_unchecked - arg5 (width)");
		validate_NULL_TYPETYPE(  arg6, "xcb_get_image_unchecked - arg6 (height)");
		validate_NULL_TYPETYPE(  arg7, "xcb_get_image_unchecked - arg7 (plane_mask)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}

