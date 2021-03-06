// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/ipp.h>
#undef ippReadIO
static ipp_state_t(*funcptr) (void * , ipp_iocb_t , int , ipp_t * , ipp_t * ) = 0;

extern int __lsb_check_params;
ipp_state_t ippReadIO (void * arg0 , ipp_iocb_t arg1 , int arg2 , ipp_t * arg3 , ipp_t * arg4 )
{
	int reset_flag = __lsb_check_params;
	ipp_state_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for ippReadIO()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ippReadIO");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ippReadIO. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ippReadIO() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "ippReadIO - arg0 (src)");
		}
		validate_NULL_TYPETYPE(  arg0, "ippReadIO - arg0 (src)");
		validate_NULL_TYPETYPE(  arg1, "ippReadIO - arg1 (cb)");
		validate_NULL_TYPETYPE(  arg2, "ippReadIO - arg2 (blocking)");
		if( arg3 ) {
		validate_RWaddress( arg3, "ippReadIO - arg3 (parent)");
		}
		validate_NULL_TYPETYPE(  arg3, "ippReadIO - arg3 (parent)");
		if( arg4 ) {
		validate_RWaddress( arg4, "ippReadIO - arg4 (ipp)");
		}
		validate_NULL_TYPETYPE(  arg4, "ippReadIO - arg4 (ipp)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

