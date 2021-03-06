// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/seq.h>
#include <alsa/seq_event.h>
#include <alsa/seqmid.h>
#undef snd_seq_control_queue
static int(*funcptr) (snd_seq_t * , int , int , int , snd_seq_event_t * ) = 0;

extern int __lsb_check_params;
int snd_seq_control_queue (snd_seq_t * arg0 , int arg1 , int arg2 , int arg3 , snd_seq_event_t * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_seq_control_queue()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_seq_control_queue", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_seq_control_queue. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_seq_control_queue() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_seq_control_queue - arg0 (seq)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_seq_control_queue - arg0 (seq)");
		validate_NULL_TYPETYPE(  arg1, "snd_seq_control_queue - arg1 (q)");
		validate_NULL_TYPETYPE(  arg2, "snd_seq_control_queue - arg2 (type)");
		validate_NULL_TYPETYPE(  arg3, "snd_seq_control_queue - arg3 (value)");
		if( arg4 ) {
		validate_RWaddress( arg4, "snd_seq_control_queue - arg4 (ev)");
		}
		validate_NULL_TYPETYPE(  arg4, "snd_seq_control_queue - arg4 (ev)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

