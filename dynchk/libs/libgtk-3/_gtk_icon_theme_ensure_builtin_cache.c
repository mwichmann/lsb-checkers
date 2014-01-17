// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef _gtk_icon_theme_ensure_builtin_cache
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void _gtk_icon_theme_ensure_builtin_cache ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for _gtk_icon_theme_ensure_builtin_cache()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_gtk_icon_theme_ensure_builtin_cache");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load _gtk_icon_theme_ensure_builtin_cache. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "_gtk_icon_theme_ensure_builtin_cache() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

