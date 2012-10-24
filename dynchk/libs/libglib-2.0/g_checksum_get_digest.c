// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_checksum_get_digest
static void(*funcptr) (GChecksum * , guint8 * , gsize * ) = 0;

extern int __lsb_check_params;
void g_checksum_get_digest (GChecksum * arg0 , guint8 * arg1 , gsize * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_checksum_get_digest()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_checksum_get_digest");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_checksum_get_digest. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_checksum_get_digest() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_checksum_get_digest - arg0 (checksum)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_checksum_get_digest - arg0 (checksum)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_checksum_get_digest - arg1 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_checksum_get_digest - arg1 (buffer)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_checksum_get_digest - arg2 (digest_len)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_checksum_get_digest - arg2 (digest_len)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

