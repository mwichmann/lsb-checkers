// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_style_context_get_font
static const struct _PangoFontDescription *(*funcptr) (GtkStyleContext * , GtkStateFlags ) = 0;

extern int __lsb_check_params;
const struct _PangoFontDescription * gtk_style_context_get_font (GtkStyleContext * arg0 , GtkStateFlags arg1 )
{
	int reset_flag = __lsb_check_params;
	const struct _PangoFontDescription * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_style_context_get_font()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_style_context_get_font");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_style_context_get_font. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_style_context_get_font() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_style_context_get_font - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_style_context_get_font - arg0 (context)");
		validate_NULL_TYPETYPE(  arg1, "gtk_style_context_get_font - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
