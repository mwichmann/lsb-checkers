// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_spawn_command_line_async
static gboolean(*funcptr) (const gchar * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_spawn_command_line_async (const gchar * arg0 , GError * * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_spawn_command_line_async()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_spawn_command_line_async");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_spawn_command_line_async. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_spawn_command_line_async() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_spawn_command_line_async - arg0 (command_line)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_spawn_command_line_async - arg0 (command_line)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_spawn_command_line_async - arg1 (error)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_spawn_command_line_async - arg1 (error)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

