// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_rec_mutex_unlock
static void(*funcptr) (GRecMutex * ) = 0;

extern int __lsb_check_params;
void g_rec_mutex_unlock (GRecMutex * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_rec_mutex_unlock()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_rec_mutex_unlock");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_rec_mutex_unlock. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_rec_mutex_unlock() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_rec_mutex_unlock - arg0 (rec_mutex)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_rec_mutex_unlock - arg0 (rec_mutex)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

