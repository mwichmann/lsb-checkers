// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/hwdep.h>
#include <stddef.h>
#undef snd_hwdep_write
static ssize_t(*funcptr) (snd_hwdep_t * , const void * , size_t ) = 0;

extern int __lsb_check_params;
ssize_t snd_hwdep_write (snd_hwdep_t * arg0 , const void * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_hwdep_write()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_hwdep_write", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_hwdep_write. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_hwdep_write() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_hwdep_write - arg0 (hwdep)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_hwdep_write - arg0 (hwdep)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "snd_hwdep_write - arg1 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_hwdep_write - arg1 (buffer)");
		validate_NULL_TYPETYPE(  arg2, "snd_hwdep_write - arg2 (size)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
