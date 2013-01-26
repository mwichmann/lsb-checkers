// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/control.h>
#undef snd_ctl_elem_value_get_boolean
static int(*funcptr) (const snd_ctl_elem_value_t * , unsigned int ) = 0;

extern int __lsb_check_params;
int snd_ctl_elem_value_get_boolean (const snd_ctl_elem_value_t * arg0 , unsigned int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_ctl_elem_value_get_boolean()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_ctl_elem_value_get_boolean", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_ctl_elem_value_get_boolean. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_ctl_elem_value_get_boolean() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "snd_ctl_elem_value_get_boolean - arg0 (obj)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_ctl_elem_value_get_boolean - arg0 (obj)");
		validate_NULL_TYPETYPE(  arg1, "snd_ctl_elem_value_get_boolean - arg1 (idx)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
