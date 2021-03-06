// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <xcb/xproto.h>
#undef xcb_copy_colormap_and_free
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , xcb_colormap_t , xcb_colormap_t ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_copy_colormap_and_free (xcb_connection_t * arg0 , xcb_colormap_t arg1 , xcb_colormap_t arg2 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_copy_colormap_and_free()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_copy_colormap_and_free");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_copy_colormap_and_free. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_copy_colormap_and_free() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_copy_colormap_and_free - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_copy_colormap_and_free - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_copy_colormap_and_free - arg1 (mid)");
		validate_NULL_TYPETYPE(  arg2, "xcb_copy_colormap_and_free - arg2 (src_cmap)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

