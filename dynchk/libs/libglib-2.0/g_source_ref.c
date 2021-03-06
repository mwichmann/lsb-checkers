// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_source_ref
static GSource *(*funcptr) (GSource * ) = 0;

extern int __lsb_check_params;
GSource * g_source_ref (GSource * arg0 )
{
	int reset_flag = __lsb_check_params;
	GSource * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_source_ref()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_source_ref");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_source_ref. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_source_ref() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_source_ref - arg0 (source)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_source_ref - arg0 (source)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

