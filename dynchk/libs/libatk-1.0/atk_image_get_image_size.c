// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_image_get_image_size
static void(*funcptr) (AtkImage * , int * , int * ) = 0;

extern int __lsb_check_params;
void atk_image_get_image_size (AtkImage * arg0 , int * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for atk_image_get_image_size()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_image_get_image_size");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_image_get_image_size. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_image_get_image_size() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_image_get_image_size - arg0 (image)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_image_get_image_size - arg0 (image)");
		if( arg1 ) {
		validate_RWaddress( arg1, "atk_image_get_image_size - arg1 (width)");
		}
		validate_NULL_TYPETYPE(  arg1, "atk_image_get_image_size - arg1 (width)");
		if( arg2 ) {
		validate_RWaddress( arg2, "atk_image_get_image_size - arg2 (height)");
		}
		validate_NULL_TYPETYPE(  arg2, "atk_image_get_image_size - arg2 (height)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
