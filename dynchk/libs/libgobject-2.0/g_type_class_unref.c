// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_type_class_unref
static void(*funcptr) (gpointer ) = 0;

extern int __lsb_check_params;
void g_type_class_unref (gpointer arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_type_class_unref()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_type_class_unref");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_type_class_unref. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_type_class_unref() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_type_class_unref - arg0 (g_class)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

