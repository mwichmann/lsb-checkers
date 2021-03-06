// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gmenu.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/giotypes.h>
#undef g_menu_insert_submenu
static void(*funcptr) (GMenu * , gint , const gchar * , GMenuModel * ) = 0;

extern int __lsb_check_params;
void g_menu_insert_submenu (GMenu * arg0 , gint arg1 , const gchar * arg2 , GMenuModel * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_menu_insert_submenu()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_menu_insert_submenu");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_menu_insert_submenu. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_menu_insert_submenu() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_menu_insert_submenu - arg0 (menu)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_menu_insert_submenu - arg0 (menu)");
		validate_NULL_TYPETYPE(  arg1, "g_menu_insert_submenu - arg1 (position)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_menu_insert_submenu - arg2 (label)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_menu_insert_submenu - arg2 (label)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_menu_insert_submenu - arg3 (submenu)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_menu_insert_submenu - arg3 (submenu)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

