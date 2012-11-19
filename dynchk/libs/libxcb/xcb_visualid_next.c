// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xproto.h>
#undef xcb_visualid_next
static void(*funcptr) (xcb_visualid_iterator_t * ) = 0;

extern int __lsb_check_params;
void xcb_visualid_next (xcb_visualid_iterator_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xcb_visualid_next()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_visualid_next");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_visualid_next. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_visualid_next() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_visualid_next - arg0 (i)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_visualid_next - arg0 (i)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

