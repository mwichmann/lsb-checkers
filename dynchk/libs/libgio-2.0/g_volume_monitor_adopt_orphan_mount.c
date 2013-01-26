// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gvolumemonitor.h>
#undef g_volume_monitor_adopt_orphan_mount
static GVolume *(*funcptr) (GMount * ) = 0;

extern int __lsb_check_params;
GVolume * g_volume_monitor_adopt_orphan_mount (GMount * arg0 )
{
	int reset_flag = __lsb_check_params;
	GVolume * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_volume_monitor_adopt_orphan_mount()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_volume_monitor_adopt_orphan_mount");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_volume_monitor_adopt_orphan_mount. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_volume_monitor_adopt_orphan_mount() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_volume_monitor_adopt_orphan_mount - arg0 (mount)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_volume_monitor_adopt_orphan_mount - arg0 (mount)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
