// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/output.h>
#undef snd_output_puts
static int(*funcptr) (snd_output_t * , const char * ) = 0;

extern int __lsb_check_params;
int snd_output_puts (snd_output_t * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_output_puts()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_output_puts", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_output_puts. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_output_puts() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_output_puts - arg0 (output)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_output_puts - arg0 (output)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "snd_output_puts - arg1 (str)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_output_puts - arg1 (str)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

