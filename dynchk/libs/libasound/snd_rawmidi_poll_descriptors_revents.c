// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/rawmidi.h>
#include <sys/poll.h>
#undef snd_rawmidi_poll_descriptors_revents
static int(*funcptr) (snd_rawmidi_t * , struct pollfd * , unsigned int , short unsigned int * ) = 0;

extern int __lsb_check_params;
int snd_rawmidi_poll_descriptors_revents (snd_rawmidi_t * arg0 , struct pollfd * arg1 , unsigned int arg2 , short unsigned int * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_rawmidi_poll_descriptors_revents()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_rawmidi_poll_descriptors_revents", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_rawmidi_poll_descriptors_revents. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_rawmidi_poll_descriptors_revents() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_rawmidi_poll_descriptors_revents - arg0 (rawmidi)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_rawmidi_poll_descriptors_revents - arg0 (rawmidi)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_rawmidi_poll_descriptors_revents - arg1 (pfds)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_rawmidi_poll_descriptors_revents - arg1 (pfds)");
		validate_NULL_TYPETYPE(  arg2, "snd_rawmidi_poll_descriptors_revents - arg2 (nfds)");
		if( arg3 ) {
		validate_RWaddress( arg3, "snd_rawmidi_poll_descriptors_revents - arg3 (revent)");
		}
		validate_NULL_TYPETYPE(  arg3, "snd_rawmidi_poll_descriptors_revents - arg3 (revent)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

