// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_stock_item_free
static void(*funcptr) (GtkStockItem * ) = 0;

extern int __lsb_check_params;
void gtk_stock_item_free (GtkStockItem * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_stock_item_free()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_stock_item_free");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_stock_item_free. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_stock_item_free() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_stock_item_free - arg0 (item)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_stock_item_free - arg0 (item)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

