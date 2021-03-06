// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_image_get_image_locale
static const char *(*funcptr) (AtkImage * ) = 0;

extern int __lsb_check_params;
const char * atk_image_get_image_locale (AtkImage * arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_image_get_image_locale()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_image_get_image_locale");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_image_get_image_locale. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_image_get_image_locale() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_image_get_image_locale - arg0 (image)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_image_get_image_locale - arg0 (image)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

