// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gfile.h>
#undef g_file_unmount_mountable
static void(*funcptr) (GFile * , GMountUnmountFlags , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_file_unmount_mountable (GFile * arg0 , GMountUnmountFlags arg1 , GCancellable * arg2 , GAsyncReadyCallback arg3 , gpointer arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_file_unmount_mountable()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_unmount_mountable");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_unmount_mountable. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_unmount_mountable() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_unmount_mountable - arg0 (file)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_unmount_mountable - arg0 (file)");
		validate_NULL_TYPETYPE(  arg1, "g_file_unmount_mountable - arg1 (flags)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_file_unmount_mountable - arg2 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_file_unmount_mountable - arg2 (cancellable)");
		validate_NULL_TYPETYPE(  arg3, "g_file_unmount_mountable - arg3 (callback)");
		validate_NULL_TYPETYPE(  arg4, "g_file_unmount_mountable - arg4 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}
