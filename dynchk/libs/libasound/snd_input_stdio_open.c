// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/input.h>
#undef snd_input_stdio_open
static int(*funcptr) (snd_input_t * * , const char * , const char * ) = 0;

extern int __lsb_check_params;
int snd_input_stdio_open (snd_input_t * * arg0 , const char * arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_input_stdio_open()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_input_stdio_open", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_input_stdio_open. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_input_stdio_open() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_input_stdio_open - arg0 (inputp)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_input_stdio_open - arg0 (inputp)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "snd_input_stdio_open - arg1 (file)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_input_stdio_open - arg1 (file)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "snd_input_stdio_open - arg2 (mode)");
		}
		validate_NULL_TYPETYPE(  arg2, "snd_input_stdio_open - arg2 (mode)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
