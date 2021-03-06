// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gpollableinputstream.h>
#undef g_pollable_source_new
static GSource *(*funcptr) (GObject * ) = 0;

extern int __lsb_check_params;
GSource * g_pollable_source_new (GObject * arg0 )
{
	int reset_flag = __lsb_check_params;
	GSource * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_pollable_source_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_pollable_source_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_pollable_source_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_pollable_source_new() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_pollable_source_new - arg0 (pollable_stream)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_pollable_source_new - arg0 (pollable_stream)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

