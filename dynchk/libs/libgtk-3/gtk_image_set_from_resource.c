// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_image_set_from_resource
static void(*funcptr) (GtkImage * , const char * ) = 0;

extern int __lsb_check_params;
void gtk_image_set_from_resource (GtkImage * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_image_set_from_resource()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_image_set_from_resource");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_image_set_from_resource. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_image_set_from_resource() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_image_set_from_resource - arg0 (image)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_image_set_from_resource - arg0 (image)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_image_set_from_resource - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_image_set_from_resource - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

