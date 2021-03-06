// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/ipp.h>
#undef ippAddResolution
static ipp_attribute_t *(*funcptr) (ipp_t * , ipp_tag_t , const char * , ipp_res_t , int , int ) = 0;

extern int __lsb_check_params;
ipp_attribute_t * ippAddResolution (ipp_t * arg0 , ipp_tag_t arg1 , const char * arg2 , ipp_res_t arg3 , int arg4 , int arg5 )
{
	int reset_flag = __lsb_check_params;
	ipp_attribute_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for ippAddResolution()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ippAddResolution");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ippAddResolution. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ippAddResolution() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ippAddResolution - arg0 (ipp)");
		}
		validate_NULL_TYPETYPE(  arg0, "ippAddResolution - arg0 (ipp)");
		validate_NULL_TYPETYPE(  arg1, "ippAddResolution - arg1 (group)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "ippAddResolution - arg2 (name)");
		}
		validate_NULL_TYPETYPE(  arg2, "ippAddResolution - arg2 (name)");
		validate_NULL_TYPETYPE(  arg3, "ippAddResolution - arg3 (units)");
		validate_NULL_TYPETYPE(  arg4, "ippAddResolution - arg4 (xres)");
		validate_NULL_TYPETYPE(  arg5, "ippAddResolution - arg5 (yres)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

