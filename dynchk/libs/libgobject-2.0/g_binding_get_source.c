// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_binding_get_source
static GObject *(*funcptr) (GBinding * ) = 0;

extern int __lsb_check_params;
GObject * g_binding_get_source (GBinding * arg0 )
{
	int reset_flag = __lsb_check_params;
	GObject * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_binding_get_source()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_binding_get_source");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_binding_get_source. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_binding_get_source() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_binding_get_source - arg0 (binding)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_binding_get_source - arg0 (binding)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

