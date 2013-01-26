// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#include <glib-2.0/glib.h>
#undef pango_attr_iterator_range
static void(*funcptr) (PangoAttrIterator * , gint * , gint * ) = 0;

extern int __lsb_check_params;
void pango_attr_iterator_range (PangoAttrIterator * arg0 , gint * arg1 , gint * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_attr_iterator_range()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_attr_iterator_range");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_attr_iterator_range. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_attr_iterator_range() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_attr_iterator_range - arg0 (iterator)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_attr_iterator_range - arg0 (iterator)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_attr_iterator_range - arg1 (start)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_attr_iterator_range - arg1 (start)");
		if( arg2 ) {
		validate_RWaddress( arg2, "pango_attr_iterator_range - arg2 (end)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_attr_iterator_range - arg2 (end)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
