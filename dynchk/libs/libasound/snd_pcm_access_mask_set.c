// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#undef snd_pcm_access_mask_set
static void(*funcptr) (snd_pcm_access_mask_t * , snd_pcm_access_t ) = 0;

extern int __lsb_check_params;
void snd_pcm_access_mask_set (snd_pcm_access_mask_t * arg0 , snd_pcm_access_t arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for snd_pcm_access_mask_set()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_access_mask_set", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_access_mask_set. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_access_mask_set() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_pcm_access_mask_set - arg0 (mask)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_access_mask_set - arg0 (mask)");
		validate_NULL_TYPETYPE(  arg1, "snd_pcm_access_mask_set - arg1 (val)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

