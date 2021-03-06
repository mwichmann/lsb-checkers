// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_boxed_free
static void(*funcptr) (GType , gpointer ) = 0;

extern int __lsb_check_params;
void g_boxed_free (GType arg0 , gpointer arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_boxed_free()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_boxed_free");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_boxed_free. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_boxed_free() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_boxed_free - arg0 (boxed_type)");
		validate_NULL_TYPETYPE(  arg1, "g_boxed_free - arg1 (boxed)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

