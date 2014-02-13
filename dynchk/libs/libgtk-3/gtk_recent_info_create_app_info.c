// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_recent_info_create_app_info
static GAppInfo *(*funcptr) (GtkRecentInfo * , const char * , GError * * ) = 0;

extern int __lsb_check_params;
GAppInfo * gtk_recent_info_create_app_info (GtkRecentInfo * arg0 , const char * arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	GAppInfo * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_recent_info_create_app_info()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_recent_info_create_app_info");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_recent_info_create_app_info. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_recent_info_create_app_info() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_recent_info_create_app_info - arg0 (info)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_recent_info_create_app_info - arg0 (info)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_recent_info_create_app_info - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_recent_info_create_app_info - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_recent_info_create_app_info - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_recent_info_create_app_info - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
