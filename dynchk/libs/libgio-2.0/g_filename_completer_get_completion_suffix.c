// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gfilenamecompleter.h>
#undef g_filename_completer_get_completion_suffix
static char *(*funcptr) (GFilenameCompleter * , const char * ) = 0;

extern int __lsb_check_params;
char * g_filename_completer_get_completion_suffix (GFilenameCompleter * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_filename_completer_get_completion_suffix()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_filename_completer_get_completion_suffix");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_filename_completer_get_completion_suffix. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_filename_completer_get_completion_suffix() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_filename_completer_get_completion_suffix - arg0 (completer)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_filename_completer_get_completion_suffix - arg0 (completer)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_filename_completer_get_completion_suffix - arg1 (initial_text)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_filename_completer_get_completion_suffix - arg1 (initial_text)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

