// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/seq.h>
#undef snd_seq_port_info_set_type
static void(*funcptr) (snd_seq_port_info_t * , unsigned int ) = 0;

extern int __lsb_check_params;
void snd_seq_port_info_set_type (snd_seq_port_info_t * arg0 , unsigned int arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for snd_seq_port_info_set_type()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_seq_port_info_set_type", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_seq_port_info_set_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_seq_port_info_set_type() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_seq_port_info_set_type - arg0 (info)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_seq_port_info_set_type - arg0 (info)");
		validate_NULL_TYPETYPE(  arg1, "snd_seq_port_info_set_type - arg1 (type)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

