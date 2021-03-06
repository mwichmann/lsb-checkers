// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtktextbufferrichtext.h>
#undef gtk_text_buffer_deserialize_get_can_create_tags
static gboolean(*funcptr) (GtkTextBuffer * , GdkAtom ) = 0;

extern int __lsb_check_params;
gboolean gtk_text_buffer_deserialize_get_can_create_tags (GtkTextBuffer * arg0 , GdkAtom arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_text_buffer_deserialize_get_can_create_tags()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_buffer_deserialize_get_can_create_tags");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_buffer_deserialize_get_can_create_tags. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_buffer_deserialize_get_can_create_tags() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_buffer_deserialize_get_can_create_tags - arg0 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_buffer_deserialize_get_can_create_tags - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_buffer_deserialize_get_can_create_tags - arg1 (format)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

