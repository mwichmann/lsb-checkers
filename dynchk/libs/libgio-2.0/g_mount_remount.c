// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gmount.h>
#undef g_mount_remount
static void(*funcptr) (GMount * , GMountMountFlags , GMountOperation * , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_mount_remount (GMount * arg0 , GMountMountFlags arg1 , GMountOperation * arg2 , GCancellable * arg3 , GAsyncReadyCallback arg4 , gpointer arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_mount_remount()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_mount_remount");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_mount_remount. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_mount_remount() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_mount_remount - arg0 (mount)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_mount_remount - arg0 (mount)");
		validate_NULL_TYPETYPE(  arg1, "g_mount_remount - arg1 (flags)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_mount_remount - arg2 (mount_operation)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_mount_remount - arg2 (mount_operation)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_mount_remount - arg3 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_mount_remount - arg3 (cancellable)");
		validate_NULL_TYPETYPE(  arg4, "g_mount_remount - arg4 (callback)");
		validate_NULL_TYPETYPE(  arg5, "g_mount_remount - arg5 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}
