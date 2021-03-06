// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/ipp.h>
#undef ippAddCollections
static ipp_attribute_t *(*funcptr) (ipp_t * , ipp_tag_t , const char * , int , const ipp_t * * ) = 0;

extern int __lsb_check_params;
ipp_attribute_t * ippAddCollections (ipp_t * arg0 , ipp_tag_t arg1 , const char * arg2 , int arg3 , const ipp_t * * arg4 )
{
	int reset_flag = __lsb_check_params;
	ipp_attribute_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for ippAddCollections()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ippAddCollections");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ippAddCollections. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ippAddCollections() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ippAddCollections - arg0 (ipp)");
		}
		validate_NULL_TYPETYPE(  arg0, "ippAddCollections - arg0 (ipp)");
		validate_NULL_TYPETYPE(  arg1, "ippAddCollections - arg1 (group)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "ippAddCollections - arg2 (name)");
		}
		validate_NULL_TYPETYPE(  arg2, "ippAddCollections - arg2 (name)");
		validate_NULL_TYPETYPE(  arg3, "ippAddCollections - arg3 (num_values)");
		if( arg4 ) {
		validate_RWaddress( arg4, "ippAddCollections - arg4 (values)");
		}
		validate_NULL_TYPETYPE(  arg4, "ippAddCollections - arg4 (values)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

