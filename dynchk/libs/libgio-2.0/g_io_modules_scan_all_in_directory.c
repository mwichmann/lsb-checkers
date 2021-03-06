// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giomodule.h>
#undef g_io_modules_scan_all_in_directory
static void(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
void g_io_modules_scan_all_in_directory (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_io_modules_scan_all_in_directory()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_io_modules_scan_all_in_directory");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_io_modules_scan_all_in_directory. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_io_modules_scan_all_in_directory() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_io_modules_scan_all_in_directory - arg0 (dirname)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_io_modules_scan_all_in_directory - arg0 (dirname)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

