// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xproto.h>
#undef xcb_alloc_color_cells_pixels
static uint32_t *(*funcptr) (const xcb_alloc_color_cells_reply_t * ) = 0;

extern int __lsb_check_params;
uint32_t * xcb_alloc_color_cells_pixels (const xcb_alloc_color_cells_reply_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	uint32_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_alloc_color_cells_pixels()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_alloc_color_cells_pixels");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_alloc_color_cells_pixels. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_alloc_color_cells_pixels() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xcb_alloc_color_cells_pixels - arg0 (R)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_alloc_color_cells_pixels - arg0 (R)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

