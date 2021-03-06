// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_mapped_file_new_from_fd
static GMappedFile *(*funcptr) (gint , gboolean , GError * * ) = 0;

extern int __lsb_check_params;
GMappedFile * g_mapped_file_new_from_fd (gint arg0 , gboolean arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	GMappedFile * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_mapped_file_new_from_fd()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_mapped_file_new_from_fd");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_mapped_file_new_from_fd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_mapped_file_new_from_fd() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_mapped_file_new_from_fd - arg0 (fd)");
		validate_NULL_TYPETYPE(  arg1, "g_mapped_file_new_from_fd - arg1 (writable)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_mapped_file_new_from_fd - arg2 (error)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_mapped_file_new_from_fd - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

