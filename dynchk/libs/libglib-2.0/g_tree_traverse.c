// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_tree_traverse
static void(*funcptr) (GTree * , GTraverseFunc , GTraverseType , void * ) = 0;

extern int __lsb_check_params;
void g_tree_traverse (GTree * arg0 , GTraverseFunc arg1 , GTraverseType arg2 , void * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_tree_traverse()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tree_traverse");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tree_traverse. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tree_traverse() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_tree_traverse - arg0 (tree)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tree_traverse - arg0 (tree)");
		validate_NULL_TYPETYPE(  arg1, "g_tree_traverse - arg1 (traverse_func)");
		validate_NULL_TYPETYPE(  arg2, "g_tree_traverse - arg2 (traverse_type)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_tree_traverse - arg3 (user_data)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_tree_traverse - arg3 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

