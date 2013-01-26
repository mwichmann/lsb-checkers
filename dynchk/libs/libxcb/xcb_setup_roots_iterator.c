// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xproto.h>
#undef xcb_setup_roots_iterator
static xcb_screen_iterator_t(*funcptr) (const xcb_setup_t * ) = 0;

extern int __lsb_check_params;
xcb_screen_iterator_t xcb_setup_roots_iterator (const xcb_setup_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	xcb_screen_iterator_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_setup_roots_iterator()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_setup_roots_iterator");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_setup_roots_iterator. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_setup_roots_iterator() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xcb_setup_roots_iterator - arg0 (R)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_setup_roots_iterator - arg0 (R)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
