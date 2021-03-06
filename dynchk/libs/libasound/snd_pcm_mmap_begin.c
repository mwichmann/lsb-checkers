// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#undef snd_pcm_mmap_begin
static int(*funcptr) (snd_pcm_t * , const snd_pcm_channel_area_t * * , snd_pcm_uframes_t * , snd_pcm_uframes_t * ) = 0;

extern int __lsb_check_params;
int snd_pcm_mmap_begin (snd_pcm_t * arg0 , const snd_pcm_channel_area_t * * arg1 , snd_pcm_uframes_t * arg2 , snd_pcm_uframes_t * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_pcm_mmap_begin()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_mmap_begin", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_mmap_begin. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_mmap_begin() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_pcm_mmap_begin - arg0 (pcm)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_mmap_begin - arg0 (pcm)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_pcm_mmap_begin - arg1 (areas)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_pcm_mmap_begin - arg1 (areas)");
		if( arg2 ) {
		validate_RWaddress( arg2, "snd_pcm_mmap_begin - arg2 (offset)");
		}
		validate_NULL_TYPETYPE(  arg2, "snd_pcm_mmap_begin - arg2 (offset)");
		if( arg3 ) {
		validate_RWaddress( arg3, "snd_pcm_mmap_begin - arg3 (frames)");
		}
		validate_NULL_TYPETYPE(  arg3, "snd_pcm_mmap_begin - arg3 (frames)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

