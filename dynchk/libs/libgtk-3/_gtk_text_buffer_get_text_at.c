// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <atk-1.0/atk/atk.h>
#undef _gtk_text_buffer_get_text_at
static void(*funcptr) (GtkTextBuffer * , AtkTextBoundary , GtkTextIter * , GtkTextIter * , GtkTextIter * ) = 0;

extern int __lsb_check_params;
void _gtk_text_buffer_get_text_at (GtkTextBuffer * arg0 , AtkTextBoundary arg1 , GtkTextIter * arg2 , GtkTextIter * arg3 , GtkTextIter * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for _gtk_text_buffer_get_text_at()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_gtk_text_buffer_get_text_at");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load _gtk_text_buffer_get_text_at. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "_gtk_text_buffer_get_text_at() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "_gtk_text_buffer_get_text_at - arg0 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "_gtk_text_buffer_get_text_at - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg1, "_gtk_text_buffer_get_text_at - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "_gtk_text_buffer_get_text_at - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "_gtk_text_buffer_get_text_at - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "_gtk_text_buffer_get_text_at - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "_gtk_text_buffer_get_text_at - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "_gtk_text_buffer_get_text_at - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "_gtk_text_buffer_get_text_at - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

