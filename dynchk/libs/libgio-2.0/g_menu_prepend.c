// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gmenu.h>
#include <glib-2.0/glib.h>
#undef g_menu_prepend
static void(*funcptr) (GMenu * , const gchar * , const gchar * ) = 0;

extern int __lsb_check_params;
void g_menu_prepend (GMenu * arg0 , const gchar * arg1 , const gchar * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_menu_prepend()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_menu_prepend");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_menu_prepend. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_menu_prepend() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_menu_prepend - arg0 (menu)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_menu_prepend - arg0 (menu)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_menu_prepend - arg1 (label)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_menu_prepend - arg1 (label)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_menu_prepend - arg2 (detailed_action)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_menu_prepend - arg2 (detailed_action)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
