// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkTreeModelIface(struct _GtkTreeModelIface  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> g_iface,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> row_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> row_inserted,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> row_has_child_toggled,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> row_deleted,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rows_reordered,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_flags,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_n_columns,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_column_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_iter,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_path,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_value,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> iter_next,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> iter_previous,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> iter_children,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> iter_has_child,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> iter_n_children,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> iter_nth_child,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> iter_parent,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ref_node,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> unref_node,name ))
		failure = 1;
return failure;
}

