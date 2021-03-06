// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gio-unix-2.0/gio/gunixfdmessage.h>
#undef g_unix_fd_message_get_fd_list
static GUnixFDList *(*funcptr) (GUnixFDMessage * ) = 0;

extern int __lsb_check_params;
GUnixFDList * g_unix_fd_message_get_fd_list (GUnixFDMessage * arg0 )
{
	int reset_flag = __lsb_check_params;
	GUnixFDList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_unix_fd_message_get_fd_list()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_unix_fd_message_get_fd_list");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_unix_fd_message_get_fd_list. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_unix_fd_message_get_fd_list() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_unix_fd_message_get_fd_list - arg0 (message)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_unix_fd_message_get_fd_list - arg0 (message)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

