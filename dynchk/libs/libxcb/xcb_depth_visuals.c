// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xproto.h>
#undef xcb_depth_visuals
static xcb_visualtype_t *(*funcptr) (const xcb_depth_t * ) = 0;

extern int __lsb_check_params;
xcb_visualtype_t * xcb_depth_visuals (const xcb_depth_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	xcb_visualtype_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_depth_visuals()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_depth_visuals");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_depth_visuals. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_depth_visuals() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xcb_depth_visuals - arg0 (R)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_depth_visuals - arg0 (R)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

