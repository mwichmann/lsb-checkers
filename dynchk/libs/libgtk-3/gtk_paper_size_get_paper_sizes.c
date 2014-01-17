// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_paper_size_get_paper_sizes
static GList *(*funcptr) (gboolean ) = 0;

extern int __lsb_check_params;
GList * gtk_paper_size_get_paper_sizes (gboolean arg0 )
{
	int reset_flag = __lsb_check_params;
	GList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_paper_size_get_paper_sizes()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_paper_size_get_paper_sizes");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_paper_size_get_paper_sizes. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_paper_size_get_paper_sizes() - validating");
		validate_NULL_TYPETYPE(  arg0, "gtk_paper_size_get_paper_sizes - arg0 (include_custom)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

