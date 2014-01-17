// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_entry_set_buffer
static void(*funcptr) (GtkEntry * , GtkEntryBuffer * ) = 0;

extern int __lsb_check_params;
void gtk_entry_set_buffer (GtkEntry * arg0 , GtkEntryBuffer * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_entry_set_buffer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_entry_set_buffer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_entry_set_buffer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_entry_set_buffer() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_entry_set_buffer - arg0 (entry)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_entry_set_buffer - arg0 (entry)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_entry_set_buffer - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_entry_set_buffer - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

