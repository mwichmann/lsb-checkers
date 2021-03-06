// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#include <alsa/global.h>
#undef snd_pcm_status_get_trigger_tstamp
static void(*funcptr) (const snd_pcm_status_t * , snd_timestamp_t * ) = 0;

extern int __lsb_check_params;
void snd_pcm_status_get_trigger_tstamp (const snd_pcm_status_t * arg0 , snd_timestamp_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for snd_pcm_status_get_trigger_tstamp()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_status_get_trigger_tstamp", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_status_get_trigger_tstamp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_status_get_trigger_tstamp() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "snd_pcm_status_get_trigger_tstamp - arg0 (obj)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_status_get_trigger_tstamp - arg0 (obj)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_pcm_status_get_trigger_tstamp - arg1 (ptr)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_pcm_status_get_trigger_tstamp - arg1 (ptr)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

