// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#undef snd_pcm_wait
static int(*funcptr) (snd_pcm_t * , int ) = 0;

extern int __lsb_check_params;
int snd_pcm_wait (snd_pcm_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_pcm_wait()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_wait", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_wait. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_wait() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_pcm_wait - arg0 (pcm)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_wait - arg0 (pcm)");
		validate_NULL_TYPETYPE(  arg1, "snd_pcm_wait - arg1 (timeout)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

