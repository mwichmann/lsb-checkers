// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <xcb/xproto.h>
#include <stdint.h>
#undef xcb_copy_area
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , xcb_drawable_t , xcb_drawable_t , xcb_gcontext_t , int16_t , int16_t , int16_t , int16_t , uint16_t , uint16_t ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_copy_area (xcb_connection_t * arg0 , xcb_drawable_t arg1 , xcb_drawable_t arg2 , xcb_gcontext_t arg3 , int16_t arg4 , int16_t arg5 , int16_t arg6 , int16_t arg7 , uint16_t arg8 , uint16_t arg9 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_copy_area()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_copy_area");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_copy_area. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_copy_area() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_copy_area - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_copy_area - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_copy_area - arg1 (src_drawable)");
		validate_NULL_TYPETYPE(  arg2, "xcb_copy_area - arg2 (dst_drawable)");
		validate_NULL_TYPETYPE(  arg3, "xcb_copy_area - arg3 (gc)");
		validate_NULL_TYPETYPE(  arg4, "xcb_copy_area - arg4 (src_x)");
		validate_NULL_TYPETYPE(  arg5, "xcb_copy_area - arg5 (src_y)");
		validate_NULL_TYPETYPE(  arg6, "xcb_copy_area - arg6 (dst_x)");
		validate_NULL_TYPETYPE(  arg7, "xcb_copy_area - arg7 (dst_y)");
		validate_NULL_TYPETYPE(  arg8, "xcb_copy_area - arg8 (width)");
		validate_NULL_TYPETYPE(  arg9, "xcb_copy_area - arg9 (height)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	__lsb_check_params = reset_flag;
	return ret_value;
}
