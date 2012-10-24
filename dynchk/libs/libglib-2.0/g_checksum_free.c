// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_checksum_free
static void(*funcptr) (GChecksum * ) = 0;

extern int __lsb_check_params;
void g_checksum_free (GChecksum * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_checksum_free()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_checksum_free");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_checksum_free. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_checksum_free() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_checksum_free - arg0 (checksum)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_checksum_free - arg0 (checksum)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

