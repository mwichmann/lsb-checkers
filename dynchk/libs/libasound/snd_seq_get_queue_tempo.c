// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/seq.h>
#undef snd_seq_get_queue_tempo
static int(*funcptr) (snd_seq_t * , int , snd_seq_queue_tempo_t * ) = 0;

extern int __lsb_check_params;
int snd_seq_get_queue_tempo (snd_seq_t * arg0 , int arg1 , snd_seq_queue_tempo_t * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_seq_get_queue_tempo()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_seq_get_queue_tempo", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_seq_get_queue_tempo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_seq_get_queue_tempo() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_seq_get_queue_tempo - arg0 (handle)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_seq_get_queue_tempo - arg0 (handle)");
		validate_NULL_TYPETYPE(  arg1, "snd_seq_get_queue_tempo - arg1 (q)");
		if( arg2 ) {
		validate_RWaddress( arg2, "snd_seq_get_queue_tempo - arg2 (tempo)");
		}
		validate_NULL_TYPETYPE(  arg2, "snd_seq_get_queue_tempo - arg2 (tempo)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

