// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/hwdep.h>
#undef snd_hwdep_dsp_status_get_dsp_loaded
static unsigned int(*funcptr) (const snd_hwdep_dsp_status_t * ) = 0;

extern int __lsb_check_params;
unsigned int snd_hwdep_dsp_status_get_dsp_loaded (const snd_hwdep_dsp_status_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	unsigned int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_hwdep_dsp_status_get_dsp_loaded()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_hwdep_dsp_status_get_dsp_loaded", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_hwdep_dsp_status_get_dsp_loaded. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_hwdep_dsp_status_get_dsp_loaded() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "snd_hwdep_dsp_status_get_dsp_loaded - arg0 (obj)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_hwdep_dsp_status_get_dsp_loaded - arg0 (obj)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
