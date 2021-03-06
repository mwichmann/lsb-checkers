// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/ICE/ICElib.h>
#undef IceListenForWellKnownConnections
static int(*funcptr) (char * , int * , IceListenObj * * , int , char * ) = 0;

extern int __lsb_check_params;
int IceListenForWellKnownConnections (char * arg0 , int * arg1 , IceListenObj * * arg2 , int arg3 , char * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for IceListenForWellKnownConnections()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceListenForWellKnownConnections");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load IceListenForWellKnownConnections. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "IceListenForWellKnownConnections() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "IceListenForWellKnownConnections - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "IceListenForWellKnownConnections - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "IceListenForWellKnownConnections - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "IceListenForWellKnownConnections - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "IceListenForWellKnownConnections - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "IceListenForWellKnownConnections - arg2");
		validate_NULL_TYPETYPE(  arg3, "IceListenForWellKnownConnections - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "IceListenForWellKnownConnections - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "IceListenForWellKnownConnections - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

