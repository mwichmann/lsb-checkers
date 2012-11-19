// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <stdint.h>
#include <xcb/xcbext.h>
#undef xcb_take_socket
static int(*funcptr) (xcb_connection_t * , void(* )(void *), void * , int , uint64_t * ) = 0;

extern int __lsb_check_params;
int xcb_take_socket (xcb_connection_t * arg0 , void(* arg1 )(void *), void * arg2 , int arg3 , uint64_t * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_take_socket()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_take_socket");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_take_socket. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_take_socket() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_take_socket - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_take_socket - arg0 (c)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xcb_take_socket - arg1 (return_socket)");
		}
		validate_NULL_TYPETYPE(  arg1, "xcb_take_socket - arg1 (return_socket)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xcb_take_socket - arg2 (closure)");
		}
		validate_NULL_TYPETYPE(  arg2, "xcb_take_socket - arg2 (closure)");
		validate_NULL_TYPETYPE(  arg3, "xcb_take_socket - arg3 (flags)");
		if( arg4 ) {
		validate_RWaddress( arg4, "xcb_take_socket - arg4 (sent)");
		}
		validate_NULL_TYPETYPE(  arg4, "xcb_take_socket - arg4 (sent)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

