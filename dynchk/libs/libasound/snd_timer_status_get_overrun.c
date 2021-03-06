// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/timer.h>
#undef snd_timer_status_get_overrun
static long int(*funcptr) (snd_timer_status_t * ) = 0;

extern int __lsb_check_params;
long int snd_timer_status_get_overrun (snd_timer_status_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	long int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_timer_status_get_overrun()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_timer_status_get_overrun", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_timer_status_get_overrun. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_timer_status_get_overrun() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_timer_status_get_overrun - arg0 (status)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_timer_status_get_overrun - arg0 (status)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

