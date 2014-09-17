// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkWidgetClass(struct _GtkWidgetClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> activate_signal,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> dispatch_child_properties_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> destroy,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> show,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> show_all,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> hide,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> map,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> unmap,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> realize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> unrealize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> size_allocate,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> state_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> state_flags_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> parent_set,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> hierarchy_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> style_set,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> direction_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> grab_notify,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> child_notify,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> draw,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_request_mode,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_preferred_height,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_preferred_width_for_height,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_preferred_width,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_preferred_height_for_width,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> mnemonic_activate,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> grab_focus,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> focus,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> move_focus,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> keynav_failed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> button_press_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> button_release_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> scroll_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> motion_notify_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> delete_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> destroy_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> key_press_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> key_release_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> enter_notify_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> leave_notify_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> configure_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> focus_in_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> focus_out_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> map_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> unmap_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> property_notify_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> selection_clear_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> selection_request_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> selection_notify_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> proximity_in_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> proximity_out_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> visibility_notify_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> window_state_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> damage_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> grab_broken_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> selection_get,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> selection_received,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> drag_begin,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> drag_end,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> drag_data_get,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> drag_data_delete,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> drag_leave,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> drag_motion,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> drag_drop,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> drag_data_received,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> drag_failed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> popup_menu,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> show_help,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_accessible,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> screen_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> can_activate_accel,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> composited_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> query_tooltip,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> compute_expand,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> adjust_size_request,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> adjust_size_allocation,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> style_updated,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> touch_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> priv,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved4,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved5,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved6,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved7,name ))
		failure = 1;
return failure;
}
