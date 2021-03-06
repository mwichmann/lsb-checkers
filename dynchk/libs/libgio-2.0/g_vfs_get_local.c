// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gvfs.h>
#undef g_vfs_get_local
static GVfs *(*funcptr) () = 0;

extern int __lsb_check_params;
GVfs * g_vfs_get_local ()
{
	int reset_flag = __lsb_check_params;
	GVfs * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_vfs_get_local()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_vfs_get_local");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_vfs_get_local. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_vfs_get_local() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

