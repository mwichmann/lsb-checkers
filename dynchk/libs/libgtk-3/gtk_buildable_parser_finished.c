// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_buildable_parser_finished
static void(*funcptr) (GtkBuildable * , GtkBuilder * ) = 0;

extern int __lsb_check_params;
void gtk_buildable_parser_finished (GtkBuildable * arg0 , GtkBuilder * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_buildable_parser_finished()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_buildable_parser_finished");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_buildable_parser_finished. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_buildable_parser_finished() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_buildable_parser_finished - arg0 (buildable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_buildable_parser_finished - arg0 (buildable)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_buildable_parser_finished - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_buildable_parser_finished - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

