// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#undef snd_pcm_area_copy
static int(*funcptr) (const snd_pcm_channel_area_t * , snd_pcm_uframes_t , const snd_pcm_channel_area_t * , snd_pcm_uframes_t , unsigned int , snd_pcm_format_t ) = 0;

extern int __lsb_check_params;
int snd_pcm_area_copy (const snd_pcm_channel_area_t * arg0 , snd_pcm_uframes_t arg1 , const snd_pcm_channel_area_t * arg2 , snd_pcm_uframes_t arg3 , unsigned int arg4 , snd_pcm_format_t arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_pcm_area_copy()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_area_copy", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_area_copy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_area_copy() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "snd_pcm_area_copy - arg0 (dst_channel)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_area_copy - arg0 (dst_channel)");
		validate_NULL_TYPETYPE(  arg1, "snd_pcm_area_copy - arg1 (dst_offset)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "snd_pcm_area_copy - arg2 (src_channel)");
		}
		validate_NULL_TYPETYPE(  arg2, "snd_pcm_area_copy - arg2 (src_channel)");
		validate_NULL_TYPETYPE(  arg3, "snd_pcm_area_copy - arg3 (src_offset)");
		validate_NULL_TYPETYPE(  arg4, "snd_pcm_area_copy - arg4 (samples)");
		validate_NULL_TYPETYPE(  arg5, "snd_pcm_area_copy - arg5 (format)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}
