// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_style_context_add_provider_for_screen
static void(*funcptr) (GdkScreen * , GtkStyleProvider * , guint ) = 0;

extern int __lsb_check_params;
void gtk_style_context_add_provider_for_screen (GdkScreen * arg0 , GtkStyleProvider * arg1 , guint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_style_context_add_provider_for_screen()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_style_context_add_provider_for_screen");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_style_context_add_provider_for_screen. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_style_context_add_provider_for_screen() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_style_context_add_provider_for_screen - arg0 (screen)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_style_context_add_provider_for_screen - arg0 (screen)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_style_context_add_provider_for_screen - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_style_context_add_provider_for_screen - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_style_context_add_provider_for_screen - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
