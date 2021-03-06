// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gtk_image_set_from_animation
static void(*funcptr) (GtkImage * , GdkPixbufAnimation * ) = 0;

extern int __lsb_check_params;
void gtk_image_set_from_animation (GtkImage * arg0 , GdkPixbufAnimation * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_image_set_from_animation()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_image_set_from_animation");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_image_set_from_animation. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_image_set_from_animation() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_image_set_from_animation - arg0 (image)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_image_set_from_animation - arg0 (image)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_image_set_from_animation - arg1 (animation)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_image_set_from_animation - arg1 (animation)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

