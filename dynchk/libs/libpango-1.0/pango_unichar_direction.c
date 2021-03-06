// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <pango-1.0/pango/pango.h>
#undef pango_unichar_direction
static PangoDirection(*funcptr) (gunichar ) = 0;

extern int __lsb_check_params;
PangoDirection pango_unichar_direction (gunichar arg0 )
{
	int reset_flag = __lsb_check_params;
	PangoDirection ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_unichar_direction()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_unichar_direction");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_unichar_direction. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_unichar_direction() - validating");
		validate_NULL_TYPETYPE(  arg0, "pango_unichar_direction - arg0 (ch)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

