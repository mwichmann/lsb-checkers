// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xproto.h>
#undef xcb_rgb_end
static xcb_generic_iterator_t(*funcptr) (xcb_rgb_iterator_t ) = 0;

extern int __lsb_check_params;
xcb_generic_iterator_t xcb_rgb_end (xcb_rgb_iterator_t arg0 )
{
	int reset_flag = __lsb_check_params;
	xcb_generic_iterator_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_rgb_end()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_rgb_end");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_rgb_end. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_rgb_end() - validating");
		validate_NULL_TYPETYPE(  arg0, "xcb_rgb_end - arg0 (i)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

