// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gemblemedicon.h>
#include <glib-2.0/gio/gemblem.h>
#undef g_emblemed_icon_add_emblem
static void(*funcptr) (GEmblemedIcon * , GEmblem * ) = 0;

extern int __lsb_check_params;
void g_emblemed_icon_add_emblem (GEmblemedIcon * arg0 , GEmblem * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_emblemed_icon_add_emblem()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_emblemed_icon_add_emblem");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_emblemed_icon_add_emblem. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_emblemed_icon_add_emblem() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_emblemed_icon_add_emblem - arg0 (emblemed)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_emblemed_icon_add_emblem - arg0 (emblemed)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_emblemed_icon_add_emblem - arg1 (emblem)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_emblemed_icon_add_emblem - arg1 (emblem)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

