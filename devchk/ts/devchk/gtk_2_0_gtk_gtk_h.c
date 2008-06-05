/*
 * Test of gtk-2.0/gtk/gtk.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
/* #define G_DISABLE_DEPRECATED */
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE
/* #define PANGO_DISABLE_DEPRECATED */
/* #define GTK_DISABLE_DEPRECATED */
/* #define GDK_DISABLE_DEPRECATED */
/* #define GDK_PIXBUF_DISABLE_DEPRECATED */
#undef GTK_FILE_SYSTEM_ENABLE_UNSUPPORTED
#undef GTK_TEXT_USE_INTERNAL_UNSUPPORTED_API
#undef GTK_COMPILATION
#undef GDK_COMPILATION
#undef GTK_MENU_INTERNALS

struct _GtkSettingsPropertyValue { };
struct _GtkRcContext { };
struct _GtkUIManagerPrivate { };
struct _GtkCellViewPrivate { };
struct _GtkFileChooser { };
struct _GtkNotebookPage { };
struct _GtkRadioActionPrivate { };
struct _GtkIconInfo { };
struct _GtkIconData { };
struct _GtkTreePath { };
struct _GtkTreeDragSource { };
struct _GtkIconThemePrivate { };
struct _GtkTextWindow { };
struct _GtkTextPendingScroll { };
struct _GtkTreeViewPrivate { };
struct _GtkRBTree { };
struct _GtkRBNode { };
struct _GtkTreeViewColumnReorder { };
struct _GtkCellLayout { };
struct _GtkEntryCompletionPrivate { };
struct _GtkTreeModelFilterPrivate { };
struct _GtkClipboard { };
struct _GtkThemeEngine { };
struct _GtkColorButtonPrivate { };
struct _GtkFileSystem { };
struct _GtkActionGroupPrivate { };
struct _GtkSeparatorToolItemPrivate { };
struct _GtkExpanderPrivate { };
struct _GtkAccelMap { };
struct _XdgMimeCache { };
struct _GtkFileFolder { };
struct _GtkIMMulticontextPrivate { };
struct _GtkToggleToolButtonPrivate { };
struct _GtkMenuToolButtonPrivate { };
struct _GtkFileSystemVolume { };
struct _GtkFontButtonPrivate { };
struct _GtkFileInfo { };
struct _GtkFileChooserButtonPrivate { };
struct _GtkFilePath { };
struct _GtkTreeDragDest { };
struct _GtkEditable { };
struct _GtkPanedPrivate { };
struct _GtkTreeModel { };
struct _GtkTreeRowReference { };
struct _GtkCellEditable { };
struct _GtkWindowGeometryInfo { };
struct _GtkComboBoxEntryPrivate { };
struct _GtkTreeSortable { };
struct _GtkRangeLayout { };
struct _GtkRangeStepTimer { };
struct _GtkHSV { };
struct _GtkActionPrivate { };
struct _GtkToggleActionPrivate { };
struct _GtkFileFilter { };
struct _GtkIconSource { };
struct _GtkToolItemPrivate { };
struct _GtkToolButtonPrivate { };
struct _GtkIconViewPrivate { };
struct _GtkLabelSelectionInfo { };
struct _GtkIconSet { };
struct _GtkTextLayout { };
struct _GtkTextBTree { };
struct _GtkTextLogAttrCache { };
struct _GtkTextLineDisplay { };
struct _GtkTextLine { };
struct _GtkTextBTreeNode { };
struct _GtkTextLineSegment { };
struct _GtkTextLineSegmentClass { };
struct _GtkTextToggleBody { };
struct _GtkTextTagInfo { };
struct _GtkTextMarkBody { };
struct _GtkTextPixbuf { };
struct _GtkTextChildBody { };
struct _GtkComboBoxPrivate { };
struct _GtkAccelMapClass { };
struct _GtkFileChooserDialogPrivate { };
struct _GtkAlignmentPrivate { };
struct _GtkFileChooserWidgetPrivate { };
struct _GtkCellRendererProgressPrivate { };
struct _GtkToolbarPrivate { };
#ifdef LSBCC_MODE
struct _GtkArg { };
#endif
#include "gtk-2.0/gtk/gtk.h"



#ifdef TET_TEST
void gtk_2_0_gtk_gtk_h()
{
#else
int gtk_2_0_gtk_gtk_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gtk/gtk.h\n");
#endif

printf("Checking data structures in gtk-2.0/gtk/gtk.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef GTK_PATH_PRIO_MASK
	CompareConstant(GTK_PATH_PRIO_MASK,0x0f,8172,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_PATH_PRIO_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ACCEL_GROUP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACCEL_GROUP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACCEL_GROUP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ACCEL_GROUP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ACCEL_GROUP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACCEL_GROUP_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CHECK_CAST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CHECK_CLASS_CAST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CHECK_GET_CLASS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CHECK_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CHECK_CLASS_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ACCEL_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CALENDAR_DISPLAY_OPTIONS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CELL_RENDERER_STATE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CELL_RENDERER_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_DEBUG_FLAG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_DIALOG_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RESPONSE_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_DEST_DEFAULTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TARGET_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ANCHOR_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ARROW_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ATTACH_OPTIONS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_BUTTON_BOX_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CURVE_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_DELETE_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_DIRECTION_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_EXPANDER_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ICON_SIZE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SIDE_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TEXT_DIRECTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_JUSTIFICATION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_MATCH_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_MENU_DIRECTION_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_METRIC_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_MOVEMENT_STEP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SCROLL_STEP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ORIENTATION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CORNER_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_PACK_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_PATH_PRIORITY_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_PATH_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_POLICY_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_POSITION_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RELIEF_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RESIZE_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SIGNAL_RUN_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SCROLL_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SELECTION_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SHADOW_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_STATE_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SUBMENU_DIRECTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SUBMENU_PLACEMENT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TOOLBAR_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_UPDATE_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_VISIBILITY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_WINDOW_POSITION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_WINDOW_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_WRAP_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SORT_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_IM_PREEDIT_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_IM_STATUS_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FILE_CHOOSER_ACTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FILE_CHOOSER_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FILE_FILTER_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ICON_LOOKUP_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ICON_THEME_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_IMAGE_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_MESSAGE_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_BUTTONS_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_NOTEBOOK_TAB */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_OBJECT_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ARG_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_PROGRESS_BAR_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_PROGRESS_BAR_ORIENTATION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RC_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RC_TOKEN_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SIZE_GROUP_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SPIN_BUTTON_UPDATE_POLICY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SPIN_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TEXT_SEARCH_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TEXT_WINDOW_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TOOLBAR_CHILD_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TOOLBAR_SPACE_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_VIEW_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_MODEL_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_VIEW_DROP_POSITION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_VIEW_COLUMN_SIZING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_UI_MANAGER_ITEM_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_WIDGET_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_WIDGET_HELP_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_IDENTIFIER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SIGNAL_FUNC(f) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_NOTE(type,action) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTKVAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_OBJECT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_OBJECT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_OBJECT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_OBJECT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_OBJECT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_OBJECT_GET_CLASS(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_OBJECT_TYPE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_OBJECT_TYPE_NAME(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_OBJECT_FLAGS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_OBJECT_FLOATING(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_OBJECT_SET_FLAGS(obj,flag) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_OBJECT_UNSET_FLAGS(obj,flag) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ARG_READWRITE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ADJUSTMENT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ADJUSTMENT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ADJUSTMENT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ADJUSTMENT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ADJUSTMENT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ADJUSTMENT_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_STYLE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_STYLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_STYLE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_STYLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_STYLE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_BORDER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_STYLE_ATTACHED(style) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RC_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RC_STYLE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RC_STYLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RC_STYLE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RC_STYLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RC_STYLE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SETTINGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SETTINGS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SETTINGS_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SETTINGS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SETTINGS_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SETTINGS_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_WIDGET */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET(widget) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_WIDGET(widget) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_WIDGET_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_TYPE(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_STATE(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_SAVED_STATE(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_FLAGS(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_TOPLEVEL(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_NO_WINDOW(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_REALIZED(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_MAPPED(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_VISIBLE(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_DRAWABLE(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_SENSITIVE(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_PARENT_SENSITIVE(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_IS_SENSITIVE(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_CAN_FOCUS(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_HAS_FOCUS(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_CAN_DEFAULT(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_HAS_DEFAULT(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_HAS_GRAB(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_RC_STYLE(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_COMPOSITE_CHILD(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_APP_PAINTABLE(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_RECEIVES_DEFAULT(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_DOUBLE_BUFFERED(wid) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_SET_FLAGS(wid,flag) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WIDGET_UNSET_FLAGS(wid,flag) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_REQUISITION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CONTAINER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CONTAINER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CONTAINER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CONTAINER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CONTAINER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CONTAINER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RESIZE_CONTAINER(widget) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CONTAINER_WARN_INVALID_CHILD_PROPERTY_ID(object,property_id,pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_BIN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BIN(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BIN_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_BIN(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_BIN_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BIN_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_WINDOW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WINDOW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WINDOW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_WINDOW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_WINDOW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WINDOW_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_WINDOW_GROUP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WINDOW_GROUP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WINDOW_GROUP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_WINDOW_GROUP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_WINDOW_GROUP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_WINDOW_GROUP_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_DIALOG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_DIALOG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_DIALOG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_DIALOG_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ABOUT_DIALOG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ABOUT_DIALOG(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ABOUT_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ABOUT_DIALOG(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ABOUT_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ABOUT_DIALOG_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_MISC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MISC(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MISC_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MISC(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MISC_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MISC_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_MENU_SHELL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_SHELL(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_SHELL_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MENU_SHELL(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MENU_SHELL_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_SHELL_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_MENU */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MENU(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MENU_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_LABEL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_LABEL(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_LABEL_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_LABEL(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_LABEL_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_LABEL_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ACCEL_LABEL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACCEL_LABEL(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACCEL_LABEL_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ACCEL_LABEL(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ACCEL_LABEL_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACCEL_LABEL_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for gtk_accel_label_accelerator_width */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ACCEL_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACCEL_MAP(accel_map) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACCEL_MAP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ACCEL_MAP(accel_map) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ACCEL_MAP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACCEL_MAP_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ACCESSIBLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACCESSIBLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACCESSIBLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ACCESSIBLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ACCESSIBLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACCESSIBLE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ACTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ACTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ACTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACTION_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ACTION_GROUP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACTION_GROUP(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACTION_GROUP_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ACTION_GROUP(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ACTION_GROUP_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ACTION_GROUP_GET_CLASS(inst) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ALIGNMENT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ALIGNMENT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ALIGNMENT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ALIGNMENT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ALIGNMENT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ALIGNMENT_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ARROW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ARROW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ARROW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ARROW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ARROW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ARROW_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FRAME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FRAME(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FRAME_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FRAME(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FRAME_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FRAME_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ASPECT_FRAME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ASPECT_FRAME(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ASPECT_FRAME_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ASPECT_FRAME(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ASPECT_FRAME_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ASPECT_FRAME_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_BOX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_BOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BOX_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_BUTTON_BOX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BUTTON_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BUTTON_BOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_BUTTON_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_BUTTON_BOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BUTTON_BOX_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_BUTTONBOX_DEFAULT
	CompareConstant(GTK_BUTTONBOX_DEFAULT,-1,8468,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_BUTTONBOX_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for gtk_binding_entry_add */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_IMAGE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IMAGE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IMAGE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_IMAGE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_IMAGE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IMAGE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_BUTTON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BUTTON_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CALENDAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CALENDAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CALENDAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CALENDAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CALENDAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CALENDAR_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CELL_EDITABLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_EDITABLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_EDITABLE_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_EDITABLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_EDITABLE_GET_IFACE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CELL_RENDERER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_RENDERER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_RENDERER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_MODEL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_MODEL(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_MODEL(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_MODEL_GET_IFACE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_ITER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_PATH */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_ROW_REFERENCE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_SORTABLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_SORTABLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_SORTABLE_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_SORTABLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_SORTABLE_GET_IFACE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_VIEW_COLUMN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_VIEW_COLUMN(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_VIEW_COLUMN_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_VIEW_COLUMN(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_VIEW_COLUMN_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_VIEW_COLUMN_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CELL_LAYOUT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_LAYOUT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_LAYOUT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_LAYOUT_GET_IFACE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CELL_RENDERER_TEXT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_TEXT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_TEXT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_RENDERER_TEXT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_RENDERER_TEXT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_TEXT_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CELL_RENDERER_COMBO */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_COMBO(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_COMBO_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_RENDERER_COMBO(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_RENDERER_COMBO_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_COMBO_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CELL_RENDERER_PIXBUF */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_PIXBUF(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_PIXBUF_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_RENDERER_PIXBUF(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_RENDERER_PIXBUF_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_PIXBUF_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CELL_RENDERER_PROGRESS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_PROGRESS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_PROGRESS_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_RENDERER_PROGRESS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_RENDERER_PROGRESS_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_PROGRESS_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CELL_RENDERER_TOGGLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_TOGGLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_TOGGLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_RENDERER_TOGGLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_RENDERER_TOGGLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_RENDERER_TOGGLE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CELL_VIEW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_VIEW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_VIEW_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_VIEW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CELL_VIEW_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CELL_VIEW_GET_CLASS(inst) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TOGGLE_BUTTON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOGGLE_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOGGLE_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOGGLE_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOGGLE_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOGGLE_BUTTON_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CHECK_BUTTON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CHECK_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CHECK_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CHECK_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CHECK_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CHECK_BUTTON_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ITEM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ITEM_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_MENU_ITEM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MENU_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MENU_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_ITEM_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CHECK_MENU_ITEM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CHECK_MENU_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CHECK_MENU_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CHECK_MENU_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CHECK_MENU_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CHECK_MENU_ITEM_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SELECTION_DATA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CLIPBOARD */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CLIPBOARD(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CLIPBOARD(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RANGE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RANGE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RANGE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RANGE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RANGE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RANGE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SCROLLBAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SCROLLBAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SCROLLBAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SCROLLBAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SCROLLBAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SCROLLBAR_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_HSCROLLBAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HSCROLLBAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HSCROLLBAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HSCROLLBAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HSCROLLBAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HSCROLLBAR_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_VSCROLLBAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VSCROLLBAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VSCROLLBAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VSCROLLBAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VSCROLLBAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VSCROLLBAR_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_COLOR_BUTTON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COLOR_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COLOR_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_COLOR_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_COLOR_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COLOR_BUTTON_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_VBOX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VBOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VBOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VBOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VBOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VBOX_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_COLOR_SELECTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COLOR_SELECTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COLOR_SELECTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_COLOR_SELECTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_COLOR_SELECTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COLOR_SELECTION_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_COLOR_SELECTION_DIALOG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COLOR_SELECTION_DIALOG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COLOR_SELECTION_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_COLOR_SELECTION_DIALOG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_COLOR_SELECTION_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COLOR_SELECTION_DIALOG_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_HBOX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HBOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HBOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HBOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HBOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HBOX_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_VIEW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_VIEW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_VIEW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_VIEW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_VIEW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_VIEW_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_COMBO_BOX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COMBO_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COMBO_BOX_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_COMBO_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_COMBO_BOX_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COMBO_BOX_GET_CLASS(inst) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_COMBO_BOX_ENTRY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COMBO_BOX_ENTRY(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COMBO_BOX_ENTRY_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_COMBO_BOX_ENTRY(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_COMBO_BOX_ENTRY_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_COMBO_BOX_ENTRY_GET_CLASS(inst) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_DRAWING_AREA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_DRAWING_AREA(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_DRAWING_AREA_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_DRAWING_AREA(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_DRAWING_AREA_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_DRAWING_AREA_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_CURVE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CURVE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CURVE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CURVE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_CURVE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CURVE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_EDITABLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_EDITABLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_EDITABLE_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_EDITABLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_EDITABLE_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_EDITABLE_GET_CLASS(inst) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_IM_CONTEXT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IM_CONTEXT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IM_CONTEXT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_IM_CONTEXT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_IM_CONTEXT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IM_CONTEXT_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_LIST_STORE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_LIST_STORE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_LIST_STORE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_LIST_STORE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_LIST_STORE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_LIST_STORE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_MODEL_FILTER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_MODEL_FILTER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_MODEL_FILTER_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_MODEL_FILTER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_MODEL_FILTER_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_MODEL_FILTER_GET_CLASS(inst) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ENTRY_COMPLETION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ENTRY_COMPLETION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ENTRY_COMPLETION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ENTRY_COMPLETION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ENTRY_COMPLETION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ENTRY_COMPLETION_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ENTRY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ENTRY(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ENTRY_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ENTRY(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ENTRY_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ENTRY_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_EVENT_BOX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_EVENT_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_EVENT_BOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_EVENT_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_EVENT_BOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_EVENT_BOX_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_EXPANDER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_EXPANDER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_EXPANDER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_EXPANDER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_EXPANDER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_EXPANDER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FILE_SELECTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_SELECTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_SELECTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FILE_SELECTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FILE_SELECTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_SELECTION_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FIXED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FIXED(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FIXED_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FIXED(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FIXED_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FIXED_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FILE_FILTER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_FILTER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FILE_FILTER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FILE_CHOOSER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_CHOOSER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FILE_CHOOSER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_CHOOSER_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FILE_CHOOSER_BUTTON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_CHOOSER_BUTTON(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_CHOOSER_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FILE_CHOOSER_BUTTON(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FILE_CHOOSER_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_CHOOSER_BUTTON_GET_CLASS(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FILE_CHOOSER_DIALOG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_CHOOSER_DIALOG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_CHOOSER_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FILE_CHOOSER_DIALOG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FILE_CHOOSER_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_CHOOSER_DIALOG_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FILE_CHOOSER_WIDGET */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_CHOOSER_WIDGET(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_CHOOSER_WIDGET_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FILE_CHOOSER_WIDGET(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FILE_CHOOSER_WIDGET_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FILE_CHOOSER_WIDGET_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FONT_BUTTON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FONT_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FONT_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FONT_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FONT_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FONT_BUTTON_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FONT_SELECTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FONT_SELECTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FONT_SELECTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FONT_SELECTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FONT_SELECTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FONT_SELECTION_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_FONT_SELECTION_DIALOG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FONT_SELECTION_DIALOG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FONT_SELECTION_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FONT_SELECTION_DIALOG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_FONT_SELECTION_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_FONT_SELECTION_DIALOG_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_GAMMA_CURVE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_GAMMA_CURVE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_GAMMA_CURVE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_GAMMA_CURVE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_GAMMA_CURVE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_GAMMA_CURVE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_HANDLE_BOX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HANDLE_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HANDLE_BOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HANDLE_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HANDLE_BOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HANDLE_BOX_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_HBUTTON_BOX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HBUTTON_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HBUTTON_BOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HBUTTON_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HBUTTON_BOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HBUTTON_BOX_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_PANED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_PANED(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_PANED_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_PANED(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_PANED_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_PANED_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_HPANED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HPANED(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HPANED_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HPANED(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HPANED_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HPANED_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RULER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RULER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RULER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RULER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RULER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RULER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_HRULER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HRULER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HRULER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HRULER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HRULER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HRULER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SCALE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SCALE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SCALE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SCALE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SCALE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SCALE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_HSCALE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HSCALE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HSCALE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HSCALE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HSCALE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HSCALE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SEPARATOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SEPARATOR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SEPARATOR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SEPARATOR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SEPARATOR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SEPARATOR_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_HSEPARATOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HSEPARATOR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HSEPARATOR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HSEPARATOR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_HSEPARATOR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_HSEPARATOR_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ICON_FACTORY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ICON_FACTORY(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ICON_FACTORY_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ICON_FACTORY(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ICON_FACTORY_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ICON_FACTORY_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ICON_SET */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ICON_SOURCE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ICON_INFO */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ICON_THEME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ICON_THEME(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ICON_THEME_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ICON_THEME(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ICON_THEME_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ICON_THEME_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ICON_THEME_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_ICON_VIEW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ICON_VIEW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ICON_VIEW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ICON_VIEW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_ICON_VIEW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_ICON_VIEW_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_IMAGE_MENU_ITEM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IMAGE_MENU_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IMAGE_MENU_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_IMAGE_MENU_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_IMAGE_MENU_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IMAGE_MENU_ITEM_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_IM_CONTEXT_SIMPLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IM_CONTEXT_SIMPLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IM_CONTEXT_SIMPLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_IM_CONTEXT_SIMPLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_IM_CONTEXT_SIMPLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IM_CONTEXT_SIMPLE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_MAX_COMPOSE_LEN
	CompareConstant(GTK_MAX_COMPOSE_LEN,7,8919,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_MAX_COMPOSE_LEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_IM_MULTICONTEXT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IM_MULTICONTEXT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IM_MULTICONTEXT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_IM_MULTICONTEXT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_IM_MULTICONTEXT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IM_MULTICONTEXT_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_INPUT_DIALOG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_INPUT_DIALOG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_INPUT_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_INPUT_DIALOG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_INPUT_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_INPUT_DIALOG_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_INVISIBLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_INVISIBLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_INVISIBLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_INVISIBLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_INVISIBLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_INVISIBLE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_LAYOUT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_LAYOUT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_LAYOUT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_LAYOUT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_LAYOUT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_LAYOUT_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_LIST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_LIST(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_LIST_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_LIST(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_LIST_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_LIST_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_PRIORITY_RESIZE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTKMAIN_C_VAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_MENU_BAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_BAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_BAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MENU_BAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MENU_BAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_BAR_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TOOLTIPS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOOLTIPS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOOLTIPS_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOOLTIPS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOOLTIPS_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOOLTIPS_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TOOL_ITEM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOOL_ITEM(o) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOOL_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOOL_ITEM(o) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOOL_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOOL_ITEM_GET_CLASS(o) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TOOL_BUTTON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOOL_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOOL_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOOL_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOOL_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOOL_BUTTON_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_MENU_TOOL_BUTTON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_TOOL_BUTTON(o) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_TOOL_BUTTON_CLASS(k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MENU_TOOL_BUTTON(o) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MENU_TOOL_BUTTON_CLASS(k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MENU_TOOL_BUTTON_GET_CLASS(o) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_MESSAGE_DIALOG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MESSAGE_DIALOG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MESSAGE_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MESSAGE_DIALOG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_MESSAGE_DIALOG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MESSAGE_DIALOG_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_NOTEBOOK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_NOTEBOOK(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_NOTEBOOK_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_NOTEBOOK(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_NOTEBOOK_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_NOTEBOOK_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SOCKET */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SOCKET(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SOCKET_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SOCKET(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SOCKET_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SOCKET_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_PLUG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_PLUG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_PLUG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_PLUG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_PLUG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_PLUG_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_PROGRESS_BAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_PROGRESS_BAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_PROGRESS_BAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_PROGRESS_BAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_PROGRESS_BAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_PROGRESS_BAR_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TOGGLE_ACTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOGGLE_ACTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOGGLE_ACTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOGGLE_ACTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOGGLE_ACTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOGGLE_ACTION_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RADIO_ACTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RADIO_ACTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RADIO_ACTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RADIO_ACTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RADIO_ACTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RADIO_ACTION_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RADIO_BUTTON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RADIO_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RADIO_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RADIO_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RADIO_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RADIO_BUTTON_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RADIO_MENU_ITEM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RADIO_MENU_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RADIO_MENU_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RADIO_MENU_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RADIO_MENU_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RADIO_MENU_ITEM_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TOGGLE_TOOL_BUTTON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOGGLE_TOOL_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOGGLE_TOOL_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOGGLE_TOOL_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOGGLE_TOOL_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOGGLE_TOOL_BUTTON_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RADIO_TOOL_BUTTON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RADIO_TOOL_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RADIO_TOOL_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RADIO_TOOL_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RADIO_TOOL_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RADIO_TOOL_BUTTON_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_VIEWPORT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VIEWPORT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VIEWPORT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VIEWPORT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VIEWPORT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VIEWPORT_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SCROLLED_WINDOW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SCROLLED_WINDOW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SCROLLED_WINDOW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SCROLLED_WINDOW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SCROLLED_WINDOW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SCROLLED_WINDOW_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SEPARATOR_MENU_ITEM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SEPARATOR_MENU_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SEPARATOR_MENU_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SEPARATOR_MENU_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SEPARATOR_MENU_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SEPARATOR_MENU_ITEM_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SEPARATOR_TOOL_ITEM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SEPARATOR_TOOL_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SEPARATOR_TOOL_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SEPARATOR_TOOL_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SEPARATOR_TOOL_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SEPARATOR_TOOL_ITEM_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SIZE_GROUP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SIZE_GROUP(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SIZE_GROUP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SIZE_GROUP(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SIZE_GROUP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SIZE_GROUP_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_SPIN_BUTTON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SPIN_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SPIN_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SPIN_BUTTON(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_SPIN_BUTTON_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_SPIN_BUTTON_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_INPUT_ERROR
	CompareConstant(GTK_INPUT_ERROR,-1,9096,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_INPUT_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_STATUSBAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_STATUSBAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_STATUSBAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_STATUSBAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_STATUSBAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_STATUSBAR_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_DIALOG_AUTHENTICATION
	CompareStringConstant(GTK_STOCK_DIALOG_AUTHENTICATION,"gtk-dialog-authentication",9103,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_DIALOG_AUTHENTICATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_DIALOG_INFO
	CompareStringConstant(GTK_STOCK_DIALOG_INFO,"gtk-dialog-info",9104,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_DIALOG_INFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_DIALOG_WARNING
	CompareStringConstant(GTK_STOCK_DIALOG_WARNING,"gtk-dialog-warning",9105,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_DIALOG_WARNING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_DIALOG_ERROR
	CompareStringConstant(GTK_STOCK_DIALOG_ERROR,"gtk-dialog-error",9106,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_DIALOG_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_DIALOG_QUESTION
	CompareStringConstant(GTK_STOCK_DIALOG_QUESTION,"gtk-dialog-question",9107,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_DIALOG_QUESTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_DND
	CompareStringConstant(GTK_STOCK_DND,"gtk-dnd",9108,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_DND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_DND_MULTIPLE
	CompareStringConstant(GTK_STOCK_DND_MULTIPLE,"gtk-dnd-multiple",9109,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_DND_MULTIPLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_ABOUT
	CompareStringConstant(GTK_STOCK_ABOUT,"gtk-about",9110,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_ABOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_ADD
	CompareStringConstant(GTK_STOCK_ADD,"gtk-add",9111,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_ADD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_APPLY
	CompareStringConstant(GTK_STOCK_APPLY,"gtk-apply",9112,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_APPLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_BOLD
	CompareStringConstant(GTK_STOCK_BOLD,"gtk-bold",9113,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_BOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_CANCEL
	CompareStringConstant(GTK_STOCK_CANCEL,"gtk-cancel",9114,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_CANCEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_CDROM
	CompareStringConstant(GTK_STOCK_CDROM,"gtk-cdrom",9115,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_CDROM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_CLEAR
	CompareStringConstant(GTK_STOCK_CLEAR,"gtk-clear",9116,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_CLEAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_CLOSE
	CompareStringConstant(GTK_STOCK_CLOSE,"gtk-close",9117,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_CLOSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_COLOR_PICKER
	CompareStringConstant(GTK_STOCK_COLOR_PICKER,"gtk-color-picker",9118,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_COLOR_PICKER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_CONVERT
	CompareStringConstant(GTK_STOCK_CONVERT,"gtk-convert",9119,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_CONVERT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_CONNECT
	CompareStringConstant(GTK_STOCK_CONNECT,"gtk-connect",9120,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_CONNECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_COPY
	CompareStringConstant(GTK_STOCK_COPY,"gtk-copy",9121,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_COPY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_CUT
	CompareStringConstant(GTK_STOCK_CUT,"gtk-cut",9122,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_CUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_DELETE
	CompareStringConstant(GTK_STOCK_DELETE,"gtk-delete",9123,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_DELETE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_DIRECTORY
	CompareStringConstant(GTK_STOCK_DIRECTORY,"gtk-directory",9124,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_DIRECTORY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_DISCONNECT
	CompareStringConstant(GTK_STOCK_DISCONNECT,"gtk-disconnect",9125,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_DISCONNECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_EDIT
	CompareStringConstant(GTK_STOCK_EDIT,"gtk-edit",9126,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_EDIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_EXECUTE
	CompareStringConstant(GTK_STOCK_EXECUTE,"gtk-execute",9127,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_EXECUTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_FILE
	CompareStringConstant(GTK_STOCK_FILE,"gtk-file",9128,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_FILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_FIND
	CompareStringConstant(GTK_STOCK_FIND,"gtk-find",9129,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_FIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_FIND_AND_REPLACE
	CompareStringConstant(GTK_STOCK_FIND_AND_REPLACE,"gtk-find-and-replace",9130,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_FIND_AND_REPLACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_FLOPPY
	CompareStringConstant(GTK_STOCK_FLOPPY,"gtk-floppy",9131,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_FLOPPY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_GOTO_BOTTOM
	CompareStringConstant(GTK_STOCK_GOTO_BOTTOM,"gtk-goto-bottom",9132,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_GOTO_BOTTOM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_GOTO_FIRST
	CompareStringConstant(GTK_STOCK_GOTO_FIRST,"gtk-goto-first",9133,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_GOTO_FIRST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_GOTO_LAST
	CompareStringConstant(GTK_STOCK_GOTO_LAST,"gtk-goto-last",9134,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_GOTO_LAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_GOTO_TOP
	CompareStringConstant(GTK_STOCK_GOTO_TOP,"gtk-goto-top",9135,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_GOTO_TOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_GO_BACK
	CompareStringConstant(GTK_STOCK_GO_BACK,"gtk-go-back",9136,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_GO_BACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_GO_DOWN
	CompareStringConstant(GTK_STOCK_GO_DOWN,"gtk-go-down",9137,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_GO_DOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_GO_FORWARD
	CompareStringConstant(GTK_STOCK_GO_FORWARD,"gtk-go-forward",9138,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_GO_FORWARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_GO_UP
	CompareStringConstant(GTK_STOCK_GO_UP,"gtk-go-up",9139,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_GO_UP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_HARDDISK
	CompareStringConstant(GTK_STOCK_HARDDISK,"gtk-harddisk",9140,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_HARDDISK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_HELP
	CompareStringConstant(GTK_STOCK_HELP,"gtk-help",9141,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_HELP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_HOME
	CompareStringConstant(GTK_STOCK_HOME,"gtk-home",9142,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_HOME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_INDEX
	CompareStringConstant(GTK_STOCK_INDEX,"gtk-index",9143,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_INDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_INDENT
	CompareStringConstant(GTK_STOCK_INDENT,"gtk-indent",9144,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_INDENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_UNINDENT
	CompareStringConstant(GTK_STOCK_UNINDENT,"gtk-unindent",9145,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_UNINDENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_ITALIC
	CompareStringConstant(GTK_STOCK_ITALIC,"gtk-italic",9146,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_ITALIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_JUMP_TO
	CompareStringConstant(GTK_STOCK_JUMP_TO,"gtk-jump-to",9147,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_JUMP_TO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_JUSTIFY_CENTER
	CompareStringConstant(GTK_STOCK_JUSTIFY_CENTER,"gtk-justify-center",9148,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_JUSTIFY_CENTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_JUSTIFY_FILL
	CompareStringConstant(GTK_STOCK_JUSTIFY_FILL,"gtk-justify-fill",9149,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_JUSTIFY_FILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_JUSTIFY_LEFT
	CompareStringConstant(GTK_STOCK_JUSTIFY_LEFT,"gtk-justify-left",9150,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_JUSTIFY_LEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_JUSTIFY_RIGHT
	CompareStringConstant(GTK_STOCK_JUSTIFY_RIGHT,"gtk-justify-right",9151,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_JUSTIFY_RIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_MISSING_IMAGE
	CompareStringConstant(GTK_STOCK_MISSING_IMAGE,"gtk-missing-image",9152,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_MISSING_IMAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_MEDIA_FORWARD
	CompareStringConstant(GTK_STOCK_MEDIA_FORWARD,"gtk-media-forward",9153,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_MEDIA_FORWARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_MEDIA_NEXT
	CompareStringConstant(GTK_STOCK_MEDIA_NEXT,"gtk-media-next",9154,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_MEDIA_NEXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_MEDIA_PAUSE
	CompareStringConstant(GTK_STOCK_MEDIA_PAUSE,"gtk-media-pause",9155,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_MEDIA_PAUSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_MEDIA_PLAY
	CompareStringConstant(GTK_STOCK_MEDIA_PLAY,"gtk-media-play",9156,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_MEDIA_PLAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_MEDIA_PREVIOUS
	CompareStringConstant(GTK_STOCK_MEDIA_PREVIOUS,"gtk-media-previous",9157,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_MEDIA_PREVIOUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_MEDIA_RECORD
	CompareStringConstant(GTK_STOCK_MEDIA_RECORD,"gtk-media-record",9158,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_MEDIA_RECORD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_MEDIA_REWIND
	CompareStringConstant(GTK_STOCK_MEDIA_REWIND,"gtk-media-rewind",9159,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_MEDIA_REWIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_MEDIA_STOP
	CompareStringConstant(GTK_STOCK_MEDIA_STOP,"gtk-media-stop",9160,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_MEDIA_STOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_NETWORK
	CompareStringConstant(GTK_STOCK_NETWORK,"gtk-network",9161,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_NETWORK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_NEW
	CompareStringConstant(GTK_STOCK_NEW,"gtk-new",9162,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_NEW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_NO
	CompareStringConstant(GTK_STOCK_NO,"gtk-no",9163,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_NO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_OK
	CompareStringConstant(GTK_STOCK_OK,"gtk-ok",9164,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_OPEN
	CompareStringConstant(GTK_STOCK_OPEN,"gtk-open",9165,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_OPEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_PASTE
	CompareStringConstant(GTK_STOCK_PASTE,"gtk-paste",9166,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_PASTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_PREFERENCES
	CompareStringConstant(GTK_STOCK_PREFERENCES,"gtk-preferences",9167,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_PREFERENCES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_PRINT
	CompareStringConstant(GTK_STOCK_PRINT,"gtk-print",9168,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_PRINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_PRINT_PREVIEW
	CompareStringConstant(GTK_STOCK_PRINT_PREVIEW,"gtk-print-preview",9169,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_PRINT_PREVIEW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_PROPERTIES
	CompareStringConstant(GTK_STOCK_PROPERTIES,"gtk-properties",9170,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_PROPERTIES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_QUIT
	CompareStringConstant(GTK_STOCK_QUIT,"gtk-quit",9171,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_QUIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_REDO
	CompareStringConstant(GTK_STOCK_REDO,"gtk-redo",9172,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_REDO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_REFRESH
	CompareStringConstant(GTK_STOCK_REFRESH,"gtk-refresh",9173,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_REFRESH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_REMOVE
	CompareStringConstant(GTK_STOCK_REMOVE,"gtk-remove",9174,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_REMOVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_REVERT_TO_SAVED
	CompareStringConstant(GTK_STOCK_REVERT_TO_SAVED,"gtk-revert-to-saved",9175,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_REVERT_TO_SAVED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_SAVE
	CompareStringConstant(GTK_STOCK_SAVE,"gtk-save",9176,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_SAVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_SAVE_AS
	CompareStringConstant(GTK_STOCK_SAVE_AS,"gtk-save-as",9177,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_SAVE_AS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_SELECT_COLOR
	CompareStringConstant(GTK_STOCK_SELECT_COLOR,"gtk-select-color",9178,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_SELECT_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_SELECT_FONT
	CompareStringConstant(GTK_STOCK_SELECT_FONT,"gtk-select-font",9179,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_SELECT_FONT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_SORT_ASCENDING
	CompareStringConstant(GTK_STOCK_SORT_ASCENDING,"gtk-sort-ascending",9180,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_SORT_ASCENDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_SORT_DESCENDING
	CompareStringConstant(GTK_STOCK_SORT_DESCENDING,"gtk-sort-descending",9181,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_SORT_DESCENDING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_SPELL_CHECK
	CompareStringConstant(GTK_STOCK_SPELL_CHECK,"gtk-spell-check",9182,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_SPELL_CHECK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_STOP
	CompareStringConstant(GTK_STOCK_STOP,"gtk-stop",9183,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_STOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_STRIKETHROUGH
	CompareStringConstant(GTK_STOCK_STRIKETHROUGH,"gtk-strikethrough",9184,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_STRIKETHROUGH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_UNDELETE
	CompareStringConstant(GTK_STOCK_UNDELETE,"gtk-undelete",9185,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_UNDELETE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_UNDERLINE
	CompareStringConstant(GTK_STOCK_UNDERLINE,"gtk-underline",9186,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_UNDERLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_UNDO
	CompareStringConstant(GTK_STOCK_UNDO,"gtk-undo",9187,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_UNDO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_YES
	CompareStringConstant(GTK_STOCK_YES,"gtk-yes",9188,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_YES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_ZOOM_100
	CompareStringConstant(GTK_STOCK_ZOOM_100,"gtk-zoom-100",9189,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_ZOOM_100\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_ZOOM_FIT
	CompareStringConstant(GTK_STOCK_ZOOM_FIT,"gtk-zoom-fit",9190,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_ZOOM_FIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_ZOOM_IN
	CompareStringConstant(GTK_STOCK_ZOOM_IN,"gtk-zoom-in",9191,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_ZOOM_IN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GTK_STOCK_ZOOM_OUT
	CompareStringConstant(GTK_STOCK_ZOOM_OUT,"gtk-zoom-out",9192,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GTK_STOCK_ZOOM_OUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TABLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TABLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TABLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TABLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TABLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TABLE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TEAROFF_MENU_ITEM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEAROFF_MENU_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEAROFF_MENU_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEAROFF_MENU_ITEM(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEAROFF_MENU_ITEM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEAROFF_MENU_ITEM_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TEXT_TAG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_TAG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_TAG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEXT_TAG(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEXT_TAG_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_TAG_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TEXT_ATTRIBUTES */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TEXT_TAG_TABLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_TAG_TABLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_TAG_TABLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEXT_TAG_TABLE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEXT_TAG_TABLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_TAG_TABLE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TEXT_CHILD_ANCHOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_CHILD_ANCHOR(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_CHILD_ANCHOR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEXT_CHILD_ANCHOR(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEXT_CHILD_ANCHOR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_CHILD_ANCHOR_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TEXT_ITER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TEXT_MARK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_MARK(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_MARK_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEXT_MARK(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEXT_MARK_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_MARK_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TEXT_BUFFER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_BUFFER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_BUFFER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEXT_BUFFER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEXT_BUFFER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_BUFFER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TEXT_VIEW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_VIEW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_VIEW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEXT_VIEW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TEXT_VIEW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_VIEW_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TEXT_VIEW_PRIORITY_VALIDATE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TOOLBAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOOLBAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOOLBAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOOLBAR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TOOLBAR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TOOLBAR_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_DRAG_SOURCE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_DRAG_SOURCE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_DRAG_SOURCE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_DRAG_SOURCE_GET_IFACE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_DRAG_DEST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_DRAG_DEST(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_DRAG_DEST(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_DRAG_DEST_GET_IFACE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_MODEL_SORT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_MODEL_SORT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_MODEL_SORT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_MODEL_SORT(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_MODEL_SORT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_MODEL_SORT_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_SELECTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_SELECTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_SELECTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_SELECTION(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_SELECTION_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_SELECTION_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_TREE_STORE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_STORE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_STORE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_STORE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_TREE_STORE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TREE_STORE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_UI_MANAGER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_UI_MANAGER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_UI_MANAGER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_UI_MANAGER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_UI_MANAGER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_UI_MANAGER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_VBUTTON_BOX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VBUTTON_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VBUTTON_BOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VBUTTON_BOX(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VBUTTON_BOX_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VBUTTON_BOX_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MAJOR_VERSION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MINOR_VERSION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_MICRO_VERSION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_BINARY_AGE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_INTERFACE_AGE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_CHECK_VERSION(major,minor,micro) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_VPANED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VPANED(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VPANED_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VPANED(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VPANED_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VPANED_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_VRULER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VRULER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VRULER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VRULER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VRULER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VRULER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_VSCALE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VSCALE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VSCALE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VSCALE(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VSCALE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VSCALE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_VSEPARATOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VSEPARATOR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VSEPARATOR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VSEPARATOR(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_VSEPARATOR_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_VSEPARATOR_GET_CLASS(obj) */
#endif

#if defined __s390x__
CheckTypeSize(GtkObject,32, 13045, 12, 3.1, NULL, 13044, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkObject,32, 13045, 11, 3.1, NULL, 13044, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkObject,16, 13045, 10, 3.1, NULL, 13044, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkObject,32, 13045, 9, 3.1, NULL, 13044, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkObject,16, 13045, 6, 3.1, NULL, 13044, NULL)
#elif defined __ia64__
CheckTypeSize(GtkObject,32, 13045, 3, 3.1, NULL, 13044, NULL)
#elif defined __i386__
CheckTypeSize(GtkObject,16, 13045, 2, 3.1, NULL, 13044, NULL)
#else
Msg("Find size of GtkObject (13045)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13044,NULL);\n",architecture,13045,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRcFlags,4, 13053, 12, 3.1, NULL, 13052, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRcFlags,4, 13053, 11, 3.1, NULL, 13052, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRcFlags,4, 13053, 10, 3.1, NULL, 13052, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRcFlags,4, 13053, 9, 3.1, NULL, 13052, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRcFlags,4, 13053, 6, 3.1, NULL, 13052, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRcFlags,4, 13053, 3, 3.1, NULL, 13052, NULL)
#elif defined __i386__
CheckTypeSize(GtkRcFlags,4, 13053, 2, 3.1, NULL, 13052, NULL)
#else
Msg("Find size of GtkRcFlags (13053)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13052,NULL);\n",architecture,13053,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRcStyle,384, 13055, 12, 3.1, NULL, 13050, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRcStyle,384, 13055, 11, 3.1, NULL, 13050, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRcStyle,324, 13055, 10, 3.1, NULL, 13050, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRcStyle,384, 13055, 9, 3.1, NULL, 13050, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRcStyle,324, 13055, 6, 3.1, NULL, 13050, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRcStyle,384, 13055, 3, 3.1, NULL, 13050, NULL)
#elif defined __i386__
CheckTypeSize(GtkRcStyle,324, 13055, 2, 3.1, NULL, 13050, NULL)
#else
Msg("Find size of GtkRcStyle (13055)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13050,NULL);\n",architecture,13055,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkStyle,984, 13057, 12, 3.1, NULL, 13046, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkStyle,984, 13057, 11, 3.1, NULL, 13046, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkStyle,752, 13057, 10, 3.1, NULL, 13046, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkStyle,984, 13057, 9, 3.1, NULL, 13046, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkStyle,752, 13057, 6, 3.1, NULL, 13046, NULL)
#elif defined __ia64__
CheckTypeSize(GtkStyle,984, 13057, 3, 3.1, NULL, 13046, NULL)
#elif defined __i386__
CheckTypeSize(GtkStyle,752, 13057, 2, 3.1, NULL, 13046, NULL)
#else
Msg("Find size of GtkStyle (13057)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13046,NULL);\n",architecture,13057,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRequisition,8, 13060, 12, 3.1, NULL, 13059, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRequisition,8, 13060, 11, 3.1, NULL, 13059, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRequisition,8, 13060, 10, 3.1, NULL, 13059, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRequisition,8, 13060, 9, 3.1, NULL, 13059, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRequisition,8, 13060, 6, 3.1, NULL, 13059, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRequisition,8, 13060, 3, 3.1, NULL, 13059, NULL)
#elif defined __i386__
CheckTypeSize(GtkRequisition,8, 13060, 2, 3.1, NULL, 13059, NULL)
#else
Msg("Find size of GtkRequisition (13060)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13059,NULL);\n",architecture,13060,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAllocation,16, 13061, 12, 3.1, NULL, 12753, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAllocation,16, 13061, 11, 3.1, NULL, 12753, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAllocation,16, 13061, 10, 3.1, NULL, 12753, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAllocation,16, 13061, 9, 3.1, NULL, 12753, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAllocation,16, 13061, 6, 3.1, NULL, 12753, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAllocation,16, 13061, 3, 3.1, NULL, 12753, NULL)
#elif defined __i386__
CheckTypeSize(GtkAllocation,16, 13061, 2, 3.1, NULL, 12753, NULL)
#else
Msg("Find size of GtkAllocation (13061)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12753,NULL);\n",architecture,13061,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWidget,96, 13062, 12, 3.1, NULL, 13043, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWidget,96, 13062, 11, 3.1, NULL, 13043, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWidget,60, 13062, 10, 3.1, NULL, 13043, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWidget,96, 13062, 9, 3.1, NULL, 13043, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWidget,60, 13062, 6, 3.1, NULL, 13043, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWidget,96, 13062, 3, 3.1, NULL, 13043, NULL)
#elif defined __i386__
CheckTypeSize(GtkWidget,60, 13062, 2, 3.1, NULL, 13043, NULL)
#else
Msg("Find size of GtkWidget (13062)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13043,NULL);\n",architecture,13062,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAdjustment,80, 13067, 12, 3.1, NULL, 13066, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAdjustment,80, 13067, 11, 3.1, NULL, 13066, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAdjustment,64, 13067, 10, 3.1, NULL, 13066, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAdjustment,80, 13067, 9, 3.1, NULL, 13066, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAdjustment,64, 13067, 6, 3.1, NULL, 13066, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAdjustment,80, 13067, 3, 3.1, NULL, 13066, NULL)
#elif defined __i386__
CheckTypeSize(GtkAdjustment,64, 13067, 2, 3.1, NULL, 13066, NULL)
#else
Msg("Find size of GtkAdjustment (13067)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13066,NULL);\n",architecture,13067,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkProgress,136, 13069, 12, 3.1, NULL, 13065, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkProgress,136, 13069, 11, 3.1, NULL, 13065, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkProgress,84, 13069, 10, 3.1, NULL, 13065, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkProgress,136, 13069, 9, 3.1, NULL, 13065, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkProgress,84, 13069, 6, 3.1, NULL, 13065, NULL)
#elif defined __ia64__
CheckTypeSize(GtkProgress,136, 13069, 3, 3.1, NULL, 13065, NULL)
#elif defined __i386__
CheckTypeSize(GtkProgress,84, 13069, 2, 3.1, NULL, 13065, NULL)
#else
Msg("Find size of GtkProgress (13069)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13065,NULL);\n",architecture,13069,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkProgressBarStyle,4, 13071, 12, 3.1, NULL, 13070, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkProgressBarStyle,4, 13071, 11, 3.1, NULL, 13070, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkProgressBarStyle,4, 13071, 10, 3.1, NULL, 13070, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkProgressBarStyle,4, 13071, 9, 3.1, NULL, 13070, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkProgressBarStyle,4, 13071, 6, 3.1, NULL, 13070, NULL)
#elif defined __ia64__
CheckTypeSize(GtkProgressBarStyle,4, 13071, 3, 3.1, NULL, 13070, NULL)
#elif defined __i386__
CheckTypeSize(GtkProgressBarStyle,4, 13071, 2, 3.1, NULL, 13070, NULL)
#else
Msg("Find size of GtkProgressBarStyle (13071)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13070,NULL);\n",architecture,13071,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkProgressBarOrientation,4, 13073, 12, 3.1, NULL, 13072, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkProgressBarOrientation,4, 13073, 11, 3.1, NULL, 13072, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkProgressBarOrientation,4, 13073, 10, 3.1, NULL, 13072, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkProgressBarOrientation,4, 13073, 9, 3.1, NULL, 13072, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkProgressBarOrientation,4, 13073, 6, 3.1, NULL, 13072, NULL)
#elif defined __ia64__
CheckTypeSize(GtkProgressBarOrientation,4, 13073, 3, 3.1, NULL, 13072, NULL)
#elif defined __i386__
CheckTypeSize(GtkProgressBarOrientation,4, 13073, 2, 3.1, NULL, 13072, NULL)
#else
Msg("Find size of GtkProgressBarOrientation (13073)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13072,NULL);\n",architecture,13073,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkProgressBar,184, 13074, 12, 3.1, NULL, 13064, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkProgressBar,184, 13074, 11, 3.1, NULL, 13064, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkProgressBar,128, 13074, 10, 3.1, NULL, 13064, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkProgressBar,184, 13074, 9, 3.1, NULL, 13064, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkProgressBar,128, 13074, 6, 3.1, NULL, 13064, NULL)
#elif defined __ia64__
CheckTypeSize(GtkProgressBar,184, 13074, 3, 3.1, NULL, 13064, NULL)
#elif defined __i386__
CheckTypeSize(GtkProgressBar,124, 13074, 2, 3.1, NULL, 13064, NULL)
#else
Msg("Find size of GtkProgressBar (13074)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13064,NULL);\n",architecture,13074,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextTagTable,56, 13078, 12, 3.1, NULL, 13077, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextTagTable,56, 13078, 11, 3.1, NULL, 13077, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextTagTable,28, 13078, 10, 3.1, NULL, 13077, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextTagTable,56, 13078, 9, 3.1, NULL, 13077, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextTagTable,28, 13078, 6, 3.1, NULL, 13077, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextTagTable,56, 13078, 3, 3.1, NULL, 13077, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextTagTable,28, 13078, 2, 3.1, NULL, 13077, NULL)
#else
Msg("Find size of GtkTextTagTable (13078)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13077,NULL);\n",architecture,13078,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextBuffer,72, 13086, 12, 3.1, NULL, 13076, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextBuffer,72, 13086, 11, 3.1, NULL, 13076, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextBuffer,40, 13086, 10, 3.1, NULL, 13076, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextBuffer,72, 13086, 9, 3.1, NULL, 13076, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextBuffer,40, 13086, 6, 3.1, NULL, 13076, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextBuffer,72, 13086, 3, 3.1, NULL, 13076, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextBuffer,40, 13086, 2, 3.1, NULL, 13076, NULL)
#else
Msg("Find size of GtkTextBuffer (13086)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13076,NULL);\n",architecture,13086,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextIter,80, 13089, 12, 3.1, NULL, 13088, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextIter,80, 13089, 11, 3.1, NULL, 13088, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextIter,56, 13089, 10, 3.1, NULL, 13088, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextIter,80, 13089, 9, 3.1, NULL, 13088, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextIter,56, 13089, 6, 3.1, NULL, 13088, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextIter,80, 13089, 3, 3.1, NULL, 13088, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextIter,56, 13089, 2, 3.1, NULL, 13088, NULL)
#else
Msg("Find size of GtkTextIter (13089)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13088,NULL);\n",architecture,13089,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkType,8, 13091, 12, 3.1, NULL, 11836, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkType,8, 13091, 11, 3.1, NULL, 11836, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkType,4, 13091, 10, 3.1, NULL, 11836, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkType,8, 13091, 9, 3.1, NULL, 11836, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkType,4, 13091, 6, 3.1, NULL, 11836, NULL)
#elif defined __ia64__
CheckTypeSize(GtkType,8, 13091, 3, 3.1, NULL, 11836, NULL)
#elif defined __i386__
CheckTypeSize(GtkType,4, 13091, 2, 3.1, NULL, 11836, NULL)
#else
Msg("Find size of GtkType (13091)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11836,NULL);\n",architecture,13091,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkContainer,112, 13095, 12, 3.1, NULL, 13094, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkContainer,112, 13095, 11, 3.1, NULL, 13094, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkContainer,68, 13095, 10, 3.1, NULL, 13094, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkContainer,112, 13095, 9, 3.1, NULL, 13094, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkContainer,68, 13095, 6, 3.1, NULL, 13094, NULL)
#elif defined __ia64__
CheckTypeSize(GtkContainer,112, 13095, 3, 3.1, NULL, 13094, NULL)
#elif defined __i386__
CheckTypeSize(GtkContainer,68, 13095, 2, 3.1, NULL, 13094, NULL)
#else
Msg("Find size of GtkContainer (13095)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13094,NULL);\n",architecture,13095,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkBin,120, 13096, 12, 3.1, NULL, 13093, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkBin,120, 13096, 11, 3.1, NULL, 13093, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkBin,72, 13096, 10, 3.1, NULL, 13093, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkBin,120, 13096, 9, 3.1, NULL, 13093, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkBin,72, 13096, 6, 3.1, NULL, 13093, NULL)
#elif defined __ia64__
CheckTypeSize(GtkBin,120, 13096, 3, 3.1, NULL, 13093, NULL)
#elif defined __i386__
CheckTypeSize(GtkBin,72, 13096, 2, 3.1, NULL, 13093, NULL)
#else
Msg("Find size of GtkBin (13096)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13093,NULL);\n",architecture,13096,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkComboBox,128, 13100, 12, 3.1, NULL, 13092, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkComboBox,128, 13100, 11, 3.1, NULL, 13092, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkComboBox,76, 13100, 10, 3.1, NULL, 13092, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkComboBox,128, 13100, 9, 3.1, NULL, 13092, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkComboBox,76, 13100, 6, 3.1, NULL, 13092, NULL)
#elif defined __ia64__
CheckTypeSize(GtkComboBox,128, 13100, 3, 3.1, NULL, 13092, NULL)
#elif defined __i386__
CheckTypeSize(GtkComboBox,76, 13100, 2, 3.1, NULL, 13092, NULL)
#else
Msg("Find size of GtkComboBox (13100)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13092,NULL);\n",architecture,13100,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMisc,112, 13103, 12, 3.1, NULL, 13102, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMisc,112, 13103, 11, 3.1, NULL, 13102, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMisc,72, 13103, 10, 3.1, NULL, 13102, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMisc,112, 13103, 9, 3.1, NULL, 13102, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMisc,72, 13103, 6, 3.1, NULL, 13102, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMisc,112, 13103, 3, 3.1, NULL, 13102, NULL)
#elif defined __i386__
CheckTypeSize(GtkMisc,72, 13103, 2, 3.1, NULL, 13102, NULL)
#else
Msg("Find size of GtkMisc (13103)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13102,NULL);\n",architecture,13103,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkBox,128, 13108, 12, 3.1, NULL, 13107, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkBox,128, 13108, 11, 3.1, NULL, 13107, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkBox,76, 13108, 10, 3.1, NULL, 13107, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkBox,128, 13108, 9, 3.1, NULL, 13107, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkBox,76, 13108, 6, 3.1, NULL, 13107, NULL)
#elif defined __ia64__
CheckTypeSize(GtkBox,128, 13108, 3, 3.1, NULL, 13107, NULL)
#elif defined __i386__
CheckTypeSize(GtkBox,76, 13108, 2, 3.1, NULL, 13107, NULL)
#else
Msg("Find size of GtkBox (13108)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13107,NULL);\n",architecture,13108,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHBox,128, 13109, 12, 3.1, NULL, 13106, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHBox,128, 13109, 11, 3.1, NULL, 13106, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHBox,76, 13109, 10, 3.1, NULL, 13106, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHBox,128, 13109, 9, 3.1, NULL, 13106, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHBox,76, 13109, 6, 3.1, NULL, 13106, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHBox,128, 13109, 3, 3.1, NULL, 13106, NULL)
#elif defined __i386__
CheckTypeSize(GtkHBox,76, 13109, 2, 3.1, NULL, 13106, NULL)
#else
Msg("Find size of GtkHBox (13109)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13106,NULL);\n",architecture,13109,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkStatusbar,184, 13110, 12, 3.1, NULL, 13105, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkStatusbar,184, 13110, 11, 3.1, NULL, 13105, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkStatusbar,108, 13110, 10, 3.1, NULL, 13105, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkStatusbar,184, 13110, 9, 3.1, NULL, 13105, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkStatusbar,108, 13110, 6, 3.1, NULL, 13105, NULL)
#elif defined __ia64__
CheckTypeSize(GtkStatusbar,184, 13110, 3, 3.1, NULL, 13105, NULL)
#elif defined __i386__
CheckTypeSize(GtkStatusbar,108, 13110, 2, 3.1, NULL, 13105, NULL)
#else
Msg("Find size of GtkStatusbar (13110)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13105,NULL);\n",architecture,13110,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTargetList,16, 13113, 12, 3.1, NULL, 13112, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTargetList,16, 13113, 11, 3.1, NULL, 13112, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTargetList,8, 13113, 10, 3.1, NULL, 13112, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTargetList,16, 13113, 9, 3.1, NULL, 13112, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTargetList,8, 13113, 6, 3.1, NULL, 13112, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTargetList,16, 13113, 3, 3.1, NULL, 13112, NULL)
#elif defined __i386__
CheckTypeSize(GtkTargetList,8, 13113, 2, 3.1, NULL, 13112, NULL)
#else
Msg("Find size of GtkTargetList (13113)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13112,NULL);\n",architecture,13113,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWindow,240, 13116, 12, 3.1, NULL, 13115, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWindow,240, 13116, 11, 3.1, NULL, 13115, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWindow,148, 13116, 10, 3.1, NULL, 13115, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWindow,240, 13116, 9, 3.1, NULL, 13115, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWindow,148, 13116, 6, 3.1, NULL, 13115, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWindow,240, 13116, 3, 3.1, NULL, 13115, NULL)
#elif defined __i386__
CheckTypeSize(GtkWindow,148, 13116, 2, 3.1, NULL, 13115, NULL)
#else
Msg("Find size of GtkWindow (13116)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13115,NULL);\n",architecture,13116,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWindowGroup,32, 13122, 12, 3.1, NULL, 13121, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWindowGroup,32, 13122, 11, 3.1, NULL, 13121, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWindowGroup,16, 13122, 10, 3.1, NULL, 13121, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWindowGroup,32, 13122, 9, 3.1, NULL, 13121, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWindowGroup,16, 13122, 6, 3.1, NULL, 13121, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWindowGroup,32, 13122, 3, 3.1, NULL, 13121, NULL)
#elif defined __i386__
CheckTypeSize(GtkWindowGroup,16, 13122, 2, 3.1, NULL, 13121, NULL)
#else
Msg("Find size of GtkWindowGroup (13122)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13121,NULL);\n",architecture,13122,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkStateType,4, 13125, 12, 3.1, NULL, 13124, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkStateType,4, 13125, 11, 3.1, NULL, 13124, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkStateType,4, 13125, 10, 3.1, NULL, 13124, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkStateType,4, 13125, 9, 3.1, NULL, 13124, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkStateType,4, 13125, 6, 3.1, NULL, 13124, NULL)
#elif defined __ia64__
CheckTypeSize(GtkStateType,4, 13125, 3, 3.1, NULL, 13124, NULL)
#elif defined __i386__
CheckTypeSize(GtkStateType,4, 13125, 2, 3.1, NULL, 13124, NULL)
#else
Msg("Find size of GtkStateType (13125)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13124,NULL);\n",architecture,13125,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeModelFlags,4, 13130, 12, 3.1, NULL, 13129, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeModelFlags,4, 13130, 11, 3.1, NULL, 13129, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeModelFlags,4, 13130, 10, 3.1, NULL, 13129, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeModelFlags,4, 13130, 9, 3.1, NULL, 13129, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeModelFlags,4, 13130, 6, 3.1, NULL, 13129, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeModelFlags,4, 13130, 3, 3.1, NULL, 13129, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeModelFlags,4, 13130, 2, 3.1, NULL, 13129, NULL)
#else
Msg("Find size of GtkTreeModelFlags (13130)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13129,NULL);\n",architecture,13130,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTargetEntry,16, 13135, 12, 3.1, NULL, 13134, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTargetEntry,16, 13135, 11, 3.1, NULL, 13134, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTargetEntry,12, 13135, 10, 3.1, NULL, 13134, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTargetEntry,16, 13135, 9, 3.1, NULL, 13134, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTargetEntry,12, 13135, 6, 3.1, NULL, 13134, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTargetEntry,16, 13135, 3, 3.1, NULL, 13134, NULL)
#elif defined __i386__
CheckTypeSize(GtkTargetEntry,12, 13135, 2, 3.1, NULL, 13134, NULL)
#else
Msg("Find size of GtkTargetEntry (13135)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13134,NULL);\n",architecture,13135,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIMContext,24, 13140, 12, 3.1, NULL, 13139, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIMContext,24, 13140, 11, 3.1, NULL, 13139, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIMContext,12, 13140, 10, 3.1, NULL, 13139, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIMContext,24, 13140, 9, 3.1, NULL, 13139, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIMContext,12, 13140, 6, 3.1, NULL, 13139, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIMContext,24, 13140, 3, 3.1, NULL, 13139, NULL)
#elif defined __i386__
CheckTypeSize(GtkIMContext,12, 13140, 2, 3.1, NULL, 13139, NULL)
#else
Msg("Find size of GtkIMContext (13140)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13139,NULL);\n",architecture,13140,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkEntry,208, 13142, 12, 3.1, NULL, 13138, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkEntry,208, 13142, 11, 3.1, NULL, 13138, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkEntry,152, 13142, 10, 3.1, NULL, 13138, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkEntry,208, 13142, 9, 3.1, NULL, 13138, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkEntry,152, 13142, 6, 3.1, NULL, 13138, NULL)
#elif defined __ia64__
CheckTypeSize(GtkEntry,208, 13142, 3, 3.1, NULL, 13138, NULL)
#elif defined __i386__
CheckTypeSize(GtkEntry,152, 13142, 2, 3.1, NULL, 13138, NULL)
#else
Msg("Find size of GtkEntry (13142)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13138,NULL);\n",architecture,13142,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkComboBoxEntry,136, 13151, 12, 3.1, NULL, 13147, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkComboBoxEntry,136, 13151, 11, 3.1, NULL, 13147, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkComboBoxEntry,80, 13151, 10, 3.1, NULL, 13147, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkComboBoxEntry,136, 13151, 9, 3.1, NULL, 13147, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkComboBoxEntry,80, 13151, 6, 3.1, NULL, 13147, NULL)
#elif defined __ia64__
CheckTypeSize(GtkComboBoxEntry,136, 13151, 3, 3.1, NULL, 13147, NULL)
#elif defined __i386__
CheckTypeSize(GtkComboBoxEntry,80, 13151, 2, 3.1, NULL, 13147, NULL)
#else
Msg("Find size of GtkComboBoxEntry (13151)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13147,NULL);\n",architecture,13151,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkLayout,168, 13154, 12, 3.1, NULL, 13153, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkLayout,168, 13154, 11, 3.1, NULL, 13153, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkLayout,108, 13154, 10, 3.1, NULL, 13153, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkLayout,168, 13154, 9, 3.1, NULL, 13153, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkLayout,108, 13154, 6, 3.1, NULL, 13153, NULL)
#elif defined __ia64__
CheckTypeSize(GtkLayout,168, 13154, 3, 3.1, NULL, 13153, NULL)
#elif defined __i386__
CheckTypeSize(GtkLayout,108, 13154, 2, 3.1, NULL, 13153, NULL)
#else
Msg("Find size of GtkLayout (13154)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13153,NULL);\n",architecture,13154,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSortType,4, 13158, 12, 3.1, NULL, 13157, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSortType,4, 13158, 11, 3.1, NULL, 13157, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSortType,4, 13158, 10, 3.1, NULL, 13157, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSortType,4, 13158, 9, 3.1, NULL, 13157, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSortType,4, 13158, 6, 3.1, NULL, 13157, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSortType,4, 13158, 3, 3.1, NULL, 13157, NULL)
#elif defined __i386__
CheckTypeSize(GtkSortType,4, 13158, 2, 3.1, NULL, 13157, NULL)
#else
Msg("Find size of GtkSortType (13158)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13157,NULL);\n",architecture,13158,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeIter,32, 13160, 12, 3.1, NULL, 13159, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeIter,32, 13160, 11, 3.1, NULL, 13159, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeIter,16, 13160, 10, 3.1, NULL, 13159, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeIter,32, 13160, 9, 3.1, NULL, 13159, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeIter,16, 13160, 6, 3.1, NULL, 13159, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeIter,32, 13160, 3, 3.1, NULL, 13159, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeIter,16, 13160, 2, 3.1, NULL, 13159, NULL)
#else
Msg("Find size of GtkTreeIter (13160)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13159,NULL);\n",architecture,13160,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeIterCompareFunc,8, 13163, 12, 3.1, NULL, 13162, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeIterCompareFunc,8, 13163, 11, 3.1, NULL, 13162, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeIterCompareFunc,4, 13163, 10, 3.1, NULL, 13162, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeIterCompareFunc,8, 13163, 9, 3.1, NULL, 13162, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeIterCompareFunc,4, 13163, 6, 3.1, NULL, 13162, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeIterCompareFunc,8, 13163, 3, 3.1, NULL, 13162, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeIterCompareFunc,4, 13163, 2, 3.1, NULL, 13162, NULL)
#else
Msg("Find size of GtkTreeIterCompareFunc (13163)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13162,NULL);\n",architecture,13163,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkDestroyNotify,8, 13164, 12, 3.1, NULL, 11438, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkDestroyNotify,8, 13164, 11, 3.1, NULL, 11438, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkDestroyNotify,4, 13164, 10, 3.1, NULL, 11438, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkDestroyNotify,8, 13164, 9, 3.1, NULL, 11438, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkDestroyNotify,4, 13164, 6, 3.1, NULL, 11438, NULL)
#elif defined __ia64__
CheckTypeSize(GtkDestroyNotify,8, 13164, 3, 3.1, NULL, 11438, NULL)
#elif defined __i386__
CheckTypeSize(GtkDestroyNotify,4, 13164, 2, 3.1, NULL, 11438, NULL)
#else
Msg("Find size of GtkDestroyNotify (13164)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11438,NULL);\n",architecture,13164,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeStore,112, 13165, 12, 3.1, NULL, 13156, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeStore,112, 13165, 11, 3.1, NULL, 13156, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeStore,60, 13165, 10, 3.1, NULL, 13156, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeStore,112, 13165, 9, 3.1, NULL, 13156, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeStore,60, 13165, 6, 3.1, NULL, 13156, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeStore,112, 13165, 3, 3.1, NULL, 13156, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeStore,60, 13165, 2, 3.1, NULL, 13156, NULL)
#else
Msg("Find size of GtkTreeStore (13165)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13156,NULL);\n",architecture,13165,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkDialog,264, 13169, 12, 3.1, NULL, 13168, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkDialog,264, 13169, 11, 3.1, NULL, 13168, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkDialog,160, 13169, 10, 3.1, NULL, 13168, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkDialog,264, 13169, 9, 3.1, NULL, 13168, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkDialog,160, 13169, 6, 3.1, NULL, 13168, NULL)
#elif defined __ia64__
CheckTypeSize(GtkDialog,264, 13169, 3, 3.1, NULL, 13168, NULL)
#elif defined __i386__
CheckTypeSize(GtkDialog,160, 13169, 2, 3.1, NULL, 13168, NULL)
#else
Msg("Find size of GtkDialog (13169)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13168,NULL);\n",architecture,13169,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAboutDialog,272, 13170, 12, 3.1, NULL, 13167, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAboutDialog,272, 13170, 11, 3.1, NULL, 13167, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAboutDialog,164, 13170, 10, 3.1, NULL, 13167, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAboutDialog,272, 13170, 9, 3.1, NULL, 13167, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAboutDialog,164, 13170, 6, 3.1, NULL, 13167, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAboutDialog,272, 13170, 3, 3.1, NULL, 13167, NULL)
#elif defined __i386__
CheckTypeSize(GtkAboutDialog,164, 13170, 2, 3.1, NULL, 13167, NULL)
#else
Msg("Find size of GtkAboutDialog (13170)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13167,NULL);\n",architecture,13170,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAboutDialogActivateLinkFunc,8, 13173, 12, 3.1, NULL, 13172, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAboutDialogActivateLinkFunc,8, 13173, 11, 3.1, NULL, 13172, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAboutDialogActivateLinkFunc,4, 13173, 10, 3.1, NULL, 13172, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAboutDialogActivateLinkFunc,8, 13173, 9, 3.1, NULL, 13172, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAboutDialogActivateLinkFunc,4, 13173, 6, 3.1, NULL, 13172, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAboutDialogActivateLinkFunc,8, 13173, 3, 3.1, NULL, 13172, NULL)
#elif defined __i386__
CheckTypeSize(GtkAboutDialogActivateLinkFunc,4, 13173, 2, 3.1, NULL, 13172, NULL)
#else
Msg("Find size of GtkAboutDialogActivateLinkFunc (13173)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13172,NULL);\n",architecture,13173,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkUpdateType,4, 13180, 12, 3.1, NULL, 13179, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkUpdateType,4, 13180, 11, 3.1, NULL, 13179, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkUpdateType,4, 13180, 10, 3.1, NULL, 13179, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkUpdateType,4, 13180, 9, 3.1, NULL, 13179, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkUpdateType,4, 13180, 6, 3.1, NULL, 13179, NULL)
#elif defined __ia64__
CheckTypeSize(GtkUpdateType,4, 13180, 3, 3.1, NULL, 13179, NULL)
#elif defined __i386__
CheckTypeSize(GtkUpdateType,4, 13180, 2, 3.1, NULL, 13179, NULL)
#else
Msg("Find size of GtkUpdateType (13180)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13179,NULL);\n",architecture,13180,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkOrientation,4, 13182, 12, 3.1, NULL, 13181, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkOrientation,4, 13182, 11, 3.1, NULL, 13181, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkOrientation,4, 13182, 10, 3.1, NULL, 13181, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkOrientation,4, 13182, 9, 3.1, NULL, 13181, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkOrientation,4, 13182, 6, 3.1, NULL, 13181, NULL)
#elif defined __ia64__
CheckTypeSize(GtkOrientation,4, 13182, 3, 3.1, NULL, 13181, NULL)
#elif defined __i386__
CheckTypeSize(GtkOrientation,4, 13182, 2, 3.1, NULL, 13181, NULL)
#else
Msg("Find size of GtkOrientation (13182)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13181,NULL);\n",architecture,13182,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRange,192, 13189, 12, 3.1, NULL, 13178, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRange,192, 13189, 11, 3.1, NULL, 13178, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRange,136, 13189, 10, 3.1, NULL, 13178, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRange,192, 13189, 9, 3.1, NULL, 13178, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRange,136, 13189, 6, 3.1, NULL, 13178, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRange,192, 13189, 3, 3.1, NULL, 13178, NULL)
#elif defined __i386__
CheckTypeSize(GtkRange,136, 13189, 2, 3.1, NULL, 13178, NULL)
#else
Msg("Find size of GtkRange (13189)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13178,NULL);\n",architecture,13189,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAccelKey,12, 13197, 12, 3.1, NULL, 13196, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAccelKey,12, 13197, 11, 3.1, NULL, 13196, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAccelKey,12, 13197, 10, 3.1, NULL, 13196, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAccelKey,12, 13197, 9, 3.1, NULL, 13196, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAccelKey,12, 13197, 6, 3.1, NULL, 13196, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAccelKey,12, 13197, 3, 3.1, NULL, 13196, NULL)
#elif defined __i386__
CheckTypeSize(GtkAccelKey,12, 13197, 2, 3.1, NULL, 13196, NULL)
#else
Msg("Find size of GtkAccelKey (13197)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13196,NULL);\n",architecture,13197,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAccelGroupEntry,32, 13198, 12, 3.1, NULL, 13195, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAccelGroupEntry,32, 13198, 11, 3.1, NULL, 13195, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAccelGroupEntry,20, 13198, 10, 3.1, NULL, 13195, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAccelGroupEntry,32, 13198, 9, 3.1, NULL, 13195, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAccelGroupEntry,20, 13198, 6, 3.1, NULL, 13195, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAccelGroupEntry,32, 13198, 3, 3.1, NULL, 13195, NULL)
#elif defined __i386__
CheckTypeSize(GtkAccelGroupEntry,20, 13198, 2, 3.1, NULL, 13195, NULL)
#else
Msg("Find size of GtkAccelGroupEntry (13198)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13195,NULL);\n",architecture,13198,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAccelGroup,56, 13200, 12, 3.1, NULL, 13194, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAccelGroup,56, 13200, 11, 3.1, NULL, 13194, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAccelGroup,32, 13200, 10, 3.1, NULL, 13194, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAccelGroup,56, 13200, 9, 3.1, NULL, 13194, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAccelGroup,32, 13200, 6, 3.1, NULL, 13194, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAccelGroup,56, 13200, 3, 3.1, NULL, 13194, NULL)
#elif defined __i386__
CheckTypeSize(GtkAccelGroup,32, 13200, 2, 3.1, NULL, 13194, NULL)
#else
Msg("Find size of GtkAccelGroup (13200)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13194,NULL);\n",architecture,13200,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSocket,160, 13202, 12, 3.1, NULL, 13193, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSocket,160, 13202, 11, 3.1, NULL, 13193, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSocket,96, 13202, 10, 3.1, NULL, 13193, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSocket,160, 13202, 9, 3.1, NULL, 13193, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSocket,96, 13202, 6, 3.1, NULL, 13193, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSocket,160, 13202, 3, 3.1, NULL, 13193, NULL)
#elif defined __i386__
CheckTypeSize(GtkSocket,96, 13202, 2, 3.1, NULL, 13193, NULL)
#else
Msg("Find size of GtkSocket (13202)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13193,NULL);\n",architecture,13202,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeViewColumnSizing,4, 13209, 12, 3.1, NULL, 13208, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeViewColumnSizing,4, 13209, 11, 3.1, NULL, 13208, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeViewColumnSizing,4, 13209, 10, 3.1, NULL, 13208, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeViewColumnSizing,4, 13209, 9, 3.1, NULL, 13208, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeViewColumnSizing,4, 13209, 6, 3.1, NULL, 13208, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeViewColumnSizing,4, 13209, 3, 3.1, NULL, 13208, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeViewColumnSizing,4, 13209, 2, 3.1, NULL, 13208, NULL)
#else
Msg("Find size of GtkTreeViewColumnSizing (13209)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13208,NULL);\n",architecture,13209,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeViewColumn,184, 13210, 12, 3.1, NULL, 13204, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeViewColumn,184, 13210, 11, 3.1, NULL, 13204, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeViewColumn,124, 13210, 10, 3.1, NULL, 13204, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeViewColumn,184, 13210, 9, 3.1, NULL, 13204, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeViewColumn,124, 13210, 6, 3.1, NULL, 13204, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeViewColumn,184, 13210, 3, 3.1, NULL, 13204, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeViewColumn,124, 13210, 2, 3.1, NULL, 13204, NULL)
#else
Msg("Find size of GtkTreeViewColumn (13210)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13204,NULL);\n",architecture,13210,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRenderer,56, 13213, 12, 3.1, NULL, 13212, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRenderer,56, 13213, 11, 3.1, NULL, 13212, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRenderer,40, 13213, 10, 3.1, NULL, 13212, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRenderer,56, 13213, 9, 3.1, NULL, 13212, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRenderer,40, 13213, 6, 3.1, NULL, 13212, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRenderer,56, 13213, 3, 3.1, NULL, 13212, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRenderer,40, 13213, 2, 3.1, NULL, 13212, NULL)
#else
Msg("Find size of GtkCellRenderer (13213)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13212,NULL);\n",architecture,13213,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 12, 3.1, NULL, 13215, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 11, 3.1, NULL, 13215, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 10, 3.1, NULL, 13215, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 9, 3.1, NULL, 13215, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 6, 3.1, NULL, 13215, NULL)
#elif defined __ia64__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 3, 3.1, NULL, 13215, NULL)
#elif defined __i386__
CheckTypeSize(GtkButtonBoxStyle,4, 13216, 2, 3.1, NULL, 13215, NULL)
#else
Msg("Find size of GtkButtonBoxStyle (13216)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13215,NULL);\n",architecture,13216,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkButtonBox,152, 13218, 12, 3.1, NULL, 13217, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkButtonBox,152, 13218, 11, 3.1, NULL, 13217, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkButtonBox,96, 13218, 10, 3.1, NULL, 13217, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkButtonBox,152, 13218, 9, 3.1, NULL, 13217, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkButtonBox,96, 13218, 6, 3.1, NULL, 13217, NULL)
#elif defined __ia64__
CheckTypeSize(GtkButtonBox,152, 13218, 3, 3.1, NULL, 13217, NULL)
#elif defined __i386__
CheckTypeSize(GtkButtonBox,96, 13218, 2, 3.1, NULL, 13217, NULL)
#else
Msg("Find size of GtkButtonBox (13218)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13217,NULL);\n",architecture,13218,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAction,32, 13225, 12, 3.1, NULL, 13221, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAction,32, 13225, 11, 3.1, NULL, 13221, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAction,16, 13225, 10, 3.1, NULL, 13221, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAction,32, 13225, 9, 3.1, NULL, 13221, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAction,16, 13225, 6, 3.1, NULL, 13221, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAction,32, 13225, 3, 3.1, NULL, 13221, NULL)
#elif defined __i386__
CheckTypeSize(GtkAction,16, 13225, 2, 3.1, NULL, 13221, NULL)
#else
Msg("Find size of GtkAction (13225)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13221,NULL);\n",architecture,13225,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToggleAction,40, 13229, 12, 3.1, NULL, 13220, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToggleAction,40, 13229, 11, 3.1, NULL, 13220, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToggleAction,20, 13229, 10, 3.1, NULL, 13220, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToggleAction,40, 13229, 9, 3.1, NULL, 13220, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToggleAction,20, 13229, 6, 3.1, NULL, 13220, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToggleAction,40, 13229, 3, 3.1, NULL, 13220, NULL)
#elif defined __i386__
CheckTypeSize(GtkToggleAction,20, 13229, 2, 3.1, NULL, 13220, NULL)
#else
Msg("Find size of GtkToggleAction (13229)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13220,NULL);\n",architecture,13229,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextAppearance,64, 13236, 12, 3.1, NULL, 13235, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextAppearance,64, 13236, 11, 3.1, NULL, 13235, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextAppearance,44, 13236, 10, 3.1, NULL, 13235, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextAppearance,64, 13236, 9, 3.1, NULL, 13235, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextAppearance,44, 13236, 6, 3.1, NULL, 13235, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextAppearance,64, 13236, 3, 3.1, NULL, 13235, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextAppearance,44, 13236, 2, 3.1, NULL, 13235, NULL)
#else
Msg("Find size of GtkTextAppearance (13236)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13235,NULL);\n",architecture,13236,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkJustification,4, 13238, 12, 3.1, NULL, 13237, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkJustification,4, 13238, 11, 3.1, NULL, 13237, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkJustification,4, 13238, 10, 3.1, NULL, 13237, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkJustification,4, 13238, 9, 3.1, NULL, 13237, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkJustification,4, 13238, 6, 3.1, NULL, 13237, NULL)
#elif defined __ia64__
CheckTypeSize(GtkJustification,4, 13238, 3, 3.1, NULL, 13237, NULL)
#elif defined __i386__
CheckTypeSize(GtkJustification,4, 13238, 2, 3.1, NULL, 13237, NULL)
#else
Msg("Find size of GtkJustification (13238)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13237,NULL);\n",architecture,13238,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextDirection,4, 13240, 12, 3.1, NULL, 13239, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextDirection,4, 13240, 11, 3.1, NULL, 13239, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextDirection,4, 13240, 10, 3.1, NULL, 13239, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextDirection,4, 13240, 9, 3.1, NULL, 13239, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextDirection,4, 13240, 6, 3.1, NULL, 13239, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextDirection,4, 13240, 3, 3.1, NULL, 13239, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextDirection,4, 13240, 2, 3.1, NULL, 13239, NULL)
#else
Msg("Find size of GtkTextDirection (13240)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13239,NULL);\n",architecture,13240,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWrapMode,4, 13242, 12, 3.1, NULL, 13241, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWrapMode,4, 13242, 11, 3.1, NULL, 13241, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWrapMode,4, 13242, 10, 3.1, NULL, 13241, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWrapMode,4, 13242, 9, 3.1, NULL, 13241, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWrapMode,4, 13242, 6, 3.1, NULL, 13241, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWrapMode,4, 13242, 3, 3.1, NULL, 13241, NULL)
#elif defined __i386__
CheckTypeSize(GtkWrapMode,4, 13242, 2, 3.1, NULL, 13241, NULL)
#else
Msg("Find size of GtkWrapMode (13242)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13241,NULL);\n",architecture,13242,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextAttributes,160, 13243, 12, 3.1, NULL, 13234, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextAttributes,160, 13243, 11, 3.1, NULL, 13234, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextAttributes,120, 13243, 10, 3.1, NULL, 13234, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextAttributes,160, 13243, 9, 3.1, NULL, 13234, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextAttributes,120, 13243, 6, 3.1, NULL, 13234, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextAttributes,160, 13243, 3, 3.1, NULL, 13234, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextAttributes,112, 13243, 2, 3.1, NULL, 13234, NULL)
#else
Msg("Find size of GtkTextAttributes (13243)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13234,NULL);\n",architecture,13243,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextTag,64, 13245, 12, 3.1, NULL, 13233, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextTag,64, 13245, 11, 3.1, NULL, 13233, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextTag,32, 13245, 10, 3.1, NULL, 13233, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextTag,64, 13245, 9, 3.1, NULL, 13233, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextTag,32, 13245, 6, 3.1, NULL, 13233, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextTag,64, 13245, 3, 3.1, NULL, 13233, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextTag,32, 13245, 2, 3.1, NULL, 13233, NULL)
#else
Msg("Find size of GtkTextTag (13245)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13233,NULL);\n",architecture,13245,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileFilterFlags,4, 13252, 12, 3.1, NULL, 13251, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileFilterFlags,4, 13252, 11, 3.1, NULL, 13251, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileFilterFlags,4, 13252, 10, 3.1, NULL, 13251, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileFilterFlags,4, 13252, 9, 3.1, NULL, 13251, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileFilterFlags,4, 13252, 6, 3.1, NULL, 13251, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileFilterFlags,4, 13252, 3, 3.1, NULL, 13251, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileFilterFlags,4, 13252, 2, 3.1, NULL, 13251, NULL)
#else
Msg("Find size of GtkFileFilterFlags (13252)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13251,NULL);\n",architecture,13252,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileFilterInfo,40, 13253, 12, 3.1, NULL, 13250, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileFilterInfo,40, 13253, 11, 3.1, NULL, 13250, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileFilterInfo,20, 13253, 10, 3.1, NULL, 13250, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileFilterInfo,40, 13253, 9, 3.1, NULL, 13250, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileFilterInfo,20, 13253, 6, 3.1, NULL, 13250, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileFilterInfo,40, 13253, 3, 3.1, NULL, 13250, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileFilterInfo,20, 13253, 2, 3.1, NULL, 13250, NULL)
#else
Msg("Find size of GtkFileFilterInfo (13253)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13250,NULL);\n",architecture,13253,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToolItem,128, 13265, 12, 3.1, NULL, 13261, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToolItem,128, 13265, 11, 3.1, NULL, 13261, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToolItem,76, 13265, 10, 3.1, NULL, 13261, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToolItem,128, 13265, 9, 3.1, NULL, 13261, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToolItem,76, 13265, 6, 3.1, NULL, 13261, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToolItem,128, 13265, 3, 3.1, NULL, 13261, NULL)
#elif defined __i386__
CheckTypeSize(GtkToolItem,76, 13265, 2, 3.1, NULL, 13261, NULL)
#else
Msg("Find size of GtkToolItem (13265)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13261,NULL);\n",architecture,13265,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToolButton,136, 13269, 12, 3.1, NULL, 13260, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToolButton,136, 13269, 11, 3.1, NULL, 13260, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToolButton,80, 13269, 10, 3.1, NULL, 13260, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToolButton,136, 13269, 9, 3.1, NULL, 13260, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToolButton,80, 13269, 6, 3.1, NULL, 13260, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToolButton,136, 13269, 3, 3.1, NULL, 13260, NULL)
#elif defined __i386__
CheckTypeSize(GtkToolButton,80, 13269, 2, 3.1, NULL, 13260, NULL)
#else
Msg("Find size of GtkToolButton (13269)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13260,NULL);\n",architecture,13269,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIconView,120, 13275, 12, 3.1, NULL, 13271, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIconView,120, 13275, 11, 3.1, NULL, 13271, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIconView,72, 13275, 10, 3.1, NULL, 13271, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIconView,120, 13275, 9, 3.1, NULL, 13271, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIconView,72, 13275, 6, 3.1, NULL, 13271, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIconView,120, 13275, 3, 3.1, NULL, 13271, NULL)
#elif defined __i386__
CheckTypeSize(GtkIconView,72, 13275, 2, 3.1, NULL, 13271, NULL)
#else
Msg("Find size of GtkIconView (13275)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13271,NULL);\n",architecture,13275,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkLabel,184, 13281, 12, 3.1, NULL, 13277, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkLabel,184, 13281, 11, 3.1, NULL, 13277, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkLabel,112, 13281, 10, 3.1, NULL, 13277, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkLabel,184, 13281, 9, 3.1, NULL, 13277, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkLabel,112, 13281, 6, 3.1, NULL, 13277, NULL)
#elif defined __ia64__
CheckTypeSize(GtkLabel,184, 13281, 3, 3.1, NULL, 13277, NULL)
#elif defined __i386__
CheckTypeSize(GtkLabel,112, 13281, 2, 3.1, NULL, 13277, NULL)
#else
Msg("Find size of GtkLabel (13281)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13277,NULL);\n",architecture,13281,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSettings,56, 13291, 12, 3.1, NULL, 13284, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSettings,56, 13291, 11, 3.1, NULL, 13284, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSettings,28, 13291, 10, 3.1, NULL, 13284, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSettings,56, 13291, 9, 3.1, NULL, 13284, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSettings,28, 13291, 6, 3.1, NULL, 13284, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSettings,56, 13291, 3, 3.1, NULL, 13284, NULL)
#elif defined __i386__
CheckTypeSize(GtkSettings,28, 13291, 2, 3.1, NULL, 13284, NULL)
#else
Msg("Find size of GtkSettings (13291)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13284,NULL);\n",architecture,13291,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkUIManager,32, 13297, 12, 3.1, NULL, 13293, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkUIManager,32, 13297, 11, 3.1, NULL, 13293, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkUIManager,16, 13297, 10, 3.1, NULL, 13293, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkUIManager,32, 13297, 9, 3.1, NULL, 13293, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkUIManager,16, 13297, 6, 3.1, NULL, 13293, NULL)
#elif defined __ia64__
CheckTypeSize(GtkUIManager,32, 13297, 3, 3.1, NULL, 13293, NULL)
#elif defined __i386__
CheckTypeSize(GtkUIManager,16, 13297, 2, 3.1, NULL, 13293, NULL)
#else
Msg("Find size of GtkUIManager (13297)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13293,NULL);\n",architecture,13297,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkItem,120, 13303, 12, 3.1, NULL, 13302, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkItem,120, 13303, 11, 3.1, NULL, 13302, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkItem,72, 13303, 10, 3.1, NULL, 13302, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkItem,120, 13303, 9, 3.1, NULL, 13302, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkItem,72, 13303, 6, 3.1, NULL, 13302, NULL)
#elif defined __ia64__
CheckTypeSize(GtkItem,120, 13303, 3, 3.1, NULL, 13302, NULL)
#elif defined __i386__
CheckTypeSize(GtkItem,72, 13303, 2, 3.1, NULL, 13302, NULL)
#else
Msg("Find size of GtkItem (13303)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13302,NULL);\n",architecture,13303,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuItem,160, 13304, 12, 3.1, NULL, 13301, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuItem,160, 13304, 11, 3.1, NULL, 13301, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuItem,96, 13304, 10, 3.1, NULL, 13301, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuItem,160, 13304, 9, 3.1, NULL, 13301, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuItem,96, 13304, 6, 3.1, NULL, 13301, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuItem,160, 13304, 3, 3.1, NULL, 13301, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuItem,96, 13304, 2, 3.1, NULL, 13301, NULL)
#else
Msg("Find size of GtkMenuItem (13304)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13301,NULL);\n",architecture,13304,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCheckMenuItem,168, 13305, 12, 3.1, NULL, 13300, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCheckMenuItem,168, 13305, 11, 3.1, NULL, 13300, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCheckMenuItem,100, 13305, 10, 3.1, NULL, 13300, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCheckMenuItem,168, 13305, 9, 3.1, NULL, 13300, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCheckMenuItem,100, 13305, 6, 3.1, NULL, 13300, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCheckMenuItem,168, 13305, 3, 3.1, NULL, 13300, NULL)
#elif defined __i386__
CheckTypeSize(GtkCheckMenuItem,100, 13305, 2, 3.1, NULL, 13300, NULL)
#else
Msg("Find size of GtkCheckMenuItem (13305)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13300,NULL);\n",architecture,13305,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRadioMenuItem,176, 13306, 12, 3.1, NULL, 13299, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRadioMenuItem,176, 13306, 11, 3.1, NULL, 13299, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRadioMenuItem,104, 13306, 10, 3.1, NULL, 13299, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRadioMenuItem,176, 13306, 9, 3.1, NULL, 13299, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRadioMenuItem,104, 13306, 6, 3.1, NULL, 13299, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRadioMenuItem,176, 13306, 3, 3.1, NULL, 13299, NULL)
#elif defined __i386__
CheckTypeSize(GtkRadioMenuItem,104, 13306, 2, 3.1, NULL, 13299, NULL)
#else
Msg("Find size of GtkRadioMenuItem (13306)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13299,NULL);\n",architecture,13306,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellView,104, 13312, 12, 3.1, NULL, 13308, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellView,104, 13312, 11, 3.1, NULL, 13308, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellView,64, 13312, 10, 3.1, NULL, 13308, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellView,104, 13312, 9, 3.1, NULL, 13308, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellView,64, 13312, 6, 3.1, NULL, 13308, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellView,104, 13312, 3, 3.1, NULL, 13308, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellView,64, 13312, 2, 3.1, NULL, 13308, NULL)
#else
Msg("Find size of GtkCellView (13312)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13308,NULL);\n",architecture,13312,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSelectionData,56, 13315, 12, 3.1, NULL, 13314, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSelectionData,56, 13315, 11, 3.1, NULL, 13314, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSelectionData,28, 13315, 10, 3.1, NULL, 13314, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSelectionData,56, 13315, 9, 3.1, NULL, 13314, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSelectionData,28, 13315, 6, 3.1, NULL, 13314, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSelectionData,56, 13315, 3, 3.1, NULL, 13314, NULL)
#elif defined __i386__
CheckTypeSize(GtkSelectionData,28, 13315, 2, 3.1, NULL, 13314, NULL)
#else
Msg("Find size of GtkSelectionData (13315)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13314,NULL);\n",architecture,13315,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkDrawingArea,104, 13322, 12, 3.1, NULL, 13321, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkDrawingArea,104, 13322, 11, 3.1, NULL, 13321, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkDrawingArea,64, 13322, 10, 3.1, NULL, 13321, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkDrawingArea,104, 13322, 9, 3.1, NULL, 13321, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkDrawingArea,64, 13322, 6, 3.1, NULL, 13321, NULL)
#elif defined __ia64__
CheckTypeSize(GtkDrawingArea,104, 13322, 3, 3.1, NULL, 13321, NULL)
#elif defined __i386__
CheckTypeSize(GtkDrawingArea,64, 13322, 2, 3.1, NULL, 13321, NULL)
#else
Msg("Find size of GtkDrawingArea (13322)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13321,NULL);\n",architecture,13322,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCurveType,4, 13324, 12, 3.1, NULL, 13323, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCurveType,4, 13324, 11, 3.1, NULL, 13323, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCurveType,4, 13324, 10, 3.1, NULL, 13323, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCurveType,4, 13324, 9, 3.1, NULL, 13323, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCurveType,4, 13324, 6, 3.1, NULL, 13323, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCurveType,4, 13324, 3, 3.1, NULL, 13323, NULL)
#elif defined __i386__
CheckTypeSize(GtkCurveType,4, 13324, 2, 3.1, NULL, 13323, NULL)
#else
Msg("Find size of GtkCurveType (13324)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13323,NULL);\n",architecture,13324,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCurve,184, 13327, 12, 3.1, NULL, 13320, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCurve,184, 13327, 11, 3.1, NULL, 13320, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCurve,120, 13327, 10, 3.1, NULL, 13320, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCurve,184, 13327, 9, 3.1, NULL, 13320, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCurve,120, 13327, 6, 3.1, NULL, 13320, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCurve,184, 13327, 3, 3.1, NULL, 13320, NULL)
#elif defined __i386__
CheckTypeSize(GtkCurve,120, 13327, 2, 3.1, NULL, 13320, NULL)
#else
Msg("Find size of GtkCurve (13327)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13320,NULL);\n",architecture,13327,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkNotebook,176, 13333, 12, 3.1, NULL, 13329, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkNotebook,176, 13333, 11, 3.1, NULL, 13329, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkNotebook,104, 13333, 10, 3.1, NULL, 13329, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkNotebook,176, 13333, 9, 3.1, NULL, 13329, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkNotebook,104, 13333, 6, 3.1, NULL, 13329, NULL)
#elif defined __ia64__
CheckTypeSize(GtkNotebook,176, 13333, 3, 3.1, NULL, 13329, NULL)
#elif defined __i386__
CheckTypeSize(GtkNotebook,104, 13333, 2, 3.1, NULL, 13329, NULL)
#else
Msg("Find size of GtkNotebook (13333)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13329,NULL);\n",architecture,13333,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIconFactory,32, 13336, 12, 3.1, NULL, 13335, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIconFactory,32, 13336, 11, 3.1, NULL, 13335, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIconFactory,16, 13336, 10, 3.1, NULL, 13335, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIconFactory,32, 13336, 9, 3.1, NULL, 13335, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIconFactory,16, 13336, 6, 3.1, NULL, 13335, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIconFactory,32, 13336, 3, 3.1, NULL, 13335, NULL)
#elif defined __i386__
CheckTypeSize(GtkIconFactory,16, 13336, 2, 3.1, NULL, 13335, NULL)
#else
Msg("Find size of GtkIconFactory (13336)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13335,NULL);\n",architecture,13336,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRadioAction,48, 13344, 12, 3.1, NULL, 13340, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRadioAction,48, 13344, 11, 3.1, NULL, 13340, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRadioAction,24, 13344, 10, 3.1, NULL, 13340, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRadioAction,48, 13344, 9, 3.1, NULL, 13340, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRadioAction,24, 13344, 6, 3.1, NULL, 13340, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRadioAction,48, 13344, 3, 3.1, NULL, 13340, NULL)
#elif defined __i386__
CheckTypeSize(GtkRadioAction,24, 13344, 2, 3.1, NULL, 13340, NULL)
#else
Msg("Find size of GtkRadioAction (13344)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13340,NULL);\n",architecture,13344,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextMark,32, 13347, 12, 3.1, NULL, 13346, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextMark,32, 13347, 11, 3.1, NULL, 13346, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextMark,16, 13347, 10, 3.1, NULL, 13346, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextMark,32, 13347, 9, 3.1, NULL, 13346, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextMark,16, 13347, 6, 3.1, NULL, 13346, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextMark,32, 13347, 3, 3.1, NULL, 13346, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextMark,16, 13347, 2, 3.1, NULL, 13346, NULL)
#else
Msg("Find size of GtkTextMark (13347)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13346,NULL);\n",architecture,13347,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPackType,4, 13351, 12, 3.1, NULL, 13350, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPackType,4, 13351, 11, 3.1, NULL, 13350, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPackType,4, 13351, 10, 3.1, NULL, 13350, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPackType,4, 13351, 9, 3.1, NULL, 13350, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPackType,4, 13351, 6, 3.1, NULL, 13350, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPackType,4, 13351, 3, 3.1, NULL, 13350, NULL)
#elif defined __i386__
CheckTypeSize(GtkPackType,4, 13351, 2, 3.1, NULL, 13350, NULL)
#else
Msg("Find size of GtkPackType (13351)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13350,NULL);\n",architecture,13351,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVBox,128, 13354, 12, 3.1, NULL, 13353, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVBox,128, 13354, 11, 3.1, NULL, 13353, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVBox,76, 13354, 10, 3.1, NULL, 13353, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVBox,128, 13354, 9, 3.1, NULL, 13353, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVBox,76, 13354, 6, 3.1, NULL, 13353, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVBox,128, 13354, 3, 3.1, NULL, 13353, NULL)
#elif defined __i386__
CheckTypeSize(GtkVBox,76, 13354, 2, 3.1, NULL, 13353, NULL)
#else
Msg("Find size of GtkVBox (13354)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13353,NULL);\n",architecture,13354,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkColorSelection,136, 13355, 12, 3.1, NULL, 13352, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkColorSelection,136, 13355, 11, 3.1, NULL, 13352, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkColorSelection,80, 13355, 10, 3.1, NULL, 13352, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkColorSelection,136, 13355, 9, 3.1, NULL, 13352, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkColorSelection,80, 13355, 6, 3.1, NULL, 13352, NULL)
#elif defined __ia64__
CheckTypeSize(GtkColorSelection,136, 13355, 3, 3.1, NULL, 13352, NULL)
#elif defined __i386__
CheckTypeSize(GtkColorSelection,80, 13355, 2, 3.1, NULL, 13352, NULL)
#else
Msg("Find size of GtkColorSelection (13355)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13352,NULL);\n",architecture,13355,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCalendarDisplayOptions,4, 13361, 12, 3.1, NULL, 13360, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCalendarDisplayOptions,4, 13361, 11, 3.1, NULL, 13360, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCalendarDisplayOptions,4, 13361, 10, 3.1, NULL, 13360, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCalendarDisplayOptions,4, 13361, 9, 3.1, NULL, 13360, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCalendarDisplayOptions,4, 13361, 6, 3.1, NULL, 13360, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCalendarDisplayOptions,4, 13361, 3, 3.1, NULL, 13360, NULL)
#elif defined __i386__
CheckTypeSize(GtkCalendarDisplayOptions,4, 13361, 2, 3.1, NULL, 13360, NULL)
#else
Msg("Find size of GtkCalendarDisplayOptions (13361)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13360,NULL);\n",architecture,13361,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCalendar,1072, 13364, 12, 3.1, NULL, 13357, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCalendar,1072, 13364, 11, 3.1, NULL, 13357, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCalendar,996, 13364, 10, 3.1, NULL, 13357, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCalendar,1072, 13364, 9, 3.1, NULL, 13357, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCalendar,996, 13364, 6, 3.1, NULL, 13357, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCalendar,1072, 13364, 3, 3.1, NULL, 13357, NULL)
#elif defined __i386__
CheckTypeSize(GtkCalendar,996, 13364, 2, 3.1, NULL, 13357, NULL)
#else
Msg("Find size of GtkCalendar (13364)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13357,NULL);\n",architecture,13364,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTableRowCol,8, 13377, 12, 3.1, NULL, 13376, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTableRowCol,8, 13377, 11, 3.1, NULL, 13376, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTableRowCol,8, 13377, 10, 3.1, NULL, 13376, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTableRowCol,8, 13377, 9, 3.1, NULL, 13376, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTableRowCol,8, 13377, 6, 3.1, NULL, 13376, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTableRowCol,8, 13377, 3, 3.1, NULL, 13376, NULL)
#elif defined __i386__
CheckTypeSize(GtkTableRowCol,8, 13377, 2, 3.1, NULL, 13376, NULL)
#else
Msg("Find size of GtkTableRowCol (13377)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13376,NULL);\n",architecture,13377,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTable,152, 13379, 12, 3.1, NULL, 13375, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTable,152, 13379, 11, 3.1, NULL, 13375, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTable,92, 13379, 10, 3.1, NULL, 13375, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTable,152, 13379, 9, 3.1, NULL, 13375, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTable,92, 13379, 6, 3.1, NULL, 13375, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTable,152, 13379, 3, 3.1, NULL, 13375, NULL)
#elif defined __i386__
CheckTypeSize(GtkTable,92, 13379, 2, 3.1, NULL, 13375, NULL)
#else
Msg("Find size of GtkTable (13379)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13375,NULL);\n",architecture,13379,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFunction,8, 13381, 12, 3.1, NULL, 11542, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFunction,8, 13381, 11, 3.1, NULL, 11542, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFunction,4, 13381, 10, 3.1, NULL, 11542, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFunction,8, 13381, 9, 3.1, NULL, 11542, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFunction,4, 13381, 6, 3.1, NULL, 11542, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFunction,8, 13381, 3, 3.1, NULL, 11542, NULL)
#elif defined __i386__
CheckTypeSize(GtkFunction,4, 13381, 2, 3.1, NULL, 11542, NULL)
#else
Msg("Find size of GtkFunction (13381)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11542,NULL);\n",architecture,13381,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSignalFunc,8, 13384, 12, 3.1, NULL, 10318, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSignalFunc,8, 13384, 11, 3.1, NULL, 10318, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSignalFunc,4, 13384, 10, 3.1, NULL, 10318, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSignalFunc,8, 13384, 9, 3.1, NULL, 10318, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSignalFunc,4, 13384, 6, 3.1, NULL, 10318, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSignalFunc,8, 13384, 3, 3.1, NULL, 10318, NULL)
#elif defined __i386__
CheckTypeSize(GtkSignalFunc,4, 13384, 2, 3.1, NULL, 10318, NULL)
#else
Msg("Find size of GtkSignalFunc (13384)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,10318,NULL);\n",architecture,13384,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCallbackMarshal,8, 13390, 12, 3.1, NULL, 13389, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCallbackMarshal,8, 13390, 11, 3.1, NULL, 13389, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCallbackMarshal,4, 13390, 10, 3.1, NULL, 13389, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCallbackMarshal,8, 13390, 9, 3.1, NULL, 13389, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCallbackMarshal,4, 13390, 6, 3.1, NULL, 13389, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCallbackMarshal,8, 13390, 3, 3.1, NULL, 13389, NULL)
#elif defined __i386__
CheckTypeSize(GtkCallbackMarshal,4, 13390, 2, 3.1, NULL, 13389, NULL)
#else
Msg("Find size of GtkCallbackMarshal (13390)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13389,NULL);\n",architecture,13390,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuShell,152, 13394, 12, 3.1, NULL, 13393, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuShell,152, 13394, 11, 3.1, NULL, 13393, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuShell,92, 13394, 10, 3.1, NULL, 13393, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuShell,152, 13394, 9, 3.1, NULL, 13393, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuShell,92, 13394, 6, 3.1, NULL, 13393, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuShell,152, 13394, 3, 3.1, NULL, 13393, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuShell,92, 13394, 2, 3.1, NULL, 13393, NULL)
#else
Msg("Find size of GtkMenuShell (13394)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13393,NULL);\n",architecture,13394,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenu,296, 13395, 12, 3.1, NULL, 13392, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenu,296, 13395, 11, 3.1, NULL, 13392, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenu,176, 13395, 10, 3.1, NULL, 13392, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenu,296, 13395, 9, 3.1, NULL, 13392, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenu,176, 13395, 6, 3.1, NULL, 13392, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenu,296, 13395, 3, 3.1, NULL, 13392, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenu,176, 13395, 2, 3.1, NULL, 13392, NULL)
#else
Msg("Find size of GtkMenu (13395)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13392,NULL);\n",architecture,13395,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuPositionFunc,8, 13398, 12, 3.1, NULL, 13397, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuPositionFunc,8, 13398, 11, 3.1, NULL, 13397, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuPositionFunc,4, 13398, 10, 3.1, NULL, 13397, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuPositionFunc,8, 13398, 9, 3.1, NULL, 13397, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuPositionFunc,4, 13398, 6, 3.1, NULL, 13397, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuPositionFunc,8, 13398, 3, 3.1, NULL, 13397, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuPositionFunc,4, 13398, 2, 3.1, NULL, 13397, NULL)
#else
Msg("Find size of GtkMenuPositionFunc (13398)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13397,NULL);\n",architecture,13398,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkButton,144, 13401, 12, 3.1, NULL, 13400, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkButton,144, 13401, 11, 3.1, NULL, 13400, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkButton,88, 13401, 10, 3.1, NULL, 13400, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkButton,144, 13401, 9, 3.1, NULL, 13400, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkButton,88, 13401, 6, 3.1, NULL, 13400, NULL)
#elif defined __ia64__
CheckTypeSize(GtkButton,144, 13401, 3, 3.1, NULL, 13400, NULL)
#elif defined __i386__
CheckTypeSize(GtkButton,88, 13401, 2, 3.1, NULL, 13400, NULL)
#else
Msg("Find size of GtkButton (13401)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13400,NULL);\n",architecture,13401,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToggleButton,152, 13402, 12, 3.1, NULL, 13399, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToggleButton,152, 13402, 11, 3.1, NULL, 13399, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToggleButton,92, 13402, 10, 3.1, NULL, 13399, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToggleButton,152, 13402, 9, 3.1, NULL, 13399, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToggleButton,92, 13402, 6, 3.1, NULL, 13399, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToggleButton,152, 13402, 3, 3.1, NULL, 13399, NULL)
#elif defined __i386__
CheckTypeSize(GtkToggleButton,92, 13402, 2, 3.1, NULL, 13399, NULL)
#else
Msg("Find size of GtkToggleButton (13402)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13399,NULL);\n",architecture,13402,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIconTheme,32, 13408, 12, 3.1, NULL, 13404, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIconTheme,32, 13408, 11, 3.1, NULL, 13404, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIconTheme,16, 13408, 10, 3.1, NULL, 13404, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIconTheme,32, 13408, 9, 3.1, NULL, 13404, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIconTheme,16, 13408, 6, 3.1, NULL, 13404, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIconTheme,32, 13408, 3, 3.1, NULL, 13404, NULL)
#elif defined __i386__
CheckTypeSize(GtkIconTheme,16, 13408, 2, 3.1, NULL, 13404, NULL)
#else
Msg("Find size of GtkIconTheme (13408)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13404,NULL);\n",architecture,13408,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkArrowType,4, 13411, 12, 3.1, NULL, 13410, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkArrowType,4, 13411, 11, 3.1, NULL, 13410, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkArrowType,4, 13411, 10, 3.1, NULL, 13410, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkArrowType,4, 13411, 9, 3.1, NULL, 13410, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkArrowType,4, 13411, 6, 3.1, NULL, 13410, NULL)
#elif defined __ia64__
CheckTypeSize(GtkArrowType,4, 13411, 3, 3.1, NULL, 13410, NULL)
#elif defined __i386__
CheckTypeSize(GtkArrowType,4, 13411, 2, 3.1, NULL, 13410, NULL)
#else
Msg("Find size of GtkArrowType (13411)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13410,NULL);\n",architecture,13411,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkShadowType,4, 13413, 12, 3.1, NULL, 13412, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkShadowType,4, 13413, 11, 3.1, NULL, 13412, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkShadowType,4, 13413, 10, 3.1, NULL, 13412, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkShadowType,4, 13413, 9, 3.1, NULL, 13412, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkShadowType,4, 13413, 6, 3.1, NULL, 13412, NULL)
#elif defined __ia64__
CheckTypeSize(GtkShadowType,4, 13413, 3, 3.1, NULL, 13412, NULL)
#elif defined __i386__
CheckTypeSize(GtkShadowType,4, 13413, 2, 3.1, NULL, 13412, NULL)
#else
Msg("Find size of GtkShadowType (13413)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13412,NULL);\n",architecture,13413,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextView,352, 13423, 12, 3.1, NULL, 13414, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextView,352, 13423, 11, 3.1, NULL, 13414, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextView,228, 13423, 10, 3.1, NULL, 13414, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextView,352, 13423, 9, 3.1, NULL, 13414, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextView,228, 13423, 6, 3.1, NULL, 13414, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextView,352, 13423, 3, 3.1, NULL, 13414, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextView,228, 13423, 2, 3.1, NULL, 13414, NULL)
#else
Msg("Find size of GtkTextView (13423)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13414,NULL);\n",architecture,13423,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextWindowType,4, 13426, 12, 3.1, NULL, 13425, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextWindowType,4, 13426, 11, 3.1, NULL, 13425, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextWindowType,4, 13426, 10, 3.1, NULL, 13425, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextWindowType,4, 13426, 9, 3.1, NULL, 13425, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextWindowType,4, 13426, 6, 3.1, NULL, 13425, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextWindowType,4, 13426, 3, 3.1, NULL, 13425, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextWindowType,4, 13426, 2, 3.1, NULL, 13425, NULL)
#else
Msg("Find size of GtkTextWindowType (13426)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13425,NULL);\n",architecture,13426,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkObjectClass,160, 13431, 12, 3.1, NULL, 13428, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkObjectClass,160, 13431, 11, 3.1, NULL, 13428, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkObjectClass,80, 13431, 10, 3.1, NULL, 13428, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkObjectClass,160, 13431, 9, 3.1, NULL, 13428, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkObjectClass,80, 13431, 6, 3.1, NULL, 13428, NULL)
#elif defined __ia64__
CheckTypeSize(GtkObjectClass,160, 13431, 3, 3.1, NULL, 13428, NULL)
#elif defined __i386__
CheckTypeSize(GtkObjectClass,80, 13431, 2, 3.1, NULL, 13428, NULL)
#else
Msg("Find size of GtkObjectClass (13431)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13428,NULL);\n",architecture,13431,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkDirectionType,4, 13444, 12, 3.1, NULL, 13443, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkDirectionType,4, 13444, 11, 3.1, NULL, 13443, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkDirectionType,4, 13444, 10, 3.1, NULL, 13443, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkDirectionType,4, 13444, 9, 3.1, NULL, 13443, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkDirectionType,4, 13444, 6, 3.1, NULL, 13443, NULL)
#elif defined __ia64__
CheckTypeSize(GtkDirectionType,4, 13444, 3, 3.1, NULL, 13443, NULL)
#elif defined __i386__
CheckTypeSize(GtkDirectionType,4, 13444, 2, 3.1, NULL, 13443, NULL)
#else
Msg("Find size of GtkDirectionType (13444)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13443,NULL);\n",architecture,13444,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWidgetHelpType,4, 13485, 12, 3.1, NULL, 13484, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWidgetHelpType,4, 13485, 11, 3.1, NULL, 13484, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWidgetHelpType,4, 13485, 10, 3.1, NULL, 13484, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWidgetHelpType,4, 13485, 9, 3.1, NULL, 13484, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWidgetHelpType,4, 13485, 6, 3.1, NULL, 13484, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWidgetHelpType,4, 13485, 3, 3.1, NULL, 13484, NULL)
#elif defined __i386__
CheckTypeSize(GtkWidgetHelpType,4, 13485, 2, 3.1, NULL, 13484, NULL)
#else
Msg("Find size of GtkWidgetHelpType (13485)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13484,NULL);\n",architecture,13485,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWidgetClass,720, 13490, 12, 3.1, NULL, 13427, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWidgetClass,720, 13490, 11, 3.1, NULL, 13427, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWidgetClass,364, 13490, 10, 3.1, NULL, 13427, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWidgetClass,720, 13490, 9, 3.1, NULL, 13427, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWidgetClass,364, 13490, 6, 3.1, NULL, 13427, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWidgetClass,720, 13490, 3, 3.1, NULL, 13427, NULL)
#elif defined __i386__
CheckTypeSize(GtkWidgetClass,364, 13490, 2, 3.1, NULL, 13427, NULL)
#else
Msg("Find size of GtkWidgetClass (13490)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13427,NULL);\n",architecture,13490,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRcPropertyParser,8, 13495, 12, 3.1, NULL, 13494, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRcPropertyParser,8, 13495, 11, 3.1, NULL, 13494, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRcPropertyParser,4, 13495, 10, 3.1, NULL, 13494, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRcPropertyParser,8, 13495, 9, 3.1, NULL, 13494, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRcPropertyParser,4, 13495, 6, 3.1, NULL, 13494, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRcPropertyParser,8, 13495, 3, 3.1, NULL, 13494, NULL)
#elif defined __i386__
CheckTypeSize(GtkRcPropertyParser,4, 13495, 2, 3.1, NULL, 13494, NULL)
#else
Msg("Find size of GtkRcPropertyParser (13495)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13494,NULL);\n",architecture,13495,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkImageType,4, 13498, 12, 3.1, NULL, 13497, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkImageType,4, 13498, 11, 3.1, NULL, 13497, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkImageType,4, 13498, 10, 3.1, NULL, 13497, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkImageType,4, 13498, 9, 3.1, NULL, 13497, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkImageType,4, 13498, 6, 3.1, NULL, 13497, NULL)
#elif defined __ia64__
CheckTypeSize(GtkImageType,4, 13498, 3, 3.1, NULL, 13497, NULL)
#elif defined __i386__
CheckTypeSize(GtkImageType,4, 13498, 2, 3.1, NULL, 13497, NULL)
#else
Msg("Find size of GtkImageType (13498)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13497,NULL);\n",architecture,13498,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkImagePixmapData,8, 13500, 12, 3.1, NULL, 13499, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkImagePixmapData,8, 13500, 11, 3.1, NULL, 13499, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkImagePixmapData,4, 13500, 10, 3.1, NULL, 13499, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkImagePixmapData,8, 13500, 9, 3.1, NULL, 13499, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkImagePixmapData,4, 13500, 6, 3.1, NULL, 13499, NULL)
#elif defined __ia64__
CheckTypeSize(GtkImagePixmapData,8, 13500, 3, 3.1, NULL, 13499, NULL)
#elif defined __i386__
CheckTypeSize(GtkImagePixmapData,4, 13500, 2, 3.1, NULL, 13499, NULL)
#else
Msg("Find size of GtkImagePixmapData (13500)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13499,NULL);\n",architecture,13500,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkImageImageData,8, 13502, 12, 3.1, NULL, 13501, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkImageImageData,8, 13502, 11, 3.1, NULL, 13501, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkImageImageData,4, 13502, 10, 3.1, NULL, 13501, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkImageImageData,8, 13502, 9, 3.1, NULL, 13501, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkImageImageData,4, 13502, 6, 3.1, NULL, 13501, NULL)
#elif defined __ia64__
CheckTypeSize(GtkImageImageData,8, 13502, 3, 3.1, NULL, 13501, NULL)
#elif defined __i386__
CheckTypeSize(GtkImageImageData,4, 13502, 2, 3.1, NULL, 13501, NULL)
#else
Msg("Find size of GtkImageImageData (13502)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13501,NULL);\n",architecture,13502,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkImagePixbufData,8, 13504, 12, 3.1, NULL, 13503, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkImagePixbufData,8, 13504, 11, 3.1, NULL, 13503, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkImagePixbufData,4, 13504, 10, 3.1, NULL, 13503, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkImagePixbufData,8, 13504, 9, 3.1, NULL, 13503, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkImagePixbufData,4, 13504, 6, 3.1, NULL, 13503, NULL)
#elif defined __ia64__
CheckTypeSize(GtkImagePixbufData,8, 13504, 3, 3.1, NULL, 13503, NULL)
#elif defined __i386__
CheckTypeSize(GtkImagePixbufData,4, 13504, 2, 3.1, NULL, 13503, NULL)
#else
Msg("Find size of GtkImagePixbufData (13504)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13503,NULL);\n",architecture,13504,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkImageStockData,8, 13506, 12, 3.1, NULL, 13505, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkImageStockData,8, 13506, 11, 3.1, NULL, 13505, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkImageStockData,4, 13506, 10, 3.1, NULL, 13505, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkImageStockData,8, 13506, 9, 3.1, NULL, 13505, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkImageStockData,4, 13506, 6, 3.1, NULL, 13505, NULL)
#elif defined __ia64__
CheckTypeSize(GtkImageStockData,8, 13506, 3, 3.1, NULL, 13505, NULL)
#elif defined __i386__
CheckTypeSize(GtkImageStockData,4, 13506, 2, 3.1, NULL, 13505, NULL)
#else
Msg("Find size of GtkImageStockData (13506)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13505,NULL);\n",architecture,13506,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkImageIconSetData,8, 13508, 12, 3.1, NULL, 13507, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkImageIconSetData,8, 13508, 11, 3.1, NULL, 13507, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkImageIconSetData,4, 13508, 10, 3.1, NULL, 13507, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkImageIconSetData,8, 13508, 9, 3.1, NULL, 13507, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkImageIconSetData,4, 13508, 6, 3.1, NULL, 13507, NULL)
#elif defined __ia64__
CheckTypeSize(GtkImageIconSetData,8, 13508, 3, 3.1, NULL, 13507, NULL)
#elif defined __i386__
CheckTypeSize(GtkImageIconSetData,4, 13508, 2, 3.1, NULL, 13507, NULL)
#else
Msg("Find size of GtkImageIconSetData (13508)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13507,NULL);\n",architecture,13508,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkImageAnimationData,24, 13510, 12, 3.1, NULL, 13509, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkImageAnimationData,24, 13510, 11, 3.1, NULL, 13509, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkImageAnimationData,12, 13510, 10, 3.1, NULL, 13509, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkImageAnimationData,24, 13510, 9, 3.1, NULL, 13509, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkImageAnimationData,12, 13510, 6, 3.1, NULL, 13509, NULL)
#elif defined __ia64__
CheckTypeSize(GtkImageAnimationData,24, 13510, 3, 3.1, NULL, 13509, NULL)
#elif defined __i386__
CheckTypeSize(GtkImageAnimationData,12, 13510, 2, 3.1, NULL, 13509, NULL)
#else
Msg("Find size of GtkImageAnimationData (13510)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13509,NULL);\n",architecture,13510,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkImageIconNameData,24, 13512, 12, 3.1, NULL, 13511, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkImageIconNameData,24, 13512, 11, 3.1, NULL, 13511, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkImageIconNameData,12, 13512, 10, 3.1, NULL, 13511, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkImageIconNameData,24, 13512, 9, 3.1, NULL, 13511, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkImageIconNameData,12, 13512, 6, 3.1, NULL, 13511, NULL)
#elif defined __ia64__
CheckTypeSize(GtkImageIconNameData,24, 13512, 3, 3.1, NULL, 13511, NULL)
#elif defined __i386__
CheckTypeSize(GtkImageIconNameData,12, 13512, 2, 3.1, NULL, 13511, NULL)
#else
Msg("Find size of GtkImageIconNameData (13512)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13511,NULL);\n",architecture,13512,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIconSize,4, 13515, 12, 3.1, NULL, 13514, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIconSize,4, 13515, 11, 3.1, NULL, 13514, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIconSize,4, 13515, 10, 3.1, NULL, 13514, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIconSize,4, 13515, 9, 3.1, NULL, 13514, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIconSize,4, 13515, 6, 3.1, NULL, 13514, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIconSize,4, 13515, 3, 3.1, NULL, 13514, NULL)
#elif defined __i386__
CheckTypeSize(GtkIconSize,4, 13515, 2, 3.1, NULL, 13514, NULL)
#else
Msg("Find size of GtkIconSize (13515)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13514,NULL);\n",architecture,13515,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkImage,160, 13516, 12, 3.1, NULL, 13496, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkImage,160, 13516, 11, 3.1, NULL, 13496, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkImage,96, 13516, 10, 3.1, NULL, 13496, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkImage,160, 13516, 9, 3.1, NULL, 13496, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkImage,96, 13516, 6, 3.1, NULL, 13496, NULL)
#elif defined __ia64__
CheckTypeSize(GtkImage,160, 13516, 3, 3.1, NULL, 13496, NULL)
#elif defined __i386__
CheckTypeSize(GtkImage,96, 13516, 2, 3.1, NULL, 13496, NULL)
#else
Msg("Find size of GtkImage (13516)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13496,NULL);\n",architecture,13516,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeView,120, 13522, 12, 3.1, NULL, 13518, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeView,120, 13522, 11, 3.1, NULL, 13518, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeView,72, 13522, 10, 3.1, NULL, 13518, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeView,120, 13522, 9, 3.1, NULL, 13518, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeView,72, 13522, 6, 3.1, NULL, 13518, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeView,120, 13522, 3, 3.1, NULL, 13518, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeView,72, 13522, 2, 3.1, NULL, 13518, NULL)
#else
Msg("Find size of GtkTreeView (13522)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13518,NULL);\n",architecture,13522,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSpinButtonUpdatePolicy,4, 13526, 12, 3.1, NULL, 13525, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSpinButtonUpdatePolicy,4, 13526, 11, 3.1, NULL, 13525, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSpinButtonUpdatePolicy,4, 13526, 10, 3.1, NULL, 13525, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSpinButtonUpdatePolicy,4, 13526, 9, 3.1, NULL, 13525, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSpinButtonUpdatePolicy,4, 13526, 6, 3.1, NULL, 13525, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSpinButtonUpdatePolicy,4, 13526, 3, 3.1, NULL, 13525, NULL)
#elif defined __i386__
CheckTypeSize(GtkSpinButtonUpdatePolicy,4, 13526, 2, 3.1, NULL, 13525, NULL)
#else
Msg("Find size of GtkSpinButtonUpdatePolicy (13526)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13525,NULL);\n",architecture,13526,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSpinButton,256, 13527, 12, 3.1, NULL, 13524, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSpinButton,256, 13527, 11, 3.1, NULL, 13524, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSpinButton,192, 13527, 10, 3.1, NULL, 13524, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSpinButton,256, 13527, 9, 3.1, NULL, 13524, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSpinButton,192, 13527, 6, 3.1, NULL, 13524, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSpinButton,256, 13527, 3, 3.1, NULL, 13524, NULL)
#elif defined __i386__
CheckTypeSize(GtkSpinButton,188, 13527, 2, 3.1, NULL, 13524, NULL)
#else
Msg("Find size of GtkSpinButton (13527)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13524,NULL);\n",architecture,13527,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileSelection,440, 13533, 12, 3.1, NULL, 13532, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileSelection,440, 13533, 11, 3.1, NULL, 13532, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileSelection,248, 13533, 10, 3.1, NULL, 13532, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileSelection,440, 13533, 9, 3.1, NULL, 13532, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileSelection,248, 13533, 6, 3.1, NULL, 13532, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileSelection,440, 13533, 3, 3.1, NULL, 13532, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileSelection,248, 13533, 2, 3.1, NULL, 13532, NULL)
#else
Msg("Find size of GtkFileSelection (13533)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13532,NULL);\n",architecture,13533,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTooltips,96, 13537, 12, 3.1, NULL, 13535, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTooltips,96, 13537, 11, 3.1, NULL, 13535, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTooltips,52, 13537, 10, 3.1, NULL, 13535, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTooltips,96, 13537, 9, 3.1, NULL, 13535, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTooltips,52, 13537, 6, 3.1, NULL, 13535, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTooltips,96, 13537, 3, 3.1, NULL, 13535, NULL)
#elif defined __i386__
CheckTypeSize(GtkTooltips,52, 13537, 2, 3.1, NULL, 13535, NULL)
#else
Msg("Find size of GtkTooltips (13537)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13535,NULL);\n",architecture,13537,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTooltipsData,32, 13539, 12, 3.1, NULL, 13536, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTooltipsData,32, 13539, 11, 3.1, NULL, 13536, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTooltipsData,16, 13539, 10, 3.1, NULL, 13536, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTooltipsData,32, 13539, 9, 3.1, NULL, 13536, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTooltipsData,16, 13539, 6, 3.1, NULL, 13536, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTooltipsData,32, 13539, 3, 3.1, NULL, 13536, NULL)
#elif defined __i386__
CheckTypeSize(GtkTooltipsData,16, 13539, 2, 3.1, NULL, 13536, NULL)
#else
Msg("Find size of GtkTooltipsData (13539)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13536,NULL);\n",architecture,13539,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeViewRowSeparatorFunc,8, 13542, 12, 3.1, NULL, 13541, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeViewRowSeparatorFunc,8, 13542, 11, 3.1, NULL, 13541, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeViewRowSeparatorFunc,4, 13542, 10, 3.1, NULL, 13541, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeViewRowSeparatorFunc,8, 13542, 9, 3.1, NULL, 13541, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeViewRowSeparatorFunc,4, 13542, 6, 3.1, NULL, 13541, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeViewRowSeparatorFunc,8, 13542, 3, 3.1, NULL, 13541, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeViewRowSeparatorFunc,4, 13542, 2, 3.1, NULL, 13541, NULL)
#else
Msg("Find size of GtkTreeViewRowSeparatorFunc (13542)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13541,NULL);\n",architecture,13542,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkEntryCompletion,32, 13547, 12, 3.1, NULL, 13543, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkEntryCompletion,32, 13547, 11, 3.1, NULL, 13543, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkEntryCompletion,16, 13547, 10, 3.1, NULL, 13543, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkEntryCompletion,32, 13547, 9, 3.1, NULL, 13543, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkEntryCompletion,16, 13547, 6, 3.1, NULL, 13543, NULL)
#elif defined __ia64__
CheckTypeSize(GtkEntryCompletion,32, 13547, 3, 3.1, NULL, 13543, NULL)
#elif defined __i386__
CheckTypeSize(GtkEntryCompletion,16, 13547, 2, 3.1, NULL, 13543, NULL)
#else
Msg("Find size of GtkEntryCompletion (13547)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13543,NULL);\n",architecture,13547,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeModelFilter,32, 13556, 12, 3.1, NULL, 13552, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeModelFilter,32, 13556, 11, 3.1, NULL, 13552, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeModelFilter,16, 13556, 10, 3.1, NULL, 13552, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeModelFilter,32, 13556, 9, 3.1, NULL, 13552, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeModelFilter,16, 13556, 6, 3.1, NULL, 13552, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeModelFilter,32, 13556, 3, 3.1, NULL, 13552, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeModelFilter,16, 13556, 2, 3.1, NULL, 13552, NULL)
#else
Msg("Find size of GtkTreeModelFilter (13556)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13552,NULL);\n",architecture,13556,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeModelSort,120, 13559, 12, 3.1, NULL, 13558, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeModelSort,120, 13559, 11, 3.1, NULL, 13558, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeModelSort,76, 13559, 10, 3.1, NULL, 13558, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeModelSort,120, 13559, 9, 3.1, NULL, 13558, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeModelSort,76, 13559, 6, 3.1, NULL, 13558, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeModelSort,120, 13559, 3, 3.1, NULL, 13558, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeModelSort,76, 13559, 2, 3.1, NULL, 13558, NULL)
#else
Msg("Find size of GtkTreeModelSort (13559)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13558,NULL);\n",architecture,13559,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeCellDataFunc,8, 13562, 12, 3.1, NULL, 13561, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeCellDataFunc,8, 13562, 11, 3.1, NULL, 13561, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeCellDataFunc,4, 13562, 10, 3.1, NULL, 13561, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeCellDataFunc,8, 13562, 9, 3.1, NULL, 13561, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeCellDataFunc,4, 13562, 6, 3.1, NULL, 13561, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeCellDataFunc,8, 13562, 3, 3.1, NULL, 13561, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeCellDataFunc,4, 13562, 2, 3.1, NULL, 13561, NULL)
#else
Msg("Find size of GtkTreeCellDataFunc (13562)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13561,NULL);\n",architecture,13562,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkColorButton,152, 13567, 12, 3.1, NULL, 13563, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkColorButton,152, 13567, 11, 3.1, NULL, 13563, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkColorButton,92, 13567, 10, 3.1, NULL, 13563, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkColorButton,152, 13567, 9, 3.1, NULL, 13563, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkColorButton,92, 13567, 6, 3.1, NULL, 13563, NULL)
#elif defined __ia64__
CheckTypeSize(GtkColorButton,152, 13567, 3, 3.1, NULL, 13563, NULL)
#elif defined __i386__
CheckTypeSize(GtkColorButton,92, 13567, 2, 3.1, NULL, 13563, NULL)
#else
Msg("Find size of GtkColorButton (13567)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13563,NULL);\n",architecture,13567,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileChooserAction,4, 13570, 12, 3.1, NULL, 13569, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileChooserAction,4, 13570, 11, 3.1, NULL, 13569, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileChooserAction,4, 13570, 10, 3.1, NULL, 13569, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileChooserAction,4, 13570, 9, 3.1, NULL, 13569, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileChooserAction,4, 13570, 6, 3.1, NULL, 13569, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileChooserAction,4, 13570, 3, 3.1, NULL, 13569, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileChooserAction,4, 13570, 2, 3.1, NULL, 13569, NULL)
#else
Msg("Find size of GtkFileChooserAction (13570)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13569,NULL);\n",architecture,13570,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCallback,8, 13572, 12, 3.1, NULL, 13571, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCallback,8, 13572, 11, 3.1, NULL, 13571, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCallback,4, 13572, 10, 3.1, NULL, 13571, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCallback,8, 13572, 9, 3.1, NULL, 13571, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCallback,4, 13572, 6, 3.1, NULL, 13571, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCallback,8, 13572, 3, 3.1, NULL, 13571, NULL)
#elif defined __i386__
CheckTypeSize(GtkCallback,4, 13572, 2, 3.1, NULL, 13571, NULL)
#else
Msg("Find size of GtkCallback (13572)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13571,NULL);\n",architecture,13572,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHandleBox,184, 13575, 12, 3.1, NULL, 13574, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHandleBox,184, 13575, 11, 3.1, NULL, 13574, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHandleBox,128, 13575, 10, 3.1, NULL, 13574, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHandleBox,184, 13575, 9, 3.1, NULL, 13574, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHandleBox,128, 13575, 6, 3.1, NULL, 13574, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHandleBox,184, 13575, 3, 3.1, NULL, 13574, NULL)
#elif defined __i386__
CheckTypeSize(GtkHandleBox,128, 13575, 2, 3.1, NULL, 13574, NULL)
#else
Msg("Find size of GtkHandleBox (13575)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13574,NULL);\n",architecture,13575,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSelectionMode,4, 13578, 12, 3.1, NULL, 13577, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSelectionMode,4, 13578, 11, 3.1, NULL, 13577, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSelectionMode,4, 13578, 10, 3.1, NULL, 13577, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSelectionMode,4, 13578, 9, 3.1, NULL, 13577, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSelectionMode,4, 13578, 6, 3.1, NULL, 13577, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSelectionMode,4, 13578, 3, 3.1, NULL, 13577, NULL)
#elif defined __i386__
CheckTypeSize(GtkSelectionMode,4, 13578, 2, 3.1, NULL, 13577, NULL)
#else
Msg("Find size of GtkSelectionMode (13578)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13577,NULL);\n",architecture,13578,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkActionGroup,32, 13584, 12, 3.1, NULL, 13580, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkActionGroup,32, 13584, 11, 3.1, NULL, 13580, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkActionGroup,16, 13584, 10, 3.1, NULL, 13580, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkActionGroup,32, 13584, 9, 3.1, NULL, 13580, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkActionGroup,16, 13584, 6, 3.1, NULL, 13580, NULL)
#elif defined __ia64__
CheckTypeSize(GtkActionGroup,32, 13584, 3, 3.1, NULL, 13580, NULL)
#elif defined __i386__
CheckTypeSize(GtkActionGroup,16, 13584, 2, 3.1, NULL, 13580, NULL)
#else
Msg("Find size of GtkActionGroup (13584)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13580,NULL);\n",architecture,13584,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkBindingSet,64, 13588, 12, 3.1, NULL, 13586, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkBindingSet,64, 13588, 11, 3.1, NULL, 13586, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkBindingSet,32, 13588, 10, 3.1, NULL, 13586, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkBindingSet,64, 13588, 9, 3.1, NULL, 13586, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkBindingSet,32, 13588, 6, 3.1, NULL, 13586, NULL)
#elif defined __ia64__
CheckTypeSize(GtkBindingSet,64, 13588, 3, 3.1, NULL, 13586, NULL)
#elif defined __i386__
CheckTypeSize(GtkBindingSet,32, 13588, 2, 3.1, NULL, 13586, NULL)
#else
Msg("Find size of GtkBindingSet (13588)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13586,NULL);\n",architecture,13588,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkBindingEntry,48, 13590, 12, 3.1, NULL, 13587, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkBindingEntry,48, 13590, 11, 3.1, NULL, 13587, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkBindingEntry,28, 13590, 10, 3.1, NULL, 13587, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkBindingEntry,48, 13590, 9, 3.1, NULL, 13587, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkBindingEntry,28, 13590, 6, 3.1, NULL, 13587, NULL)
#elif defined __ia64__
CheckTypeSize(GtkBindingEntry,48, 13590, 3, 3.1, NULL, 13587, NULL)
#elif defined __i386__
CheckTypeSize(GtkBindingEntry,28, 13590, 2, 3.1, NULL, 13587, NULL)
#else
Msg("Find size of GtkBindingEntry (13590)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13587,NULL);\n",architecture,13590,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkBindingSignal,32, 13593, 12, 3.1, NULL, 13592, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkBindingSignal,32, 13593, 11, 3.1, NULL, 13592, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkBindingSignal,16, 13593, 10, 3.1, NULL, 13592, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkBindingSignal,32, 13593, 9, 3.1, NULL, 13592, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkBindingSignal,16, 13593, 6, 3.1, NULL, 13592, NULL)
#elif defined __ia64__
CheckTypeSize(GtkBindingSignal,32, 13593, 3, 3.1, NULL, 13592, NULL)
#elif defined __i386__
CheckTypeSize(GtkBindingSignal,16, 13593, 2, 3.1, NULL, 13592, NULL)
#else
Msg("Find size of GtkBindingSignal (13593)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13592,NULL);\n",architecture,13593,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkBindingArg,16, 13597, 12, 3.1, NULL, 13595, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkBindingArg,16, 13597, 11, 3.1, NULL, 13595, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkBindingArg,16, 13597, 10, 3.1, NULL, 13595, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkBindingArg,16, 13597, 9, 3.1, NULL, 13595, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkBindingArg,16, 13597, 6, 3.1, NULL, 13595, NULL)
#elif defined __ia64__
CheckTypeSize(GtkBindingArg,16, 13597, 3, 3.1, NULL, 13595, NULL)
#elif defined __i386__
CheckTypeSize(GtkBindingArg,12, 13597, 2, 3.1, NULL, 13595, NULL)
#else
Msg("Find size of GtkBindingArg (13597)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13595,NULL);\n",architecture,13597,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkScrolledWindow,144, 13601, 12, 3.1, NULL, 13600, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkScrolledWindow,144, 13601, 11, 3.1, NULL, 13600, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkScrolledWindow,84, 13601, 10, 3.1, NULL, 13600, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkScrolledWindow,144, 13601, 9, 3.1, NULL, 13600, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkScrolledWindow,84, 13601, 6, 3.1, NULL, 13600, NULL)
#elif defined __ia64__
CheckTypeSize(GtkScrolledWindow,144, 13601, 3, 3.1, NULL, 13600, NULL)
#elif defined __i386__
CheckTypeSize(GtkScrolledWindow,84, 13601, 2, 3.1, NULL, 13600, NULL)
#else
Msg("Find size of GtkScrolledWindow (13601)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13600,NULL);\n",architecture,13601,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCornerType,4, 13604, 12, 3.1, NULL, 13603, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCornerType,4, 13604, 11, 3.1, NULL, 13603, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCornerType,4, 13604, 10, 3.1, NULL, 13603, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCornerType,4, 13604, 9, 3.1, NULL, 13603, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCornerType,4, 13604, 6, 3.1, NULL, 13603, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCornerType,4, 13604, 3, 3.1, NULL, 13603, NULL)
#elif defined __i386__
CheckTypeSize(GtkCornerType,4, 13604, 2, 3.1, NULL, 13603, NULL)
#else
Msg("Find size of GtkCornerType (13604)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13603,NULL);\n",architecture,13604,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFrame,160, 13606, 12, 3.1, NULL, 13605, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFrame,160, 13606, 11, 3.1, NULL, 13605, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFrame,104, 13606, 10, 3.1, NULL, 13605, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFrame,160, 13606, 9, 3.1, NULL, 13605, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFrame,104, 13606, 6, 3.1, NULL, 13605, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFrame,160, 13606, 3, 3.1, NULL, 13605, NULL)
#elif defined __i386__
CheckTypeSize(GtkFrame,104, 13606, 2, 3.1, NULL, 13605, NULL)
#else
Msg("Find size of GtkFrame (13606)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13605,NULL);\n",architecture,13606,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextChildAnchor,32, 13609, 12, 3.1, NULL, 13608, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextChildAnchor,32, 13609, 11, 3.1, NULL, 13608, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextChildAnchor,16, 13609, 10, 3.1, NULL, 13608, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextChildAnchor,32, 13609, 9, 3.1, NULL, 13608, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextChildAnchor,16, 13609, 6, 3.1, NULL, 13608, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextChildAnchor,32, 13609, 3, 3.1, NULL, 13608, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextChildAnchor,16, 13609, 2, 3.1, NULL, 13608, NULL)
#else
Msg("Find size of GtkTextChildAnchor (13609)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13608,NULL);\n",architecture,13609,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSeparatorToolItem,136, 13615, 12, 3.1, NULL, 13611, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSeparatorToolItem,136, 13615, 11, 3.1, NULL, 13611, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSeparatorToolItem,80, 13615, 10, 3.1, NULL, 13611, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSeparatorToolItem,136, 13615, 9, 3.1, NULL, 13611, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSeparatorToolItem,80, 13615, 6, 3.1, NULL, 13611, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSeparatorToolItem,136, 13615, 3, 3.1, NULL, 13611, NULL)
#elif defined __i386__
CheckTypeSize(GtkSeparatorToolItem,80, 13615, 2, 3.1, NULL, 13611, NULL)
#else
Msg("Find size of GtkSeparatorToolItem (13615)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13611,NULL);\n",architecture,13615,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeSelection,64, 13618, 12, 3.1, NULL, 13617, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeSelection,64, 13618, 11, 3.1, NULL, 13617, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeSelection,32, 13618, 10, 3.1, NULL, 13617, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeSelection,64, 13618, 9, 3.1, NULL, 13617, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeSelection,32, 13618, 6, 3.1, NULL, 13617, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeSelection,64, 13618, 3, 3.1, NULL, 13617, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeSelection,32, 13618, 2, 3.1, NULL, 13617, NULL)
#else
Msg("Find size of GtkTreeSelection (13618)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13617,NULL);\n",architecture,13618,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeSelectionFunc,8, 13621, 12, 3.1, NULL, 13620, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeSelectionFunc,8, 13621, 11, 3.1, NULL, 13620, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeSelectionFunc,4, 13621, 10, 3.1, NULL, 13620, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeSelectionFunc,8, 13621, 9, 3.1, NULL, 13620, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeSelectionFunc,4, 13621, 6, 3.1, NULL, 13620, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeSelectionFunc,8, 13621, 3, 3.1, NULL, 13620, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeSelectionFunc,4, 13621, 2, 3.1, NULL, 13620, NULL)
#else
Msg("Find size of GtkTreeSelectionFunc (13621)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13620,NULL);\n",architecture,13621,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkExpander,128, 13626, 12, 3.1, NULL, 13622, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkExpander,128, 13626, 11, 3.1, NULL, 13622, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkExpander,76, 13626, 10, 3.1, NULL, 13622, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkExpander,128, 13626, 9, 3.1, NULL, 13622, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkExpander,76, 13626, 6, 3.1, NULL, 13622, NULL)
#elif defined __ia64__
CheckTypeSize(GtkExpander,128, 13626, 3, 3.1, NULL, 13622, NULL)
#elif defined __i386__
CheckTypeSize(GtkExpander,76, 13626, 2, 3.1, NULL, 13622, NULL)
#else
Msg("Find size of GtkExpander (13626)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13622,NULL);\n",architecture,13626,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPositionType,4, 13629, 12, 3.1, NULL, 13628, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPositionType,4, 13629, 11, 3.1, NULL, 13628, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPositionType,4, 13629, 10, 3.1, NULL, 13628, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPositionType,4, 13629, 9, 3.1, NULL, 13628, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPositionType,4, 13629, 6, 3.1, NULL, 13628, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPositionType,4, 13629, 3, 3.1, NULL, 13628, NULL)
#elif defined __i386__
CheckTypeSize(GtkPositionType,4, 13629, 2, 3.1, NULL, 13628, NULL)
#else
Msg("Find size of GtkPositionType (13629)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13628,NULL);\n",architecture,13629,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkUIManagerItemType,4, 13631, 12, 3.1, NULL, 13630, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkUIManagerItemType,4, 13631, 11, 3.1, NULL, 13630, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkUIManagerItemType,4, 13631, 10, 3.1, NULL, 13630, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkUIManagerItemType,4, 13631, 9, 3.1, NULL, 13630, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkUIManagerItemType,4, 13631, 6, 3.1, NULL, 13630, NULL)
#elif defined __ia64__
CheckTypeSize(GtkUIManagerItemType,4, 13631, 3, 3.1, NULL, 13630, NULL)
#elif defined __i386__
CheckTypeSize(GtkUIManagerItemType,4, 13631, 2, 3.1, NULL, 13630, NULL)
#else
Msg("Find size of GtkUIManagerItemType (13631)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13630,NULL);\n",architecture,13631,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFontSelectionDialog,320, 13633, 12, 3.1, NULL, 13632, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFontSelectionDialog,320, 13633, 11, 3.1, NULL, 13632, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFontSelectionDialog,192, 13633, 10, 3.1, NULL, 13632, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFontSelectionDialog,320, 13633, 9, 3.1, NULL, 13632, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFontSelectionDialog,192, 13633, 6, 3.1, NULL, 13632, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFontSelectionDialog,320, 13633, 3, 3.1, NULL, 13632, NULL)
#elif defined __i386__
CheckTypeSize(GtkFontSelectionDialog,192, 13633, 2, 3.1, NULL, 13632, NULL)
#else
Msg("Find size of GtkFontSelectionDialog (13633)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13632,NULL);\n",architecture,13633,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPaned,216, 13639, 12, 3.1, NULL, 13635, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPaned,216, 13639, 11, 3.1, NULL, 13635, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPaned,144, 13639, 10, 3.1, NULL, 13635, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPaned,216, 13639, 9, 3.1, NULL, 13635, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPaned,144, 13639, 6, 3.1, NULL, 13635, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPaned,216, 13639, 3, 3.1, NULL, 13635, NULL)
#elif defined __i386__
CheckTypeSize(GtkPaned,144, 13639, 2, 3.1, NULL, 13635, NULL)
#else
Msg("Find size of GtkPaned (13639)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13635,NULL);\n",architecture,13639,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkViewport,160, 13644, 12, 3.1, NULL, 13643, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkViewport,160, 13644, 11, 3.1, NULL, 13643, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkViewport,92, 13644, 10, 3.1, NULL, 13643, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkViewport,160, 13644, 9, 3.1, NULL, 13643, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkViewport,92, 13644, 6, 3.1, NULL, 13643, NULL)
#elif defined __ia64__
CheckTypeSize(GtkViewport,160, 13644, 3, 3.1, NULL, 13643, NULL)
#elif defined __i386__
CheckTypeSize(GtkViewport,92, 13644, 2, 3.1, NULL, 13643, NULL)
#else
Msg("Find size of GtkViewport (13644)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13643,NULL);\n",architecture,13644,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkScale,200, 13647, 12, 3.1, NULL, 13646, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkScale,200, 13647, 11, 3.1, NULL, 13646, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkScale,144, 13647, 10, 3.1, NULL, 13646, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkScale,200, 13647, 9, 3.1, NULL, 13646, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkScale,144, 13647, 6, 3.1, NULL, 13646, NULL)
#elif defined __ia64__
CheckTypeSize(GtkScale,200, 13647, 3, 3.1, NULL, 13646, NULL)
#elif defined __i386__
CheckTypeSize(GtkScale,144, 13647, 2, 3.1, NULL, 13646, NULL)
#else
Msg("Find size of GtkScale (13647)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13646,NULL);\n",architecture,13647,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkListStore,120, 13650, 12, 3.1, NULL, 13649, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkListStore,120, 13650, 11, 3.1, NULL, 13649, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkListStore,64, 13650, 10, 3.1, NULL, 13649, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkListStore,120, 13650, 9, 3.1, NULL, 13649, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkListStore,64, 13650, 6, 3.1, NULL, 13649, NULL)
#elif defined __ia64__
CheckTypeSize(GtkListStore,120, 13650, 3, 3.1, NULL, 13649, NULL)
#elif defined __i386__
CheckTypeSize(GtkListStore,64, 13650, 2, 3.1, NULL, 13649, NULL)
#else
Msg("Find size of GtkListStore (13650)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13649,NULL);\n",architecture,13650,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkClipboardGetFunc,8, 13657, 12, 3.1, NULL, 13656, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkClipboardGetFunc,8, 13657, 11, 3.1, NULL, 13656, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkClipboardGetFunc,4, 13657, 10, 3.1, NULL, 13656, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkClipboardGetFunc,8, 13657, 9, 3.1, NULL, 13656, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkClipboardGetFunc,4, 13657, 6, 3.1, NULL, 13656, NULL)
#elif defined __ia64__
CheckTypeSize(GtkClipboardGetFunc,8, 13657, 3, 3.1, NULL, 13656, NULL)
#elif defined __i386__
CheckTypeSize(GtkClipboardGetFunc,4, 13657, 2, 3.1, NULL, 13656, NULL)
#else
Msg("Find size of GtkClipboardGetFunc (13657)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13656,NULL);\n",architecture,13657,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkClipboardClearFunc,8, 13659, 12, 3.1, NULL, 13658, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkClipboardClearFunc,8, 13659, 11, 3.1, NULL, 13658, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkClipboardClearFunc,4, 13659, 10, 3.1, NULL, 13658, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkClipboardClearFunc,8, 13659, 9, 3.1, NULL, 13658, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkClipboardClearFunc,4, 13659, 6, 3.1, NULL, 13658, NULL)
#elif defined __ia64__
CheckTypeSize(GtkClipboardClearFunc,8, 13659, 3, 3.1, NULL, 13658, NULL)
#elif defined __i386__
CheckTypeSize(GtkClipboardClearFunc,4, 13659, 2, 3.1, NULL, 13658, NULL)
#else
Msg("Find size of GtkClipboardClearFunc (13659)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13658,NULL);\n",architecture,13659,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRadioActionEntry,48, 13663, 12, 3.1, NULL, 13662, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRadioActionEntry,48, 13663, 11, 3.1, NULL, 13662, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRadioActionEntry,24, 13663, 10, 3.1, NULL, 13662, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRadioActionEntry,48, 13663, 9, 3.1, NULL, 13662, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRadioActionEntry,24, 13663, 6, 3.1, NULL, 13662, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRadioActionEntry,48, 13663, 3, 3.1, NULL, 13662, NULL)
#elif defined __i386__
CheckTypeSize(GtkRadioActionEntry,24, 13663, 2, 3.1, NULL, 13662, NULL)
#else
Msg("Find size of GtkRadioActionEntry (13663)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13662,NULL);\n",architecture,13663,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeViewColumnDropFunc,8, 13667, 12, 3.1, NULL, 13666, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeViewColumnDropFunc,8, 13667, 11, 3.1, NULL, 13666, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeViewColumnDropFunc,4, 13667, 10, 3.1, NULL, 13666, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeViewColumnDropFunc,8, 13667, 9, 3.1, NULL, 13666, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeViewColumnDropFunc,4, 13667, 6, 3.1, NULL, 13666, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeViewColumnDropFunc,8, 13667, 3, 3.1, NULL, 13666, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeViewColumnDropFunc,4, 13667, 2, 3.1, NULL, 13666, NULL)
#else
Msg("Find size of GtkTreeViewColumnDropFunc (13667)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13666,NULL);\n",architecture,13667,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkEventBox,120, 13669, 12, 3.1, NULL, 13668, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkEventBox,120, 13669, 11, 3.1, NULL, 13668, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkEventBox,72, 13669, 10, 3.1, NULL, 13668, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkEventBox,120, 13669, 9, 3.1, NULL, 13668, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkEventBox,72, 13669, 6, 3.1, NULL, 13668, NULL)
#elif defined __ia64__
CheckTypeSize(GtkEventBox,120, 13669, 3, 3.1, NULL, 13668, NULL)
#elif defined __i386__
CheckTypeSize(GtkEventBox,72, 13669, 2, 3.1, NULL, 13668, NULL)
#else
Msg("Find size of GtkEventBox (13669)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13668,NULL);\n",architecture,13669,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToggleActionEntry,56, 13675, 12, 3.1, NULL, 13674, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToggleActionEntry,56, 13675, 11, 3.1, NULL, 13674, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToggleActionEntry,28, 13675, 10, 3.1, NULL, 13674, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToggleActionEntry,56, 13675, 9, 3.1, NULL, 13674, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToggleActionEntry,28, 13675, 6, 3.1, NULL, 13674, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToggleActionEntry,56, 13675, 3, 3.1, NULL, 13674, NULL)
#elif defined __i386__
CheckTypeSize(GtkToggleActionEntry,28, 13675, 2, 3.1, NULL, 13674, NULL)
#else
Msg("Find size of GtkToggleActionEntry (13675)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13674,NULL);\n",architecture,13675,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAccelLabel,232, 13679, 12, 3.1, NULL, 13678, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAccelLabel,232, 13679, 11, 3.1, NULL, 13678, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAccelLabel,140, 13679, 10, 3.1, NULL, 13678, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAccelLabel,232, 13679, 9, 3.1, NULL, 13678, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAccelLabel,140, 13679, 6, 3.1, NULL, 13678, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAccelLabel,232, 13679, 3, 3.1, NULL, 13678, NULL)
#elif defined __i386__
CheckTypeSize(GtkAccelLabel,140, 13679, 2, 3.1, NULL, 13678, NULL)
#else
Msg("Find size of GtkAccelLabel (13679)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13678,NULL);\n",architecture,13679,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkImageMenuItem,168, 13682, 12, 3.1, NULL, 13681, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkImageMenuItem,168, 13682, 11, 3.1, NULL, 13681, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkImageMenuItem,100, 13682, 10, 3.1, NULL, 13681, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkImageMenuItem,168, 13682, 9, 3.1, NULL, 13681, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkImageMenuItem,100, 13682, 6, 3.1, NULL, 13681, NULL)
#elif defined __ia64__
CheckTypeSize(GtkImageMenuItem,168, 13682, 3, 3.1, NULL, 13681, NULL)
#elif defined __i386__
CheckTypeSize(GtkImageMenuItem,100, 13682, 2, 3.1, NULL, 13681, NULL)
#else
Msg("Find size of GtkImageMenuItem (13682)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13681,NULL);\n",architecture,13682,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPlug,280, 13685, 12, 3.1, NULL, 13684, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPlug,280, 13685, 11, 3.1, NULL, 13684, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPlug,168, 13685, 10, 3.1, NULL, 13684, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPlug,280, 13685, 9, 3.1, NULL, 13684, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPlug,168, 13685, 6, 3.1, NULL, 13684, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPlug,280, 13685, 3, 3.1, NULL, 13684, NULL)
#elif defined __i386__
CheckTypeSize(GtkPlug,168, 13685, 2, 3.1, NULL, 13684, NULL)
#else
Msg("Find size of GtkPlug (13685)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13684,NULL);\n",architecture,13685,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileChooserButton,136, 13691, 12, 3.1, NULL, 13687, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileChooserButton,136, 13691, 11, 3.1, NULL, 13687, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileChooserButton,80, 13691, 10, 3.1, NULL, 13687, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileChooserButton,136, 13691, 9, 3.1, NULL, 13687, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileChooserButton,80, 13691, 6, 3.1, NULL, 13687, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileChooserButton,136, 13691, 3, 3.1, NULL, 13687, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileChooserButton,80, 13691, 2, 3.1, NULL, 13687, NULL)
#else
Msg("Find size of GtkFileChooserButton (13691)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13687,NULL);\n",architecture,13691,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkStockItem,32, 13694, 12, 3.1, NULL, 13693, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkStockItem,32, 13694, 11, 3.1, NULL, 13693, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkStockItem,20, 13694, 10, 3.1, NULL, 13693, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkStockItem,32, 13694, 9, 3.1, NULL, 13693, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkStockItem,20, 13694, 6, 3.1, NULL, 13693, NULL)
#elif defined __ia64__
CheckTypeSize(GtkStockItem,32, 13694, 3, 3.1, NULL, 13693, NULL)
#elif defined __i386__
CheckTypeSize(GtkStockItem,20, 13694, 2, 3.1, NULL, 13693, NULL)
#else
Msg("Find size of GtkStockItem (13694)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13693,NULL);\n",architecture,13694,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTranslateFunc,8, 13697, 12, 3.1, NULL, 13696, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTranslateFunc,8, 13697, 11, 3.1, NULL, 13696, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTranslateFunc,4, 13697, 10, 3.1, NULL, 13696, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTranslateFunc,8, 13697, 9, 3.1, NULL, 13696, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTranslateFunc,4, 13697, 6, 3.1, NULL, 13696, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTranslateFunc,8, 13697, 3, 3.1, NULL, 13696, NULL)
#elif defined __i386__
CheckTypeSize(GtkTranslateFunc,4, 13697, 2, 3.1, NULL, 13696, NULL)
#else
Msg("Find size of GtkTranslateFunc (13697)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13696,NULL);\n",architecture,13697,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToolbarStyle,4, 13700, 12, 3.1, NULL, 13699, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToolbarStyle,4, 13700, 11, 3.1, NULL, 13699, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToolbarStyle,4, 13700, 10, 3.1, NULL, 13699, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToolbarStyle,4, 13700, 9, 3.1, NULL, 13699, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToolbarStyle,4, 13700, 6, 3.1, NULL, 13699, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToolbarStyle,4, 13700, 3, 3.1, NULL, 13699, NULL)
#elif defined __i386__
CheckTypeSize(GtkToolbarStyle,4, 13700, 2, 3.1, NULL, 13699, NULL)
#else
Msg("Find size of GtkToolbarStyle (13700)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13699,NULL);\n",architecture,13700,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToolbar,176, 13701, 12, 3.1, NULL, 13698, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToolbar,176, 13701, 11, 3.1, NULL, 13698, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToolbar,112, 13701, 10, 3.1, NULL, 13698, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToolbar,176, 13701, 9, 3.1, NULL, 13698, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToolbar,112, 13701, 6, 3.1, NULL, 13698, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToolbar,176, 13701, 3, 3.1, NULL, 13698, NULL)
#elif defined __i386__
CheckTypeSize(GtkToolbar,112, 13701, 2, 3.1, NULL, 13698, NULL)
#else
Msg("Find size of GtkToolbar (13701)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13698,NULL);\n",architecture,13701,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellLayoutDataFunc,8, 13704, 12, 3.1, NULL, 13703, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellLayoutDataFunc,8, 13704, 11, 3.1, NULL, 13703, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellLayoutDataFunc,4, 13704, 10, 3.1, NULL, 13703, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellLayoutDataFunc,8, 13704, 9, 3.1, NULL, 13703, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellLayoutDataFunc,4, 13704, 6, 3.1, NULL, 13703, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellLayoutDataFunc,8, 13704, 3, 3.1, NULL, 13703, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellLayoutDataFunc,4, 13704, 2, 3.1, NULL, 13703, NULL)
#else
Msg("Find size of GtkCellLayoutDataFunc (13704)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13703,NULL);\n",architecture,13704,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererToggle,64, 13709, 12, 3.1, NULL, 13708, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererToggle,64, 13709, 11, 3.1, NULL, 13708, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererToggle,44, 13709, 10, 3.1, NULL, 13708, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererToggle,64, 13709, 9, 3.1, NULL, 13708, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererToggle,44, 13709, 6, 3.1, NULL, 13708, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererToggle,64, 13709, 3, 3.1, NULL, 13708, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererToggle,44, 13709, 2, 3.1, NULL, 13708, NULL)
#else
Msg("Find size of GtkCellRendererToggle (13709)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13708,NULL);\n",architecture,13709,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkReliefStyle,4, 13712, 12, 3.1, NULL, 13711, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkReliefStyle,4, 13712, 11, 3.1, NULL, 13711, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkReliefStyle,4, 13712, 10, 3.1, NULL, 13711, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkReliefStyle,4, 13712, 9, 3.1, NULL, 13711, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkReliefStyle,4, 13712, 6, 3.1, NULL, 13711, NULL)
#elif defined __ia64__
CheckTypeSize(GtkReliefStyle,4, 13712, 3, 3.1, NULL, 13711, NULL)
#elif defined __i386__
CheckTypeSize(GtkReliefStyle,4, 13712, 2, 3.1, NULL, 13711, NULL)
#else
Msg("Find size of GtkReliefStyle (13712)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13711,NULL);\n",architecture,13712,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkClipboardImageReceivedFunc,8, 13715, 12, 3.1, NULL, 13714, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkClipboardImageReceivedFunc,8, 13715, 11, 3.1, NULL, 13714, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkClipboardImageReceivedFunc,4, 13715, 10, 3.1, NULL, 13714, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkClipboardImageReceivedFunc,8, 13715, 9, 3.1, NULL, 13714, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkClipboardImageReceivedFunc,4, 13715, 6, 3.1, NULL, 13714, NULL)
#elif defined __ia64__
CheckTypeSize(GtkClipboardImageReceivedFunc,8, 13715, 3, 3.1, NULL, 13714, NULL)
#elif defined __i386__
CheckTypeSize(GtkClipboardImageReceivedFunc,4, 13715, 2, 3.1, NULL, 13714, NULL)
#else
Msg("Find size of GtkClipboardImageReceivedFunc (13715)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13714,NULL);\n",architecture,13715,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererState,4, 13717, 12, 3.1, NULL, 13716, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererState,4, 13717, 11, 3.1, NULL, 13716, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererState,4, 13717, 10, 3.1, NULL, 13716, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererState,4, 13717, 9, 3.1, NULL, 13716, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererState,4, 13717, 6, 3.1, NULL, 13716, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererState,4, 13717, 3, 3.1, NULL, 13716, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererState,4, 13717, 2, 3.1, NULL, 13716, NULL)
#else
Msg("Find size of GtkCellRendererState (13717)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13716,NULL);\n",architecture,13717,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkActionEntry,48, 13719, 12, 3.1, NULL, 13718, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkActionEntry,48, 13719, 11, 3.1, NULL, 13718, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkActionEntry,24, 13719, 10, 3.1, NULL, 13718, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkActionEntry,48, 13719, 9, 3.1, NULL, 13718, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkActionEntry,24, 13719, 6, 3.1, NULL, 13718, NULL)
#elif defined __ia64__
CheckTypeSize(GtkActionEntry,48, 13719, 3, 3.1, NULL, 13718, NULL)
#elif defined __i386__
CheckTypeSize(GtkActionEntry,24, 13719, 2, 3.1, NULL, 13718, NULL)
#else
Msg("Find size of GtkActionEntry (13719)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13718,NULL);\n",architecture,13719,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCheckButton,152, 13724, 12, 3.1, NULL, 13723, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCheckButton,152, 13724, 11, 3.1, NULL, 13723, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCheckButton,92, 13724, 10, 3.1, NULL, 13723, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCheckButton,152, 13724, 9, 3.1, NULL, 13723, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCheckButton,92, 13724, 6, 3.1, NULL, 13723, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCheckButton,152, 13724, 3, 3.1, NULL, 13723, NULL)
#elif defined __i386__
CheckTypeSize(GtkCheckButton,92, 13724, 2, 3.1, NULL, 13723, NULL)
#else
Msg("Find size of GtkCheckButton (13724)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13723,NULL);\n",architecture,13724,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRadioButton,160, 13725, 12, 3.1, NULL, 13722, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRadioButton,160, 13725, 11, 3.1, NULL, 13722, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRadioButton,96, 13725, 10, 3.1, NULL, 13722, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRadioButton,160, 13725, 9, 3.1, NULL, 13722, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRadioButton,96, 13725, 6, 3.1, NULL, 13722, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRadioButton,160, 13725, 3, 3.1, NULL, 13722, NULL)
#elif defined __i386__
CheckTypeSize(GtkRadioButton,96, 13725, 2, 3.1, NULL, 13722, NULL)
#else
Msg("Find size of GtkRadioButton (13725)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13722,NULL);\n",architecture,13725,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAlignment,136, 13729, 12, 3.1, NULL, 13728, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAlignment,136, 13729, 11, 3.1, NULL, 13728, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAlignment,88, 13729, 10, 3.1, NULL, 13728, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAlignment,136, 13729, 9, 3.1, NULL, 13728, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAlignment,88, 13729, 6, 3.1, NULL, 13728, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAlignment,136, 13729, 3, 3.1, NULL, 13728, NULL)
#elif defined __i386__
CheckTypeSize(GtkAlignment,88, 13729, 2, 3.1, NULL, 13728, NULL)
#else
Msg("Find size of GtkAlignment (13729)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13728,NULL);\n",architecture,13729,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkContainerClass,824, 13739, 12, 3.1, NULL, 13731, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkContainerClass,824, 13739, 11, 3.1, NULL, 13731, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkContainerClass,416, 13739, 10, 3.1, NULL, 13731, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkContainerClass,824, 13739, 9, 3.1, NULL, 13731, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkContainerClass,416, 13739, 6, 3.1, NULL, 13731, NULL)
#elif defined __ia64__
CheckTypeSize(GtkContainerClass,824, 13739, 3, 3.1, NULL, 13731, NULL)
#elif defined __i386__
CheckTypeSize(GtkContainerClass,416, 13739, 2, 3.1, NULL, 13731, NULL)
#else
Msg("Find size of GtkContainerClass (13739)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13731,NULL);\n",architecture,13739,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFontButton,152, 13745, 12, 3.1, NULL, 13741, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFontButton,152, 13745, 11, 3.1, NULL, 13741, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFontButton,92, 13745, 10, 3.1, NULL, 13741, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFontButton,152, 13745, 9, 3.1, NULL, 13741, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFontButton,92, 13745, 6, 3.1, NULL, 13741, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFontButton,152, 13745, 3, 3.1, NULL, 13741, NULL)
#elif defined __i386__
CheckTypeSize(GtkFontButton,92, 13745, 2, 3.1, NULL, 13741, NULL)
#else
Msg("Find size of GtkFontButton (13745)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13741,NULL);\n",architecture,13745,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkBorder,16, 13748, 12, 3.1, NULL, 13747, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkBorder,16, 13748, 11, 3.1, NULL, 13747, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkBorder,16, 13748, 10, 3.1, NULL, 13747, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkBorder,16, 13748, 9, 3.1, NULL, 13747, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkBorder,16, 13748, 6, 3.1, NULL, 13747, NULL)
#elif defined __ia64__
CheckTypeSize(GtkBorder,16, 13748, 3, 3.1, NULL, 13747, NULL)
#elif defined __i386__
CheckTypeSize(GtkBorder,16, 13748, 2, 3.1, NULL, 13747, NULL)
#else
Msg("Find size of GtkBorder (13748)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13747,NULL);\n",architecture,13748,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMessageDialog,280, 13751, 12, 3.1, NULL, 13750, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMessageDialog,280, 13751, 11, 3.1, NULL, 13750, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMessageDialog,168, 13751, 10, 3.1, NULL, 13750, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMessageDialog,280, 13751, 9, 3.1, NULL, 13750, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMessageDialog,168, 13751, 6, 3.1, NULL, 13750, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMessageDialog,280, 13751, 3, 3.1, NULL, 13750, NULL)
#elif defined __i386__
CheckTypeSize(GtkMessageDialog,168, 13751, 2, 3.1, NULL, 13750, NULL)
#else
Msg("Find size of GtkMessageDialog (13751)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13750,NULL);\n",architecture,13751,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRulerMetric,128, 13757, 12, 3.1, NULL, 13754, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRulerMetric,128, 13757, 11, 3.1, NULL, 13754, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRulerMetric,120, 13757, 10, 3.1, NULL, 13754, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRulerMetric,128, 13757, 9, 3.1, NULL, 13754, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRulerMetric,120, 13757, 6, 3.1, NULL, 13754, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRulerMetric,128, 13757, 3, 3.1, NULL, 13754, NULL)
#elif defined __i386__
CheckTypeSize(GtkRulerMetric,116, 13757, 2, 3.1, NULL, 13754, NULL)
#else
Msg("Find size of GtkRulerMetric (13757)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13754,NULL);\n",architecture,13757,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRuler,168, 13759, 12, 3.1, NULL, 13753, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRuler,168, 13759, 11, 3.1, NULL, 13753, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRuler,120, 13759, 10, 3.1, NULL, 13753, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRuler,168, 13759, 9, 3.1, NULL, 13753, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRuler,120, 13759, 6, 3.1, NULL, 13753, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRuler,168, 13759, 3, 3.1, NULL, 13753, NULL)
#elif defined __i386__
CheckTypeSize(GtkRuler,116, 13759, 2, 3.1, NULL, 13753, NULL)
#else
Msg("Find size of GtkRuler (13759)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13753,NULL);\n",architecture,13759,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAccelFlags,4, 13762, 12, 3.1, NULL, 13761, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAccelFlags,4, 13762, 11, 3.1, NULL, 13761, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAccelFlags,4, 13762, 10, 3.1, NULL, 13761, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAccelFlags,4, 13762, 9, 3.1, NULL, 13761, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAccelFlags,4, 13762, 6, 3.1, NULL, 13761, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAccelFlags,4, 13762, 3, 3.1, NULL, 13761, NULL)
#elif defined __i386__
CheckTypeSize(GtkAccelFlags,4, 13762, 2, 3.1, NULL, 13761, NULL)
#else
Msg("Find size of GtkAccelFlags (13762)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13761,NULL);\n",architecture,13762,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextCharPredicate,8, 13764, 12, 3.1, NULL, 13763, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextCharPredicate,8, 13764, 11, 3.1, NULL, 13763, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextCharPredicate,4, 13764, 10, 3.1, NULL, 13763, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextCharPredicate,8, 13764, 9, 3.1, NULL, 13763, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextCharPredicate,4, 13764, 6, 3.1, NULL, 13763, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextCharPredicate,8, 13764, 3, 3.1, NULL, 13763, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextCharPredicate,4, 13764, 2, 3.1, NULL, 13763, NULL)
#else
Msg("Find size of GtkTextCharPredicate (13764)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13763,NULL);\n",architecture,13764,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuToolButton,144, 13769, 12, 3.1, NULL, 13765, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuToolButton,144, 13769, 11, 3.1, NULL, 13765, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuToolButton,84, 13769, 10, 3.1, NULL, 13765, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuToolButton,144, 13769, 9, 3.1, NULL, 13765, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuToolButton,84, 13769, 6, 3.1, NULL, 13765, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuToolButton,144, 13769, 3, 3.1, NULL, 13765, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuToolButton,84, 13769, 2, 3.1, NULL, 13765, NULL)
#else
Msg("Find size of GtkMenuToolButton (13769)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13765,NULL);\n",architecture,13769,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToggleToolButton,144, 13776, 12, 3.1, NULL, 13772, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToggleToolButton,144, 13776, 11, 3.1, NULL, 13772, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToggleToolButton,84, 13776, 10, 3.1, NULL, 13772, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToggleToolButton,144, 13776, 9, 3.1, NULL, 13772, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToggleToolButton,84, 13776, 6, 3.1, NULL, 13772, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToggleToolButton,144, 13776, 3, 3.1, NULL, 13772, NULL)
#elif defined __i386__
CheckTypeSize(GtkToggleToolButton,84, 13776, 2, 3.1, NULL, 13772, NULL)
#else
Msg("Find size of GtkToggleToolButton (13776)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13772,NULL);\n",architecture,13776,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRadioToolButton,144, 13777, 12, 3.1, NULL, 13771, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRadioToolButton,144, 13777, 11, 3.1, NULL, 13771, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRadioToolButton,84, 13777, 10, 3.1, NULL, 13771, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRadioToolButton,144, 13777, 9, 3.1, NULL, 13771, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRadioToolButton,84, 13777, 6, 3.1, NULL, 13771, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRadioToolButton,144, 13777, 3, 3.1, NULL, 13771, NULL)
#elif defined __i386__
CheckTypeSize(GtkRadioToolButton,84, 13777, 2, 3.1, NULL, 13771, NULL)
#else
Msg("Find size of GtkRadioToolButton (13777)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13771,NULL);\n",architecture,13777,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSizeGroup,48, 13780, 12, 3.1, NULL, 13779, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSizeGroup,48, 13780, 11, 3.1, NULL, 13779, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSizeGroup,28, 13780, 10, 3.1, NULL, 13779, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSizeGroup,48, 13780, 9, 3.1, NULL, 13779, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSizeGroup,28, 13780, 6, 3.1, NULL, 13779, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSizeGroup,48, 13780, 3, 3.1, NULL, 13779, NULL)
#elif defined __i386__
CheckTypeSize(GtkSizeGroup,28, 13780, 2, 3.1, NULL, 13779, NULL)
#else
Msg("Find size of GtkSizeGroup (13780)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13779,NULL);\n",architecture,13780,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSizeGroupMode,4, 13783, 12, 3.1, NULL, 13782, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSizeGroupMode,4, 13783, 11, 3.1, NULL, 13782, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSizeGroupMode,4, 13783, 10, 3.1, NULL, 13782, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSizeGroupMode,4, 13783, 9, 3.1, NULL, 13782, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSizeGroupMode,4, 13783, 6, 3.1, NULL, 13782, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSizeGroupMode,4, 13783, 3, 3.1, NULL, 13782, NULL)
#elif defined __i386__
CheckTypeSize(GtkSizeGroupMode,4, 13783, 2, 3.1, NULL, 13782, NULL)
#else
Msg("Find size of GtkSizeGroupMode (13783)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13782,NULL);\n",architecture,13783,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkDialogFlags,4, 13785, 12, 3.1, NULL, 13784, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkDialogFlags,4, 13785, 11, 3.1, NULL, 13784, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkDialogFlags,4, 13785, 10, 3.1, NULL, 13784, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkDialogFlags,4, 13785, 9, 3.1, NULL, 13784, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkDialogFlags,4, 13785, 6, 3.1, NULL, 13784, NULL)
#elif defined __ia64__
CheckTypeSize(GtkDialogFlags,4, 13785, 3, 3.1, NULL, 13784, NULL)
#elif defined __i386__
CheckTypeSize(GtkDialogFlags,4, 13785, 2, 3.1, NULL, 13784, NULL)
#else
Msg("Find size of GtkDialogFlags (13785)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13784,NULL);\n",architecture,13785,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeSelectionForeachFunc,8, 13787, 12, 3.1, NULL, 13786, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeSelectionForeachFunc,8, 13787, 11, 3.1, NULL, 13786, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeSelectionForeachFunc,4, 13787, 10, 3.1, NULL, 13786, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeSelectionForeachFunc,8, 13787, 9, 3.1, NULL, 13786, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeSelectionForeachFunc,4, 13787, 6, 3.1, NULL, 13786, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeSelectionForeachFunc,8, 13787, 3, 3.1, NULL, 13786, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeSelectionForeachFunc,4, 13787, 2, 3.1, NULL, 13786, NULL)
#else
Msg("Find size of GtkTreeSelectionForeachFunc (13787)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13786,NULL);\n",architecture,13787,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIconLookupFlags,4, 13789, 12, 3.1, NULL, 13788, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIconLookupFlags,4, 13789, 11, 3.1, NULL, 13788, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIconLookupFlags,4, 13789, 10, 3.1, NULL, 13788, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIconLookupFlags,4, 13789, 9, 3.1, NULL, 13788, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIconLookupFlags,4, 13789, 6, 3.1, NULL, 13788, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIconLookupFlags,4, 13789, 3, 3.1, NULL, 13788, NULL)
#elif defined __i386__
CheckTypeSize(GtkIconLookupFlags,4, 13789, 2, 3.1, NULL, 13788, NULL)
#else
Msg("Find size of GtkIconLookupFlags (13789)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13788,NULL);\n",architecture,13789,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeViewSearchEqualFunc,8, 13791, 12, 3.1, NULL, 13790, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeViewSearchEqualFunc,8, 13791, 11, 3.1, NULL, 13790, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeViewSearchEqualFunc,4, 13791, 10, 3.1, NULL, 13790, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeViewSearchEqualFunc,8, 13791, 9, 3.1, NULL, 13790, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeViewSearchEqualFunc,4, 13791, 6, 3.1, NULL, 13790, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeViewSearchEqualFunc,8, 13791, 3, 3.1, NULL, 13790, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeViewSearchEqualFunc,4, 13791, 2, 3.1, NULL, 13790, NULL)
#else
Msg("Find size of GtkTreeViewSearchEqualFunc (13791)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13790,NULL);\n",architecture,13791,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMetricType,4, 13793, 12, 3.1, NULL, 13792, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMetricType,4, 13793, 11, 3.1, NULL, 13792, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMetricType,4, 13793, 10, 3.1, NULL, 13792, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMetricType,4, 13793, 9, 3.1, NULL, 13792, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMetricType,4, 13793, 6, 3.1, NULL, 13792, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMetricType,4, 13793, 3, 3.1, NULL, 13792, NULL)
#elif defined __i386__
CheckTypeSize(GtkMetricType,4, 13793, 2, 3.1, NULL, 13792, NULL)
#else
Msg("Find size of GtkMetricType (13793)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13792,NULL);\n",architecture,13793,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIMContextSimple,80, 13796, 12, 3.1, NULL, 13794, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIMContextSimple,80, 13796, 11, 3.1, NULL, 13794, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIMContextSimple,60, 13796, 10, 3.1, NULL, 13794, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIMContextSimple,80, 13796, 9, 3.1, NULL, 13794, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIMContextSimple,60, 13796, 6, 3.1, NULL, 13794, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIMContextSimple,80, 13796, 3, 3.1, NULL, 13794, NULL)
#elif defined __i386__
CheckTypeSize(GtkIMContextSimple,60, 13796, 2, 3.1, NULL, 13794, NULL)
#else
Msg("Find size of GtkIMContextSimple (13796)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13794,NULL);\n",architecture,13796,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkClipboardTargetsReceivedFunc,8, 13800, 12, 3.1, NULL, 13799, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkClipboardTargetsReceivedFunc,8, 13800, 11, 3.1, NULL, 13799, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkClipboardTargetsReceivedFunc,4, 13800, 10, 3.1, NULL, 13799, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkClipboardTargetsReceivedFunc,8, 13800, 9, 3.1, NULL, 13799, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkClipboardTargetsReceivedFunc,4, 13800, 6, 3.1, NULL, 13799, NULL)
#elif defined __ia64__
CheckTypeSize(GtkClipboardTargetsReceivedFunc,8, 13800, 3, 3.1, NULL, 13799, NULL)
#elif defined __i386__
CheckTypeSize(GtkClipboardTargetsReceivedFunc,4, 13800, 2, 3.1, NULL, 13799, NULL)
#else
Msg("Find size of GtkClipboardTargetsReceivedFunc (13800)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13799,NULL);\n",architecture,13800,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAttachOptions,4, 13803, 12, 3.1, NULL, 13802, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAttachOptions,4, 13803, 11, 3.1, NULL, 13802, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAttachOptions,4, 13803, 10, 3.1, NULL, 13802, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAttachOptions,4, 13803, 9, 3.1, NULL, 13802, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAttachOptions,4, 13803, 6, 3.1, NULL, 13802, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAttachOptions,4, 13803, 3, 3.1, NULL, 13802, NULL)
#elif defined __i386__
CheckTypeSize(GtkAttachOptions,4, 13803, 2, 3.1, NULL, 13802, NULL)
#else
Msg("Find size of GtkAttachOptions (13803)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13802,NULL);\n",architecture,13803,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFontSelection,240, 13805, 12, 3.1, NULL, 13804, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFontSelection,240, 13805, 11, 3.1, NULL, 13804, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFontSelection,132, 13805, 10, 3.1, NULL, 13804, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFontSelection,240, 13805, 9, 3.1, NULL, 13804, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFontSelection,132, 13805, 6, 3.1, NULL, 13804, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFontSelection,240, 13805, 3, 3.1, NULL, 13804, NULL)
#elif defined __i386__
CheckTypeSize(GtkFontSelection,132, 13805, 2, 3.1, NULL, 13804, NULL)
#else
Msg("Find size of GtkFontSelection (13805)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13804,NULL);\n",architecture,13805,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkClipboardTextReceivedFunc,8, 13810, 12, 3.1, NULL, 13809, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkClipboardTextReceivedFunc,8, 13810, 11, 3.1, NULL, 13809, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkClipboardTextReceivedFunc,4, 13810, 10, 3.1, NULL, 13809, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkClipboardTextReceivedFunc,8, 13810, 9, 3.1, NULL, 13809, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkClipboardTextReceivedFunc,4, 13810, 6, 3.1, NULL, 13809, NULL)
#elif defined __ia64__
CheckTypeSize(GtkClipboardTextReceivedFunc,8, 13810, 3, 3.1, NULL, 13809, NULL)
#elif defined __i386__
CheckTypeSize(GtkClipboardTextReceivedFunc,4, 13810, 2, 3.1, NULL, 13809, NULL)
#else
Msg("Find size of GtkClipboardTextReceivedFunc (13810)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13809,NULL);\n",architecture,13810,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAccelGroupFindFunc,8, 13812, 12, 3.1, NULL, 13811, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAccelGroupFindFunc,8, 13812, 11, 3.1, NULL, 13811, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAccelGroupFindFunc,4, 13812, 10, 3.1, NULL, 13811, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAccelGroupFindFunc,8, 13812, 9, 3.1, NULL, 13811, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAccelGroupFindFunc,4, 13812, 6, 3.1, NULL, 13811, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAccelGroupFindFunc,8, 13812, 3, 3.1, NULL, 13811, NULL)
#elif defined __i386__
CheckTypeSize(GtkAccelGroupFindFunc,4, 13812, 2, 3.1, NULL, 13811, NULL)
#else
Msg("Find size of GtkAccelGroupFindFunc (13812)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13811,NULL);\n",architecture,13812,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeDestroyCountFunc,8, 13814, 12, 3.1, NULL, 13813, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeDestroyCountFunc,8, 13814, 11, 3.1, NULL, 13813, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeDestroyCountFunc,4, 13814, 10, 3.1, NULL, 13813, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeDestroyCountFunc,8, 13814, 9, 3.1, NULL, 13813, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeDestroyCountFunc,4, 13814, 6, 3.1, NULL, 13813, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeDestroyCountFunc,8, 13814, 3, 3.1, NULL, 13813, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeDestroyCountFunc,4, 13814, 2, 3.1, NULL, 13813, NULL)
#else
Msg("Find size of GtkTreeDestroyCountFunc (13814)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13813,NULL);\n",architecture,13814,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeViewDropPosition,4, 13817, 12, 3.1, NULL, 13816, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeViewDropPosition,4, 13817, 11, 3.1, NULL, 13816, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeViewDropPosition,4, 13817, 10, 3.1, NULL, 13816, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeViewDropPosition,4, 13817, 9, 3.1, NULL, 13816, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeViewDropPosition,4, 13817, 6, 3.1, NULL, 13816, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeViewDropPosition,4, 13817, 3, 3.1, NULL, 13816, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeViewDropPosition,4, 13817, 2, 3.1, NULL, 13816, NULL)
#else
Msg("Find size of GtkTreeViewDropPosition (13817)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13816,NULL);\n",architecture,13817,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAspectFrame,192, 13821, 12, 3.1, NULL, 13820, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAspectFrame,192, 13821, 11, 3.1, NULL, 13820, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAspectFrame,136, 13821, 10, 3.1, NULL, 13820, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAspectFrame,192, 13821, 9, 3.1, NULL, 13820, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAspectFrame,136, 13821, 6, 3.1, NULL, 13820, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAspectFrame,192, 13821, 3, 3.1, NULL, 13820, NULL)
#elif defined __i386__
CheckTypeSize(GtkAspectFrame,136, 13821, 2, 3.1, NULL, 13820, NULL)
#else
Msg("Find size of GtkAspectFrame (13821)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13820,NULL);\n",architecture,13821,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileFilterFunc,8, 13824, 12, 3.1, NULL, 13823, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileFilterFunc,8, 13824, 11, 3.1, NULL, 13823, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileFilterFunc,4, 13824, 10, 3.1, NULL, 13823, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileFilterFunc,8, 13824, 9, 3.1, NULL, 13823, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileFilterFunc,4, 13824, 6, 3.1, NULL, 13823, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileFilterFunc,8, 13824, 3, 3.1, NULL, 13823, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileFilterFunc,4, 13824, 2, 3.1, NULL, 13823, NULL)
#else
Msg("Find size of GtkFileFilterFunc (13824)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13823,NULL);\n",architecture,13824,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIMMulticontext,48, 13830, 12, 3.1, NULL, 13826, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIMMulticontext,48, 13830, 11, 3.1, NULL, 13826, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIMMulticontext,24, 13830, 10, 3.1, NULL, 13826, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIMMulticontext,48, 13830, 9, 3.1, NULL, 13826, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIMMulticontext,24, 13830, 6, 3.1, NULL, 13826, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIMMulticontext,48, 13830, 3, 3.1, NULL, 13826, NULL)
#elif defined __i386__
CheckTypeSize(GtkIMMulticontext,24, 13830, 2, 3.1, NULL, 13826, NULL)
#else
Msg("Find size of GtkIMMulticontext (13830)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13826,NULL);\n",architecture,13830,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMessageType,4, 13835, 12, 3.1, NULL, 13834, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMessageType,4, 13835, 11, 3.1, NULL, 13834, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMessageType,4, 13835, 10, 3.1, NULL, 13834, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMessageType,4, 13835, 9, 3.1, NULL, 13834, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMessageType,4, 13835, 6, 3.1, NULL, 13834, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMessageType,4, 13835, 3, 3.1, NULL, 13834, NULL)
#elif defined __i386__
CheckTypeSize(GtkMessageType,4, 13835, 2, 3.1, NULL, 13834, NULL)
#else
Msg("Find size of GtkMessageType (13835)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13834,NULL);\n",architecture,13835,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkButtonsType,4, 13837, 12, 3.1, NULL, 13836, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkButtonsType,4, 13837, 11, 3.1, NULL, 13836, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkButtonsType,4, 13837, 10, 3.1, NULL, 13836, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkButtonsType,4, 13837, 9, 3.1, NULL, 13836, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkButtonsType,4, 13837, 6, 3.1, NULL, 13836, NULL)
#elif defined __ia64__
CheckTypeSize(GtkButtonsType,4, 13837, 3, 3.1, NULL, 13836, NULL)
#elif defined __i386__
CheckTypeSize(GtkButtonsType,4, 13837, 2, 3.1, NULL, 13836, NULL)
#else
Msg("Find size of GtkButtonsType (13837)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13836,NULL);\n",architecture,13837,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAccelMapForeach,8, 13840, 12, 3.1, NULL, 13839, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAccelMapForeach,8, 13840, 11, 3.1, NULL, 13839, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAccelMapForeach,4, 13840, 10, 3.1, NULL, 13839, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAccelMapForeach,8, 13840, 9, 3.1, NULL, 13839, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAccelMapForeach,4, 13840, 6, 3.1, NULL, 13839, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAccelMapForeach,8, 13840, 3, 3.1, NULL, 13839, NULL)
#elif defined __i386__
CheckTypeSize(GtkAccelMapForeach,4, 13840, 2, 3.1, NULL, 13839, NULL)
#else
Msg("Find size of GtkAccelMapForeach (13840)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13839,NULL);\n",architecture,13840,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPolicyType,4, 13843, 12, 3.1, NULL, 13842, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPolicyType,4, 13843, 11, 3.1, NULL, 13842, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPolicyType,4, 13843, 10, 3.1, NULL, 13842, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPolicyType,4, 13843, 9, 3.1, NULL, 13842, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPolicyType,4, 13843, 6, 3.1, NULL, 13842, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPolicyType,4, 13843, 3, 3.1, NULL, 13842, NULL)
#elif defined __i386__
CheckTypeSize(GtkPolicyType,4, 13843, 2, 3.1, NULL, 13842, NULL)
#else
Msg("Find size of GtkPolicyType (13843)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13842,NULL);\n",architecture,13843,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkResizeMode,4, 13846, 12, 3.1, NULL, 13845, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkResizeMode,4, 13846, 11, 3.1, NULL, 13845, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkResizeMode,4, 13846, 10, 3.1, NULL, 13845, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkResizeMode,4, 13846, 9, 3.1, NULL, 13845, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkResizeMode,4, 13846, 6, 3.1, NULL, 13845, NULL)
#elif defined __ia64__
CheckTypeSize(GtkResizeMode,4, 13846, 3, 3.1, NULL, 13845, NULL)
#elif defined __i386__
CheckTypeSize(GtkResizeMode,4, 13846, 2, 3.1, NULL, 13845, NULL)
#else
Msg("Find size of GtkResizeMode (13846)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13845,NULL);\n",architecture,13846,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkColorSelectionChangePaletteWithScreenFunc,8, 13848, 12, 3.1, NULL, 13847, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkColorSelectionChangePaletteWithScreenFunc,8, 13848, 11, 3.1, NULL, 13847, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkColorSelectionChangePaletteWithScreenFunc,4, 13848, 10, 3.1, NULL, 13847, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkColorSelectionChangePaletteWithScreenFunc,8, 13848, 9, 3.1, NULL, 13847, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkColorSelectionChangePaletteWithScreenFunc,4, 13848, 6, 3.1, NULL, 13847, NULL)
#elif defined __ia64__
CheckTypeSize(GtkColorSelectionChangePaletteWithScreenFunc,8, 13848, 3, 3.1, NULL, 13847, NULL)
#elif defined __i386__
CheckTypeSize(GtkColorSelectionChangePaletteWithScreenFunc,4, 13848, 2, 3.1, NULL, 13847, NULL)
#else
Msg("Find size of GtkColorSelectionChangePaletteWithScreenFunc (13848)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13847,NULL);\n",architecture,13848,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkClipboardReceivedFunc,8, 13850, 12, 3.1, NULL, 13849, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkClipboardReceivedFunc,8, 13850, 11, 3.1, NULL, 13849, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkClipboardReceivedFunc,4, 13850, 10, 3.1, NULL, 13849, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkClipboardReceivedFunc,8, 13850, 9, 3.1, NULL, 13849, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkClipboardReceivedFunc,4, 13850, 6, 3.1, NULL, 13849, NULL)
#elif defined __ia64__
CheckTypeSize(GtkClipboardReceivedFunc,8, 13850, 3, 3.1, NULL, 13849, NULL)
#elif defined __i386__
CheckTypeSize(GtkClipboardReceivedFunc,4, 13850, 2, 3.1, NULL, 13849, NULL)
#else
Msg("Find size of GtkClipboardReceivedFunc (13850)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13849,NULL);\n",architecture,13850,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeViewMappingFunc,8, 13853, 12, 3.1, NULL, 13852, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeViewMappingFunc,8, 13853, 11, 3.1, NULL, 13852, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeViewMappingFunc,4, 13853, 10, 3.1, NULL, 13852, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeViewMappingFunc,8, 13853, 9, 3.1, NULL, 13852, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeViewMappingFunc,4, 13853, 6, 3.1, NULL, 13852, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeViewMappingFunc,8, 13853, 3, 3.1, NULL, 13852, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeViewMappingFunc,4, 13853, 2, 3.1, NULL, 13852, NULL)
#else
Msg("Find size of GtkTreeViewMappingFunc (13853)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13852,NULL);\n",architecture,13853,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeModelFilterVisibleFunc,8, 13854, 12, 3.1, NULL, 13541, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeModelFilterVisibleFunc,8, 13854, 11, 3.1, NULL, 13541, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeModelFilterVisibleFunc,4, 13854, 10, 3.1, NULL, 13541, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeModelFilterVisibleFunc,8, 13854, 9, 3.1, NULL, 13541, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeModelFilterVisibleFunc,4, 13854, 6, 3.1, NULL, 13541, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeModelFilterVisibleFunc,8, 13854, 3, 3.1, NULL, 13541, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeModelFilterVisibleFunc,4, 13854, 2, 3.1, NULL, 13541, NULL)
#else
Msg("Find size of GtkTreeModelFilterVisibleFunc (13854)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13541,NULL);\n",architecture,13854,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextSearchFlags,4, 13856, 12, 3.1, NULL, 13855, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextSearchFlags,4, 13856, 11, 3.1, NULL, 13855, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextSearchFlags,4, 13856, 10, 3.1, NULL, 13855, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextSearchFlags,4, 13856, 9, 3.1, NULL, 13855, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextSearchFlags,4, 13856, 6, 3.1, NULL, 13855, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextSearchFlags,4, 13856, 3, 3.1, NULL, 13855, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextSearchFlags,4, 13856, 2, 3.1, NULL, 13855, NULL)
#else
Msg("Find size of GtkTextSearchFlags (13856)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13855,NULL);\n",architecture,13856,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFixed,120, 13858, 12, 3.1, NULL, 13857, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFixed,120, 13858, 11, 3.1, NULL, 13857, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFixed,72, 13858, 10, 3.1, NULL, 13857, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFixed,120, 13858, 9, 3.1, NULL, 13857, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFixed,72, 13858, 6, 3.1, NULL, 13857, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFixed,120, 13858, 3, 3.1, NULL, 13857, NULL)
#elif defined __i386__
CheckTypeSize(GtkFixed,72, 13858, 2, 3.1, NULL, 13857, NULL)
#else
Msg("Find size of GtkFixed (13858)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13857,NULL);\n",architecture,13858,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkDestDefaults,4, 13861, 12, 3.1, NULL, 13860, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkDestDefaults,4, 13861, 11, 3.1, NULL, 13860, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkDestDefaults,4, 13861, 10, 3.1, NULL, 13860, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkDestDefaults,4, 13861, 9, 3.1, NULL, 13860, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkDestDefaults,4, 13861, 6, 3.1, NULL, 13860, NULL)
#elif defined __ia64__
CheckTypeSize(GtkDestDefaults,4, 13861, 3, 3.1, NULL, 13860, NULL)
#elif defined __i386__
CheckTypeSize(GtkDestDefaults,4, 13861, 2, 3.1, NULL, 13860, NULL)
#else
Msg("Find size of GtkDestDefaults (13861)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13860,NULL);\n",architecture,13861,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkKeySnoopFunc,8, 13863, 12, 3.1, NULL, 13862, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkKeySnoopFunc,8, 13863, 11, 3.1, NULL, 13862, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkKeySnoopFunc,4, 13863, 10, 3.1, NULL, 13862, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkKeySnoopFunc,8, 13863, 9, 3.1, NULL, 13862, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkKeySnoopFunc,4, 13863, 6, 3.1, NULL, 13862, NULL)
#elif defined __ia64__
CheckTypeSize(GtkKeySnoopFunc,8, 13863, 3, 3.1, NULL, 13862, NULL)
#elif defined __i386__
CheckTypeSize(GtkKeySnoopFunc,4, 13863, 2, 3.1, NULL, 13862, NULL)
#else
Msg("Find size of GtkKeySnoopFunc (13863)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13862,NULL);\n",architecture,13863,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSpinType,4, 13865, 12, 3.1, NULL, 13864, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSpinType,4, 13865, 11, 3.1, NULL, 13864, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSpinType,4, 13865, 10, 3.1, NULL, 13864, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSpinType,4, 13865, 9, 3.1, NULL, 13864, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSpinType,4, 13865, 6, 3.1, NULL, 13864, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSpinType,4, 13865, 3, 3.1, NULL, 13864, NULL)
#elif defined __i386__
CheckTypeSize(GtkSpinType,4, 13865, 2, 3.1, NULL, 13864, NULL)
#else
Msg("Find size of GtkSpinType (13865)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13864,NULL);\n",architecture,13865,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWindowType,4, 13867, 12, 3.1, NULL, 13866, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWindowType,4, 13867, 11, 3.1, NULL, 13866, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWindowType,4, 13867, 10, 3.1, NULL, 13866, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWindowType,4, 13867, 9, 3.1, NULL, 13866, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWindowType,4, 13867, 6, 3.1, NULL, 13866, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWindowType,4, 13867, 3, 3.1, NULL, 13866, NULL)
#elif defined __i386__
CheckTypeSize(GtkWindowType,4, 13867, 2, 3.1, NULL, 13866, NULL)
#else
Msg("Find size of GtkWindowType (13867)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13866,NULL);\n",architecture,13867,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuDetachFunc,8, 13870, 12, 3.1, NULL, 13869, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuDetachFunc,8, 13870, 11, 3.1, NULL, 13869, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuDetachFunc,4, 13870, 10, 3.1, NULL, 13869, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuDetachFunc,8, 13870, 9, 3.1, NULL, 13869, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuDetachFunc,4, 13870, 6, 3.1, NULL, 13869, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuDetachFunc,8, 13870, 3, 3.1, NULL, 13869, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuDetachFunc,4, 13870, 2, 3.1, NULL, 13869, NULL)
#else
Msg("Find size of GtkMenuDetachFunc (13870)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13869,NULL);\n",architecture,13870,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkInvisible,112, 13872, 12, 3.1, NULL, 13871, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkInvisible,112, 13872, 11, 3.1, NULL, 13871, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkInvisible,68, 13872, 10, 3.1, NULL, 13871, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkInvisible,112, 13872, 9, 3.1, NULL, 13871, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkInvisible,68, 13872, 6, 3.1, NULL, 13871, NULL)
#elif defined __ia64__
CheckTypeSize(GtkInvisible,112, 13872, 3, 3.1, NULL, 13871, NULL)
#elif defined __i386__
CheckTypeSize(GtkInvisible,68, 13872, 2, 3.1, NULL, 13871, NULL)
#else
Msg("Find size of GtkInvisible (13872)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13871,NULL);\n",architecture,13872,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWindowPosition,4, 13875, 12, 3.1, NULL, 13874, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWindowPosition,4, 13875, 11, 3.1, NULL, 13874, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWindowPosition,4, 13875, 10, 3.1, NULL, 13874, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWindowPosition,4, 13875, 9, 3.1, NULL, 13874, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWindowPosition,4, 13875, 6, 3.1, NULL, 13874, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWindowPosition,4, 13875, 3, 3.1, NULL, 13874, NULL)
#elif defined __i386__
CheckTypeSize(GtkWindowPosition,4, 13875, 2, 3.1, NULL, 13874, NULL)
#else
Msg("Find size of GtkWindowPosition (13875)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13874,NULL);\n",architecture,13875,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextTagTableForeach,8, 13877, 12, 3.1, NULL, 13876, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextTagTableForeach,8, 13877, 11, 3.1, NULL, 13876, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextTagTableForeach,4, 13877, 10, 3.1, NULL, 13876, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextTagTableForeach,8, 13877, 9, 3.1, NULL, 13876, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextTagTableForeach,4, 13877, 6, 3.1, NULL, 13876, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextTagTableForeach,8, 13877, 3, 3.1, NULL, 13876, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextTagTableForeach,4, 13877, 2, 3.1, NULL, 13876, NULL)
#else
Msg("Find size of GtkTextTagTableForeach (13877)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13876,NULL);\n",architecture,13877,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkEntryCompletionMatchFunc,8, 13880, 12, 3.1, NULL, 13879, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkEntryCompletionMatchFunc,8, 13880, 11, 3.1, NULL, 13879, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkEntryCompletionMatchFunc,4, 13880, 10, 3.1, NULL, 13879, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkEntryCompletionMatchFunc,8, 13880, 9, 3.1, NULL, 13879, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkEntryCompletionMatchFunc,4, 13880, 6, 3.1, NULL, 13879, NULL)
#elif defined __ia64__
CheckTypeSize(GtkEntryCompletionMatchFunc,8, 13880, 3, 3.1, NULL, 13879, NULL)
#elif defined __i386__
CheckTypeSize(GtkEntryCompletionMatchFunc,4, 13880, 2, 3.1, NULL, 13879, NULL)
#else
Msg("Find size of GtkEntryCompletionMatchFunc (13880)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13879,NULL);\n",architecture,13880,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAccessible,80, 13882, 12, 3.1, NULL, 13881, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAccessible,80, 13882, 11, 3.1, NULL, 13881, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAccessible,40, 13882, 10, 3.1, NULL, 13881, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAccessible,80, 13882, 9, 3.1, NULL, 13881, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAccessible,40, 13882, 6, 3.1, NULL, 13881, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAccessible,80, 13882, 3, 3.1, NULL, 13881, NULL)
#elif defined __i386__
CheckTypeSize(GtkAccessible,40, 13882, 2, 3.1, NULL, 13881, NULL)
#else
Msg("Find size of GtkAccessible (13882)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13881,NULL);\n",architecture,13882,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkExpanderStyle,4, 13885, 12, 3.1, NULL, 13884, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkExpanderStyle,4, 13885, 11, 3.1, NULL, 13884, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkExpanderStyle,4, 13885, 10, 3.1, NULL, 13884, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkExpanderStyle,4, 13885, 9, 3.1, NULL, 13884, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkExpanderStyle,4, 13885, 6, 3.1, NULL, 13884, NULL)
#elif defined __ia64__
CheckTypeSize(GtkExpanderStyle,4, 13885, 3, 3.1, NULL, 13884, NULL)
#elif defined __i386__
CheckTypeSize(GtkExpanderStyle,4, 13885, 2, 3.1, NULL, 13884, NULL)
#else
Msg("Find size of GtkExpanderStyle (13885)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13884,NULL);\n",architecture,13885,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPathPriorityType,4, 13887, 12, 3.1, NULL, 13886, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPathPriorityType,4, 13887, 11, 3.1, NULL, 13886, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPathPriorityType,4, 13887, 10, 3.1, NULL, 13886, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPathPriorityType,4, 13887, 9, 3.1, NULL, 13886, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPathPriorityType,4, 13887, 6, 3.1, NULL, 13886, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPathPriorityType,4, 13887, 3, 3.1, NULL, 13886, NULL)
#elif defined __i386__
CheckTypeSize(GtkPathPriorityType,4, 13887, 2, 3.1, NULL, 13886, NULL)
#else
Msg("Find size of GtkPathPriorityType (13887)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13886,NULL);\n",architecture,13887,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkArrow,120, 13890, 12, 3.1, NULL, 13889, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkArrow,120, 13890, 11, 3.1, NULL, 13889, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkArrow,76, 13890, 10, 3.1, NULL, 13889, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkArrow,120, 13890, 9, 3.1, NULL, 13889, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkArrow,76, 13890, 6, 3.1, NULL, 13889, NULL)
#elif defined __ia64__
CheckTypeSize(GtkArrow,120, 13890, 3, 3.1, NULL, 13889, NULL)
#elif defined __i386__
CheckTypeSize(GtkArrow,76, 13890, 2, 3.1, NULL, 13889, NULL)
#else
Msg("Find size of GtkArrow (13890)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13889,NULL);\n",architecture,13890,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIconViewForeachFunc,8, 13893, 12, 3.1, NULL, 13892, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIconViewForeachFunc,8, 13893, 11, 3.1, NULL, 13892, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIconViewForeachFunc,4, 13893, 10, 3.1, NULL, 13892, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIconViewForeachFunc,8, 13893, 9, 3.1, NULL, 13892, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIconViewForeachFunc,4, 13893, 6, 3.1, NULL, 13892, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIconViewForeachFunc,8, 13893, 3, 3.1, NULL, 13892, NULL)
#elif defined __i386__
CheckTypeSize(GtkIconViewForeachFunc,4, 13893, 2, 3.1, NULL, 13892, NULL)
#else
Msg("Find size of GtkIconViewForeachFunc (13893)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13892,NULL);\n",architecture,13893,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeModelFilterModifyFunc,8, 13896, 12, 3.1, NULL, 13895, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeModelFilterModifyFunc,8, 13896, 11, 3.1, NULL, 13895, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeModelFilterModifyFunc,4, 13896, 10, 3.1, NULL, 13895, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeModelFilterModifyFunc,8, 13896, 9, 3.1, NULL, 13895, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeModelFilterModifyFunc,4, 13896, 6, 3.1, NULL, 13895, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeModelFilterModifyFunc,8, 13896, 3, 3.1, NULL, 13895, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeModelFilterModifyFunc,4, 13896, 2, 3.1, NULL, 13895, NULL)
#else
Msg("Find size of GtkTreeModelFilterModifyFunc (13896)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13895,NULL);\n",architecture,13896,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererText,120, 13899, 12, 3.1, NULL, 13898, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererText,120, 13899, 11, 3.1, NULL, 13898, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererText,88, 13899, 10, 3.1, NULL, 13898, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererText,120, 13899, 9, 3.1, NULL, 13898, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererText,88, 13899, 6, 3.1, NULL, 13898, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererText,120, 13899, 3, 3.1, NULL, 13898, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererText,88, 13899, 2, 3.1, NULL, 13898, NULL)
#else
Msg("Find size of GtkCellRendererText (13899)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13898,NULL);\n",architecture,13899,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeModelForeachFunc,8, 13904, 12, 3.1, NULL, 13903, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeModelForeachFunc,8, 13904, 11, 3.1, NULL, 13903, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeModelForeachFunc,4, 13904, 10, 3.1, NULL, 13903, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeModelForeachFunc,8, 13904, 9, 3.1, NULL, 13903, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeModelForeachFunc,4, 13904, 6, 3.1, NULL, 13903, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeModelForeachFunc,8, 13904, 3, 3.1, NULL, 13903, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeModelForeachFunc,4, 13904, 2, 3.1, NULL, 13903, NULL)
#else
Msg("Find size of GtkTreeModelForeachFunc (13904)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13903,NULL);\n",architecture,13904,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSettingsValue,32, 13906, 12, 3.1, NULL, 13905, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSettingsValue,32, 13906, 11, 3.1, NULL, 13905, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSettingsValue,32, 13906, 10, 3.1, NULL, 13905, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSettingsValue,32, 13906, 9, 3.1, NULL, 13905, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSettingsValue,32, 13906, 6, 3.1, NULL, 13905, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSettingsValue,32, 13906, 3, 3.1, NULL, 13905, NULL)
#elif defined __i386__
CheckTypeSize(GtkSettingsValue,24, 13906, 2, 3.1, NULL, 13905, NULL)
#else
Msg("Find size of GtkSettingsValue (13906)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13905,NULL);\n",architecture,13906,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPathType,4, 13910, 12, 3.1, NULL, 13909, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPathType,4, 13910, 11, 3.1, NULL, 13909, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPathType,4, 13910, 10, 3.1, NULL, 13909, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPathType,4, 13910, 9, 3.1, NULL, 13909, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPathType,4, 13910, 6, 3.1, NULL, 13909, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPathType,4, 13910, 3, 3.1, NULL, 13909, NULL)
#elif defined __i386__
CheckTypeSize(GtkPathType,4, 13910, 2, 3.1, NULL, 13909, NULL)
#else
Msg("Find size of GtkPathType (13910)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13909,NULL);\n",architecture,13910,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkBinClass,824, 13918, 12, 3.1, NULL, 13917, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkBinClass,824, 13918, 11, 3.1, NULL, 13917, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkBinClass,416, 13918, 10, 3.1, NULL, 13917, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkBinClass,824, 13918, 9, 3.1, NULL, 13917, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkBinClass,416, 13918, 6, 3.1, NULL, 13917, NULL)
#elif defined __ia64__
CheckTypeSize(GtkBinClass,824, 13918, 3, 3.1, NULL, 13917, NULL)
#elif defined __i386__
CheckTypeSize(GtkBinClass,416, 13918, 2, 3.1, NULL, 13917, NULL)
#else
Msg("Find size of GtkBinClass (13918)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13917,NULL);\n",architecture,13918,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWindowClass,904, 13923, 12, 3.1, NULL, 13916, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWindowClass,904, 13923, 11, 3.1, NULL, 13916, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWindowClass,456, 13923, 10, 3.1, NULL, 13916, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWindowClass,904, 13923, 9, 3.1, NULL, 13916, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWindowClass,456, 13923, 6, 3.1, NULL, 13916, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWindowClass,904, 13923, 3, 3.1, NULL, 13916, NULL)
#elif defined __i386__
CheckTypeSize(GtkWindowClass,456, 13923, 2, 3.1, NULL, 13916, NULL)
#else
Msg("Find size of GtkWindowClass (13923)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13916,NULL);\n",architecture,13923,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkScrollType,4, 13929, 12, 3.1, NULL, 13928, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkScrollType,4, 13929, 11, 3.1, NULL, 13928, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkScrollType,4, 13929, 10, 3.1, NULL, 13928, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkScrollType,4, 13929, 9, 3.1, NULL, 13928, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkScrollType,4, 13929, 6, 3.1, NULL, 13928, NULL)
#elif defined __ia64__
CheckTypeSize(GtkScrollType,4, 13929, 3, 3.1, NULL, 13928, NULL)
#elif defined __i386__
CheckTypeSize(GtkScrollType,4, 13929, 2, 3.1, NULL, 13928, NULL)
#else
Msg("Find size of GtkScrollType (13929)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13928,NULL);\n",architecture,13929,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRangeClass,800, 13933, 12, 3.1, NULL, 13925, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRangeClass,800, 13933, 11, 3.1, NULL, 13925, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRangeClass,404, 13933, 10, 3.1, NULL, 13925, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRangeClass,800, 13933, 9, 3.1, NULL, 13925, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRangeClass,404, 13933, 6, 3.1, NULL, 13925, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRangeClass,800, 13933, 3, 3.1, NULL, 13925, NULL)
#elif defined __i386__
CheckTypeSize(GtkRangeClass,404, 13933, 2, 3.1, NULL, 13925, NULL)
#else
Msg("Find size of GtkRangeClass (13933)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13925,NULL);\n",architecture,13933,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkScaleClass,848, 13937, 12, 3.1, NULL, 13924, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkScaleClass,848, 13937, 11, 3.1, NULL, 13924, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkScaleClass,428, 13937, 10, 3.1, NULL, 13924, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkScaleClass,848, 13937, 9, 3.1, NULL, 13924, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkScaleClass,428, 13937, 6, 3.1, NULL, 13924, NULL)
#elif defined __ia64__
CheckTypeSize(GtkScaleClass,848, 13937, 3, 3.1, NULL, 13924, NULL)
#elif defined __i386__
CheckTypeSize(GtkScaleClass,428, 13937, 2, 3.1, NULL, 13924, NULL)
#else
Msg("Find size of GtkScaleClass (13937)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13924,NULL);\n",architecture,13937,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkBoxClass,824, 13939, 12, 3.1, NULL, 13938, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkBoxClass,824, 13939, 11, 3.1, NULL, 13938, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkBoxClass,416, 13939, 10, 3.1, NULL, 13938, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkBoxClass,824, 13939, 9, 3.1, NULL, 13938, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkBoxClass,416, 13939, 6, 3.1, NULL, 13938, NULL)
#elif defined __ia64__
CheckTypeSize(GtkBoxClass,824, 13939, 3, 3.1, NULL, 13938, NULL)
#elif defined __i386__
CheckTypeSize(GtkBoxClass,416, 13939, 2, 3.1, NULL, 13938, NULL)
#else
Msg("Find size of GtkBoxClass (13939)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13938,NULL);\n",architecture,13939,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMiscClass,720, 13941, 12, 3.1, NULL, 13940, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMiscClass,720, 13941, 11, 3.1, NULL, 13940, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMiscClass,364, 13941, 10, 3.1, NULL, 13940, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMiscClass,720, 13941, 9, 3.1, NULL, 13940, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMiscClass,364, 13941, 6, 3.1, NULL, 13940, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMiscClass,720, 13941, 3, 3.1, NULL, 13940, NULL)
#elif defined __i386__
CheckTypeSize(GtkMiscClass,364, 13941, 2, 3.1, NULL, 13940, NULL)
#else
Msg("Find size of GtkMiscClass (13941)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13940,NULL);\n",architecture,13941,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHRuler,168, 13943, 12, 3.1, NULL, 13942, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHRuler,168, 13943, 11, 3.1, NULL, 13942, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHRuler,120, 13943, 10, 3.1, NULL, 13942, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHRuler,168, 13943, 9, 3.1, NULL, 13942, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHRuler,120, 13943, 6, 3.1, NULL, 13942, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHRuler,168, 13943, 3, 3.1, NULL, 13942, NULL)
#elif defined __i386__
CheckTypeSize(GtkHRuler,116, 13943, 2, 3.1, NULL, 13942, NULL)
#else
Msg("Find size of GtkHRuler (13943)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13942,NULL);\n",architecture,13943,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHBoxClass,824, 13945, 12, 3.1, NULL, 13944, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHBoxClass,824, 13945, 11, 3.1, NULL, 13944, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHBoxClass,416, 13945, 10, 3.1, NULL, 13944, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHBoxClass,824, 13945, 9, 3.1, NULL, 13944, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHBoxClass,416, 13945, 6, 3.1, NULL, 13944, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHBoxClass,824, 13945, 3, 3.1, NULL, 13944, NULL)
#elif defined __i386__
CheckTypeSize(GtkHBoxClass,416, 13945, 2, 3.1, NULL, 13944, NULL)
#else
Msg("Find size of GtkHBoxClass (13945)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13944,NULL);\n",architecture,13945,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPanedClass,904, 13951, 12, 3.1, NULL, 13947, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPanedClass,904, 13951, 11, 3.1, NULL, 13947, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPanedClass,456, 13951, 10, 3.1, NULL, 13947, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPanedClass,904, 13951, 9, 3.1, NULL, 13947, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPanedClass,456, 13951, 6, 3.1, NULL, 13947, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPanedClass,904, 13951, 3, 3.1, NULL, 13947, NULL)
#elif defined __i386__
CheckTypeSize(GtkPanedClass,456, 13951, 2, 3.1, NULL, 13947, NULL)
#else
Msg("Find size of GtkPanedClass (13951)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13947,NULL);\n",architecture,13951,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHPanedClass,904, 13952, 12, 3.1, NULL, 13946, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHPanedClass,904, 13952, 11, 3.1, NULL, 13946, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHPanedClass,456, 13952, 10, 3.1, NULL, 13946, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHPanedClass,904, 13952, 9, 3.1, NULL, 13946, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHPanedClass,456, 13952, 6, 3.1, NULL, 13946, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHPanedClass,904, 13952, 3, 3.1, NULL, 13946, NULL)
#elif defined __i386__
CheckTypeSize(GtkHPanedClass,456, 13952, 2, 3.1, NULL, 13946, NULL)
#else
Msg("Find size of GtkHPanedClass (13952)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13946,NULL);\n",architecture,13952,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSizeGroupClass,168, 13954, 12, 3.1, NULL, 13953, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSizeGroupClass,168, 13954, 11, 3.1, NULL, 13953, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSizeGroupClass,84, 13954, 10, 3.1, NULL, 13953, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSizeGroupClass,168, 13954, 9, 3.1, NULL, 13953, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSizeGroupClass,84, 13954, 6, 3.1, NULL, 13953, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSizeGroupClass,168, 13954, 3, 3.1, NULL, 13953, NULL)
#elif defined __i386__
CheckTypeSize(GtkSizeGroupClass,84, 13954, 2, 3.1, NULL, 13953, NULL)
#else
Msg("Find size of GtkSizeGroupClass (13954)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13953,NULL);\n",architecture,13954,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkViewportClass,832, 13957, 12, 3.1, NULL, 13955, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkViewportClass,832, 13957, 11, 3.1, NULL, 13955, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkViewportClass,420, 13957, 10, 3.1, NULL, 13955, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkViewportClass,832, 13957, 9, 3.1, NULL, 13955, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkViewportClass,420, 13957, 6, 3.1, NULL, 13955, NULL)
#elif defined __ia64__
CheckTypeSize(GtkViewportClass,832, 13957, 3, 3.1, NULL, 13955, NULL)
#elif defined __i386__
CheckTypeSize(GtkViewportClass,420, 13957, 2, 3.1, NULL, 13955, NULL)
#else
Msg("Find size of GtkViewportClass (13957)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13955,NULL);\n",architecture,13957,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMovementStep,4, 13959, 12, 3.1, NULL, 13958, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMovementStep,4, 13959, 11, 3.1, NULL, 13958, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMovementStep,4, 13959, 10, 3.1, NULL, 13958, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMovementStep,4, 13959, 9, 3.1, NULL, 13958, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMovementStep,4, 13959, 6, 3.1, NULL, 13958, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMovementStep,4, 13959, 3, 3.1, NULL, 13958, NULL)
#elif defined __i386__
CheckTypeSize(GtkMovementStep,4, 13959, 2, 3.1, NULL, 13958, NULL)
#else
Msg("Find size of GtkMovementStep (13959)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13958,NULL);\n",architecture,13959,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkEditableClass,96, 13968, 12, 3.1, NULL, 13960, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkEditableClass,96, 13968, 11, 3.1, NULL, 13960, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkEditableClass,48, 13968, 10, 3.1, NULL, 13960, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkEditableClass,96, 13968, 9, 3.1, NULL, 13960, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkEditableClass,48, 13968, 6, 3.1, NULL, 13960, NULL)
#elif defined __ia64__
CheckTypeSize(GtkEditableClass,96, 13968, 3, 3.1, NULL, 13960, NULL)
#elif defined __i386__
CheckTypeSize(GtkEditableClass,48, 13968, 2, 3.1, NULL, 13960, NULL)
#else
Msg("Find size of GtkEditableClass (13968)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13960,NULL);\n",architecture,13968,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkNotebookTab,4, 13970, 12, 3.1, NULL, 13969, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkNotebookTab,4, 13970, 11, 3.1, NULL, 13969, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkNotebookTab,4, 13970, 10, 3.1, NULL, 13969, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkNotebookTab,4, 13970, 9, 3.1, NULL, 13969, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkNotebookTab,4, 13970, 6, 3.1, NULL, 13969, NULL)
#elif defined __ia64__
CheckTypeSize(GtkNotebookTab,4, 13970, 3, 3.1, NULL, 13969, NULL)
#elif defined __i386__
CheckTypeSize(GtkNotebookTab,4, 13970, 2, 3.1, NULL, 13969, NULL)
#else
Msg("Find size of GtkNotebookTab (13970)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13969,NULL);\n",architecture,13970,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkDialogClass,952, 13974, 12, 3.1, NULL, 13971, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkDialogClass,952, 13974, 11, 3.1, NULL, 13971, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkDialogClass,480, 13974, 10, 3.1, NULL, 13971, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkDialogClass,952, 13974, 9, 3.1, NULL, 13971, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkDialogClass,480, 13974, 6, 3.1, NULL, 13971, NULL)
#elif defined __ia64__
CheckTypeSize(GtkDialogClass,952, 13974, 3, 3.1, NULL, 13971, NULL)
#elif defined __i386__
CheckTypeSize(GtkDialogClass,480, 13974, 2, 3.1, NULL, 13971, NULL)
#else
Msg("Find size of GtkDialogClass (13974)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13971,NULL);\n",architecture,13974,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererPixbuf,80, 13976, 12, 3.1, NULL, 13975, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererPixbuf,80, 13976, 11, 3.1, NULL, 13975, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererPixbuf,52, 13976, 10, 3.1, NULL, 13975, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererPixbuf,80, 13976, 9, 3.1, NULL, 13975, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererPixbuf,52, 13976, 6, 3.1, NULL, 13975, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererPixbuf,80, 13976, 3, 3.1, NULL, 13975, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererPixbuf,52, 13976, 2, 3.1, NULL, 13975, NULL)
#else
Msg("Find size of GtkCellRendererPixbuf (13976)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13975,NULL);\n",architecture,13976,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeViewColumnClass,200, 13979, 12, 3.1, NULL, 13977, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeViewColumnClass,200, 13979, 11, 3.1, NULL, 13977, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeViewColumnClass,100, 13979, 10, 3.1, NULL, 13977, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeViewColumnClass,200, 13979, 9, 3.1, NULL, 13977, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeViewColumnClass,100, 13979, 6, 3.1, NULL, 13977, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeViewColumnClass,200, 13979, 3, 3.1, NULL, 13977, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeViewColumnClass,100, 13979, 2, 3.1, NULL, 13977, NULL)
#else
Msg("Find size of GtkTreeViewColumnClass (13979)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13977,NULL);\n",architecture,13979,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRulerClass,768, 13983, 12, 3.1, NULL, 13981, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRulerClass,768, 13983, 11, 3.1, NULL, 13981, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRulerClass,388, 13983, 10, 3.1, NULL, 13981, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRulerClass,768, 13983, 9, 3.1, NULL, 13981, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRulerClass,388, 13983, 6, 3.1, NULL, 13981, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRulerClass,768, 13983, 3, 3.1, NULL, 13981, NULL)
#elif defined __i386__
CheckTypeSize(GtkRulerClass,388, 13983, 2, 3.1, NULL, 13981, NULL)
#else
Msg("Find size of GtkRulerClass (13983)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13981,NULL);\n",architecture,13983,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHRulerClass,768, 13984, 12, 3.1, NULL, 13980, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHRulerClass,768, 13984, 11, 3.1, NULL, 13980, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHRulerClass,388, 13984, 10, 3.1, NULL, 13980, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHRulerClass,768, 13984, 9, 3.1, NULL, 13980, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHRulerClass,388, 13984, 6, 3.1, NULL, 13980, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHRulerClass,768, 13984, 3, 3.1, NULL, 13980, NULL)
#elif defined __i386__
CheckTypeSize(GtkHRulerClass,388, 13984, 2, 3.1, NULL, 13980, NULL)
#else
Msg("Find size of GtkHRulerClass (13984)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13980,NULL);\n",architecture,13984,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkInvisibleClass,752, 13988, 12, 3.1, NULL, 13987, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkInvisibleClass,752, 13988, 11, 3.1, NULL, 13987, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkInvisibleClass,380, 13988, 10, 3.1, NULL, 13987, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkInvisibleClass,752, 13988, 9, 3.1, NULL, 13987, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkInvisibleClass,380, 13988, 6, 3.1, NULL, 13987, NULL)
#elif defined __ia64__
CheckTypeSize(GtkInvisibleClass,752, 13988, 3, 3.1, NULL, 13987, NULL)
#elif defined __i386__
CheckTypeSize(GtkInvisibleClass,380, 13988, 2, 3.1, NULL, 13987, NULL)
#else
Msg("Find size of GtkInvisibleClass (13988)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13987,NULL);\n",architecture,13988,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVRulerClass,768, 13990, 12, 3.1, NULL, 13989, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVRulerClass,768, 13990, 11, 3.1, NULL, 13989, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVRulerClass,388, 13990, 10, 3.1, NULL, 13989, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVRulerClass,768, 13990, 9, 3.1, NULL, 13989, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVRulerClass,388, 13990, 6, 3.1, NULL, 13989, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVRulerClass,768, 13990, 3, 3.1, NULL, 13989, NULL)
#elif defined __i386__
CheckTypeSize(GtkVRulerClass,388, 13990, 2, 3.1, NULL, 13989, NULL)
#else
Msg("Find size of GtkVRulerClass (13990)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13989,NULL);\n",architecture,13990,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToolItemClass,880, 13995, 12, 3.1, NULL, 13991, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToolItemClass,880, 13995, 11, 3.1, NULL, 13991, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToolItemClass,444, 13995, 10, 3.1, NULL, 13991, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToolItemClass,880, 13995, 9, 3.1, NULL, 13991, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToolItemClass,444, 13995, 6, 3.1, NULL, 13991, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToolItemClass,880, 13995, 3, 3.1, NULL, 13991, NULL)
#elif defined __i386__
CheckTypeSize(GtkToolItemClass,444, 13995, 2, 3.1, NULL, 13991, NULL)
#else
Msg("Find size of GtkToolItemClass (13995)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13991,NULL);\n",architecture,13995,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWindowGroupClass,168, 13997, 12, 3.1, NULL, 13996, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWindowGroupClass,168, 13997, 11, 3.1, NULL, 13996, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWindowGroupClass,84, 13997, 10, 3.1, NULL, 13996, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWindowGroupClass,168, 13997, 9, 3.1, NULL, 13996, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWindowGroupClass,84, 13997, 6, 3.1, NULL, 13996, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWindowGroupClass,168, 13997, 3, 3.1, NULL, 13996, NULL)
#elif defined __i386__
CheckTypeSize(GtkWindowGroupClass,84, 13997, 2, 3.1, NULL, 13996, NULL)
#else
Msg("Find size of GtkWindowGroupClass (13997)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13996,NULL);\n",architecture,13997,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWidgetAuxInfo,20, 13999, 12, 3.1, NULL, 13998, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWidgetAuxInfo,20, 13999, 11, 3.1, NULL, 13998, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWidgetAuxInfo,20, 13999, 10, 3.1, NULL, 13998, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWidgetAuxInfo,20, 13999, 9, 3.1, NULL, 13998, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWidgetAuxInfo,20, 13999, 6, 3.1, NULL, 13998, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWidgetAuxInfo,20, 13999, 3, 3.1, NULL, 13998, NULL)
#elif defined __i386__
CheckTypeSize(GtkWidgetAuxInfo,20, 13999, 2, 3.1, NULL, 13998, NULL)
#else
Msg("Find size of GtkWidgetAuxInfo (13999)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13998,NULL);\n",architecture,13999,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkItemClass,880, 14004, 12, 3.1, NULL, 14002, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkItemClass,880, 14004, 11, 3.1, NULL, 14002, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkItemClass,444, 14004, 10, 3.1, NULL, 14002, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkItemClass,880, 14004, 9, 3.1, NULL, 14002, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkItemClass,444, 14004, 6, 3.1, NULL, 14002, NULL)
#elif defined __ia64__
CheckTypeSize(GtkItemClass,880, 14004, 3, 3.1, NULL, 14002, NULL)
#elif defined __i386__
CheckTypeSize(GtkItemClass,444, 14004, 2, 3.1, NULL, 14002, NULL)
#else
Msg("Find size of GtkItemClass (14004)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14002,NULL);\n",architecture,14004,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuItemClass,952, 14008, 12, 3.1, NULL, 14001, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuItemClass,952, 14008, 11, 3.1, NULL, 14001, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuItemClass,480, 14008, 10, 3.1, NULL, 14001, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuItemClass,952, 14008, 9, 3.1, NULL, 14001, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuItemClass,480, 14008, 6, 3.1, NULL, 14001, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuItemClass,952, 14008, 3, 3.1, NULL, 14001, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuItemClass,480, 14008, 2, 3.1, NULL, 14001, NULL)
#else
Msg("Find size of GtkMenuItemClass (14008)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14001,NULL);\n",architecture,14008,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCheckMenuItemClass,1000, 14011, 12, 3.1, NULL, 14000, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCheckMenuItemClass,1000, 14011, 11, 3.1, NULL, 14000, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCheckMenuItemClass,504, 14011, 10, 3.1, NULL, 14000, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCheckMenuItemClass,1000, 14011, 9, 3.1, NULL, 14000, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCheckMenuItemClass,504, 14011, 6, 3.1, NULL, 14000, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCheckMenuItemClass,1000, 14011, 3, 3.1, NULL, 14000, NULL)
#elif defined __i386__
CheckTypeSize(GtkCheckMenuItemClass,504, 14011, 2, 3.1, NULL, 14000, NULL)
#else
Msg("Find size of GtkCheckMenuItemClass (14011)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14000,NULL);\n",architecture,14011,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRcProperty,40, 14013, 12, 3.1, NULL, 14012, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRcProperty,40, 14013, 11, 3.1, NULL, 14012, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRcProperty,40, 14013, 10, 3.1, NULL, 14012, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRcProperty,40, 14013, 9, 3.1, NULL, 14012, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRcProperty,40, 14013, 6, 3.1, NULL, 14012, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRcProperty,40, 14013, 3, 3.1, NULL, 14012, NULL)
#elif defined __i386__
CheckTypeSize(GtkRcProperty,32, 14013, 2, 3.1, NULL, 14012, NULL)
#else
Msg("Find size of GtkRcProperty (14013)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14012,NULL);\n",architecture,14013,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFontSelectionDialogClass,984, 14015, 12, 3.1, NULL, 14014, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFontSelectionDialogClass,984, 14015, 11, 3.1, NULL, 14014, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFontSelectionDialogClass,496, 14015, 10, 3.1, NULL, 14014, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFontSelectionDialogClass,984, 14015, 9, 3.1, NULL, 14014, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFontSelectionDialogClass,496, 14015, 6, 3.1, NULL, 14014, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFontSelectionDialogClass,984, 14015, 3, 3.1, NULL, 14014, NULL)
#elif defined __i386__
CheckTypeSize(GtkFontSelectionDialogClass,496, 14015, 2, 3.1, NULL, 14014, NULL)
#else
Msg("Find size of GtkFontSelectionDialogClass (14015)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14014,NULL);\n",architecture,14015,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileChooserDialog,272, 14020, 12, 3.1, NULL, 14016, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileChooserDialog,272, 14020, 11, 3.1, NULL, 14016, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileChooserDialog,164, 14020, 10, 3.1, NULL, 14016, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileChooserDialog,272, 14020, 9, 3.1, NULL, 14016, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileChooserDialog,164, 14020, 6, 3.1, NULL, 14016, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileChooserDialog,272, 14020, 3, 3.1, NULL, 14016, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileChooserDialog,164, 14020, 2, 3.1, NULL, 14016, NULL)
#else
Msg("Find size of GtkFileChooserDialog (14020)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14016,NULL);\n",architecture,14020,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkActionClass,224, 14026, 12, 3.1, NULL, 14022, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkActionClass,224, 14026, 11, 3.1, NULL, 14022, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkActionClass,112, 14026, 10, 3.1, NULL, 14022, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkActionClass,224, 14026, 9, 3.1, NULL, 14022, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkActionClass,112, 14026, 6, 3.1, NULL, 14022, NULL)
#elif defined __ia64__
CheckTypeSize(GtkActionClass,224, 14026, 3, 3.1, NULL, 14022, NULL)
#elif defined __i386__
CheckTypeSize(GtkActionClass,112, 14026, 2, 3.1, NULL, 14022, NULL)
#else
Msg("Find size of GtkActionClass (14026)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14022,NULL);\n",architecture,14026,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToggleActionClass,264, 14028, 12, 3.1, NULL, 14021, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToggleActionClass,264, 14028, 11, 3.1, NULL, 14021, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToggleActionClass,132, 14028, 10, 3.1, NULL, 14021, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToggleActionClass,264, 14028, 9, 3.1, NULL, 14021, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToggleActionClass,132, 14028, 6, 3.1, NULL, 14021, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToggleActionClass,264, 14028, 3, 3.1, NULL, 14021, NULL)
#elif defined __i386__
CheckTypeSize(GtkToggleActionClass,132, 14028, 2, 3.1, NULL, 14021, NULL)
#else
Msg("Find size of GtkToggleActionClass (14028)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14021,NULL);\n",architecture,14028,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVBoxClass,824, 14030, 12, 3.1, NULL, 14029, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVBoxClass,824, 14030, 11, 3.1, NULL, 14029, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVBoxClass,416, 14030, 10, 3.1, NULL, 14029, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVBoxClass,824, 14030, 9, 3.1, NULL, 14029, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVBoxClass,416, 14030, 6, 3.1, NULL, 14029, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVBoxClass,824, 14030, 3, 3.1, NULL, 14029, NULL)
#elif defined __i386__
CheckTypeSize(GtkVBoxClass,416, 14030, 2, 3.1, NULL, 14029, NULL)
#else
Msg("Find size of GtkVBoxClass (14030)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14029,NULL);\n",architecture,14030,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkButtonBoxClass,824, 14033, 12, 3.1, NULL, 14032, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkButtonBoxClass,824, 14033, 11, 3.1, NULL, 14032, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkButtonBoxClass,416, 14033, 10, 3.1, NULL, 14032, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkButtonBoxClass,824, 14033, 9, 3.1, NULL, 14032, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkButtonBoxClass,416, 14033, 6, 3.1, NULL, 14032, NULL)
#elif defined __ia64__
CheckTypeSize(GtkButtonBoxClass,824, 14033, 3, 3.1, NULL, 14032, NULL)
#elif defined __i386__
CheckTypeSize(GtkButtonBoxClass,416, 14033, 2, 3.1, NULL, 14032, NULL)
#else
Msg("Find size of GtkButtonBoxClass (14033)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14032,NULL);\n",architecture,14033,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHButtonBoxClass,824, 14034, 12, 3.1, NULL, 14031, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHButtonBoxClass,824, 14034, 11, 3.1, NULL, 14031, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHButtonBoxClass,416, 14034, 10, 3.1, NULL, 14031, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHButtonBoxClass,824, 14034, 9, 3.1, NULL, 14031, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHButtonBoxClass,416, 14034, 6, 3.1, NULL, 14031, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHButtonBoxClass,824, 14034, 3, 3.1, NULL, 14031, NULL)
#elif defined __i386__
CheckTypeSize(GtkHButtonBoxClass,416, 14034, 2, 3.1, NULL, 14031, NULL)
#else
Msg("Find size of GtkHButtonBoxClass (14034)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14031,NULL);\n",architecture,14034,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeStoreClass,168, 14038, 12, 3.1, NULL, 14037, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeStoreClass,168, 14038, 11, 3.1, NULL, 14037, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeStoreClass,84, 14038, 10, 3.1, NULL, 14037, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeStoreClass,168, 14038, 9, 3.1, NULL, 14037, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeStoreClass,84, 14038, 6, 3.1, NULL, 14037, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeStoreClass,168, 14038, 3, 3.1, NULL, 14037, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeStoreClass,84, 14038, 2, 3.1, NULL, 14037, NULL)
#else
Msg("Find size of GtkTreeStoreClass (14038)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14037,NULL);\n",architecture,14038,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkBoxChild,16, 14040, 12, 3.1, NULL, 14039, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkBoxChild,16, 14040, 11, 3.1, NULL, 14039, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkBoxChild,8, 14040, 10, 3.1, NULL, 14039, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkBoxChild,16, 14040, 9, 3.1, NULL, 14039, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkBoxChild,8, 14040, 6, 3.1, NULL, 14039, NULL)
#elif defined __ia64__
CheckTypeSize(GtkBoxChild,16, 14040, 3, 3.1, NULL, 14039, NULL)
#elif defined __i386__
CheckTypeSize(GtkBoxChild,8, 14040, 2, 3.1, NULL, 14039, NULL)
#else
Msg("Find size of GtkBoxChild (14040)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14039,NULL);\n",architecture,14040,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHButtonBox,152, 14042, 12, 3.1, NULL, 14041, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHButtonBox,152, 14042, 11, 3.1, NULL, 14041, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHButtonBox,96, 14042, 10, 3.1, NULL, 14041, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHButtonBox,152, 14042, 9, 3.1, NULL, 14041, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHButtonBox,96, 14042, 6, 3.1, NULL, 14041, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHButtonBox,152, 14042, 3, 3.1, NULL, 14041, NULL)
#elif defined __i386__
CheckTypeSize(GtkHButtonBox,96, 14042, 2, 3.1, NULL, 14041, NULL)
#else
Msg("Find size of GtkHButtonBox (14042)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14041,NULL);\n",architecture,14042,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAccelGroupClass,176, 14045, 12, 3.1, NULL, 14043, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAccelGroupClass,176, 14045, 11, 3.1, NULL, 14043, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAccelGroupClass,88, 14045, 10, 3.1, NULL, 14043, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAccelGroupClass,176, 14045, 9, 3.1, NULL, 14043, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAccelGroupClass,88, 14045, 6, 3.1, NULL, 14043, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAccelGroupClass,176, 14045, 3, 3.1, NULL, 14043, NULL)
#elif defined __i386__
CheckTypeSize(GtkAccelGroupClass,88, 14045, 2, 3.1, NULL, 14043, NULL)
#else
Msg("Find size of GtkAccelGroupClass (14045)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14043,NULL);\n",architecture,14045,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSeparator,96, 14047, 12, 3.1, NULL, 14046, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSeparator,96, 14047, 11, 3.1, NULL, 14046, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSeparator,60, 14047, 10, 3.1, NULL, 14046, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSeparator,96, 14047, 9, 3.1, NULL, 14046, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSeparator,60, 14047, 6, 3.1, NULL, 14046, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSeparator,96, 14047, 3, 3.1, NULL, 14046, NULL)
#elif defined __i386__
CheckTypeSize(GtkSeparator,60, 14047, 2, 3.1, NULL, 14046, NULL)
#else
Msg("Find size of GtkSeparator (14047)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14046,NULL);\n",architecture,14047,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkButtonClass,904, 14050, 12, 3.1, NULL, 14048, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkButtonClass,904, 14050, 11, 3.1, NULL, 14048, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkButtonClass,456, 14050, 10, 3.1, NULL, 14048, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkButtonClass,904, 14050, 9, 3.1, NULL, 14048, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkButtonClass,456, 14050, 6, 3.1, NULL, 14048, NULL)
#elif defined __ia64__
CheckTypeSize(GtkButtonClass,904, 14050, 3, 3.1, NULL, 14048, NULL)
#elif defined __i386__
CheckTypeSize(GtkButtonClass,456, 14050, 2, 3.1, NULL, 14048, NULL)
#else
Msg("Find size of GtkButtonClass (14050)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14048,NULL);\n",architecture,14050,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWindowKeysForeachFunc,8, 14052, 12, 3.1, NULL, 14051, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWindowKeysForeachFunc,8, 14052, 11, 3.1, NULL, 14051, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWindowKeysForeachFunc,4, 14052, 10, 3.1, NULL, 14051, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWindowKeysForeachFunc,8, 14052, 9, 3.1, NULL, 14051, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWindowKeysForeachFunc,4, 14052, 6, 3.1, NULL, 14051, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWindowKeysForeachFunc,8, 14052, 3, 3.1, NULL, 14051, NULL)
#elif defined __i386__
CheckTypeSize(GtkWindowKeysForeachFunc,4, 14052, 2, 3.1, NULL, 14051, NULL)
#else
Msg("Find size of GtkWindowKeysForeachFunc (14052)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14051,NULL);\n",architecture,14052,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIconFactoryClass,168, 14054, 12, 3.1, NULL, 14053, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIconFactoryClass,168, 14054, 11, 3.1, NULL, 14053, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIconFactoryClass,84, 14054, 10, 3.1, NULL, 14053, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIconFactoryClass,168, 14054, 9, 3.1, NULL, 14053, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIconFactoryClass,84, 14054, 6, 3.1, NULL, 14053, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIconFactoryClass,168, 14054, 3, 3.1, NULL, 14053, NULL)
#elif defined __i386__
CheckTypeSize(GtkIconFactoryClass,84, 14054, 2, 3.1, NULL, 14053, NULL)
#else
Msg("Find size of GtkIconFactoryClass (14054)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14053,NULL);\n",architecture,14054,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeSelectionClass,176, 14057, 12, 3.1, NULL, 14055, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeSelectionClass,176, 14057, 11, 3.1, NULL, 14055, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeSelectionClass,88, 14057, 10, 3.1, NULL, 14055, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeSelectionClass,176, 14057, 9, 3.1, NULL, 14055, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeSelectionClass,88, 14057, 6, 3.1, NULL, 14055, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeSelectionClass,176, 14057, 3, 3.1, NULL, 14055, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeSelectionClass,88, 14057, 2, 3.1, NULL, 14055, NULL)
#else
Msg("Find size of GtkTreeSelectionClass (14057)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14055,NULL);\n",architecture,14057,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 12, 3.1, NULL, 14060, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 11, 3.1, NULL, 14060, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 10, 3.1, NULL, 14060, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 9, 3.1, NULL, 14060, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 6, 3.1, NULL, 14060, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 3, 3.1, NULL, 14060, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuDirectionType,4, 14061, 2, 3.1, NULL, 14060, NULL)
#else
Msg("Find size of GtkMenuDirectionType (14061)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14060,NULL);\n",architecture,14061,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuShellClass,920, 14067, 12, 3.1, NULL, 14058, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuShellClass,920, 14067, 11, 3.1, NULL, 14058, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuShellClass,464, 14067, 10, 3.1, NULL, 14058, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuShellClass,920, 14067, 9, 3.1, NULL, 14058, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuShellClass,464, 14067, 6, 3.1, NULL, 14058, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuShellClass,920, 14067, 3, 3.1, NULL, 14058, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuShellClass,464, 14067, 2, 3.1, NULL, 14058, NULL)
#else
Msg("Find size of GtkMenuShellClass (14067)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14058,NULL);\n",architecture,14067,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeDragSourceIface,40, 14071, 12, 3.1, NULL, 14068, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeDragSourceIface,40, 14071, 11, 3.1, NULL, 14068, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeDragSourceIface,20, 14071, 10, 3.1, NULL, 14068, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeDragSourceIface,40, 14071, 9, 3.1, NULL, 14068, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeDragSourceIface,20, 14071, 6, 3.1, NULL, 14068, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeDragSourceIface,40, 14071, 3, 3.1, NULL, 14068, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeDragSourceIface,20, 14071, 2, 3.1, NULL, 14068, NULL)
#else
Msg("Find size of GtkTreeDragSourceIface (14071)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14068,NULL);\n",architecture,14071,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkLabelClass,776, 14076, 12, 3.1, NULL, 14072, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkLabelClass,776, 14076, 11, 3.1, NULL, 14072, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkLabelClass,392, 14076, 10, 3.1, NULL, 14072, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkLabelClass,776, 14076, 9, 3.1, NULL, 14072, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkLabelClass,392, 14076, 6, 3.1, NULL, 14072, NULL)
#elif defined __ia64__
CheckTypeSize(GtkLabelClass,776, 14076, 3, 3.1, NULL, 14072, NULL)
#elif defined __i386__
CheckTypeSize(GtkLabelClass,392, 14076, 2, 3.1, NULL, 14072, NULL)
#else
Msg("Find size of GtkLabelClass (14076)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14072,NULL);\n",architecture,14076,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkScrollbar,192, 14078, 12, 3.1, NULL, 14077, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkScrollbar,192, 14078, 11, 3.1, NULL, 14077, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkScrollbar,136, 14078, 10, 3.1, NULL, 14077, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkScrollbar,192, 14078, 9, 3.1, NULL, 14077, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkScrollbar,136, 14078, 6, 3.1, NULL, 14077, NULL)
#elif defined __ia64__
CheckTypeSize(GtkScrollbar,192, 14078, 3, 3.1, NULL, 14077, NULL)
#elif defined __i386__
CheckTypeSize(GtkScrollbar,136, 14078, 2, 3.1, NULL, 14077, NULL)
#else
Msg("Find size of GtkScrollbar (14078)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14077,NULL);\n",architecture,14078,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWidgetShapeInfo,16, 14080, 12, 3.1, NULL, 14079, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWidgetShapeInfo,16, 14080, 11, 3.1, NULL, 14079, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWidgetShapeInfo,8, 14080, 10, 3.1, NULL, 14079, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWidgetShapeInfo,16, 14080, 9, 3.1, NULL, 14079, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWidgetShapeInfo,8, 14080, 6, 3.1, NULL, 14079, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWidgetShapeInfo,16, 14080, 3, 3.1, NULL, 14079, NULL)
#elif defined __i386__
CheckTypeSize(GtkWidgetShapeInfo,8, 14080, 2, 3.1, NULL, 14079, NULL)
#else
Msg("Find size of GtkWidgetShapeInfo (14080)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14079,NULL);\n",architecture,14080,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkActionGroupClass,176, 14083, 12, 3.1, NULL, 14081, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkActionGroupClass,176, 14083, 11, 3.1, NULL, 14081, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkActionGroupClass,88, 14083, 10, 3.1, NULL, 14081, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkActionGroupClass,176, 14083, 9, 3.1, NULL, 14081, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkActionGroupClass,88, 14083, 6, 3.1, NULL, 14081, NULL)
#elif defined __ia64__
CheckTypeSize(GtkActionGroupClass,176, 14083, 3, 3.1, NULL, 14081, NULL)
#elif defined __i386__
CheckTypeSize(GtkActionGroupClass,88, 14083, 2, 3.1, NULL, 14081, NULL)
#else
Msg("Find size of GtkActionGroupClass (14083)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14081,NULL);\n",architecture,14083,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSettingsClass,136, 14085, 12, 3.1, NULL, 14084, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSettingsClass,136, 14085, 11, 3.1, NULL, 14084, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSettingsClass,68, 14085, 10, 3.1, NULL, 14084, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSettingsClass,136, 14085, 9, 3.1, NULL, 14084, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSettingsClass,68, 14085, 6, 3.1, NULL, 14084, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSettingsClass,136, 14085, 3, 3.1, NULL, 14084, NULL)
#elif defined __i386__
CheckTypeSize(GtkSettingsClass,68, 14085, 2, 3.1, NULL, 14084, NULL)
#else
Msg("Find size of GtkSettingsClass (14085)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14084,NULL);\n",architecture,14085,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIMContextClass,336, 14098, 12, 3.1, NULL, 14086, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIMContextClass,336, 14098, 11, 3.1, NULL, 14086, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIMContextClass,168, 14098, 10, 3.1, NULL, 14086, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIMContextClass,336, 14098, 9, 3.1, NULL, 14086, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIMContextClass,168, 14098, 6, 3.1, NULL, 14086, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIMContextClass,336, 14098, 3, 3.1, NULL, 14086, NULL)
#elif defined __i386__
CheckTypeSize(GtkIMContextClass,168, 14098, 2, 3.1, NULL, 14086, NULL)
#else
Msg("Find size of GtkIMContextClass (14098)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14086,NULL);\n",architecture,14098,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererClass,224, 14106, 12, 3.1, NULL, 14099, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererClass,224, 14106, 11, 3.1, NULL, 14099, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererClass,112, 14106, 10, 3.1, NULL, 14099, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererClass,224, 14106, 9, 3.1, NULL, 14099, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererClass,112, 14106, 6, 3.1, NULL, 14099, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererClass,224, 14106, 3, 3.1, NULL, 14099, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererClass,112, 14106, 2, 3.1, NULL, 14099, NULL)
#else
Msg("Find size of GtkCellRendererClass (14106)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14099,NULL);\n",architecture,14106,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToolButtonClass,928, 14110, 12, 3.1, NULL, 14108, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToolButtonClass,928, 14110, 11, 3.1, NULL, 14108, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToolButtonClass,468, 14110, 10, 3.1, NULL, 14108, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToolButtonClass,928, 14110, 9, 3.1, NULL, 14108, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToolButtonClass,468, 14110, 6, 3.1, NULL, 14108, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToolButtonClass,928, 14110, 3, 3.1, NULL, 14108, NULL)
#elif defined __i386__
CheckTypeSize(GtkToolButtonClass,468, 14110, 2, 3.1, NULL, 14108, NULL)
#else
Msg("Find size of GtkToolButtonClass (14110)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14108,NULL);\n",architecture,14110,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuToolButtonClass,968, 14112, 12, 3.1, NULL, 14107, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuToolButtonClass,968, 14112, 11, 3.1, NULL, 14107, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuToolButtonClass,488, 14112, 10, 3.1, NULL, 14107, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuToolButtonClass,968, 14112, 9, 3.1, NULL, 14107, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuToolButtonClass,488, 14112, 6, 3.1, NULL, 14107, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuToolButtonClass,968, 14112, 3, 3.1, NULL, 14107, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuToolButtonClass,488, 14112, 2, 3.1, NULL, 14107, NULL)
#else
Msg("Find size of GtkMenuToolButtonClass (14112)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14107,NULL);\n",architecture,14112,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVSeparator,96, 14114, 12, 3.1, NULL, 14113, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVSeparator,96, 14114, 11, 3.1, NULL, 14113, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVSeparator,60, 14114, 10, 3.1, NULL, 14113, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVSeparator,96, 14114, 9, 3.1, NULL, 14113, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVSeparator,60, 14114, 6, 3.1, NULL, 14113, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVSeparator,96, 14114, 3, 3.1, NULL, 14113, NULL)
#elif defined __i386__
CheckTypeSize(GtkVSeparator,60, 14114, 2, 3.1, NULL, 14113, NULL)
#else
Msg("Find size of GtkVSeparator (14114)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14113,NULL);\n",architecture,14114,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkDrawingAreaClass,752, 14116, 12, 3.1, NULL, 14115, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkDrawingAreaClass,752, 14116, 11, 3.1, NULL, 14115, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkDrawingAreaClass,380, 14116, 10, 3.1, NULL, 14115, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkDrawingAreaClass,752, 14116, 9, 3.1, NULL, 14115, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkDrawingAreaClass,380, 14116, 6, 3.1, NULL, 14115, NULL)
#elif defined __ia64__
CheckTypeSize(GtkDrawingAreaClass,752, 14116, 3, 3.1, NULL, 14115, NULL)
#elif defined __i386__
CheckTypeSize(GtkDrawingAreaClass,380, 14116, 2, 3.1, NULL, 14115, NULL)
#else
Msg("Find size of GtkDrawingAreaClass (14116)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14115,NULL);\n",architecture,14116,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTargetPair,16, 14118, 12, 3.1, NULL, 14117, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTargetPair,16, 14118, 11, 3.1, NULL, 14117, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTargetPair,12, 14118, 10, 3.1, NULL, 14117, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTargetPair,16, 14118, 9, 3.1, NULL, 14117, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTargetPair,12, 14118, 6, 3.1, NULL, 14117, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTargetPair,16, 14118, 3, 3.1, NULL, 14117, NULL)
#elif defined __i386__
CheckTypeSize(GtkTargetPair,12, 14118, 2, 3.1, NULL, 14117, NULL)
#else
Msg("Find size of GtkTargetPair (14118)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14117,NULL);\n",architecture,14118,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellViewClass,720, 14120, 12, 3.1, NULL, 14119, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellViewClass,720, 14120, 11, 3.1, NULL, 14119, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellViewClass,364, 14120, 10, 3.1, NULL, 14119, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellViewClass,720, 14120, 9, 3.1, NULL, 14119, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellViewClass,364, 14120, 6, 3.1, NULL, 14119, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellViewClass,720, 14120, 3, 3.1, NULL, 14119, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellViewClass,364, 14120, 2, 3.1, NULL, 14119, NULL)
#else
Msg("Find size of GtkCellViewClass (14120)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14119,NULL);\n",architecture,14120,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellLayoutIface,72, 14128, 12, 3.1, NULL, 14121, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellLayoutIface,72, 14128, 11, 3.1, NULL, 14121, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellLayoutIface,36, 14128, 10, 3.1, NULL, 14121, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellLayoutIface,72, 14128, 9, 3.1, NULL, 14121, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellLayoutIface,36, 14128, 6, 3.1, NULL, 14121, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellLayoutIface,72, 14128, 3, 3.1, NULL, 14121, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellLayoutIface,36, 14128, 2, 3.1, NULL, 14121, NULL)
#else
Msg("Find size of GtkCellLayoutIface (14128)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14121,NULL);\n",architecture,14128,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFixedClass,824, 14132, 12, 3.1, NULL, 14131, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFixedClass,824, 14132, 11, 3.1, NULL, 14131, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFixedClass,416, 14132, 10, 3.1, NULL, 14131, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFixedClass,824, 14132, 9, 3.1, NULL, 14131, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFixedClass,416, 14132, 6, 3.1, NULL, 14131, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFixedClass,824, 14132, 3, 3.1, NULL, 14131, NULL)
#elif defined __i386__
CheckTypeSize(GtkFixedClass,416, 14132, 2, 3.1, NULL, 14131, NULL)
#else
Msg("Find size of GtkFixedClass (14132)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14131,NULL);\n",architecture,14132,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHScaleClass,848, 14134, 12, 3.1, NULL, 14133, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHScaleClass,848, 14134, 11, 3.1, NULL, 14133, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHScaleClass,428, 14134, 10, 3.1, NULL, 14133, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHScaleClass,848, 14134, 9, 3.1, NULL, 14133, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHScaleClass,428, 14134, 6, 3.1, NULL, 14133, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHScaleClass,848, 14134, 3, 3.1, NULL, 14133, NULL)
#elif defined __i386__
CheckTypeSize(GtkHScaleClass,428, 14134, 2, 3.1, NULL, 14133, NULL)
#else
Msg("Find size of GtkHScaleClass (14134)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14133,NULL);\n",architecture,14134,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkScrollbarClass,832, 14136, 12, 3.1, NULL, 14135, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkScrollbarClass,832, 14136, 11, 3.1, NULL, 14135, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkScrollbarClass,420, 14136, 10, 3.1, NULL, 14135, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkScrollbarClass,832, 14136, 9, 3.1, NULL, 14135, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkScrollbarClass,420, 14136, 6, 3.1, NULL, 14135, NULL)
#elif defined __ia64__
CheckTypeSize(GtkScrollbarClass,832, 14136, 3, 3.1, NULL, 14135, NULL)
#elif defined __i386__
CheckTypeSize(GtkScrollbarClass,420, 14136, 2, 3.1, NULL, 14135, NULL)
#else
Msg("Find size of GtkScrollbarClass (14136)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14135,NULL);\n",architecture,14136,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAccelLabelClass,872, 14138, 12, 3.1, NULL, 14137, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAccelLabelClass,872, 14138, 11, 3.1, NULL, 14137, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAccelLabelClass,440, 14138, 10, 3.1, NULL, 14137, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAccelLabelClass,872, 14138, 9, 3.1, NULL, 14137, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAccelLabelClass,440, 14138, 6, 3.1, NULL, 14137, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAccelLabelClass,872, 14138, 3, 3.1, NULL, 14137, NULL)
#elif defined __i386__
CheckTypeSize(GtkAccelLabelClass,440, 14138, 2, 3.1, NULL, 14137, NULL)
#else
Msg("Find size of GtkAccelLabelClass (14138)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14137,NULL);\n",architecture,14138,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkModuleDisplayInitFunc,8, 14140, 12, 3.1, NULL, 14139, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkModuleDisplayInitFunc,8, 14140, 11, 3.1, NULL, 14139, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkModuleDisplayInitFunc,4, 14140, 10, 3.1, NULL, 14139, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkModuleDisplayInitFunc,8, 14140, 9, 3.1, NULL, 14139, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkModuleDisplayInitFunc,4, 14140, 6, 3.1, NULL, 14139, NULL)
#elif defined __ia64__
CheckTypeSize(GtkModuleDisplayInitFunc,8, 14140, 3, 3.1, NULL, 14139, NULL)
#elif defined __i386__
CheckTypeSize(GtkModuleDisplayInitFunc,4, 14140, 2, 3.1, NULL, 14139, NULL)
#else
Msg("Find size of GtkModuleDisplayInitFunc (14140)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14139,NULL);\n",architecture,14140,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextBufferClass,280, 14150, 12, 3.1, NULL, 14141, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextBufferClass,280, 14150, 11, 3.1, NULL, 14141, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextBufferClass,140, 14150, 10, 3.1, NULL, 14141, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextBufferClass,280, 14150, 9, 3.1, NULL, 14141, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextBufferClass,140, 14150, 6, 3.1, NULL, 14141, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextBufferClass,280, 14150, 3, 3.1, NULL, 14141, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextBufferClass,140, 14150, 2, 3.1, NULL, 14141, NULL)
#else
Msg("Find size of GtkTextBufferClass (14150)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14141,NULL);\n",architecture,14150,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVRuler,168, 14152, 12, 3.1, NULL, 14151, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVRuler,168, 14152, 11, 3.1, NULL, 14151, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVRuler,120, 14152, 10, 3.1, NULL, 14151, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVRuler,168, 14152, 9, 3.1, NULL, 14151, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVRuler,120, 14152, 6, 3.1, NULL, 14151, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVRuler,168, 14152, 3, 3.1, NULL, 14151, NULL)
#elif defined __i386__
CheckTypeSize(GtkVRuler,116, 14152, 2, 3.1, NULL, 14151, NULL)
#else
Msg("Find size of GtkVRuler (14152)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14151,NULL);\n",architecture,14152,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSocketClass,872, 14156, 12, 3.1, NULL, 14153, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSocketClass,872, 14156, 11, 3.1, NULL, 14153, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSocketClass,440, 14156, 10, 3.1, NULL, 14153, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSocketClass,872, 14156, 9, 3.1, NULL, 14153, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSocketClass,440, 14156, 6, 3.1, NULL, 14153, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSocketClass,872, 14156, 3, 3.1, NULL, 14153, NULL)
#elif defined __i386__
CheckTypeSize(GtkSocketClass,440, 14156, 2, 3.1, NULL, 14153, NULL)
#else
Msg("Find size of GtkSocketClass (14156)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14153,NULL);\n",architecture,14156,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIconThemeClass,144, 14159, 12, 3.1, NULL, 14157, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIconThemeClass,144, 14159, 11, 3.1, NULL, 14157, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIconThemeClass,72, 14159, 10, 3.1, NULL, 14157, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIconThemeClass,144, 14159, 9, 3.1, NULL, 14157, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIconThemeClass,72, 14159, 6, 3.1, NULL, 14157, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIconThemeClass,144, 14159, 3, 3.1, NULL, 14157, NULL)
#elif defined __i386__
CheckTypeSize(GtkIconThemeClass,72, 14159, 2, 3.1, NULL, 14157, NULL)
#else
Msg("Find size of GtkIconThemeClass (14159)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14157,NULL);\n",architecture,14159,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVPaned,216, 14161, 12, 3.1, NULL, 14160, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVPaned,216, 14161, 11, 3.1, NULL, 14160, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVPaned,144, 14161, 10, 3.1, NULL, 14160, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVPaned,216, 14161, 9, 3.1, NULL, 14160, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVPaned,144, 14161, 6, 3.1, NULL, 14160, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVPaned,216, 14161, 3, 3.1, NULL, 14160, NULL)
#elif defined __i386__
CheckTypeSize(GtkVPaned,144, 14161, 2, 3.1, NULL, 14160, NULL)
#else
Msg("Find size of GtkVPaned (14161)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14160,NULL);\n",architecture,14161,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTableChild,24, 14163, 12, 3.1, NULL, 14162, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTableChild,24, 14163, 11, 3.1, NULL, 14162, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTableChild,20, 14163, 10, 3.1, NULL, 14162, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTableChild,24, 14163, 9, 3.1, NULL, 14162, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTableChild,20, 14163, 6, 3.1, NULL, 14162, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTableChild,24, 14163, 3, 3.1, NULL, 14162, NULL)
#elif defined __i386__
CheckTypeSize(GtkTableChild,20, 14163, 2, 3.1, NULL, 14162, NULL)
#else
Msg("Find size of GtkTableChild (14163)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14162,NULL);\n",architecture,14163,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkArrowClass,720, 14165, 12, 3.1, NULL, 14164, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkArrowClass,720, 14165, 11, 3.1, NULL, 14164, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkArrowClass,364, 14165, 10, 3.1, NULL, 14164, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkArrowClass,720, 14165, 9, 3.1, NULL, 14164, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkArrowClass,364, 14165, 6, 3.1, NULL, 14164, NULL)
#elif defined __ia64__
CheckTypeSize(GtkArrowClass,720, 14165, 3, 3.1, NULL, 14164, NULL)
#elif defined __i386__
CheckTypeSize(GtkArrowClass,364, 14165, 2, 3.1, NULL, 14164, NULL)
#else
Msg("Find size of GtkArrowClass (14165)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14164,NULL);\n",architecture,14165,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHScrollbar,192, 14167, 12, 3.1, NULL, 14166, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHScrollbar,192, 14167, 11, 3.1, NULL, 14166, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHScrollbar,136, 14167, 10, 3.1, NULL, 14166, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHScrollbar,192, 14167, 9, 3.1, NULL, 14166, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHScrollbar,136, 14167, 6, 3.1, NULL, 14166, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHScrollbar,192, 14167, 3, 3.1, NULL, 14166, NULL)
#elif defined __i386__
CheckTypeSize(GtkHScrollbar,136, 14167, 2, 3.1, NULL, 14166, NULL)
#else
Msg("Find size of GtkHScrollbar (14167)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14166,NULL);\n",architecture,14167,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileChooserWidget,136, 14172, 12, 3.1, NULL, 14168, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileChooserWidget,136, 14172, 11, 3.1, NULL, 14168, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileChooserWidget,80, 14172, 10, 3.1, NULL, 14168, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileChooserWidget,136, 14172, 9, 3.1, NULL, 14168, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileChooserWidget,80, 14172, 6, 3.1, NULL, 14168, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileChooserWidget,136, 14172, 3, 3.1, NULL, 14168, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileChooserWidget,80, 14172, 2, 3.1, NULL, 14168, NULL)
#else
Msg("Find size of GtkFileChooserWidget (14172)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14168,NULL);\n",architecture,14172,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkPlugClass,944, 14175, 12, 3.1, NULL, 14173, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkPlugClass,944, 14175, 11, 3.1, NULL, 14173, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkPlugClass,476, 14175, 10, 3.1, NULL, 14173, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkPlugClass,944, 14175, 9, 3.1, NULL, 14173, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkPlugClass,476, 14175, 6, 3.1, NULL, 14173, NULL)
#elif defined __ia64__
CheckTypeSize(GtkPlugClass,944, 14175, 3, 3.1, NULL, 14173, NULL)
#elif defined __i386__
CheckTypeSize(GtkPlugClass,476, 14175, 2, 3.1, NULL, 14173, NULL)
#else
Msg("Find size of GtkPlugClass (14175)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14173,NULL);\n",architecture,14175,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererPixbufClass,256, 14177, 12, 3.1, NULL, 14176, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererPixbufClass,256, 14177, 11, 3.1, NULL, 14176, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererPixbufClass,128, 14177, 10, 3.1, NULL, 14176, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererPixbufClass,256, 14177, 9, 3.1, NULL, 14176, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererPixbufClass,128, 14177, 6, 3.1, NULL, 14176, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererPixbufClass,256, 14177, 3, 3.1, NULL, 14176, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererPixbufClass,128, 14177, 2, 3.1, NULL, 14176, NULL)
#else
Msg("Find size of GtkCellRendererPixbufClass (14177)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14176,NULL);\n",architecture,14177,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVButtonBoxClass,824, 14179, 12, 3.1, NULL, 14178, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVButtonBoxClass,824, 14179, 11, 3.1, NULL, 14178, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVButtonBoxClass,416, 14179, 10, 3.1, NULL, 14178, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVButtonBoxClass,824, 14179, 9, 3.1, NULL, 14178, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVButtonBoxClass,416, 14179, 6, 3.1, NULL, 14178, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVButtonBoxClass,824, 14179, 3, 3.1, NULL, 14178, NULL)
#elif defined __i386__
CheckTypeSize(GtkVButtonBoxClass,416, 14179, 2, 3.1, NULL, 14178, NULL)
#else
Msg("Find size of GtkVButtonBoxClass (14179)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14178,NULL);\n",architecture,14179,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextChildAnchorClass,168, 14181, 12, 3.1, NULL, 14180, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextChildAnchorClass,168, 14181, 11, 3.1, NULL, 14180, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextChildAnchorClass,84, 14181, 10, 3.1, NULL, 14180, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextChildAnchorClass,168, 14181, 9, 3.1, NULL, 14180, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextChildAnchorClass,84, 14181, 6, 3.1, NULL, 14180, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextChildAnchorClass,168, 14181, 3, 3.1, NULL, 14180, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextChildAnchorClass,84, 14181, 2, 3.1, NULL, 14180, NULL)
#else
Msg("Find size of GtkTextChildAnchorClass (14181)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14180,NULL);\n",architecture,14181,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererCombo,144, 14183, 12, 3.1, NULL, 14182, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererCombo,144, 14183, 11, 3.1, NULL, 14182, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererCombo,104, 14183, 10, 3.1, NULL, 14182, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererCombo,144, 14183, 9, 3.1, NULL, 14182, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererCombo,104, 14183, 6, 3.1, NULL, 14182, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererCombo,144, 14183, 3, 3.1, NULL, 14182, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererCombo,104, 14183, 2, 3.1, NULL, 14182, NULL)
#else
Msg("Find size of GtkCellRendererCombo (14183)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14182,NULL);\n",architecture,14183,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeModelIface,168, 14199, 12, 3.1, NULL, 14184, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeModelIface,168, 14199, 11, 3.1, NULL, 14184, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeModelIface,84, 14199, 10, 3.1, NULL, 14184, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeModelIface,168, 14199, 9, 3.1, NULL, 14184, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeModelIface,84, 14199, 6, 3.1, NULL, 14184, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeModelIface,168, 14199, 3, 3.1, NULL, 14184, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeModelIface,84, 14199, 2, 3.1, NULL, 14184, NULL)
#else
Msg("Find size of GtkTreeModelIface (14199)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14184,NULL);\n",architecture,14199,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAccessibleClass,392, 14202, 12, 3.1, NULL, 14200, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAccessibleClass,392, 14202, 11, 3.1, NULL, 14200, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAccessibleClass,196, 14202, 10, 3.1, NULL, 14200, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAccessibleClass,392, 14202, 9, 3.1, NULL, 14200, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAccessibleClass,196, 14202, 6, 3.1, NULL, 14200, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAccessibleClass,392, 14202, 3, 3.1, NULL, 14200, NULL)
#elif defined __i386__
CheckTypeSize(GtkAccessibleClass,196, 14202, 2, 3.1, NULL, 14200, NULL)
#else
Msg("Find size of GtkAccessibleClass (14202)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14200,NULL);\n",architecture,14202,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererTextClass,264, 14205, 12, 3.1, NULL, 14203, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererTextClass,264, 14205, 11, 3.1, NULL, 14203, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererTextClass,132, 14205, 10, 3.1, NULL, 14203, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererTextClass,264, 14205, 9, 3.1, NULL, 14203, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererTextClass,132, 14205, 6, 3.1, NULL, 14203, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererTextClass,264, 14205, 3, 3.1, NULL, 14203, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererTextClass,132, 14205, 2, 3.1, NULL, 14203, NULL)
#else
Msg("Find size of GtkCellRendererTextClass (14205)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14203,NULL);\n",architecture,14205,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVScaleClass,848, 14207, 12, 3.1, NULL, 14206, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVScaleClass,848, 14207, 11, 3.1, NULL, 14206, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVScaleClass,428, 14207, 10, 3.1, NULL, 14206, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVScaleClass,848, 14207, 9, 3.1, NULL, 14206, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVScaleClass,428, 14207, 6, 3.1, NULL, 14206, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVScaleClass,848, 14207, 3, 3.1, NULL, 14206, NULL)
#elif defined __i386__
CheckTypeSize(GtkVScaleClass,428, 14207, 2, 3.1, NULL, 14206, NULL)
#else
Msg("Find size of GtkVScaleClass (14207)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14206,NULL);\n",architecture,14207,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCurveClass,792, 14210, 12, 3.1, NULL, 14208, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCurveClass,792, 14210, 11, 3.1, NULL, 14208, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCurveClass,400, 14210, 10, 3.1, NULL, 14208, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCurveClass,792, 14210, 9, 3.1, NULL, 14208, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCurveClass,400, 14210, 6, 3.1, NULL, 14208, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCurveClass,792, 14210, 3, 3.1, NULL, 14208, NULL)
#elif defined __i386__
CheckTypeSize(GtkCurveClass,400, 14210, 2, 3.1, NULL, 14208, NULL)
#else
Msg("Find size of GtkCurveClass (14210)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14208,NULL);\n",architecture,14210,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSeparatorToolItemClass,912, 14212, 12, 3.1, NULL, 14211, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSeparatorToolItemClass,912, 14212, 11, 3.1, NULL, 14211, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSeparatorToolItemClass,460, 14212, 10, 3.1, NULL, 14211, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSeparatorToolItemClass,912, 14212, 9, 3.1, NULL, 14211, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSeparatorToolItemClass,460, 14212, 6, 3.1, NULL, 14211, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSeparatorToolItemClass,912, 14212, 3, 3.1, NULL, 14211, NULL)
#elif defined __i386__
CheckTypeSize(GtkSeparatorToolItemClass,460, 14212, 2, 3.1, NULL, 14211, NULL)
#else
Msg("Find size of GtkSeparatorToolItemClass (14212)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14211,NULL);\n",architecture,14212,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkStyleClass,456, 14232, 12, 3.1, NULL, 14213, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkStyleClass,456, 14232, 11, 3.1, NULL, 14213, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkStyleClass,228, 14232, 10, 3.1, NULL, 14213, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkStyleClass,456, 14232, 9, 3.1, NULL, 14213, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkStyleClass,228, 14232, 6, 3.1, NULL, 14213, NULL)
#elif defined __ia64__
CheckTypeSize(GtkStyleClass,456, 14232, 3, 3.1, NULL, 14213, NULL)
#elif defined __i386__
CheckTypeSize(GtkStyleClass,228, 14232, 2, 3.1, NULL, 14213, NULL)
#else
Msg("Find size of GtkStyleClass (14232)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14213,NULL);\n",architecture,14232,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSeparatorMenuItemClass,952, 14234, 12, 3.1, NULL, 14233, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSeparatorMenuItemClass,952, 14234, 11, 3.1, NULL, 14233, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSeparatorMenuItemClass,480, 14234, 10, 3.1, NULL, 14233, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSeparatorMenuItemClass,952, 14234, 9, 3.1, NULL, 14233, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSeparatorMenuItemClass,480, 14234, 6, 3.1, NULL, 14233, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSeparatorMenuItemClass,952, 14234, 3, 3.1, NULL, 14233, NULL)
#elif defined __i386__
CheckTypeSize(GtkSeparatorMenuItemClass,480, 14234, 2, 3.1, NULL, 14233, NULL)
#else
Msg("Find size of GtkSeparatorMenuItemClass (14234)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14233,NULL);\n",architecture,14234,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIMMulticontextClass,368, 14236, 12, 3.1, NULL, 14235, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIMMulticontextClass,368, 14236, 11, 3.1, NULL, 14235, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIMMulticontextClass,184, 14236, 10, 3.1, NULL, 14235, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIMMulticontextClass,368, 14236, 9, 3.1, NULL, 14235, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIMMulticontextClass,184, 14236, 6, 3.1, NULL, 14235, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIMMulticontextClass,368, 14236, 3, 3.1, NULL, 14235, NULL)
#elif defined __i386__
CheckTypeSize(GtkIMMulticontextClass,184, 14236, 2, 3.1, NULL, 14235, NULL)
#else
Msg("Find size of GtkIMMulticontextClass (14236)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14235,NULL);\n",architecture,14236,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToggleToolButtonClass,968, 14240, 12, 3.1, NULL, 14238, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToggleToolButtonClass,968, 14240, 11, 3.1, NULL, 14238, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToggleToolButtonClass,488, 14240, 10, 3.1, NULL, 14238, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToggleToolButtonClass,968, 14240, 9, 3.1, NULL, 14238, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToggleToolButtonClass,488, 14240, 6, 3.1, NULL, 14238, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToggleToolButtonClass,968, 14240, 3, 3.1, NULL, 14238, NULL)
#elif defined __i386__
CheckTypeSize(GtkToggleToolButtonClass,488, 14240, 2, 3.1, NULL, 14238, NULL)
#else
Msg("Find size of GtkToggleToolButtonClass (14240)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14238,NULL);\n",architecture,14240,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRadioToolButtonClass,1000, 14241, 12, 3.1, NULL, 14237, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRadioToolButtonClass,1000, 14241, 11, 3.1, NULL, 14237, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRadioToolButtonClass,504, 14241, 10, 3.1, NULL, 14237, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRadioToolButtonClass,1000, 14241, 9, 3.1, NULL, 14237, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRadioToolButtonClass,504, 14241, 6, 3.1, NULL, 14237, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRadioToolButtonClass,1000, 14241, 3, 3.1, NULL, 14237, NULL)
#elif defined __i386__
CheckTypeSize(GtkRadioToolButtonClass,504, 14241, 2, 3.1, NULL, 14237, NULL)
#else
Msg("Find size of GtkRadioToolButtonClass (14241)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14237,NULL);\n",architecture,14241,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererProgressClass,256, 14243, 12, 3.1, NULL, 14242, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererProgressClass,256, 14243, 11, 3.1, NULL, 14242, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererProgressClass,128, 14243, 10, 3.1, NULL, 14242, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererProgressClass,256, 14243, 9, 3.1, NULL, 14242, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererProgressClass,128, 14243, 6, 3.1, NULL, 14242, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererProgressClass,256, 14243, 3, 3.1, NULL, 14242, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererProgressClass,128, 14243, 2, 3.1, NULL, 14242, NULL)
#else
Msg("Find size of GtkCellRendererProgressClass (14243)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14242,NULL);\n",architecture,14243,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVScrollbar,192, 14245, 12, 3.1, NULL, 14244, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVScrollbar,192, 14245, 11, 3.1, NULL, 14244, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVScrollbar,136, 14245, 10, 3.1, NULL, 14244, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVScrollbar,192, 14245, 9, 3.1, NULL, 14244, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVScrollbar,136, 14245, 6, 3.1, NULL, 14244, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVScrollbar,192, 14245, 3, 3.1, NULL, 14244, NULL)
#elif defined __i386__
CheckTypeSize(GtkVScrollbar,136, 14245, 2, 3.1, NULL, 14244, NULL)
#else
Msg("Find size of GtkVScrollbar (14245)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14244,NULL);\n",architecture,14245,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVPanedClass,904, 14247, 12, 3.1, NULL, 14246, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVPanedClass,904, 14247, 11, 3.1, NULL, 14246, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVPanedClass,456, 14247, 10, 3.1, NULL, 14246, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVPanedClass,904, 14247, 9, 3.1, NULL, 14246, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVPanedClass,456, 14247, 6, 3.1, NULL, 14246, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVPanedClass,904, 14247, 3, 3.1, NULL, 14246, NULL)
#elif defined __i386__
CheckTypeSize(GtkVPanedClass,456, 14247, 2, 3.1, NULL, 14246, NULL)
#else
Msg("Find size of GtkVPanedClass (14247)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14246,NULL);\n",architecture,14247,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkScrollStep,4, 14249, 12, 3.1, NULL, 14248, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkScrollStep,4, 14249, 11, 3.1, NULL, 14248, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkScrollStep,4, 14249, 10, 3.1, NULL, 14248, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkScrollStep,4, 14249, 9, 3.1, NULL, 14248, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkScrollStep,4, 14249, 6, 3.1, NULL, 14248, NULL)
#elif defined __ia64__
CheckTypeSize(GtkScrollStep,4, 14249, 3, 3.1, NULL, 14248, NULL)
#elif defined __i386__
CheckTypeSize(GtkScrollStep,4, 14249, 2, 3.1, NULL, 14248, NULL)
#else
Msg("Find size of GtkScrollStep (14249)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14248,NULL);\n",architecture,14249,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToggleButtonClass,944, 14252, 12, 3.1, NULL, 14250, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToggleButtonClass,944, 14252, 11, 3.1, NULL, 14250, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToggleButtonClass,476, 14252, 10, 3.1, NULL, 14250, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToggleButtonClass,944, 14252, 9, 3.1, NULL, 14250, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToggleButtonClass,476, 14252, 6, 3.1, NULL, 14250, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToggleButtonClass,944, 14252, 3, 3.1, NULL, 14250, NULL)
#elif defined __i386__
CheckTypeSize(GtkToggleButtonClass,476, 14252, 2, 3.1, NULL, 14250, NULL)
#else
Msg("Find size of GtkToggleButtonClass (14252)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14250,NULL);\n",architecture,14252,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererToggleClass,264, 14255, 12, 3.1, NULL, 14253, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererToggleClass,264, 14255, 11, 3.1, NULL, 14253, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererToggleClass,132, 14255, 10, 3.1, NULL, 14253, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererToggleClass,264, 14255, 9, 3.1, NULL, 14253, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererToggleClass,132, 14255, 6, 3.1, NULL, 14253, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererToggleClass,264, 14255, 3, 3.1, NULL, 14253, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererToggleClass,132, 14255, 2, 3.1, NULL, 14253, NULL)
#else
Msg("Find size of GtkCellRendererToggleClass (14255)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14253,NULL);\n",architecture,14255,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVButtonBox,152, 14257, 12, 3.1, NULL, 14256, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVButtonBox,152, 14257, 11, 3.1, NULL, 14256, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVButtonBox,96, 14257, 10, 3.1, NULL, 14256, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVButtonBox,152, 14257, 9, 3.1, NULL, 14256, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVButtonBox,96, 14257, 6, 3.1, NULL, 14256, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVButtonBox,152, 14257, 3, 3.1, NULL, 14256, NULL)
#elif defined __i386__
CheckTypeSize(GtkVButtonBox,96, 14257, 2, 3.1, NULL, 14256, NULL)
#else
Msg("Find size of GtkVButtonBox (14257)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14256,NULL);\n",architecture,14257,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeDragDestIface,32, 14260, 12, 3.1, NULL, 14258, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeDragDestIface,32, 14260, 11, 3.1, NULL, 14258, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeDragDestIface,16, 14260, 10, 3.1, NULL, 14258, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeDragDestIface,32, 14260, 9, 3.1, NULL, 14258, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeDragDestIface,16, 14260, 6, 3.1, NULL, 14258, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeDragDestIface,32, 14260, 3, 3.1, NULL, 14258, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeDragDestIface,16, 14260, 2, 3.1, NULL, 14258, NULL)
#else
Msg("Find size of GtkTreeDragDestIface (14260)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14258,NULL);\n",architecture,14260,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkColorSelectionClass,864, 14263, 12, 3.1, NULL, 14261, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkColorSelectionClass,864, 14263, 11, 3.1, NULL, 14261, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkColorSelectionClass,436, 14263, 10, 3.1, NULL, 14261, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkColorSelectionClass,864, 14263, 9, 3.1, NULL, 14261, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkColorSelectionClass,436, 14263, 6, 3.1, NULL, 14261, NULL)
#elif defined __ia64__
CheckTypeSize(GtkColorSelectionClass,864, 14263, 3, 3.1, NULL, 14261, NULL)
#elif defined __i386__
CheckTypeSize(GtkColorSelectionClass,436, 14263, 2, 3.1, NULL, 14261, NULL)
#else
Msg("Find size of GtkColorSelectionClass (14263)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14261,NULL);\n",architecture,14263,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererProgress,64, 14268, 12, 3.1, NULL, 14264, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererProgress,64, 14268, 11, 3.1, NULL, 14264, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererProgress,44, 14268, 10, 3.1, NULL, 14264, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererProgress,64, 14268, 9, 3.1, NULL, 14264, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererProgress,44, 14268, 6, 3.1, NULL, 14264, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererProgress,64, 14268, 3, 3.1, NULL, 14264, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererProgress,44, 14268, 2, 3.1, NULL, 14264, NULL)
#else
Msg("Find size of GtkCellRendererProgress (14268)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14264,NULL);\n",architecture,14268,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkImageClass,752, 14270, 12, 3.1, NULL, 14269, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkImageClass,752, 14270, 11, 3.1, NULL, 14269, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkImageClass,380, 14270, 10, 3.1, NULL, 14269, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkImageClass,752, 14270, 9, 3.1, NULL, 14269, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkImageClass,380, 14270, 6, 3.1, NULL, 14269, NULL)
#elif defined __ia64__
CheckTypeSize(GtkImageClass,752, 14270, 3, 3.1, NULL, 14269, NULL)
#elif defined __i386__
CheckTypeSize(GtkImageClass,380, 14270, 2, 3.1, NULL, 14269, NULL)
#else
Msg("Find size of GtkImageClass (14270)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14269,NULL);\n",architecture,14270,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMessageDialogClass,984, 14272, 12, 3.1, NULL, 14271, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMessageDialogClass,984, 14272, 11, 3.1, NULL, 14271, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMessageDialogClass,496, 14272, 10, 3.1, NULL, 14271, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMessageDialogClass,984, 14272, 9, 3.1, NULL, 14271, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMessageDialogClass,496, 14272, 6, 3.1, NULL, 14271, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMessageDialogClass,984, 14272, 3, 3.1, NULL, 14271, NULL)
#elif defined __i386__
CheckTypeSize(GtkMessageDialogClass,496, 14272, 2, 3.1, NULL, 14271, NULL)
#else
Msg("Find size of GtkMessageDialogClass (14272)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14271,NULL);\n",architecture,14272,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkDeleteType,4, 14274, 12, 3.1, NULL, 14273, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkDeleteType,4, 14274, 11, 3.1, NULL, 14273, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkDeleteType,4, 14274, 10, 3.1, NULL, 14273, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkDeleteType,4, 14274, 9, 3.1, NULL, 14273, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkDeleteType,4, 14274, 6, 3.1, NULL, 14273, NULL)
#elif defined __ia64__
CheckTypeSize(GtkDeleteType,4, 14274, 3, 3.1, NULL, 14273, NULL)
#elif defined __i386__
CheckTypeSize(GtkDeleteType,4, 14274, 2, 3.1, NULL, 14273, NULL)
#else
Msg("Find size of GtkDeleteType (14274)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14273,NULL);\n",architecture,14274,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeSortableIface,64, 14282, 12, 3.1, NULL, 14275, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeSortableIface,64, 14282, 11, 3.1, NULL, 14275, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeSortableIface,32, 14282, 10, 3.1, NULL, 14275, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeSortableIface,64, 14282, 9, 3.1, NULL, 14275, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeSortableIface,32, 14282, 6, 3.1, NULL, 14275, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeSortableIface,64, 14282, 3, 3.1, NULL, 14275, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeSortableIface,32, 14282, 2, 3.1, NULL, 14275, NULL)
#else
Msg("Find size of GtkTreeSortableIface (14282)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14275,NULL);\n",architecture,14282,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCalendarClass,776, 14285, 12, 3.1, NULL, 14283, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCalendarClass,776, 14285, 11, 3.1, NULL, 14283, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCalendarClass,392, 14285, 10, 3.1, NULL, 14283, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCalendarClass,776, 14285, 9, 3.1, NULL, 14283, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCalendarClass,392, 14285, 6, 3.1, NULL, 14283, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCalendarClass,776, 14285, 3, 3.1, NULL, 14283, NULL)
#elif defined __i386__
CheckTypeSize(GtkCalendarClass,392, 14285, 2, 3.1, NULL, 14283, NULL)
#else
Msg("Find size of GtkCalendarClass (14285)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14283,NULL);\n",architecture,14285,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkEntryClass,824, 14293, 12, 3.1, NULL, 14287, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkEntryClass,824, 14293, 11, 3.1, NULL, 14287, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkEntryClass,416, 14293, 10, 3.1, NULL, 14287, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkEntryClass,824, 14293, 9, 3.1, NULL, 14287, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkEntryClass,416, 14293, 6, 3.1, NULL, 14287, NULL)
#elif defined __ia64__
CheckTypeSize(GtkEntryClass,824, 14293, 3, 3.1, NULL, 14287, NULL)
#elif defined __i386__
CheckTypeSize(GtkEntryClass,416, 14293, 2, 3.1, NULL, 14287, NULL)
#else
Msg("Find size of GtkEntryClass (14293)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14287,NULL);\n",architecture,14293,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSpinButtonClass,888, 14298, 12, 3.1, NULL, 14286, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSpinButtonClass,888, 14298, 11, 3.1, NULL, 14286, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSpinButtonClass,448, 14298, 10, 3.1, NULL, 14286, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSpinButtonClass,888, 14298, 9, 3.1, NULL, 14286, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSpinButtonClass,448, 14298, 6, 3.1, NULL, 14286, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSpinButtonClass,888, 14298, 3, 3.1, NULL, 14286, NULL)
#elif defined __i386__
CheckTypeSize(GtkSpinButtonClass,448, 14298, 2, 3.1, NULL, 14286, NULL)
#else
Msg("Find size of GtkSpinButtonClass (14298)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14286,NULL);\n",architecture,14298,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkInputDialog,384, 14302, 12, 3.1, NULL, 14300, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkInputDialog,384, 14302, 11, 3.1, NULL, 14300, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkInputDialog,220, 14302, 10, 3.1, NULL, 14300, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkInputDialog,384, 14302, 9, 3.1, NULL, 14300, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkInputDialog,220, 14302, 6, 3.1, NULL, 14300, NULL)
#elif defined __ia64__
CheckTypeSize(GtkInputDialog,384, 14302, 3, 3.1, NULL, 14300, NULL)
#elif defined __i386__
CheckTypeSize(GtkInputDialog,220, 14302, 2, 3.1, NULL, 14300, NULL)
#else
Msg("Find size of GtkInputDialog (14302)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14300,NULL);\n",architecture,14302,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkInputDialogClass,1000, 14305, 12, 3.1, NULL, 14299, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkInputDialogClass,1000, 14305, 11, 3.1, NULL, 14299, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkInputDialogClass,504, 14305, 10, 3.1, NULL, 14299, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkInputDialogClass,1000, 14305, 9, 3.1, NULL, 14299, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkInputDialogClass,504, 14305, 6, 3.1, NULL, 14299, NULL)
#elif defined __ia64__
CheckTypeSize(GtkInputDialogClass,1000, 14305, 3, 3.1, NULL, 14299, NULL)
#elif defined __i386__
CheckTypeSize(GtkInputDialogClass,504, 14305, 2, 3.1, NULL, 14299, NULL)
#else
Msg("Find size of GtkInputDialogClass (14305)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14299,NULL);\n",architecture,14305,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkEntryCompletionClass,184, 14310, 12, 3.1, NULL, 14306, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkEntryCompletionClass,184, 14310, 11, 3.1, NULL, 14306, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkEntryCompletionClass,92, 14310, 10, 3.1, NULL, 14306, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkEntryCompletionClass,184, 14310, 9, 3.1, NULL, 14306, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkEntryCompletionClass,92, 14310, 6, 3.1, NULL, 14306, NULL)
#elif defined __ia64__
CheckTypeSize(GtkEntryCompletionClass,184, 14310, 3, 3.1, NULL, 14306, NULL)
#elif defined __i386__
CheckTypeSize(GtkEntryCompletionClass,92, 14310, 2, 3.1, NULL, 14306, NULL)
#else
Msg("Find size of GtkEntryCompletionClass (14310)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14306,NULL);\n",architecture,14310,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAlignmentClass,824, 14312, 12, 3.1, NULL, 14311, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAlignmentClass,824, 14312, 11, 3.1, NULL, 14311, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAlignmentClass,416, 14312, 10, 3.1, NULL, 14311, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAlignmentClass,824, 14312, 9, 3.1, NULL, 14311, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAlignmentClass,416, 14312, 6, 3.1, NULL, 14311, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAlignmentClass,824, 14312, 3, 3.1, NULL, 14311, NULL)
#elif defined __i386__
CheckTypeSize(GtkAlignmentClass,416, 14312, 2, 3.1, NULL, 14311, NULL)
#else
Msg("Find size of GtkAlignmentClass (14312)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14311,NULL);\n",architecture,14312,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeModelFilterClass,168, 14314, 12, 3.1, NULL, 14313, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeModelFilterClass,168, 14314, 11, 3.1, NULL, 14313, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeModelFilterClass,84, 14314, 10, 3.1, NULL, 14313, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeModelFilterClass,168, 14314, 9, 3.1, NULL, 14313, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeModelFilterClass,84, 14314, 6, 3.1, NULL, 14313, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeModelFilterClass,168, 14314, 3, 3.1, NULL, 14313, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeModelFilterClass,84, 14314, 2, 3.1, NULL, 14313, NULL)
#else
Msg("Find size of GtkTreeModelFilterClass (14314)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14313,NULL);\n",architecture,14314,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRcStyleClass,200, 14320, 12, 3.1, NULL, 14315, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRcStyleClass,200, 14320, 11, 3.1, NULL, 14315, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRcStyleClass,100, 14320, 10, 3.1, NULL, 14315, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRcStyleClass,200, 14320, 9, 3.1, NULL, 14315, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRcStyleClass,100, 14320, 6, 3.1, NULL, 14315, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRcStyleClass,200, 14320, 3, 3.1, NULL, 14315, NULL)
#elif defined __i386__
CheckTypeSize(GtkRcStyleClass,100, 14320, 2, 3.1, NULL, 14315, NULL)
#else
Msg("Find size of GtkRcStyleClass (14320)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14315,NULL);\n",architecture,14320,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkUIManagerClass,216, 14328, 12, 3.1, NULL, 14321, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkUIManagerClass,216, 14328, 11, 3.1, NULL, 14321, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkUIManagerClass,108, 14328, 10, 3.1, NULL, 14321, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkUIManagerClass,216, 14328, 9, 3.1, NULL, 14321, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkUIManagerClass,108, 14328, 6, 3.1, NULL, 14321, NULL)
#elif defined __ia64__
CheckTypeSize(GtkUIManagerClass,216, 14328, 3, 3.1, NULL, 14321, NULL)
#elif defined __i386__
CheckTypeSize(GtkUIManagerClass,108, 14328, 2, 3.1, NULL, 14321, NULL)
#else
Msg("Find size of GtkUIManagerClass (14328)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14321,NULL);\n",architecture,14328,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSeparatorClass,720, 14331, 12, 3.1, NULL, 14330, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSeparatorClass,720, 14331, 11, 3.1, NULL, 14330, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSeparatorClass,364, 14331, 10, 3.1, NULL, 14330, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSeparatorClass,720, 14331, 9, 3.1, NULL, 14330, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSeparatorClass,364, 14331, 6, 3.1, NULL, 14330, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSeparatorClass,720, 14331, 3, 3.1, NULL, 14330, NULL)
#elif defined __i386__
CheckTypeSize(GtkSeparatorClass,364, 14331, 2, 3.1, NULL, 14330, NULL)
#else
Msg("Find size of GtkSeparatorClass (14331)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14330,NULL);\n",architecture,14331,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVSeparatorClass,720, 14332, 12, 3.1, NULL, 14329, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVSeparatorClass,720, 14332, 11, 3.1, NULL, 14329, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVSeparatorClass,364, 14332, 10, 3.1, NULL, 14329, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVSeparatorClass,720, 14332, 9, 3.1, NULL, 14329, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVSeparatorClass,364, 14332, 6, 3.1, NULL, 14329, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVSeparatorClass,720, 14332, 3, 3.1, NULL, 14329, NULL)
#elif defined __i386__
CheckTypeSize(GtkVSeparatorClass,364, 14332, 2, 3.1, NULL, 14329, NULL)
#else
Msg("Find size of GtkVSeparatorClass (14332)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14329,NULL);\n",architecture,14332,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCheckButtonClass,984, 14336, 12, 3.1, NULL, 14333, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCheckButtonClass,984, 14336, 11, 3.1, NULL, 14333, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCheckButtonClass,496, 14336, 10, 3.1, NULL, 14333, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCheckButtonClass,984, 14336, 9, 3.1, NULL, 14333, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCheckButtonClass,496, 14336, 6, 3.1, NULL, 14333, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCheckButtonClass,984, 14336, 3, 3.1, NULL, 14333, NULL)
#elif defined __i386__
CheckTypeSize(GtkCheckButtonClass,496, 14336, 2, 3.1, NULL, 14333, NULL)
#else
Msg("Find size of GtkCheckButtonClass (14336)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14333,NULL);\n",architecture,14336,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVisibility,4, 14338, 12, 3.1, NULL, 14337, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVisibility,4, 14338, 11, 3.1, NULL, 14337, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVisibility,4, 14338, 10, 3.1, NULL, 14337, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVisibility,4, 14338, 9, 3.1, NULL, 14337, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVisibility,4, 14338, 6, 3.1, NULL, 14337, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVisibility,4, 14338, 3, 3.1, NULL, 14337, NULL)
#elif defined __i386__
CheckTypeSize(GtkVisibility,4, 14338, 2, 3.1, NULL, 14337, NULL)
#else
Msg("Find size of GtkVisibility (14338)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14337,NULL);\n",architecture,14338,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRadioMenuItemClass,1032, 14341, 12, 3.1, NULL, 14339, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRadioMenuItemClass,1032, 14341, 11, 3.1, NULL, 14339, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRadioMenuItemClass,520, 14341, 10, 3.1, NULL, 14339, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRadioMenuItemClass,1032, 14341, 9, 3.1, NULL, 14339, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRadioMenuItemClass,520, 14341, 6, 3.1, NULL, 14339, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRadioMenuItemClass,1032, 14341, 3, 3.1, NULL, 14339, NULL)
#elif defined __i386__
CheckTypeSize(GtkRadioMenuItemClass,520, 14341, 2, 3.1, NULL, 14339, NULL)
#else
Msg("Find size of GtkRadioMenuItemClass (14341)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14339,NULL);\n",architecture,14341,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextViewClass,984, 14351, 12, 3.1, NULL, 14342, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextViewClass,984, 14351, 11, 3.1, NULL, 14342, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextViewClass,496, 14351, 10, 3.1, NULL, 14342, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextViewClass,984, 14351, 9, 3.1, NULL, 14342, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextViewClass,496, 14351, 6, 3.1, NULL, 14342, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextViewClass,984, 14351, 3, 3.1, NULL, 14342, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextViewClass,496, 14351, 2, 3.1, NULL, 14342, NULL)
#else
Msg("Find size of GtkTextViewClass (14351)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14342,NULL);\n",architecture,14351,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkColorSelectionChangePaletteFunc,8, 14353, 12, 3.1, NULL, 14352, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkColorSelectionChangePaletteFunc,8, 14353, 11, 3.1, NULL, 14352, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkColorSelectionChangePaletteFunc,4, 14353, 10, 3.1, NULL, 14352, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkColorSelectionChangePaletteFunc,8, 14353, 9, 3.1, NULL, 14352, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkColorSelectionChangePaletteFunc,4, 14353, 6, 3.1, NULL, 14352, NULL)
#elif defined __ia64__
CheckTypeSize(GtkColorSelectionChangePaletteFunc,8, 14353, 3, 3.1, NULL, 14352, NULL)
#elif defined __i386__
CheckTypeSize(GtkColorSelectionChangePaletteFunc,4, 14353, 2, 3.1, NULL, 14352, NULL)
#else
Msg("Find size of GtkColorSelectionChangePaletteFunc (14353)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14352,NULL);\n",architecture,14353,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeModelSortClass,168, 14355, 12, 3.1, NULL, 14354, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeModelSortClass,168, 14355, 11, 3.1, NULL, 14354, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeModelSortClass,84, 14355, 10, 3.1, NULL, 14354, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeModelSortClass,168, 14355, 9, 3.1, NULL, 14354, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeModelSortClass,84, 14355, 6, 3.1, NULL, 14354, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeModelSortClass,168, 14355, 3, 3.1, NULL, 14354, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeModelSortClass,84, 14355, 2, 3.1, NULL, 14354, NULL)
#else
Msg("Find size of GtkTreeModelSortClass (14355)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14354,NULL);\n",architecture,14355,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellEditableIface,40, 14359, 12, 3.1, NULL, 14356, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellEditableIface,40, 14359, 11, 3.1, NULL, 14356, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellEditableIface,20, 14359, 10, 3.1, NULL, 14356, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellEditableIface,40, 14359, 9, 3.1, NULL, 14356, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellEditableIface,20, 14359, 6, 3.1, NULL, 14356, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellEditableIface,40, 14359, 3, 3.1, NULL, 14356, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellEditableIface,20, 14359, 2, 3.1, NULL, 14356, NULL)
#else
Msg("Find size of GtkCellEditableIface (14359)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14356,NULL);\n",architecture,14359,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToolbarClass,872, 14364, 12, 3.1, NULL, 14360, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToolbarClass,872, 14364, 11, 3.1, NULL, 14360, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToolbarClass,440, 14364, 10, 3.1, NULL, 14360, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToolbarClass,872, 14364, 9, 3.1, NULL, 14360, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToolbarClass,440, 14364, 6, 3.1, NULL, 14360, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToolbarClass,872, 14364, 3, 3.1, NULL, 14360, NULL)
#elif defined __i386__
CheckTypeSize(GtkToolbarClass,440, 14364, 2, 3.1, NULL, 14360, NULL)
#else
Msg("Find size of GtkToolbarClass (14364)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14360,NULL);\n",architecture,14364,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHandleBoxClass,872, 14367, 12, 3.1, NULL, 14365, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHandleBoxClass,872, 14367, 11, 3.1, NULL, 14365, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHandleBoxClass,440, 14367, 10, 3.1, NULL, 14365, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHandleBoxClass,872, 14367, 9, 3.1, NULL, 14365, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHandleBoxClass,440, 14367, 6, 3.1, NULL, 14365, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHandleBoxClass,872, 14367, 3, 3.1, NULL, 14365, NULL)
#elif defined __i386__
CheckTypeSize(GtkHandleBoxClass,440, 14367, 2, 3.1, NULL, 14365, NULL)
#else
Msg("Find size of GtkHandleBoxClass (14367)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14365,NULL);\n",architecture,14367,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHSeparator,96, 14369, 12, 3.1, NULL, 14368, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHSeparator,96, 14369, 11, 3.1, NULL, 14368, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHSeparator,60, 14369, 10, 3.1, NULL, 14368, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHSeparator,96, 14369, 9, 3.1, NULL, 14368, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHSeparator,60, 14369, 6, 3.1, NULL, 14368, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHSeparator,96, 14369, 3, 3.1, NULL, 14368, NULL)
#elif defined __i386__
CheckTypeSize(GtkHSeparator,60, 14369, 2, 3.1, NULL, 14368, NULL)
#else
Msg("Find size of GtkHSeparator (14369)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14368,NULL);\n",architecture,14369,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextTagTableClass,192, 14373, 12, 3.1, NULL, 14370, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextTagTableClass,192, 14373, 11, 3.1, NULL, 14370, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextTagTableClass,96, 14373, 10, 3.1, NULL, 14370, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextTagTableClass,192, 14373, 9, 3.1, NULL, 14370, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextTagTableClass,96, 14373, 6, 3.1, NULL, 14370, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextTagTableClass,192, 14373, 3, 3.1, NULL, 14370, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextTagTableClass,96, 14373, 2, 3.1, NULL, 14370, NULL)
#else
Msg("Find size of GtkTextTagTableClass (14373)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14370,NULL);\n",architecture,14373,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkComboBoxClass,864, 14378, 12, 3.1, NULL, 14375, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkComboBoxClass,864, 14378, 11, 3.1, NULL, 14375, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkComboBoxClass,436, 14378, 10, 3.1, NULL, 14375, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkComboBoxClass,864, 14378, 9, 3.1, NULL, 14375, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkComboBoxClass,436, 14378, 6, 3.1, NULL, 14375, NULL)
#elif defined __ia64__
CheckTypeSize(GtkComboBoxClass,864, 14378, 3, 3.1, NULL, 14375, NULL)
#elif defined __i386__
CheckTypeSize(GtkComboBoxClass,436, 14378, 2, 3.1, NULL, 14375, NULL)
#else
Msg("Find size of GtkComboBoxClass (14378)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14375,NULL);\n",architecture,14378,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkComboBoxEntryClass,896, 14379, 12, 3.1, NULL, 14374, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkComboBoxEntryClass,896, 14379, 11, 3.1, NULL, 14374, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkComboBoxEntryClass,452, 14379, 10, 3.1, NULL, 14374, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkComboBoxEntryClass,896, 14379, 9, 3.1, NULL, 14374, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkComboBoxEntryClass,452, 14379, 6, 3.1, NULL, 14374, NULL)
#elif defined __ia64__
CheckTypeSize(GtkComboBoxEntryClass,896, 14379, 3, 3.1, NULL, 14374, NULL)
#elif defined __i386__
CheckTypeSize(GtkComboBoxEntryClass,452, 14379, 2, 3.1, NULL, 14374, NULL)
#else
Msg("Find size of GtkComboBoxEntryClass (14379)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14374,NULL);\n",architecture,14379,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFontSelectionClass,856, 14381, 12, 3.1, NULL, 14380, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFontSelectionClass,856, 14381, 11, 3.1, NULL, 14380, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFontSelectionClass,432, 14381, 10, 3.1, NULL, 14380, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFontSelectionClass,856, 14381, 9, 3.1, NULL, 14380, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFontSelectionClass,432, 14381, 6, 3.1, NULL, 14380, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFontSelectionClass,856, 14381, 3, 3.1, NULL, 14380, NULL)
#elif defined __i386__
CheckTypeSize(GtkFontSelectionClass,432, 14381, 2, 3.1, NULL, 14380, NULL)
#else
Msg("Find size of GtkFontSelectionClass (14381)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14380,NULL);\n",architecture,14381,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFrameClass,832, 14384, 12, 3.1, NULL, 14382, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFrameClass,832, 14384, 11, 3.1, NULL, 14382, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFrameClass,420, 14384, 10, 3.1, NULL, 14382, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFrameClass,832, 14384, 9, 3.1, NULL, 14382, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFrameClass,420, 14384, 6, 3.1, NULL, 14382, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFrameClass,832, 14384, 3, 3.1, NULL, 14382, NULL)
#elif defined __i386__
CheckTypeSize(GtkFrameClass,420, 14384, 2, 3.1, NULL, 14382, NULL)
#else
Msg("Find size of GtkFrameClass (14384)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14382,NULL);\n",architecture,14384,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHScrollbarClass,832, 14386, 12, 3.1, NULL, 14385, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHScrollbarClass,832, 14386, 11, 3.1, NULL, 14385, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHScrollbarClass,420, 14386, 10, 3.1, NULL, 14385, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHScrollbarClass,832, 14386, 9, 3.1, NULL, 14385, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHScrollbarClass,420, 14386, 6, 3.1, NULL, 14385, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHScrollbarClass,832, 14386, 3, 3.1, NULL, 14385, NULL)
#elif defined __i386__
CheckTypeSize(GtkHScrollbarClass,420, 14386, 2, 3.1, NULL, 14385, NULL)
#else
Msg("Find size of GtkHScrollbarClass (14386)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14385,NULL);\n",architecture,14386,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileSelectionClass,984, 14388, 12, 3.1, NULL, 14387, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileSelectionClass,984, 14388, 11, 3.1, NULL, 14387, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileSelectionClass,496, 14388, 10, 3.1, NULL, 14387, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileSelectionClass,984, 14388, 9, 3.1, NULL, 14387, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileSelectionClass,496, 14388, 6, 3.1, NULL, 14387, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileSelectionClass,984, 14388, 3, 3.1, NULL, 14387, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileSelectionClass,496, 14388, 2, 3.1, NULL, 14387, NULL)
#else
Msg("Find size of GtkFileSelectionClass (14388)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14387,NULL);\n",architecture,14388,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkScrolledWindowClass,880, 14392, 12, 3.1, NULL, 14389, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkScrolledWindowClass,880, 14392, 11, 3.1, NULL, 14389, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkScrolledWindowClass,444, 14392, 10, 3.1, NULL, 14389, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkScrolledWindowClass,880, 14392, 9, 3.1, NULL, 14389, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkScrolledWindowClass,444, 14392, 6, 3.1, NULL, 14389, NULL)
#elif defined __ia64__
CheckTypeSize(GtkScrolledWindowClass,880, 14392, 3, 3.1, NULL, 14389, NULL)
#elif defined __i386__
CheckTypeSize(GtkScrolledWindowClass,444, 14392, 2, 3.1, NULL, 14389, NULL)
#else
Msg("Find size of GtkScrolledWindowClass (14392)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14389,NULL);\n",architecture,14392,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextMarkClass,168, 14394, 12, 3.1, NULL, 14393, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextMarkClass,168, 14394, 11, 3.1, NULL, 14393, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextMarkClass,84, 14394, 10, 3.1, NULL, 14393, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextMarkClass,168, 14394, 9, 3.1, NULL, 14393, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextMarkClass,84, 14394, 6, 3.1, NULL, 14393, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextMarkClass,168, 14394, 3, 3.1, NULL, 14393, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextMarkClass,84, 14394, 2, 3.1, NULL, 14393, NULL)
#else
Msg("Find size of GtkTextMarkClass (14394)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14393,NULL);\n",architecture,14394,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVScale,200, 14398, 12, 3.1, NULL, 14397, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVScale,200, 14398, 11, 3.1, NULL, 14397, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVScale,144, 14398, 10, 3.1, NULL, 14397, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVScale,200, 14398, 9, 3.1, NULL, 14397, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVScale,144, 14398, 6, 3.1, NULL, 14397, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVScale,200, 14398, 3, 3.1, NULL, 14397, NULL)
#elif defined __i386__
CheckTypeSize(GtkVScale,144, 14398, 2, 3.1, NULL, 14397, NULL)
#else
Msg("Find size of GtkVScale (14398)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14397,NULL);\n",architecture,14398,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFixedChild,16, 14400, 12, 3.1, NULL, 14399, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFixedChild,16, 14400, 11, 3.1, NULL, 14399, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFixedChild,12, 14400, 10, 3.1, NULL, 14399, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFixedChild,16, 14400, 9, 3.1, NULL, 14399, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFixedChild,12, 14400, 6, 3.1, NULL, 14399, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFixedChild,16, 14400, 3, 3.1, NULL, 14399, NULL)
#elif defined __i386__
CheckTypeSize(GtkFixedChild,12, 14400, 2, 3.1, NULL, 14399, NULL)
#else
Msg("Find size of GtkFixedChild (14400)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14399,NULL);\n",architecture,14400,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkLayoutClass,864, 14403, 12, 3.1, NULL, 14401, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkLayoutClass,864, 14403, 11, 3.1, NULL, 14401, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkLayoutClass,436, 14403, 10, 3.1, NULL, 14401, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkLayoutClass,864, 14403, 9, 3.1, NULL, 14401, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkLayoutClass,436, 14403, 6, 3.1, NULL, 14401, NULL)
#elif defined __ia64__
CheckTypeSize(GtkLayoutClass,864, 14403, 3, 3.1, NULL, 14401, NULL)
#elif defined __i386__
CheckTypeSize(GtkLayoutClass,436, 14403, 2, 3.1, NULL, 14401, NULL)
#else
Msg("Find size of GtkLayoutClass (14403)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14401,NULL);\n",architecture,14403,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkEventBoxClass,824, 14405, 12, 3.1, NULL, 14404, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkEventBoxClass,824, 14405, 11, 3.1, NULL, 14404, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkEventBoxClass,416, 14405, 10, 3.1, NULL, 14404, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkEventBoxClass,824, 14405, 9, 3.1, NULL, 14404, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkEventBoxClass,416, 14405, 6, 3.1, NULL, 14404, NULL)
#elif defined __ia64__
CheckTypeSize(GtkEventBoxClass,824, 14405, 3, 3.1, NULL, 14404, NULL)
#elif defined __i386__
CheckTypeSize(GtkEventBoxClass,416, 14405, 2, 3.1, NULL, 14404, NULL)
#else
Msg("Find size of GtkEventBoxClass (14405)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14404,NULL);\n",architecture,14405,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIMContextSimpleClass,336, 14407, 12, 3.1, NULL, 14406, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIMContextSimpleClass,336, 14407, 11, 3.1, NULL, 14406, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIMContextSimpleClass,168, 14407, 10, 3.1, NULL, 14406, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIMContextSimpleClass,336, 14407, 9, 3.1, NULL, 14406, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIMContextSimpleClass,168, 14407, 6, 3.1, NULL, 14406, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIMContextSimpleClass,336, 14407, 3, 3.1, NULL, 14406, NULL)
#elif defined __i386__
CheckTypeSize(GtkIMContextSimpleClass,168, 14407, 2, 3.1, NULL, 14406, NULL)
#else
Msg("Find size of GtkIMContextSimpleClass (14407)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14406,NULL);\n",architecture,14407,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkExpanderClass,832, 14410, 12, 3.1, NULL, 14408, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkExpanderClass,832, 14410, 11, 3.1, NULL, 14408, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkExpanderClass,420, 14410, 10, 3.1, NULL, 14408, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkExpanderClass,832, 14410, 9, 3.1, NULL, 14408, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkExpanderClass,420, 14410, 6, 3.1, NULL, 14408, NULL)
#elif defined __ia64__
CheckTypeSize(GtkExpanderClass,832, 14410, 3, 3.1, NULL, 14408, NULL)
#elif defined __i386__
CheckTypeSize(GtkExpanderClass,420, 14410, 2, 3.1, NULL, 14408, NULL)
#else
Msg("Find size of GtkExpanderClass (14410)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14408,NULL);\n",architecture,14410,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkProgressClass,776, 14414, 12, 3.1, NULL, 14411, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkProgressClass,776, 14414, 11, 3.1, NULL, 14411, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkProgressClass,392, 14414, 10, 3.1, NULL, 14411, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkProgressClass,776, 14414, 9, 3.1, NULL, 14411, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkProgressClass,392, 14414, 6, 3.1, NULL, 14411, NULL)
#elif defined __ia64__
CheckTypeSize(GtkProgressClass,776, 14414, 3, 3.1, NULL, 14411, NULL)
#elif defined __i386__
CheckTypeSize(GtkProgressClass,392, 14414, 2, 3.1, NULL, 14411, NULL)
#else
Msg("Find size of GtkProgressClass (14414)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14411,NULL);\n",architecture,14414,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkModuleInitFunc,8, 14416, 12, 3.1, NULL, 14415, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkModuleInitFunc,8, 14416, 11, 3.1, NULL, 14415, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkModuleInitFunc,4, 14416, 10, 3.1, NULL, 14415, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkModuleInitFunc,8, 14416, 9, 3.1, NULL, 14415, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkModuleInitFunc,4, 14416, 6, 3.1, NULL, 14415, NULL)
#elif defined __ia64__
CheckTypeSize(GtkModuleInitFunc,8, 14416, 3, 3.1, NULL, 14415, NULL)
#elif defined __i386__
CheckTypeSize(GtkModuleInitFunc,4, 14416, 2, 3.1, NULL, 14415, NULL)
#else
Msg("Find size of GtkModuleInitFunc (14416)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14415,NULL);\n",architecture,14416,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileChooserDialogClass,952, 14418, 12, 3.1, NULL, 14417, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileChooserDialogClass,952, 14418, 11, 3.1, NULL, 14417, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileChooserDialogClass,480, 14418, 10, 3.1, NULL, 14417, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileChooserDialogClass,952, 14418, 9, 3.1, NULL, 14417, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileChooserDialogClass,480, 14418, 6, 3.1, NULL, 14417, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileChooserDialogClass,952, 14418, 3, 3.1, NULL, 14417, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileChooserDialogClass,480, 14418, 2, 3.1, NULL, 14417, NULL)
#else
Msg("Find size of GtkFileChooserDialogClass (14418)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14417,NULL);\n",architecture,14418,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkVScrollbarClass,832, 14420, 12, 3.1, NULL, 14419, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkVScrollbarClass,832, 14420, 11, 3.1, NULL, 14419, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkVScrollbarClass,420, 14420, 10, 3.1, NULL, 14419, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkVScrollbarClass,832, 14420, 9, 3.1, NULL, 14419, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkVScrollbarClass,420, 14420, 6, 3.1, NULL, 14419, NULL)
#elif defined __ia64__
CheckTypeSize(GtkVScrollbarClass,832, 14420, 3, 3.1, NULL, 14419, NULL)
#elif defined __i386__
CheckTypeSize(GtkVScrollbarClass,420, 14420, 2, 3.1, NULL, 14419, NULL)
#else
Msg("Find size of GtkVScrollbarClass (14420)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14419,NULL);\n",architecture,14420,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTableClass,824, 14422, 12, 3.1, NULL, 14421, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTableClass,824, 14422, 11, 3.1, NULL, 14421, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTableClass,416, 14422, 10, 3.1, NULL, 14421, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTableClass,824, 14422, 9, 3.1, NULL, 14421, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTableClass,416, 14422, 6, 3.1, NULL, 14421, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTableClass,824, 14422, 3, 3.1, NULL, 14421, NULL)
#elif defined __i386__
CheckTypeSize(GtkTableClass,416, 14422, 2, 3.1, NULL, 14421, NULL)
#else
Msg("Find size of GtkTableClass (14422)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14421,NULL);\n",architecture,14422,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFontButtonClass,944, 14425, 12, 3.1, NULL, 14423, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFontButtonClass,944, 14425, 11, 3.1, NULL, 14423, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFontButtonClass,476, 14425, 10, 3.1, NULL, 14423, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFontButtonClass,944, 14425, 9, 3.1, NULL, 14423, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFontButtonClass,476, 14425, 6, 3.1, NULL, 14423, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFontButtonClass,944, 14425, 3, 3.1, NULL, 14423, NULL)
#elif defined __i386__
CheckTypeSize(GtkFontButtonClass,476, 14425, 2, 3.1, NULL, 14423, NULL)
#else
Msg("Find size of GtkFontButtonClass (14425)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14423,NULL);\n",architecture,14425,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHSeparatorClass,720, 14427, 12, 3.1, NULL, 14426, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHSeparatorClass,720, 14427, 11, 3.1, NULL, 14426, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHSeparatorClass,364, 14427, 10, 3.1, NULL, 14426, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHSeparatorClass,720, 14427, 9, 3.1, NULL, 14426, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHSeparatorClass,364, 14427, 6, 3.1, NULL, 14426, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHSeparatorClass,720, 14427, 3, 3.1, NULL, 14426, NULL)
#elif defined __i386__
CheckTypeSize(GtkHSeparatorClass,364, 14427, 2, 3.1, NULL, 14426, NULL)
#else
Msg("Find size of GtkHSeparatorClass (14427)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14426,NULL);\n",architecture,14427,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkColorSelectionDialogClass,984, 14429, 12, 3.1, NULL, 14428, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkColorSelectionDialogClass,984, 14429, 11, 3.1, NULL, 14428, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkColorSelectionDialogClass,496, 14429, 10, 3.1, NULL, 14428, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkColorSelectionDialogClass,984, 14429, 9, 3.1, NULL, 14428, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkColorSelectionDialogClass,496, 14429, 6, 3.1, NULL, 14428, NULL)
#elif defined __ia64__
CheckTypeSize(GtkColorSelectionDialogClass,984, 14429, 3, 3.1, NULL, 14428, NULL)
#elif defined __i386__
CheckTypeSize(GtkColorSelectionDialogClass,496, 14429, 2, 3.1, NULL, 14428, NULL)
#else
Msg("Find size of GtkColorSelectionDialogClass (14429)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14428,NULL);\n",architecture,14429,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkColorButtonClass,944, 14432, 12, 3.1, NULL, 14430, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkColorButtonClass,944, 14432, 11, 3.1, NULL, 14430, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkColorButtonClass,476, 14432, 10, 3.1, NULL, 14430, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkColorButtonClass,944, 14432, 9, 3.1, NULL, 14430, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkColorButtonClass,476, 14432, 6, 3.1, NULL, 14430, NULL)
#elif defined __ia64__
CheckTypeSize(GtkColorButtonClass,944, 14432, 3, 3.1, NULL, 14430, NULL)
#elif defined __i386__
CheckTypeSize(GtkColorButtonClass,476, 14432, 2, 3.1, NULL, 14430, NULL)
#else
Msg("Find size of GtkColorButtonClass (14432)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14430,NULL);\n",architecture,14432,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuBar,152, 14434, 12, 3.1, NULL, 14433, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuBar,152, 14434, 11, 3.1, NULL, 14433, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuBar,92, 14434, 10, 3.1, NULL, 14433, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuBar,152, 14434, 9, 3.1, NULL, 14433, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuBar,92, 14434, 6, 3.1, NULL, 14433, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuBar,152, 14434, 3, 3.1, NULL, 14433, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuBar,92, 14434, 2, 3.1, NULL, 14433, NULL)
#else
Msg("Find size of GtkMenuBar (14434)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14433,NULL);\n",architecture,14434,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuBarClass,952, 14436, 12, 3.1, NULL, 14435, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuBarClass,952, 14436, 11, 3.1, NULL, 14435, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuBarClass,480, 14436, 10, 3.1, NULL, 14435, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuBarClass,952, 14436, 9, 3.1, NULL, 14435, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuBarClass,480, 14436, 6, 3.1, NULL, 14435, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuBarClass,952, 14436, 3, 3.1, NULL, 14435, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuBarClass,480, 14436, 2, 3.1, NULL, 14435, NULL)
#else
Msg("Find size of GtkMenuBarClass (14436)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14435,NULL);\n",architecture,14436,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkColorSelectionDialog,296, 14438, 12, 3.1, NULL, 14437, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkColorSelectionDialog,296, 14438, 11, 3.1, NULL, 14437, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkColorSelectionDialog,176, 14438, 10, 3.1, NULL, 14437, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkColorSelectionDialog,296, 14438, 9, 3.1, NULL, 14437, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkColorSelectionDialog,176, 14438, 6, 3.1, NULL, 14437, NULL)
#elif defined __ia64__
CheckTypeSize(GtkColorSelectionDialog,296, 14438, 3, 3.1, NULL, 14437, NULL)
#elif defined __i386__
CheckTypeSize(GtkColorSelectionDialog,176, 14438, 2, 3.1, NULL, 14437, NULL)
#else
Msg("Find size of GtkColorSelectionDialog (14438)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14437,NULL);\n",architecture,14438,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkStatusbarClass,880, 14441, 12, 3.1, NULL, 14439, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkStatusbarClass,880, 14441, 11, 3.1, NULL, 14439, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkStatusbarClass,444, 14441, 10, 3.1, NULL, 14439, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkStatusbarClass,880, 14441, 9, 3.1, NULL, 14439, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkStatusbarClass,444, 14441, 6, 3.1, NULL, 14439, NULL)
#elif defined __ia64__
CheckTypeSize(GtkStatusbarClass,880, 14441, 3, 3.1, NULL, 14439, NULL)
#elif defined __i386__
CheckTypeSize(GtkStatusbarClass,444, 14441, 2, 3.1, NULL, 14439, NULL)
#else
Msg("Find size of GtkStatusbarClass (14441)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14439,NULL);\n",architecture,14441,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkSeparatorMenuItem,160, 14443, 12, 3.1, NULL, 14442, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkSeparatorMenuItem,160, 14443, 11, 3.1, NULL, 14442, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkSeparatorMenuItem,96, 14443, 10, 3.1, NULL, 14442, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkSeparatorMenuItem,160, 14443, 9, 3.1, NULL, 14442, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkSeparatorMenuItem,96, 14443, 6, 3.1, NULL, 14442, NULL)
#elif defined __ia64__
CheckTypeSize(GtkSeparatorMenuItem,160, 14443, 3, 3.1, NULL, 14442, NULL)
#elif defined __i386__
CheckTypeSize(GtkSeparatorMenuItem,96, 14443, 2, 3.1, NULL, 14442, NULL)
#else
Msg("Find size of GtkSeparatorMenuItem (14443)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14442,NULL);\n",architecture,14443,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAboutDialogClass,984, 14445, 12, 3.1, NULL, 14444, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAboutDialogClass,984, 14445, 11, 3.1, NULL, 14444, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAboutDialogClass,496, 14445, 10, 3.1, NULL, 14444, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAboutDialogClass,984, 14445, 9, 3.1, NULL, 14444, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAboutDialogClass,496, 14445, 6, 3.1, NULL, 14444, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAboutDialogClass,984, 14445, 3, 3.1, NULL, 14444, NULL)
#elif defined __i386__
CheckTypeSize(GtkAboutDialogClass,496, 14445, 2, 3.1, NULL, 14444, NULL)
#else
Msg("Find size of GtkAboutDialogClass (14445)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14444,NULL);\n",architecture,14445,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkListStoreClass,168, 14447, 12, 3.1, NULL, 14446, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkListStoreClass,168, 14447, 11, 3.1, NULL, 14446, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkListStoreClass,84, 14447, 10, 3.1, NULL, 14446, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkListStoreClass,168, 14447, 9, 3.1, NULL, 14446, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkListStoreClass,84, 14447, 6, 3.1, NULL, 14446, NULL)
#elif defined __ia64__
CheckTypeSize(GtkListStoreClass,168, 14447, 3, 3.1, NULL, 14446, NULL)
#elif defined __i386__
CheckTypeSize(GtkListStoreClass,84, 14447, 2, 3.1, NULL, 14446, NULL)
#else
Msg("Find size of GtkListStoreClass (14447)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14446,NULL);\n",architecture,14447,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileChooserButtonClass,888, 14449, 12, 3.1, NULL, 14448, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileChooserButtonClass,888, 14449, 11, 3.1, NULL, 14448, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileChooserButtonClass,448, 14449, 10, 3.1, NULL, 14448, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileChooserButtonClass,888, 14449, 9, 3.1, NULL, 14448, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileChooserButtonClass,448, 14449, 6, 3.1, NULL, 14448, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileChooserButtonClass,888, 14449, 3, 3.1, NULL, 14448, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileChooserButtonClass,448, 14449, 2, 3.1, NULL, 14448, NULL)
#else
Msg("Find size of GtkFileChooserButtonClass (14449)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14448,NULL);\n",architecture,14449,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkToolbarSpaceStyle,4, 14451, 12, 3.1, NULL, 14450, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkToolbarSpaceStyle,4, 14451, 11, 3.1, NULL, 14450, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkToolbarSpaceStyle,4, 14451, 10, 3.1, NULL, 14450, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkToolbarSpaceStyle,4, 14451, 9, 3.1, NULL, 14450, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkToolbarSpaceStyle,4, 14451, 6, 3.1, NULL, 14450, NULL)
#elif defined __ia64__
CheckTypeSize(GtkToolbarSpaceStyle,4, 14451, 3, 3.1, NULL, 14450, NULL)
#elif defined __i386__
CheckTypeSize(GtkToolbarSpaceStyle,4, 14451, 2, 3.1, NULL, 14450, NULL)
#else
Msg("Find size of GtkToolbarSpaceStyle (14451)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14450,NULL);\n",architecture,14451,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkMenuClass,952, 14453, 12, 3.1, NULL, 14452, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkMenuClass,952, 14453, 11, 3.1, NULL, 14452, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkMenuClass,480, 14453, 10, 3.1, NULL, 14452, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkMenuClass,952, 14453, 9, 3.1, NULL, 14452, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkMenuClass,480, 14453, 6, 3.1, NULL, 14452, NULL)
#elif defined __ia64__
CheckTypeSize(GtkMenuClass,952, 14453, 3, 3.1, NULL, 14452, NULL)
#elif defined __i386__
CheckTypeSize(GtkMenuClass,480, 14453, 2, 3.1, NULL, 14452, NULL)
#else
Msg("Find size of GtkMenuClass (14453)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14452,NULL);\n",architecture,14453,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHScale,200, 14455, 12, 3.1, NULL, 14454, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHScale,200, 14455, 11, 3.1, NULL, 14454, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHScale,144, 14455, 10, 3.1, NULL, 14454, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHScale,200, 14455, 9, 3.1, NULL, 14454, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHScale,144, 14455, 6, 3.1, NULL, 14454, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHScale,200, 14455, 3, 3.1, NULL, 14454, NULL)
#elif defined __i386__
CheckTypeSize(GtkHScale,144, 14455, 2, 3.1, NULL, 14454, NULL)
#else
Msg("Find size of GtkHScale (14455)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14454,NULL);\n",architecture,14455,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkGammaCurveClass,856, 14457, 12, 3.1, NULL, 14456, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkGammaCurveClass,856, 14457, 11, 3.1, NULL, 14456, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkGammaCurveClass,432, 14457, 10, 3.1, NULL, 14456, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkGammaCurveClass,856, 14457, 9, 3.1, NULL, 14456, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkGammaCurveClass,432, 14457, 6, 3.1, NULL, 14456, NULL)
#elif defined __ia64__
CheckTypeSize(GtkGammaCurveClass,856, 14457, 3, 3.1, NULL, 14456, NULL)
#elif defined __i386__
CheckTypeSize(GtkGammaCurveClass,432, 14457, 2, 3.1, NULL, 14456, NULL)
#else
Msg("Find size of GtkGammaCurveClass (14457)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14456,NULL);\n",architecture,14457,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererComboClass,264, 14459, 12, 3.1, NULL, 14458, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererComboClass,264, 14459, 11, 3.1, NULL, 14458, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererComboClass,132, 14459, 10, 3.1, NULL, 14458, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererComboClass,264, 14459, 9, 3.1, NULL, 14458, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererComboClass,132, 14459, 6, 3.1, NULL, 14458, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererComboClass,264, 14459, 3, 3.1, NULL, 14458, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererComboClass,132, 14459, 2, 3.1, NULL, 14458, NULL)
#else
Msg("Find size of GtkCellRendererComboClass (14459)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14458,NULL);\n",architecture,14459,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTearoffMenuItem,168, 14461, 12, 3.1, NULL, 14460, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTearoffMenuItem,168, 14461, 11, 3.1, NULL, 14460, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTearoffMenuItem,100, 14461, 10, 3.1, NULL, 14460, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTearoffMenuItem,168, 14461, 9, 3.1, NULL, 14460, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTearoffMenuItem,100, 14461, 6, 3.1, NULL, 14460, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTearoffMenuItem,168, 14461, 3, 3.1, NULL, 14460, NULL)
#elif defined __i386__
CheckTypeSize(GtkTearoffMenuItem,100, 14461, 2, 3.1, NULL, 14460, NULL)
#else
Msg("Find size of GtkTearoffMenuItem (14461)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14460,NULL);\n",architecture,14461,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkNotebookClass,896, 14468, 12, 3.1, NULL, 14462, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkNotebookClass,896, 14468, 11, 3.1, NULL, 14462, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkNotebookClass,452, 14468, 10, 3.1, NULL, 14462, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkNotebookClass,896, 14468, 9, 3.1, NULL, 14462, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkNotebookClass,452, 14468, 6, 3.1, NULL, 14462, NULL)
#elif defined __ia64__
CheckTypeSize(GtkNotebookClass,896, 14468, 3, 3.1, NULL, 14462, NULL)
#elif defined __i386__
CheckTypeSize(GtkNotebookClass,452, 14468, 2, 3.1, NULL, 14462, NULL)
#else
Msg("Find size of GtkNotebookClass (14468)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14462,NULL);\n",architecture,14468,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkImageMenuItemClass,952, 14470, 12, 3.1, NULL, 14469, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkImageMenuItemClass,952, 14470, 11, 3.1, NULL, 14469, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkImageMenuItemClass,480, 14470, 10, 3.1, NULL, 14469, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkImageMenuItemClass,952, 14470, 9, 3.1, NULL, 14469, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkImageMenuItemClass,480, 14470, 6, 3.1, NULL, 14469, NULL)
#elif defined __ia64__
CheckTypeSize(GtkImageMenuItemClass,952, 14470, 3, 3.1, NULL, 14469, NULL)
#elif defined __i386__
CheckTypeSize(GtkImageMenuItemClass,480, 14470, 2, 3.1, NULL, 14469, NULL)
#else
Msg("Find size of GtkImageMenuItemClass (14470)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14469,NULL);\n",architecture,14470,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTooltipsClass,192, 14472, 12, 3.1, NULL, 14471, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTooltipsClass,192, 14472, 11, 3.1, NULL, 14471, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTooltipsClass,96, 14472, 10, 3.1, NULL, 14471, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTooltipsClass,192, 14472, 9, 3.1, NULL, 14471, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTooltipsClass,96, 14472, 6, 3.1, NULL, 14471, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTooltipsClass,192, 14472, 3, 3.1, NULL, 14471, NULL)
#elif defined __i386__
CheckTypeSize(GtkTooltipsClass,96, 14472, 2, 3.1, NULL, 14471, NULL)
#else
Msg("Find size of GtkTooltipsClass (14472)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14471,NULL);\n",architecture,14472,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTreeViewClass,992, 14483, 12, 3.1, NULL, 14473, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTreeViewClass,992, 14483, 11, 3.1, NULL, 14473, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTreeViewClass,500, 14483, 10, 3.1, NULL, 14473, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTreeViewClass,992, 14483, 9, 3.1, NULL, 14473, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTreeViewClass,500, 14483, 6, 3.1, NULL, 14473, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTreeViewClass,992, 14483, 3, 3.1, NULL, 14473, NULL)
#elif defined __i386__
CheckTypeSize(GtkTreeViewClass,500, 14483, 2, 3.1, NULL, 14473, NULL)
#else
Msg("Find size of GtkTreeViewClass (14483)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14473,NULL);\n",architecture,14483,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileChooserWidgetClass,824, 14485, 12, 3.1, NULL, 14484, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileChooserWidgetClass,824, 14485, 11, 3.1, NULL, 14484, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileChooserWidgetClass,416, 14485, 10, 3.1, NULL, 14484, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileChooserWidgetClass,824, 14485, 9, 3.1, NULL, 14484, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileChooserWidgetClass,416, 14485, 6, 3.1, NULL, 14484, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileChooserWidgetClass,824, 14485, 3, 3.1, NULL, 14484, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileChooserWidgetClass,416, 14485, 2, 3.1, NULL, 14484, NULL)
#else
Msg("Find size of GtkFileChooserWidgetClass (14485)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14484,NULL);\n",architecture,14485,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTearoffMenuItemClass,984, 14487, 12, 3.1, NULL, 14486, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTearoffMenuItemClass,984, 14487, 11, 3.1, NULL, 14486, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTearoffMenuItemClass,496, 14487, 10, 3.1, NULL, 14486, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTearoffMenuItemClass,984, 14487, 9, 3.1, NULL, 14486, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTearoffMenuItemClass,496, 14487, 6, 3.1, NULL, 14486, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTearoffMenuItemClass,984, 14487, 3, 3.1, NULL, 14486, NULL)
#elif defined __i386__
CheckTypeSize(GtkTearoffMenuItemClass,496, 14487, 2, 3.1, NULL, 14486, NULL)
#else
Msg("Find size of GtkTearoffMenuItemClass (14487)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14486,NULL);\n",architecture,14487,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRadioButtonClass,1016, 14490, 12, 3.1, NULL, 14488, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRadioButtonClass,1016, 14490, 11, 3.1, NULL, 14488, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRadioButtonClass,512, 14490, 10, 3.1, NULL, 14488, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRadioButtonClass,1016, 14490, 9, 3.1, NULL, 14488, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRadioButtonClass,512, 14490, 6, 3.1, NULL, 14488, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRadioButtonClass,1016, 14490, 3, 3.1, NULL, 14488, NULL)
#elif defined __i386__
CheckTypeSize(GtkRadioButtonClass,512, 14490, 2, 3.1, NULL, 14488, NULL)
#else
Msg("Find size of GtkRadioButtonClass (14490)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14488,NULL);\n",architecture,14490,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAdjustmentClass,208, 14493, 12, 3.1, NULL, 14491, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAdjustmentClass,208, 14493, 11, 3.1, NULL, 14491, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAdjustmentClass,104, 14493, 10, 3.1, NULL, 14491, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAdjustmentClass,208, 14493, 9, 3.1, NULL, 14491, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAdjustmentClass,104, 14493, 6, 3.1, NULL, 14491, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAdjustmentClass,208, 14493, 3, 3.1, NULL, 14491, NULL)
#elif defined __i386__
CheckTypeSize(GtkAdjustmentClass,104, 14493, 2, 3.1, NULL, 14491, NULL)
#else
Msg("Find size of GtkAdjustmentClass (14493)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14491,NULL);\n",architecture,14493,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkHPaned,216, 14495, 12, 3.1, NULL, 14494, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkHPaned,216, 14495, 11, 3.1, NULL, 14494, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkHPaned,144, 14495, 10, 3.1, NULL, 14494, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkHPaned,216, 14495, 9, 3.1, NULL, 14494, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkHPaned,144, 14495, 6, 3.1, NULL, 14494, NULL)
#elif defined __ia64__
CheckTypeSize(GtkHPaned,216, 14495, 3, 3.1, NULL, 14494, NULL)
#elif defined __i386__
CheckTypeSize(GtkHPaned,144, 14495, 2, 3.1, NULL, 14494, NULL)
#else
Msg("Find size of GtkHPaned (14495)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14494,NULL);\n",architecture,14495,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRadioActionClass,304, 14498, 12, 3.1, NULL, 14496, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRadioActionClass,304, 14498, 11, 3.1, NULL, 14496, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRadioActionClass,152, 14498, 10, 3.1, NULL, 14496, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRadioActionClass,304, 14498, 9, 3.1, NULL, 14496, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRadioActionClass,152, 14498, 6, 3.1, NULL, 14496, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRadioActionClass,304, 14498, 3, 3.1, NULL, 14496, NULL)
#elif defined __i386__
CheckTypeSize(GtkRadioActionClass,152, 14498, 2, 3.1, NULL, 14496, NULL)
#else
Msg("Find size of GtkRadioActionClass (14498)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14496,NULL);\n",architecture,14498,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTextTagClass,176, 14501, 12, 3.1, NULL, 14499, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTextTagClass,176, 14501, 11, 3.1, NULL, 14499, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTextTagClass,88, 14501, 10, 3.1, NULL, 14499, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTextTagClass,176, 14501, 9, 3.1, NULL, 14499, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTextTagClass,88, 14501, 6, 3.1, NULL, 14499, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTextTagClass,176, 14501, 3, 3.1, NULL, 14499, NULL)
#elif defined __i386__
CheckTypeSize(GtkTextTagClass,88, 14501, 2, 3.1, NULL, 14499, NULL)
#else
Msg("Find size of GtkTextTagClass (14501)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14499,NULL);\n",architecture,14501,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIconViewClass,896, 14508, 12, 3.1, NULL, 14502, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIconViewClass,896, 14508, 11, 3.1, NULL, 14502, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIconViewClass,452, 14508, 10, 3.1, NULL, 14502, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIconViewClass,896, 14508, 9, 3.1, NULL, 14502, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIconViewClass,452, 14508, 6, 3.1, NULL, 14502, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIconViewClass,896, 14508, 3, 3.1, NULL, 14502, NULL)
#elif defined __i386__
CheckTypeSize(GtkIconViewClass,452, 14508, 2, 3.1, NULL, 14502, NULL)
#else
Msg("Find size of GtkIconViewClass (14508)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14502,NULL);\n",architecture,14508,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkProgressBarClass,808, 14510, 12, 3.1, NULL, 14509, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkProgressBarClass,808, 14510, 11, 3.1, NULL, 14509, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkProgressBarClass,408, 14510, 10, 3.1, NULL, 14509, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkProgressBarClass,808, 14510, 9, 3.1, NULL, 14509, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkProgressBarClass,408, 14510, 6, 3.1, NULL, 14509, NULL)
#elif defined __ia64__
CheckTypeSize(GtkProgressBarClass,808, 14510, 3, 3.1, NULL, 14509, NULL)
#elif defined __i386__
CheckTypeSize(GtkProgressBarClass,408, 14510, 2, 3.1, NULL, 14509, NULL)
#else
Msg("Find size of GtkProgressBarClass (14510)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14509,NULL);\n",architecture,14510,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAspectFrameClass,832, 14512, 12, 3.1, NULL, 14511, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAspectFrameClass,832, 14512, 11, 3.1, NULL, 14511, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAspectFrameClass,420, 14512, 10, 3.1, NULL, 14511, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAspectFrameClass,832, 14512, 9, 3.1, NULL, 14511, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAspectFrameClass,420, 14512, 6, 3.1, NULL, 14511, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAspectFrameClass,832, 14512, 3, 3.1, NULL, 14511, NULL)
#elif defined __i386__
CheckTypeSize(GtkAspectFrameClass,420, 14512, 2, 3.1, NULL, 14511, NULL)
#else
Msg("Find size of GtkAspectFrameClass (14512)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14511,NULL);\n",architecture,14512,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkGammaCurve,208, 14515, 12, 3.1, NULL, 14513, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkGammaCurve,208, 14515, 11, 3.1, NULL, 14513, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkGammaCurve,116, 14515, 10, 3.1, NULL, 14513, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkGammaCurve,208, 14515, 9, 3.1, NULL, 14513, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkGammaCurve,116, 14515, 6, 3.1, NULL, 14513, NULL)
#elif defined __ia64__
CheckTypeSize(GtkGammaCurve,208, 14515, 3, 3.1, NULL, 14513, NULL)
#elif defined __i386__
CheckTypeSize(GtkGammaCurve,116, 14515, 2, 3.1, NULL, 14513, NULL)
#else
Msg("Find size of GtkGammaCurve (14515)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14513,NULL);\n",architecture,14515,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAccelGroupActivate,8, 14517, 12, 3.1, NULL, 14516, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAccelGroupActivate,8, 14517, 11, 3.1, NULL, 14516, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAccelGroupActivate,4, 14517, 10, 3.1, NULL, 14516, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAccelGroupActivate,8, 14517, 9, 3.1, NULL, 14516, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAccelGroupActivate,4, 14517, 6, 3.1, NULL, 14516, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAccelGroupActivate,8, 14517, 3, 3.1, NULL, 14516, NULL)
#elif defined __i386__
CheckTypeSize(GtkAccelGroupActivate,4, 14517, 2, 3.1, NULL, 14516, NULL)
#else
Msg("Find size of GtkAccelGroupActivate (14517)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14516,NULL);\n",architecture,14517,0);
#endif

#if defined __s390x__
CheckEnum("GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID",GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID,-1,47621)
CheckEnum("GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID",GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID,-2,47622)
#elif defined __x86_64__
CheckEnum("GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID",GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID,-1,47621)
CheckEnum("GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID",GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID,-2,47622)
#elif defined __s390__ && !defined __s390x__
CheckEnum("GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID",GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID,-1,47621)
CheckEnum("GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID",GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID,-2,47622)
#elif defined __powerpc64__
CheckEnum("GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID",GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID,-1,47621)
CheckEnum("GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID",GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID,-2,47622)
#elif defined __powerpc__ && !defined __powerpc64__
CheckEnum("GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID",GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID,-1,47621)
CheckEnum("GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID",GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID,-2,47622)
#elif defined __ia64__
CheckEnum("GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID",GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID,-1,47621)
CheckEnum("GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID",GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID,-2,47622)
#elif defined __i386__
CheckEnum("GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID",GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID,-1,47621)
CheckEnum("GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID",GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID,-2,47622)
#else
Msg("Find size of anonymous-gtk.h.types-2 (14518)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,0,NULL);\n",architecture,14518,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 12, 3.1, NULL, 14519, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 11, 3.1, NULL, 14519, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 10, 3.1, NULL, 14519, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 9, 3.1, NULL, 14519, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 6, 3.1, NULL, 14519, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 3, 3.1, NULL, 14519, NULL)
#elif defined __i386__
CheckTypeSize(GtkIMPreeditStyle,4, 14520, 2, 3.1, NULL, 14519, NULL)
#else
Msg("Find size of GtkIMPreeditStyle (14520)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14519,NULL);\n",architecture,14520,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkDebugFlag,4, 14522, 12, 3.1, NULL, 14521, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkDebugFlag,4, 14522, 11, 3.1, NULL, 14521, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkDebugFlag,4, 14522, 10, 3.1, NULL, 14521, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkDebugFlag,4, 14522, 9, 3.1, NULL, 14521, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkDebugFlag,4, 14522, 6, 3.1, NULL, 14521, NULL)
#elif defined __ia64__
CheckTypeSize(GtkDebugFlag,4, 14522, 3, 3.1, NULL, 14521, NULL)
#elif defined __i386__
CheckTypeSize(GtkDebugFlag,4, 14522, 2, 3.1, NULL, 14521, NULL)
#else
Msg("Find size of GtkDebugFlag (14522)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14521,NULL);\n",architecture,14522,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkCellRendererMode,4, 14524, 12, 3.1, NULL, 14523, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkCellRendererMode,4, 14524, 11, 3.1, NULL, 14523, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkCellRendererMode,4, 14524, 10, 3.1, NULL, 14523, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkCellRendererMode,4, 14524, 9, 3.1, NULL, 14523, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkCellRendererMode,4, 14524, 6, 3.1, NULL, 14523, NULL)
#elif defined __ia64__
CheckTypeSize(GtkCellRendererMode,4, 14524, 3, 3.1, NULL, 14523, NULL)
#elif defined __i386__
CheckTypeSize(GtkCellRendererMode,4, 14524, 2, 3.1, NULL, 14523, NULL)
#else
Msg("Find size of GtkCellRendererMode (14524)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14523,NULL);\n",architecture,14524,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIconThemeError,4, 14526, 12, 3.1, NULL, 14525, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIconThemeError,4, 14526, 11, 3.1, NULL, 14525, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIconThemeError,4, 14526, 10, 3.1, NULL, 14525, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIconThemeError,4, 14526, 9, 3.1, NULL, 14525, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIconThemeError,4, 14526, 6, 3.1, NULL, 14525, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIconThemeError,4, 14526, 3, 3.1, NULL, 14525, NULL)
#elif defined __i386__
CheckTypeSize(GtkIconThemeError,4, 14526, 2, 3.1, NULL, 14525, NULL)
#else
Msg("Find size of GtkIconThemeError (14526)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14525,NULL);\n",architecture,14526,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkResponseType,4, 14528, 12, 3.1, NULL, 14527, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkResponseType,4, 14528, 11, 3.1, NULL, 14527, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkResponseType,4, 14528, 10, 3.1, NULL, 14527, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkResponseType,4, 14528, 9, 3.1, NULL, 14527, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkResponseType,4, 14528, 6, 3.1, NULL, 14527, NULL)
#elif defined __ia64__
CheckTypeSize(GtkResponseType,4, 14528, 3, 3.1, NULL, 14527, NULL)
#elif defined __i386__
CheckTypeSize(GtkResponseType,4, 14528, 2, 3.1, NULL, 14527, NULL)
#else
Msg("Find size of GtkResponseType (14528)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14527,NULL);\n",architecture,14528,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkTargetFlags,4, 14530, 12, 3.1, NULL, 14529, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkTargetFlags,4, 14530, 11, 3.1, NULL, 14529, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkTargetFlags,4, 14530, 10, 3.1, NULL, 14529, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkTargetFlags,4, 14530, 9, 3.1, NULL, 14529, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkTargetFlags,4, 14530, 6, 3.1, NULL, 14529, NULL)
#elif defined __ia64__
CheckTypeSize(GtkTargetFlags,4, 14530, 3, 3.1, NULL, 14529, NULL)
#elif defined __i386__
CheckTypeSize(GtkTargetFlags,4, 14530, 2, 3.1, NULL, 14529, NULL)
#else
Msg("Find size of GtkTargetFlags (14530)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14529,NULL);\n",architecture,14530,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkAnchorType,4, 14532, 12, 3.1, NULL, 14531, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkAnchorType,4, 14532, 11, 3.1, NULL, 14531, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkAnchorType,4, 14532, 10, 3.1, NULL, 14531, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkAnchorType,4, 14532, 9, 3.1, NULL, 14531, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkAnchorType,4, 14532, 6, 3.1, NULL, 14531, NULL)
#elif defined __ia64__
CheckTypeSize(GtkAnchorType,4, 14532, 3, 3.1, NULL, 14531, NULL)
#elif defined __i386__
CheckTypeSize(GtkAnchorType,4, 14532, 2, 3.1, NULL, 14531, NULL)
#else
Msg("Find size of GtkAnchorType (14532)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14531,NULL);\n",architecture,14532,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 12, 3.1, NULL, 14533, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 11, 3.1, NULL, 14533, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 10, 3.1, NULL, 14533, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 9, 3.1, NULL, 14533, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 6, 3.1, NULL, 14533, NULL)
#elif defined __ia64__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 3, 3.1, NULL, 14533, NULL)
#elif defined __i386__
CheckTypeSize(GtkIMStatusStyle,4, 14534, 2, 3.1, NULL, 14533, NULL)
#else
Msg("Find size of GtkIMStatusStyle (14534)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14533,NULL);\n",architecture,14534,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkFileChooserError,4, 14536, 12, 3.1, NULL, 14535, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkFileChooserError,4, 14536, 11, 3.1, NULL, 14535, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkFileChooserError,4, 14536, 10, 3.1, NULL, 14535, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkFileChooserError,4, 14536, 9, 3.1, NULL, 14535, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkFileChooserError,4, 14536, 6, 3.1, NULL, 14535, NULL)
#elif defined __ia64__
CheckTypeSize(GtkFileChooserError,4, 14536, 3, 3.1, NULL, 14535, NULL)
#elif defined __i386__
CheckTypeSize(GtkFileChooserError,4, 14536, 2, 3.1, NULL, 14535, NULL)
#else
Msg("Find size of GtkFileChooserError (14536)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14535,NULL);\n",architecture,14536,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkObjectFlags,4, 14538, 12, 3.1, NULL, 14537, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkObjectFlags,4, 14538, 11, 3.1, NULL, 14537, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkObjectFlags,4, 14538, 10, 3.1, NULL, 14537, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkObjectFlags,4, 14538, 9, 3.1, NULL, 14537, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkObjectFlags,4, 14538, 6, 3.1, NULL, 14537, NULL)
#elif defined __ia64__
CheckTypeSize(GtkObjectFlags,4, 14538, 3, 3.1, NULL, 14537, NULL)
#elif defined __i386__
CheckTypeSize(GtkObjectFlags,4, 14538, 2, 3.1, NULL, 14537, NULL)
#else
Msg("Find size of GtkObjectFlags (14538)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14537,NULL);\n",architecture,14538,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkRcTokenType,4, 14540, 12, 3.1, NULL, 14539, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkRcTokenType,4, 14540, 11, 3.1, NULL, 14539, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkRcTokenType,4, 14540, 10, 3.1, NULL, 14539, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkRcTokenType,4, 14540, 9, 3.1, NULL, 14539, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkRcTokenType,4, 14540, 6, 3.1, NULL, 14539, NULL)
#elif defined __ia64__
CheckTypeSize(GtkRcTokenType,4, 14540, 3, 3.1, NULL, 14539, NULL)
#elif defined __i386__
CheckTypeSize(GtkRcTokenType,4, 14540, 2, 3.1, NULL, 14539, NULL)
#else
Msg("Find size of GtkRcTokenType (14540)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14539,NULL);\n",architecture,14540,0);
#endif

#if defined __s390x__
CheckTypeSize(GtkWidgetFlags,4, 14542, 12, 3.1, NULL, 14541, NULL)
#elif defined __x86_64__
CheckTypeSize(GtkWidgetFlags,4, 14542, 11, 3.1, NULL, 14541, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GtkWidgetFlags,4, 14542, 10, 3.1, NULL, 14541, NULL)
#elif defined __powerpc64__
CheckTypeSize(GtkWidgetFlags,4, 14542, 9, 3.1, NULL, 14541, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GtkWidgetFlags,4, 14542, 6, 3.1, NULL, 14541, NULL)
#elif defined __ia64__
CheckTypeSize(GtkWidgetFlags,4, 14542, 3, 3.1, NULL, 14541, NULL)
#elif defined __i386__
CheckTypeSize(GtkWidgetFlags,4, 14542, 2, 3.1, NULL, 14541, NULL)
#else
Msg("Find size of GtkWidgetFlags (14542)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14541,NULL);\n",architecture,14542,0);
#endif

#if 1
CheckTypeSize(GtkIconViewDropPosition,0, 1000031, 1, 4.0, NULL, 1000030, NULL)
#endif

#if 1
CheckTypeSize(GtkPackDirection,0, 1000035, 1, 4.0, NULL, 1000034, NULL)
#endif

extern GtkIconSet * gtk_icon_set_new_db(void);
CheckInterfacedef(gtk_icon_set_new,gtk_icon_set_new_db);
extern GType gtk_cell_editable_get_type_db(void);
CheckInterfacedef(gtk_cell_editable_get_type,gtk_cell_editable_get_type_db);
extern void gtk_widget_get_pointer_db(GtkWidget *, gint *, gint *);
CheckInterfacedef(gtk_widget_get_pointer,gtk_widget_get_pointer_db);
extern void gtk_progress_bar_set_fraction_db(GtkProgressBar *, gdouble);
CheckInterfacedef(gtk_progress_bar_set_fraction,gtk_progress_bar_set_fraction_db);
extern GType gtk_file_chooser_action_get_type_db(void);
CheckInterfacedef(gtk_file_chooser_action_get_type,gtk_file_chooser_action_get_type_db);
extern void gtk_text_buffer_get_start_iter_db(GtkTextBuffer *, GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_get_start_iter,gtk_text_buffer_get_start_iter_db);
extern gint gtk_combo_box_get_column_span_column_db(GtkComboBox *);
CheckInterfacedef(gtk_combo_box_get_column_span_column,gtk_combo_box_get_column_span_column_db);
extern void gtk_misc_set_padding_db(GtkMisc *, gint, gint);
CheckInterfacedef(gtk_misc_set_padding,gtk_misc_set_padding_db);
extern guint gtk_statusbar_push_db(GtkStatusbar *, guint, const gchar *);
CheckInterfacedef(gtk_statusbar_push,gtk_statusbar_push_db);
extern GdkAtom gtk_drag_dest_find_target_db(GtkWidget *, GdkDragContext *, GtkTargetList *);
CheckInterfacedef(gtk_drag_dest_find_target,gtk_drag_dest_find_target_db);
extern void gtk_window_get_default_size_db(GtkWindow *, gint *, gint *);
CheckInterfacedef(gtk_window_get_default_size,gtk_window_get_default_size_db);
extern void gtk_widget_modify_base_db(GtkWidget *, GtkStateType, const GdkColor *);
CheckInterfacedef(gtk_widget_modify_base,gtk_widget_modify_base_db);
extern void gtk_tree_row_reference_free_db(GtkTreeRowReference *);
CheckInterfacedef(gtk_tree_row_reference_free,gtk_tree_row_reference_free_db);
extern GtkTreeModelFlags gtk_tree_model_get_flags_db(GtkTreeModel *);
CheckInterfacedef(gtk_tree_model_get_flags,gtk_tree_model_get_flags_db);
extern void gtk_drag_source_set_db(GtkWidget *, GdkModifierType, const GtkTargetEntry *, gint, GdkDragAction);
CheckInterfacedef(gtk_drag_source_set,gtk_drag_source_set_db);
extern void gtk_entry_get_layout_offsets_db(GtkEntry *, gint *, gint *);
CheckInterfacedef(gtk_entry_get_layout_offsets,gtk_entry_get_layout_offsets_db);
extern GdkColormap * gtk_widget_get_default_colormap_db(void);
CheckInterfacedef(gtk_widget_get_default_colormap,gtk_widget_get_default_colormap_db);
extern GType gtk_submenu_placement_get_type_db(void);
CheckInterfacedef(gtk_submenu_placement_get_type,gtk_submenu_placement_get_type_db);
extern GtkRequisition * gtk_requisition_copy_db(const GtkRequisition *);
CheckInterfacedef(gtk_requisition_copy,gtk_requisition_copy_db);
extern void gtk_combo_box_entry_set_text_column_db(GtkComboBoxEntry *, gint);
CheckInterfacedef(gtk_combo_box_entry_set_text_column,gtk_combo_box_entry_set_text_column_db);
extern GtkAdjustment * gtk_layout_get_vadjustment_db(GtkLayout *);
CheckInterfacedef(gtk_layout_get_vadjustment,gtk_layout_get_vadjustment_db);
extern void gtk_tree_store_append_db(GtkTreeStore *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_store_append,gtk_tree_store_append_db);
extern GtkAboutDialogActivateLinkFunc gtk_about_dialog_set_email_hook_db(GtkAboutDialogActivateLinkFunc, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_about_dialog_set_email_hook,gtk_about_dialog_set_email_hook_db);
extern GType gtk_adjustment_get_type_db(void);
CheckInterfacedef(gtk_adjustment_get_type,gtk_adjustment_get_type_db);
extern gboolean gtk_tree_sortable_get_sort_column_id_db(GtkTreeSortable *, gint *, GtkSortType *);
CheckInterfacedef(gtk_tree_sortable_get_sort_column_id,gtk_tree_sortable_get_sort_column_id_db);
extern void gtk_range_set_range_db(GtkRange *, gdouble, gdouble);
CheckInterfacedef(gtk_range_set_range,gtk_range_set_range_db);
extern gboolean gtk_text_iter_backward_sentence_starts_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_backward_sentence_starts,gtk_text_iter_backward_sentence_starts_db);
extern gboolean gtk_window_propagate_key_event_db(GtkWindow *, GdkEventKey *);
CheckInterfacedef(gtk_window_propagate_key_event,gtk_window_propagate_key_event_db);
extern void gtk_dialog_add_action_widget_db(GtkDialog *, GtkWidget *, gint);
CheckInterfacedef(gtk_dialog_add_action_widget,gtk_dialog_add_action_widget_db);
extern GdkNativeWindow gtk_socket_get_id_db(GtkSocket *);
CheckInterfacedef(gtk_socket_get_id,gtk_socket_get_id_db);
extern const gchar * gtk_window_get_role_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_role,gtk_window_get_role_db);
extern void gtk_tree_view_column_clear_attributes_db(GtkTreeViewColumn *, GtkCellRenderer *);
CheckInterfacedef(gtk_tree_view_column_clear_attributes,gtk_tree_view_column_clear_attributes_db);
extern guint gtk_binding_parse_binding_db(GScanner *);
CheckInterfacedef(gtk_binding_parse_binding,gtk_binding_parse_binding_db);
extern GtkWidget * gtk_input_dialog_new_db(void);
CheckInterfacedef(gtk_input_dialog_new,gtk_input_dialog_new_db);
extern gint gtk_text_buffer_get_char_count_db(GtkTextBuffer *);
CheckInterfacedef(gtk_text_buffer_get_char_count,gtk_text_buffer_get_char_count_db);
extern GtkButtonBoxStyle gtk_button_box_get_layout_db(GtkButtonBox *);
CheckInterfacedef(gtk_button_box_get_layout,gtk_button_box_get_layout_db);
extern void gtk_toggle_action_toggled_db(GtkToggleAction *);
CheckInterfacedef(gtk_toggle_action_toggled,gtk_toggle_action_toggled_db);
extern gboolean gtk_text_iter_begins_tag_db(const GtkTextIter *, GtkTextTag *);
CheckInterfacedef(gtk_text_iter_begins_tag,gtk_text_iter_begins_tag_db);
extern void gtk_widget_reparent_db(GtkWidget *, GtkWidget *);
CheckInterfacedef(gtk_widget_reparent,gtk_widget_reparent_db);
extern gboolean gtk_text_iter_backward_visible_cursor_position_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_backward_visible_cursor_position,gtk_text_iter_backward_visible_cursor_position_db);
extern GType gtk_spin_button_get_type_db(void);
CheckInterfacedef(gtk_spin_button_get_type,gtk_spin_button_get_type_db);
extern void gtk_text_buffer_get_iter_at_line_db(GtkTextBuffer *, GtkTextIter *, gint);
CheckInterfacedef(gtk_text_buffer_get_iter_at_line,gtk_text_buffer_get_iter_at_line_db);
extern gboolean gtk_file_filter_filter_db(GtkFileFilter *, const GtkFileFilterInfo *);
CheckInterfacedef(gtk_file_filter_filter,gtk_file_filter_filter_db);
extern void gtk_text_iter_set_visible_line_index_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_set_visible_line_index,gtk_text_iter_set_visible_line_index_db);
extern GtkTextDirection gtk_icon_source_get_direction_db(const GtkIconSource *);
CheckInterfacedef(gtk_icon_source_get_direction,gtk_icon_source_get_direction_db);
extern void gtk_layout_get_size_db(GtkLayout *, guint *, guint *);
CheckInterfacedef(gtk_layout_get_size,gtk_layout_get_size_db);
extern void gtk_widget_set_direction_db(GtkWidget *, GtkTextDirection);
CheckInterfacedef(gtk_widget_set_direction,gtk_widget_set_direction_db);
extern gint gtk_text_iter_compare_db(const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_compare,gtk_text_iter_compare_db);
extern void gtk_drag_source_add_text_targets_db(GtkWidget *);
CheckInterfacedef(gtk_drag_source_add_text_targets,gtk_drag_source_add_text_targets_db);
extern GType gtk_file_chooser_widget_get_type_db(void);
CheckInterfacedef(gtk_file_chooser_widget_get_type,gtk_file_chooser_widget_get_type_db);
extern void gtk_tool_button_set_label_widget_db(GtkToolButton *, GtkWidget *);
CheckInterfacedef(gtk_tool_button_set_label_widget,gtk_tool_button_set_label_widget_db);
extern gint gtk_icon_view_get_text_column_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_text_column,gtk_icon_view_get_text_column_db);
extern gboolean gtk_label_get_use_markup_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_use_markup,gtk_label_get_use_markup_db);
extern GtkAdjustment * gtk_container_get_focus_hadjustment_db(GtkContainer *);
CheckInterfacedef(gtk_container_get_focus_hadjustment,gtk_container_get_focus_hadjustment_db);
extern void gtk_text_buffer_set_modified_db(GtkTextBuffer *, gboolean);
CheckInterfacedef(gtk_text_buffer_set_modified,gtk_text_buffer_set_modified_db);
extern void gtk_drag_source_unset_db(GtkWidget *);
CheckInterfacedef(gtk_drag_source_unset,gtk_drag_source_unset_db);
extern void gtk_combo_box_set_add_tearoffs_db(GtkComboBox *, gboolean);
CheckInterfacedef(gtk_combo_box_set_add_tearoffs,gtk_combo_box_set_add_tearoffs_db);
extern GtkWidget * gtk_text_view_new_with_buffer_db(GtkTextBuffer *);
CheckInterfacedef(gtk_text_view_new_with_buffer,gtk_text_view_new_with_buffer_db);
extern void gtk_settings_set_string_property_db(GtkSettings *, const gchar *, const gchar *, const gchar *);
CheckInterfacedef(gtk_settings_set_string_property,gtk_settings_set_string_property_db);
extern guint gtk_ui_manager_add_ui_from_file_db(GtkUIManager *, const gchar *, GError * *);
CheckInterfacedef(gtk_ui_manager_add_ui_from_file,gtk_ui_manager_add_ui_from_file_db);
extern GtkWidget * gtk_radio_menu_item_new_with_label_from_widget_db(GtkRadioMenuItem *, const gchar *);
CheckInterfacedef(gtk_radio_menu_item_new_with_label_from_widget,gtk_radio_menu_item_new_with_label_from_widget_db);
extern void gtk_widget_push_colormap_db(GdkColormap *);
CheckInterfacedef(gtk_widget_push_colormap,gtk_widget_push_colormap_db);
extern GtkWidget * gtk_vbox_new_db(gboolean, gint);
CheckInterfacedef(gtk_vbox_new,gtk_vbox_new_db);
extern void gtk_cell_view_set_background_color_db(GtkCellView *, const GdkColor *);
CheckInterfacedef(gtk_cell_view_set_background_color,gtk_cell_view_set_background_color_db);
extern gboolean gtk_selection_data_targets_include_text_db(GtkSelectionData *);
CheckInterfacedef(gtk_selection_data_targets_include_text,gtk_selection_data_targets_include_text_db);
extern GType gtk_cell_renderer_get_type_db(void);
CheckInterfacedef(gtk_cell_renderer_get_type,gtk_cell_renderer_get_type_db);
extern void gtk_container_check_resize_db(GtkContainer *);
CheckInterfacedef(gtk_container_check_resize,gtk_container_check_resize_db);
extern guint gtk_label_get_mnemonic_keyval_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_mnemonic_keyval,gtk_label_get_mnemonic_keyval_db);
extern void gtk_file_chooser_unselect_filename_db(GtkFileChooser *, const char *);
CheckInterfacedef(gtk_file_chooser_unselect_filename,gtk_file_chooser_unselect_filename_db);
extern void gtk_curve_reset_db(GtkCurve *);
CheckInterfacedef(gtk_curve_reset,gtk_curve_reset_db);
extern const gchar * gtk_notebook_get_menu_label_text_db(GtkNotebook *, GtkWidget *);
CheckInterfacedef(gtk_notebook_get_menu_label_text,gtk_notebook_get_menu_label_text_db);
extern GtkIconSet * gtk_icon_factory_lookup_db(GtkIconFactory *, const gchar *);
CheckInterfacedef(gtk_icon_factory_lookup,gtk_icon_factory_lookup_db);
extern GtkWidget * gtk_accel_label_new_db(const gchar *);
CheckInterfacedef(gtk_accel_label_new,gtk_accel_label_new_db);
extern void gtk_widget_size_allocate_db(GtkWidget *, GtkAllocation *);
CheckInterfacedef(gtk_widget_size_allocate,gtk_widget_size_allocate_db);
extern void gtk_icon_view_unselect_all_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_unselect_all,gtk_icon_view_unselect_all_db);
extern void gtk_drag_set_icon_default_db(GdkDragContext *);
CheckInterfacedef(gtk_drag_set_icon_default,gtk_drag_set_icon_default_db);
extern void gtk_layout_move_db(GtkLayout *, GtkWidget *, gint, gint);
CheckInterfacedef(gtk_layout_move,gtk_layout_move_db);
extern void gtk_drag_set_icon_widget_db(GdkDragContext *, GtkWidget *, gint, gint);
CheckInterfacedef(gtk_drag_set_icon_widget,gtk_drag_set_icon_widget_db);
extern GType gtk_shadow_type_get_type_db(void);
CheckInterfacedef(gtk_shadow_type_get_type,gtk_shadow_type_get_type_db);
extern GtkWidget * gtk_tool_item_get_proxy_menu_item_db(GtkToolItem *, const gchar *);
CheckInterfacedef(gtk_tool_item_get_proxy_menu_item,gtk_tool_item_get_proxy_menu_item_db);
extern GdkPixbuf * gtk_about_dialog_get_logo_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_logo,gtk_about_dialog_get_logo_db);
extern void gtk_widget_set_colormap_db(GtkWidget *, GdkColormap *);
CheckInterfacedef(gtk_widget_set_colormap,gtk_widget_set_colormap_db);
extern GdkExtensionMode gtk_widget_get_extension_events_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_extension_events,gtk_widget_get_extension_events_db);
extern GtkRadioAction * gtk_radio_action_new_db(const gchar *, const gchar *, const gchar *, const gchar *, gint);
CheckInterfacedef(gtk_radio_action_new,gtk_radio_action_new_db);
extern GtkTextMark * gtk_text_buffer_get_selection_bound_db(GtkTextBuffer *);
CheckInterfacedef(gtk_text_buffer_get_selection_bound,gtk_text_buffer_get_selection_bound_db);
extern void gtk_box_set_child_packing_db(GtkBox *, GtkWidget *, gboolean, gboolean, guint, GtkPackType);
CheckInterfacedef(gtk_box_set_child_packing,gtk_box_set_child_packing_db);
extern guint16 gtk_color_selection_get_current_alpha_db(GtkColorSelection *);
CheckInterfacedef(gtk_color_selection_get_current_alpha,gtk_color_selection_get_current_alpha_db);
extern void gtk_calendar_get_date_db(GtkCalendar *, guint *, guint *, guint *);
CheckInterfacedef(gtk_calendar_get_date,gtk_calendar_get_date_db);
extern GType gtk_selection_data_get_type_db(void);
CheckInterfacedef(gtk_selection_data_get_type,gtk_selection_data_get_type_db);
extern GType gtk_submenu_direction_get_type_db(void);
CheckInterfacedef(gtk_submenu_direction_get_type,gtk_submenu_direction_get_type_db);
extern GType gtk_icon_set_get_type_db(void);
CheckInterfacedef(gtk_icon_set_get_type,gtk_icon_set_get_type_db);
extern GType gtk_cell_renderer_text_get_type_db(void);
CheckInterfacedef(gtk_cell_renderer_text_get_type,gtk_cell_renderer_text_get_type_db);
extern void gtk_icon_info_free_db(GtkIconInfo *);
CheckInterfacedef(gtk_icon_info_free,gtk_icon_info_free_db);
extern void gtk_window_set_focus_on_map_db(GtkWindow *, gboolean);
CheckInterfacedef(gtk_window_set_focus_on_map,gtk_window_set_focus_on_map_db);
extern void gtk_window_set_transient_for_db(GtkWindow *, GtkWindow *);
CheckInterfacedef(gtk_window_set_transient_for,gtk_window_set_transient_for_db);
extern void gtk_widget_class_path_db(GtkWidget *, guint *, gchar * *, gchar * *);
CheckInterfacedef(gtk_widget_class_path,gtk_widget_class_path_db);
extern void gtk_tree_model_row_changed_db(GtkTreeModel *, GtkTreePath *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_row_changed,gtk_tree_model_row_changed_db);
extern gboolean gtk_tree_drag_source_drag_data_delete_db(GtkTreeDragSource *, GtkTreePath *);
CheckInterfacedef(gtk_tree_drag_source_drag_data_delete,gtk_tree_drag_source_drag_data_delete_db);
extern GType gtk_tree_model_get_column_type_db(GtkTreeModel *, gint);
CheckInterfacedef(gtk_tree_model_get_column_type,gtk_tree_model_get_column_type_db);
extern void gtk_icon_view_set_columns_db(GtkIconView *, gint);
CheckInterfacedef(gtk_icon_view_set_columns,gtk_icon_view_set_columns_db);
extern void gtk_container_child_get_valist_db(GtkContainer *, GtkWidget *, const gchar *, va_list);
CheckInterfacedef(gtk_container_child_get_valist,gtk_container_child_get_valist_db);
extern guchar * gtk_selection_data_get_text_db(GtkSelectionData *);
CheckInterfacedef(gtk_selection_data_get_text,gtk_selection_data_get_text_db);
extern void gtk_window_resize_db(GtkWindow *, gint, gint);
CheckInterfacedef(gtk_window_resize,gtk_window_resize_db);
extern void gtk_table_set_homogeneous_db(GtkTable *, gboolean);
CheckInterfacedef(gtk_table_set_homogeneous,gtk_table_set_homogeneous_db);
extern guint gtk_quit_add_full_db(guint, GtkFunction, GtkCallbackMarshal, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_quit_add_full,gtk_quit_add_full_db);
extern gboolean gtk_action_is_visible_db(GtkAction *);
CheckInterfacedef(gtk_action_is_visible,gtk_action_is_visible_db);
extern GtkTextBuffer * gtk_text_iter_get_buffer_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_buffer,gtk_text_iter_get_buffer_db);
extern void gtk_menu_set_screen_db(GtkMenu *, GdkScreen *);
CheckInterfacedef(gtk_menu_set_screen,gtk_menu_set_screen_db);
extern void gtk_color_selection_set_previous_alpha_db(GtkColorSelection *, guint16);
CheckInterfacedef(gtk_color_selection_set_previous_alpha,gtk_color_selection_set_previous_alpha_db);
extern void gtk_toggle_button_set_active_db(GtkToggleButton *, gboolean);
CheckInterfacedef(gtk_toggle_button_set_active,gtk_toggle_button_set_active_db);
extern void gtk_target_list_add_text_targets_db(GtkTargetList *, guint);
CheckInterfacedef(gtk_target_list_add_text_targets,gtk_target_list_add_text_targets_db);
extern GdkEvent * gtk_get_current_event_db(void);
CheckInterfacedef(gtk_get_current_event,gtk_get_current_event_db);
extern GType gtk_update_type_get_type_db(void);
CheckInterfacedef(gtk_update_type_get_type,gtk_update_type_get_type_db);
extern const gchar * gtk_icon_source_get_filename_db(const GtkIconSource *);
CheckInterfacedef(gtk_icon_source_get_filename,gtk_icon_source_get_filename_db);
extern GtkIconTheme * gtk_icon_theme_get_for_screen_db(GdkScreen *);
CheckInterfacedef(gtk_icon_theme_get_for_screen,gtk_icon_theme_get_for_screen_db);
extern GtkWidget * gtk_arrow_new_db(GtkArrowType, GtkShadowType);
CheckInterfacedef(gtk_arrow_new,gtk_arrow_new_db);
extern void gtk_text_view_buffer_to_window_coords_db(GtkTextView *, GtkTextWindowType, gint, gint, gint *, gint *);
CheckInterfacedef(gtk_text_view_buffer_to_window_coords,gtk_text_view_buffer_to_window_coords_db);
extern GType gtk_style_get_type_db(void);
CheckInterfacedef(gtk_style_get_type,gtk_style_get_type_db);
extern void gtk_widget_class_install_style_property_parser_db(GtkWidgetClass *, GParamSpec *, GtkRcPropertyParser);
CheckInterfacedef(gtk_widget_class_install_style_property_parser,gtk_widget_class_install_style_property_parser_db);
extern GType gtk_toolbar_child_type_get_type_db(void);
CheckInterfacedef(gtk_toolbar_child_type_get_type,gtk_toolbar_child_type_get_type_db);
extern GtkToolItem * gtk_toggle_tool_button_new_db(void);
CheckInterfacedef(gtk_toggle_tool_button_new,gtk_toggle_tool_button_new_db);
extern GdkPixbufAnimation * gtk_image_get_animation_db(GtkImage *);
CheckInterfacedef(gtk_image_get_animation,gtk_image_get_animation_db);
extern gint gtk_tree_view_column_get_spacing_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_spacing,gtk_tree_view_column_get_spacing_db);
extern GdkPixmap * gtk_tree_view_create_row_drag_icon_db(GtkTreeView *, GtkTreePath *);
CheckInterfacedef(gtk_tree_view_create_row_drag_icon,gtk_tree_view_create_row_drag_icon_db);
extern void gtk_file_chooser_unselect_all_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_unselect_all,gtk_file_chooser_unselect_all_db);
extern gint gtk_icon_view_get_column_spacing_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_column_spacing,gtk_icon_view_get_column_spacing_db);
extern GtkTreeViewColumn * gtk_tree_view_get_expander_column_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_expander_column,gtk_tree_view_get_expander_column_db);
extern guint gtk_main_level_db(void);
CheckInterfacedef(gtk_main_level,gtk_main_level_db);
extern void gtk_icon_set_add_source_db(GtkIconSet *, const GtkIconSource *);
CheckInterfacedef(gtk_icon_set_add_source,gtk_icon_set_add_source_db);
extern void gtk_window_set_title_db(GtkWindow *, const gchar *);
CheckInterfacedef(gtk_window_set_title,gtk_window_set_title_db);
extern gchar * gtk_rc_find_module_in_path_db(const gchar *);
CheckInterfacedef(gtk_rc_find_module_in_path,gtk_rc_find_module_in_path_db);
extern gint gtk_text_view_get_pixels_above_lines_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_pixels_above_lines,gtk_text_view_get_pixels_above_lines_db);
extern gboolean gtk_widget_remove_accelerator_db(GtkWidget *, GtkAccelGroup *, guint, GdkModifierType);
CheckInterfacedef(gtk_widget_remove_accelerator,gtk_widget_remove_accelerator_db);
extern PangoLayout * gtk_widget_create_pango_layout_db(GtkWidget *, const gchar *);
CheckInterfacedef(gtk_widget_create_pango_layout,gtk_widget_create_pango_layout_db);
extern GtkIconSet * gtk_style_lookup_icon_set_db(GtkStyle *, const char *);
CheckInterfacedef(gtk_style_lookup_icon_set,gtk_style_lookup_icon_set_db);
extern GType gtk_scrollbar_get_type_db(void);
CheckInterfacedef(gtk_scrollbar_get_type,gtk_scrollbar_get_type_db);
extern gint gtk_box_get_spacing_db(GtkBox *);
CheckInterfacedef(gtk_box_get_spacing,gtk_box_get_spacing_db);
extern void gtk_window_get_position_db(GtkWindow *, gint *, gint *);
CheckInterfacedef(gtk_window_get_position,gtk_window_get_position_db);
extern GdkPixbuf * gtk_style_render_icon_db(GtkStyle *, const GtkIconSource *, GtkTextDirection, GtkStateType, GtkIconSize, GtkWidget *, const gchar *);
CheckInterfacedef(gtk_style_render_icon,gtk_style_render_icon_db);
extern void gtk_icon_view_set_row_spacing_db(GtkIconView *, gint);
CheckInterfacedef(gtk_icon_view_set_row_spacing,gtk_icon_view_set_row_spacing_db);
extern void gtk_quit_add_destroy_db(guint, GtkObject *);
CheckInterfacedef(gtk_quit_add_destroy,gtk_quit_add_destroy_db);
extern GType gtk_color_selection_get_type_db(void);
CheckInterfacedef(gtk_color_selection_get_type,gtk_color_selection_get_type_db);
extern gint gtk_spin_button_get_value_as_int_db(GtkSpinButton *);
CheckInterfacedef(gtk_spin_button_get_value_as_int,gtk_spin_button_get_value_as_int_db);
extern gboolean gtk_label_get_single_line_mode_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_single_line_mode,gtk_label_get_single_line_mode_db);
extern void gtk_tool_item_set_homogeneous_db(GtkToolItem *, gboolean);
CheckInterfacedef(gtk_tool_item_set_homogeneous,gtk_tool_item_set_homogeneous_db);
extern void gtk_cell_layout_pack_end_db(GtkCellLayout *, GtkCellRenderer *, gboolean);
CheckInterfacedef(gtk_cell_layout_pack_end,gtk_cell_layout_pack_end_db);
extern GtkWidget * gtk_file_chooser_get_preview_widget_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_preview_widget,gtk_file_chooser_get_preview_widget_db);
extern void gtk_window_set_resizable_db(GtkWindow *, gboolean);
CheckInterfacedef(gtk_window_set_resizable,gtk_window_set_resizable_db);
extern void gtk_text_buffer_insert_with_tags_db(GtkTextBuffer *, GtkTextIter *, const gchar *, gint, GtkTextTag *, ...);
CheckInterfacedef(gtk_text_buffer_insert_with_tags,gtk_text_buffer_insert_with_tags_db);
extern void gtk_tree_path_down_db(GtkTreePath *);
CheckInterfacedef(gtk_tree_path_down,gtk_tree_path_down_db);
extern void gtk_file_selection_complete_db(GtkFileSelection *, const gchar *);
CheckInterfacedef(gtk_file_selection_complete,gtk_file_selection_complete_db);
extern void gtk_tool_item_set_tooltip_db(GtkToolItem *, GtkTooltips *, const gchar *, const gchar *);
CheckInterfacedef(gtk_tool_item_set_tooltip,gtk_tool_item_set_tooltip_db);
extern void gtk_text_buffer_insert_range_db(GtkTextBuffer *, GtkTextIter *, const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_insert_range,gtk_text_buffer_insert_range_db);
extern GType gtk_menu_get_type_db(void);
CheckInterfacedef(gtk_menu_get_type,gtk_menu_get_type_db);
extern GtkTreeViewRowSeparatorFunc gtk_tree_view_get_row_separator_func_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_row_separator_func,gtk_tree_view_get_row_separator_func_db);
extern gboolean gtk_text_view_get_overwrite_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_overwrite,gtk_text_view_get_overwrite_db);
extern void gtk_icon_theme_set_custom_theme_db(GtkIconTheme *, const gchar *);
CheckInterfacedef(gtk_icon_theme_set_custom_theme,gtk_icon_theme_set_custom_theme_db);
extern GdkGC * gtk_gc_get_db(gint, GdkColormap *, GdkGCValues *, GdkGCValuesMask);
CheckInterfacedef(gtk_gc_get,gtk_gc_get_db);
extern void gtk_cell_editable_editing_done_db(GtkCellEditable *);
CheckInterfacedef(gtk_cell_editable_editing_done,gtk_cell_editable_editing_done_db);
extern void gtk_combo_box_append_text_db(GtkComboBox *, const gchar *);
CheckInterfacedef(gtk_combo_box_append_text,gtk_combo_box_append_text_db);
extern gboolean gtk_tree_view_get_headers_visible_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_headers_visible,gtk_tree_view_get_headers_visible_db);
extern gboolean gtk_window_set_default_icon_from_file_db(const gchar *, GError * *);
CheckInterfacedef(gtk_window_set_default_icon_from_file,gtk_window_set_default_icon_from_file_db);
extern GtkWidget * gtk_widget_ref_db(GtkWidget *);
CheckInterfacedef(gtk_widget_ref,gtk_widget_ref_db);
extern void gtk_text_buffer_delete_db(GtkTextBuffer *, GtkTextIter *, GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_delete,gtk_text_buffer_delete_db);
extern void gtk_tree_view_set_rules_hint_db(GtkTreeView *, gboolean);
CheckInterfacedef(gtk_tree_view_set_rules_hint,gtk_tree_view_set_rules_hint_db);
extern gint gtk_text_iter_get_bytes_in_line_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_bytes_in_line,gtk_text_iter_get_bytes_in_line_db);
extern void gtk_icon_theme_get_search_path_db(GtkIconTheme *, gchar * * *, gint *);
CheckInterfacedef(gtk_icon_theme_get_search_path,gtk_icon_theme_get_search_path_db);
extern gchar * gtk_file_chooser_get_current_folder_uri_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_current_folder_uri,gtk_file_chooser_get_current_folder_uri_db);
extern void gtk_entry_completion_set_text_column_db(GtkEntryCompletion *, gint);
CheckInterfacedef(gtk_entry_completion_set_text_column,gtk_entry_completion_set_text_column_db);
extern GSList * gtk_action_get_proxies_db(GtkAction *);
CheckInterfacedef(gtk_action_get_proxies,gtk_action_get_proxies_db);
extern GType gtk_tree_view_column_sizing_get_type_db(void);
CheckInterfacedef(gtk_tree_view_column_sizing_get_type,gtk_tree_view_column_sizing_get_type_db);
extern void gtk_label_get_layout_offsets_db(GtkLabel *, gint *, gint *);
CheckInterfacedef(gtk_label_get_layout_offsets,gtk_label_get_layout_offsets_db);
extern gboolean gtk_box_get_homogeneous_db(GtkBox *);
CheckInterfacedef(gtk_box_get_homogeneous,gtk_box_get_homogeneous_db);
extern void gtk_text_view_set_left_margin_db(GtkTextView *, gint);
CheckInterfacedef(gtk_text_view_set_left_margin,gtk_text_view_set_left_margin_db);
extern GType gtk_item_get_type_db(void);
CheckInterfacedef(gtk_item_get_type,gtk_item_get_type_db);
extern gint gtk_entry_text_index_to_layout_index_db(GtkEntry *, gint);
CheckInterfacedef(gtk_entry_text_index_to_layout_index,gtk_entry_text_index_to_layout_index_db);
extern void gtk_tree_view_get_visible_rect_db(GtkTreeView *, GdkRectangle *);
CheckInterfacedef(gtk_tree_view_get_visible_rect,gtk_tree_view_get_visible_rect_db);
extern gboolean gtk_tree_model_iter_next_db(GtkTreeModel *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_iter_next,gtk_tree_model_iter_next_db);
extern void gtk_tree_store_move_before_db(GtkTreeStore *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_store_move_before,gtk_tree_store_move_before_db);
extern void gtk_clipboard_set_text_db(GtkClipboard *, const gchar *, gint);
CheckInterfacedef(gtk_clipboard_set_text,gtk_clipboard_set_text_db);
extern GList * gtk_window_list_toplevels_db(void);
CheckInterfacedef(gtk_window_list_toplevels,gtk_window_list_toplevels_db);
extern void gtk_tree_model_filter_clear_cache_db(GtkTreeModelFilter *);
CheckInterfacedef(gtk_tree_model_filter_clear_cache,gtk_tree_model_filter_clear_cache_db);
extern void gtk_notebook_prev_page_db(GtkNotebook *);
CheckInterfacedef(gtk_notebook_prev_page,gtk_notebook_prev_page_db);
extern GType gtk_widget_get_type_db(void);
CheckInterfacedef(gtk_widget_get_type,gtk_widget_get_type_db);
extern GType gtk_vpaned_get_type_db(void);
CheckInterfacedef(gtk_vpaned_get_type,gtk_vpaned_get_type_db);
extern gint gtk_tree_view_column_get_sort_column_id_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_sort_column_id,gtk_tree_view_column_get_sort_column_id_db);
extern GtkTreePath * gtk_tree_model_sort_convert_child_path_to_path_db(GtkTreeModelSort *, GtkTreePath *);
CheckInterfacedef(gtk_tree_model_sort_convert_child_path_to_path,gtk_tree_model_sort_convert_child_path_to_path_db);
extern void gtk_tool_item_set_is_important_db(GtkToolItem *, gboolean);
CheckInterfacedef(gtk_tool_item_set_is_important,gtk_tool_item_set_is_important_db);
extern GType gtk_menu_bar_get_type_db(void);
CheckInterfacedef(gtk_menu_bar_get_type,gtk_menu_bar_get_type_db);
extern GtkTreeViewColumnSizing gtk_tree_view_column_get_sizing_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_sizing,gtk_tree_view_column_get_sizing_db);
extern void gtk_text_attributes_copy_values_db(GtkTextAttributes *, GtkTextAttributes *);
CheckInterfacedef(gtk_text_attributes_copy_values,gtk_text_attributes_copy_values_db);
extern GType gtk_calendar_display_options_get_type_db(void);
CheckInterfacedef(gtk_calendar_display_options_get_type,gtk_calendar_display_options_get_type_db);
extern void gtk_tree_view_column_set_cell_data_func_db(GtkTreeViewColumn *, GtkCellRenderer *, GtkTreeCellDataFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_tree_view_column_set_cell_data_func,gtk_tree_view_column_set_cell_data_func_db);
extern void gtk_color_button_get_color_db(GtkColorButton *, GdkColor *);
CheckInterfacedef(gtk_color_button_get_color,gtk_color_button_get_color_db);
extern GType gtk_notebook_get_type_db(void);
CheckInterfacedef(gtk_notebook_get_type,gtk_notebook_get_type_db);
extern GtkWidget * gtk_file_chooser_dialog_new_with_backend_db(const gchar *, GtkWindow *, GtkFileChooserAction, const gchar *, const gchar *, ...);
CheckInterfacedef(gtk_file_chooser_dialog_new_with_backend,gtk_file_chooser_dialog_new_with_backend_db);
extern void gtk_container_forall_db(GtkContainer *, GtkCallback, gpointer);
CheckInterfacedef(gtk_container_forall,gtk_container_forall_db);
extern void gtk_text_buffer_add_selection_clipboard_db(GtkTextBuffer *, GtkClipboard *);
CheckInterfacedef(gtk_text_buffer_add_selection_clipboard,gtk_text_buffer_add_selection_clipboard_db);
extern GSList * gtk_accel_groups_from_object_db(GObject *);
CheckInterfacedef(gtk_accel_groups_from_object,gtk_accel_groups_from_object_db);
extern GtkSortType gtk_tree_view_column_get_sort_order_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_sort_order,gtk_tree_view_column_get_sort_order_db);
extern gint gtk_notebook_insert_page_db(GtkNotebook *, GtkWidget *, GtkWidget *, gint);
CheckInterfacedef(gtk_notebook_insert_page,gtk_notebook_insert_page_db);
extern GType gtk_table_get_type_db(void);
CheckInterfacedef(gtk_table_get_type,gtk_table_get_type_db);
extern GtkWidget * gtk_menu_item_get_submenu_db(GtkMenuItem *);
CheckInterfacedef(gtk_menu_item_get_submenu,gtk_menu_item_get_submenu_db);
extern gboolean gtk_text_view_scroll_to_iter_db(GtkTextView *, GtkTextIter *, gdouble, gboolean, gdouble, gdouble);
CheckInterfacedef(gtk_text_view_scroll_to_iter,gtk_text_view_scroll_to_iter_db);
extern void gtk_window_set_icon_list_db(GtkWindow *, GList *);
CheckInterfacedef(gtk_window_set_icon_list,gtk_window_set_icon_list_db);
extern gboolean gtk_window_get_destroy_with_parent_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_destroy_with_parent,gtk_window_get_destroy_with_parent_db);
extern void gtk_container_add_db(GtkContainer *, GtkWidget *);
CheckInterfacedef(gtk_container_add,gtk_container_add_db);
extern GtkShadowType gtk_handle_box_get_shadow_type_db(GtkHandleBox *);
CheckInterfacedef(gtk_handle_box_get_shadow_type,gtk_handle_box_get_shadow_type_db);
extern GtkWidget * gtk_text_view_new_db(void);
CheckInterfacedef(gtk_text_view_new,gtk_text_view_new_db);
extern void gtk_window_add_embedded_xid_db(GtkWindow *, guint);
CheckInterfacedef(gtk_window_add_embedded_xid,gtk_window_add_embedded_xid_db);
extern gboolean gtk_label_get_use_underline_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_use_underline,gtk_label_get_use_underline_db);
extern gboolean gtk_text_view_starts_display_line_db(GtkTextView *, const GtkTextIter *);
CheckInterfacedef(gtk_text_view_starts_display_line,gtk_text_view_starts_display_line_db);
extern gdouble gtk_spin_button_get_value_db(GtkSpinButton *);
CheckInterfacedef(gtk_spin_button_get_value,gtk_spin_button_get_value_db);
extern void gtk_tree_view_get_background_area_db(GtkTreeView *, GtkTreePath *, GtkTreeViewColumn *, GdkRectangle *);
CheckInterfacedef(gtk_tree_view_get_background_area,gtk_tree_view_get_background_area_db);
extern void gtk_color_selection_get_previous_color_db(GtkColorSelection *, GdkColor *);
CheckInterfacedef(gtk_color_selection_get_previous_color,gtk_color_selection_get_previous_color_db);
extern void gtk_file_chooser_set_action_db(GtkFileChooser *, GtkFileChooserAction);
CheckInterfacedef(gtk_file_chooser_set_action,gtk_file_chooser_set_action_db);
extern GtkWidget * gtk_dialog_add_button_db(GtkDialog *, const gchar *, gint);
CheckInterfacedef(gtk_dialog_add_button,gtk_dialog_add_button_db);
extern GType gtk_label_get_type_db(void);
CheckInterfacedef(gtk_label_get_type,gtk_label_get_type_db);
extern GType gtk_accel_group_get_type_db(void);
CheckInterfacedef(gtk_accel_group_get_type,gtk_accel_group_get_type_db);
extern GtkSelectionMode gtk_icon_view_get_selection_mode_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_selection_mode,gtk_icon_view_get_selection_mode_db);
extern GtkStyle * gtk_style_attach_db(GtkStyle *, GdkWindow *);
CheckInterfacedef(gtk_style_attach,gtk_style_attach_db);
extern void gtk_item_select_db(GtkItem *);
CheckInterfacedef(gtk_item_select,gtk_item_select_db);
extern void gtk_combo_box_set_column_span_column_db(GtkComboBox *, gint);
CheckInterfacedef(gtk_combo_box_set_column_span_column,gtk_combo_box_set_column_span_column_db);
extern GtkWidget * gtk_file_selection_new_db(const gchar *);
CheckInterfacedef(gtk_file_selection_new,gtk_file_selection_new_db);
extern GtkWidget * gtk_plug_new_for_display_db(GdkDisplay *, GdkNativeWindow);
CheckInterfacedef(gtk_plug_new_for_display,gtk_plug_new_for_display_db);
extern GtkAccelGroup * gtk_accel_group_new_db(void);
CheckInterfacedef(gtk_accel_group_new,gtk_accel_group_new_db);
extern void gtk_grab_add_db(GtkWidget *);
CheckInterfacedef(gtk_grab_add,gtk_grab_add_db);
extern const gchar * gtk_about_dialog_get_logo_icon_name_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_logo_icon_name,gtk_about_dialog_get_logo_icon_name_db);
extern GtkWidget * gtk_radio_menu_item_new_with_mnemonic_db(GSList *, const gchar *);
CheckInterfacedef(gtk_radio_menu_item_new_with_mnemonic,gtk_radio_menu_item_new_with_mnemonic_db);
extern gboolean gtk_window_get_focus_on_map_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_focus_on_map,gtk_window_get_focus_on_map_db);
extern GType gtk_radio_menu_item_get_type_db(void);
CheckInterfacedef(gtk_radio_menu_item_get_type,gtk_radio_menu_item_get_type_db);
extern const gchar * gtk_entry_get_text_db(GtkEntry *);
CheckInterfacedef(gtk_entry_get_text,gtk_entry_get_text_db);
extern GtkUIManager * gtk_ui_manager_new_db(void);
CheckInterfacedef(gtk_ui_manager_new,gtk_ui_manager_new_db);
extern gboolean gtk_action_group_get_visible_db(GtkActionGroup *);
CheckInterfacedef(gtk_action_group_get_visible,gtk_action_group_get_visible_db);
extern gboolean gtk_tree_store_iter_is_valid_db(GtkTreeStore *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_store_iter_is_valid,gtk_tree_store_iter_is_valid_db);
extern void gtk_container_child_set_db(GtkContainer *, GtkWidget *, const gchar *, ...);
CheckInterfacedef(gtk_container_child_set,gtk_container_child_set_db);
extern gboolean gtk_rc_property_parse_border_db(const GParamSpec *, const GString *, GValue *);
CheckInterfacedef(gtk_rc_property_parse_border,gtk_rc_property_parse_border_db);
extern void gtk_binding_entry_clear_db(GtkBindingSet *, guint, GdkModifierType);
CheckInterfacedef(gtk_binding_entry_clear,gtk_binding_entry_clear_db);
extern void gtk_menu_shell_select_first_db(GtkMenuShell *, gboolean);
CheckInterfacedef(gtk_menu_shell_select_first,gtk_menu_shell_select_first_db);
extern void gtk_scrolled_window_set_placement_db(GtkScrolledWindow *, GtkCornerType);
CheckInterfacedef(gtk_scrolled_window_set_placement,gtk_scrolled_window_set_placement_db);
extern void gtk_frame_set_label_align_db(GtkFrame *, gfloat, gfloat);
CheckInterfacedef(gtk_frame_set_label_align,gtk_frame_set_label_align_db);
extern GtkWidget * gtk_combo_box_new_text_db(void);
CheckInterfacedef(gtk_combo_box_new_text,gtk_combo_box_new_text_db);
extern void gtk_text_view_add_child_at_anchor_db(GtkTextView *, GtkWidget *, GtkTextChildAnchor *);
CheckInterfacedef(gtk_text_view_add_child_at_anchor,gtk_text_view_add_child_at_anchor_db);
extern GtkWidget * gtk_vscrollbar_new_db(GtkAdjustment *);
CheckInterfacedef(gtk_vscrollbar_new,gtk_vscrollbar_new_db);
extern void gtk_separator_tool_item_set_draw_db(GtkSeparatorToolItem *, gboolean);
CheckInterfacedef(gtk_separator_tool_item_set_draw,gtk_separator_tool_item_set_draw_db);
extern gboolean gtk_toggle_button_get_active_db(GtkToggleButton *);
CheckInterfacedef(gtk_toggle_button_get_active,gtk_toggle_button_get_active_db);
extern void gtk_clipboard_store_db(GtkClipboard *);
CheckInterfacedef(gtk_clipboard_store,gtk_clipboard_store_db);
extern const gchar *const  * gtk_about_dialog_get_authors_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_authors,gtk_about_dialog_get_authors_db);
extern GType gtk_vbutton_box_get_type_db(void);
CheckInterfacedef(gtk_vbutton_box_get_type,gtk_vbutton_box_get_type_db);
extern void gtk_tree_view_column_cell_set_cell_data_db(GtkTreeViewColumn *, GtkTreeModel *, GtkTreeIter *, gboolean, gboolean);
CheckInterfacedef(gtk_tree_view_column_cell_set_cell_data,gtk_tree_view_column_cell_set_cell_data_db);
extern GType gtk_im_context_get_type_db(void);
CheckInterfacedef(gtk_im_context_get_type,gtk_im_context_get_type_db);
extern gboolean gtk_icon_size_lookup_db(GtkIconSize, gint *, gint *);
CheckInterfacedef(gtk_icon_size_lookup,gtk_icon_size_lookup_db);
extern GtkTreeView * gtk_tree_selection_get_tree_view_db(GtkTreeSelection *);
CheckInterfacedef(gtk_tree_selection_get_tree_view,gtk_tree_selection_get_tree_view_db);
extern void gtk_expander_set_use_underline_db(GtkExpander *, gboolean);
CheckInterfacedef(gtk_expander_set_use_underline,gtk_expander_set_use_underline_db);
extern GtkBindingSet * gtk_binding_set_new_db(const gchar *);
CheckInterfacedef(gtk_binding_set_new,gtk_binding_set_new_db);
extern gchar * gtk_accelerator_name_db(guint, GdkModifierType);
CheckInterfacedef(gtk_accelerator_name,gtk_accelerator_name_db);
extern gboolean gtk_expander_get_use_underline_db(GtkExpander *);
CheckInterfacedef(gtk_expander_get_use_underline,gtk_expander_get_use_underline_db);
extern GtkPositionType gtk_handle_box_get_handle_position_db(GtkHandleBox *);
CheckInterfacedef(gtk_handle_box_get_handle_position,gtk_handle_box_get_handle_position_db);
extern GSList * gtk_ui_manager_get_toplevels_db(GtkUIManager *, GtkUIManagerItemType);
CheckInterfacedef(gtk_ui_manager_get_toplevels,gtk_ui_manager_get_toplevels_db);
extern gboolean gtk_im_context_filter_keypress_db(GtkIMContext *, GdkEventKey *);
CheckInterfacedef(gtk_im_context_filter_keypress,gtk_im_context_filter_keypress_db);
extern void gtk_range_set_value_db(GtkRange *, gdouble);
CheckInterfacedef(gtk_range_set_value,gtk_range_set_value_db);
extern gboolean gtk_font_selection_dialog_set_font_name_db(GtkFontSelectionDialog *, const gchar *);
CheckInterfacedef(gtk_font_selection_dialog_set_font_name,gtk_font_selection_dialog_set_font_name_db);
extern GtkStateType gtk_icon_source_get_state_db(const GtkIconSource *);
CheckInterfacedef(gtk_icon_source_get_state,gtk_icon_source_get_state_db);
extern GType gtk_spin_button_update_policy_get_type_db(void);
CheckInterfacedef(gtk_spin_button_update_policy_get_type,gtk_spin_button_update_policy_get_type_db);
extern void gtk_drag_dest_add_image_targets_db(GtkWidget *);
CheckInterfacedef(gtk_drag_dest_add_image_targets,gtk_drag_dest_add_image_targets_db);
extern GtkAdjustment * gtk_layout_get_hadjustment_db(GtkLayout *);
CheckInterfacedef(gtk_layout_get_hadjustment,gtk_layout_get_hadjustment_db);
extern gint gtk_notebook_page_num_db(GtkNotebook *, GtkWidget *);
CheckInterfacedef(gtk_notebook_page_num,gtk_notebook_page_num_db);
extern void gtk_window_add_mnemonic_db(GtkWindow *, guint, GtkWidget *);
CheckInterfacedef(gtk_window_add_mnemonic,gtk_window_add_mnemonic_db);
extern gboolean gtk_tree_view_column_get_sort_indicator_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_sort_indicator,gtk_tree_view_column_get_sort_indicator_db);
extern void gtk_tree_model_filter_set_visible_column_db(GtkTreeModelFilter *, gint);
CheckInterfacedef(gtk_tree_model_filter_set_visible_column,gtk_tree_model_filter_set_visible_column_db);
extern void gtk_menu_shell_append_db(GtkMenuShell *, GtkWidget *);
CheckInterfacedef(gtk_menu_shell_append,gtk_menu_shell_append_db);
extern GType gtk_image_menu_item_get_type_db(void);
CheckInterfacedef(gtk_image_menu_item_get_type,gtk_image_menu_item_get_type_db);
extern void gtk_text_tag_table_add_db(GtkTextTagTable *, GtkTextTag *);
CheckInterfacedef(gtk_text_tag_table_add,gtk_text_tag_table_add_db);
extern guint16 gtk_color_button_get_alpha_db(GtkColorButton *);
CheckInterfacedef(gtk_color_button_get_alpha,gtk_color_button_get_alpha_db);
extern void gtk_action_set_accel_path_db(GtkAction *, const gchar *);
CheckInterfacedef(gtk_action_set_accel_path,gtk_action_set_accel_path_db);
extern GtkTextChildAnchor * gtk_text_child_anchor_new_db(void);
CheckInterfacedef(gtk_text_child_anchor_new,gtk_text_child_anchor_new_db);
extern void gtk_file_chooser_set_select_multiple_db(GtkFileChooser *, gboolean);
CheckInterfacedef(gtk_file_chooser_set_select_multiple,gtk_file_chooser_set_select_multiple_db);
extern GType gtk_action_group_get_type_db(void);
CheckInterfacedef(gtk_action_group_get_type,gtk_action_group_get_type_db);
extern void gtk_tree_view_column_pack_end_db(GtkTreeViewColumn *, GtkCellRenderer *, gboolean);
CheckInterfacedef(gtk_tree_view_column_pack_end,gtk_tree_view_column_pack_end_db);
extern const gchar * gtk_menu_get_title_db(GtkMenu *);
CheckInterfacedef(gtk_menu_get_title,gtk_menu_get_title_db);
extern GtkWidget * gtk_icon_view_new_db(void);
CheckInterfacedef(gtk_icon_view_new,gtk_icon_view_new_db);
extern gboolean gtk_color_selection_is_adjusting_db(GtkColorSelection *);
CheckInterfacedef(gtk_color_selection_is_adjusting,gtk_color_selection_is_adjusting_db);
extern void gtk_tree_view_set_row_separator_func_db(GtkTreeView *, GtkTreeViewRowSeparatorFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_tree_view_set_row_separator_func,gtk_tree_view_set_row_separator_func_db);
extern void gtk_adjustment_set_value_db(GtkAdjustment *, gdouble);
CheckInterfacedef(gtk_adjustment_set_value,gtk_adjustment_set_value_db);
extern gboolean gtk_file_chooser_get_local_only_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_local_only,gtk_file_chooser_get_local_only_db);
extern gboolean gtk_tree_view_get_hover_expand_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_hover_expand,gtk_tree_view_get_hover_expand_db);
extern gboolean gtk_combo_box_get_focus_on_click_db(GtkComboBox *);
CheckInterfacedef(gtk_combo_box_get_focus_on_click,gtk_combo_box_get_focus_on_click_db);
extern void gtk_paned_add2_db(GtkPaned *, GtkWidget *);
CheckInterfacedef(gtk_paned_add2,gtk_paned_add2_db);
extern GdkVisual * gtk_widget_get_visual_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_visual,gtk_widget_get_visual_db);
extern GType gtk_tree_store_get_type_db(void);
CheckInterfacedef(gtk_tree_store_get_type,gtk_tree_store_get_type_db);
extern GtkIconInfo * gtk_icon_info_copy_db(GtkIconInfo *);
CheckInterfacedef(gtk_icon_info_copy,gtk_icon_info_copy_db);
extern void gtk_icon_set_get_sizes_db(GtkIconSet *, GtkIconSize * *, gint *);
CheckInterfacedef(gtk_icon_set_get_sizes,gtk_icon_set_get_sizes_db);
extern GtkAdjustment * gtk_viewport_get_hadjustment_db(GtkViewport *);
CheckInterfacedef(gtk_viewport_get_hadjustment,gtk_viewport_get_hadjustment_db);
extern void gtk_combo_box_insert_text_db(GtkComboBox *, gint, const gchar *);
CheckInterfacedef(gtk_combo_box_insert_text,gtk_combo_box_insert_text_db);
extern void gtk_tree_model_sort_convert_iter_to_child_iter_db(GtkTreeModelSort *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_sort_convert_iter_to_child_iter,gtk_tree_model_sort_convert_iter_to_child_iter_db);
extern gboolean gtk_scale_get_draw_value_db(GtkScale *);
CheckInterfacedef(gtk_scale_get_draw_value,gtk_scale_get_draw_value_db);
extern gint gtk_combo_box_entry_get_text_column_db(GtkComboBoxEntry *);
CheckInterfacedef(gtk_combo_box_entry_get_text_column,gtk_combo_box_entry_get_text_column_db);
extern GType gtk_about_dialog_get_type_db(void);
CheckInterfacedef(gtk_about_dialog_get_type,gtk_about_dialog_get_type_db);
extern void gtk_im_context_set_use_preedit_db(GtkIMContext *, gboolean);
CheckInterfacedef(gtk_im_context_set_use_preedit,gtk_im_context_set_use_preedit_db);
extern void gtk_list_store_insert_with_valuesv_db(GtkListStore *, GtkTreeIter *, gint, gint *, GValue *, gint);
CheckInterfacedef(gtk_list_store_insert_with_valuesv,gtk_list_store_insert_with_valuesv_db);
extern void gtk_notebook_set_scrollable_db(GtkNotebook *, gboolean);
CheckInterfacedef(gtk_notebook_set_scrollable,gtk_notebook_set_scrollable_db);
extern void gtk_frame_set_shadow_type_db(GtkFrame *, GtkShadowType);
CheckInterfacedef(gtk_frame_set_shadow_type,gtk_frame_set_shadow_type_db);
extern gchar * gtk_editable_get_chars_db(GtkEditable *, gint, gint);
CheckInterfacedef(gtk_editable_get_chars,gtk_editable_get_chars_db);
extern gboolean gtk_text_view_backward_display_line_db(GtkTextView *, GtkTextIter *);
CheckInterfacedef(gtk_text_view_backward_display_line,gtk_text_view_backward_display_line_db);
extern GType gtk_icon_theme_error_get_type_db(void);
CheckInterfacedef(gtk_icon_theme_error_get_type,gtk_icon_theme_error_get_type_db);
extern gint gtk_paned_get_position_db(GtkPaned *);
CheckInterfacedef(gtk_paned_get_position,gtk_paned_get_position_db);
extern void gtk_widget_set_extension_events_db(GtkWidget *, GdkExtensionMode);
CheckInterfacedef(gtk_widget_set_extension_events,gtk_widget_set_extension_events_db);
extern GtkTargetList * gtk_drag_dest_get_target_list_db(GtkWidget *);
CheckInterfacedef(gtk_drag_dest_get_target_list,gtk_drag_dest_get_target_list_db);
extern void gtk_main_db(void);
CheckInterfacedef(gtk_main,gtk_main_db);
extern gboolean gtk_toggle_button_get_inconsistent_db(GtkToggleButton *);
CheckInterfacedef(gtk_toggle_button_get_inconsistent,gtk_toggle_button_get_inconsistent_db);
extern gboolean gtk_alternative_dialog_button_order_db(GdkScreen *);
CheckInterfacedef(gtk_alternative_dialog_button_order,gtk_alternative_dialog_button_order_db);
extern void gtk_window_set_mnemonic_modifier_db(GtkWindow *, GdkModifierType);
CheckInterfacedef(gtk_window_set_mnemonic_modifier,gtk_window_set_mnemonic_modifier_db);
extern void gtk_widget_set_default_colormap_db(GdkColormap *);
CheckInterfacedef(gtk_widget_set_default_colormap,gtk_widget_set_default_colormap_db);
extern gboolean gtk_accel_map_lookup_entry_db(const gchar *, GtkAccelKey *);
CheckInterfacedef(gtk_accel_map_lookup_entry,gtk_accel_map_lookup_entry_db);
extern GtkWidget * gtk_about_dialog_new_db(void);
CheckInterfacedef(gtk_about_dialog_new,gtk_about_dialog_new_db);
extern gboolean gtk_clipboard_set_with_data_db(GtkClipboard *, const GtkTargetEntry *, guint, GtkClipboardGetFunc, GtkClipboardClearFunc, gpointer);
CheckInterfacedef(gtk_clipboard_set_with_data,gtk_clipboard_set_with_data_db);
extern GtkWidget * gtk_button_new_db(void);
CheckInterfacedef(gtk_button_new,gtk_button_new_db);
extern GList * gtk_tree_selection_get_selected_rows_db(GtkTreeSelection *, GtkTreeModel * *);
CheckInterfacedef(gtk_tree_selection_get_selected_rows,gtk_tree_selection_get_selected_rows_db);
extern void gtk_tree_selection_select_all_db(GtkTreeSelection *);
CheckInterfacedef(gtk_tree_selection_select_all,gtk_tree_selection_select_all_db);
extern GType gtk_menu_direction_type_get_type_db(void);
CheckInterfacedef(gtk_menu_direction_type_get_type,gtk_menu_direction_type_get_type_db);
extern void gtk_action_set_visible_db(GtkAction *, gboolean);
CheckInterfacedef(gtk_action_set_visible,gtk_action_set_visible_db);
extern GtkTooltipsData * gtk_tooltips_data_get_db(GtkWidget *);
CheckInterfacedef(gtk_tooltips_data_get,gtk_tooltips_data_get_db);
extern void gtk_tree_store_move_after_db(GtkTreeStore *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_store_move_after,gtk_tree_store_move_after_db);
extern void gtk_text_buffer_insert_with_tags_by_name_db(GtkTextBuffer *, GtkTextIter *, const gchar *, gint, const gchar *, ...);
CheckInterfacedef(gtk_text_buffer_insert_with_tags_by_name,gtk_text_buffer_insert_with_tags_by_name_db);
extern gboolean gtk_statusbar_get_has_resize_grip_db(GtkStatusbar *);
CheckInterfacedef(gtk_statusbar_get_has_resize_grip,gtk_statusbar_get_has_resize_grip_db);
extern GdkGravity gtk_window_get_gravity_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_gravity,gtk_window_get_gravity_db);
extern GtkWidget * gtk_image_menu_item_new_db(void);
CheckInterfacedef(gtk_image_menu_item_new,gtk_image_menu_item_new_db);
extern void gtk_button_leave_db(GtkButton *);
CheckInterfacedef(gtk_button_leave,gtk_button_leave_db);
extern void gtk_text_buffer_insert_pixbuf_db(GtkTextBuffer *, GtkTextIter *, GdkPixbuf *);
CheckInterfacedef(gtk_text_buffer_insert_pixbuf,gtk_text_buffer_insert_pixbuf_db);
extern void gtk_action_group_add_radio_actions_db(GtkActionGroup *, const GtkRadioActionEntry *, guint, gint, GCallback, gpointer);
CheckInterfacedef(gtk_action_group_add_radio_actions,gtk_action_group_add_radio_actions_db);
extern GtkWidget * gtk_vscale_new_with_range_db(gdouble, gdouble, gdouble);
CheckInterfacedef(gtk_vscale_new_with_range,gtk_vscale_new_with_range_db);
extern void gtk_text_buffer_delete_mark_db(GtkTextBuffer *, GtkTextMark *);
CheckInterfacedef(gtk_text_buffer_delete_mark,gtk_text_buffer_delete_mark_db);
extern GType gtk_viewport_get_type_db(void);
CheckInterfacedef(gtk_viewport_get_type,gtk_viewport_get_type_db);
extern void gtk_notebook_set_current_page_db(GtkNotebook *, gint);
CheckInterfacedef(gtk_notebook_set_current_page,gtk_notebook_set_current_page_db);
extern void gtk_text_view_get_line_yrange_db(GtkTextView *, const GtkTextIter *, gint *, gint *);
CheckInterfacedef(gtk_text_view_get_line_yrange,gtk_text_view_get_line_yrange_db);
extern gint gtk_combo_box_get_wrap_width_db(GtkComboBox *);
CheckInterfacedef(gtk_combo_box_get_wrap_width,gtk_combo_box_get_wrap_width_db);
extern void gtk_image_get_pixmap_db(GtkImage *, GdkPixmap * *, GdkBitmap * *);
CheckInterfacedef(gtk_image_get_pixmap,gtk_image_get_pixmap_db);
extern void gtk_show_about_dialog_db(GtkWindow *, const gchar *, ...);
CheckInterfacedef(gtk_show_about_dialog,gtk_show_about_dialog_db);
extern gint gtk_tree_view_column_get_min_width_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_min_width,gtk_tree_view_column_get_min_width_db);
extern GtkWidget * gtk_toggle_button_new_db(void);
CheckInterfacedef(gtk_toggle_button_new,gtk_toggle_button_new_db);
extern void gtk_drag_dest_add_uri_targets_db(GtkWidget *);
CheckInterfacedef(gtk_drag_dest_add_uri_targets,gtk_drag_dest_add_uri_targets_db);
extern void gtk_scrolled_window_set_shadow_type_db(GtkScrolledWindow *, GtkShadowType);
CheckInterfacedef(gtk_scrolled_window_set_shadow_type,gtk_scrolled_window_set_shadow_type_db);
extern GtkTextAttributes * gtk_text_attributes_copy_db(GtkTextAttributes *);
CheckInterfacedef(gtk_text_attributes_copy,gtk_text_attributes_copy_db);
extern void gtk_combo_box_set_active_iter_db(GtkComboBox *, GtkTreeIter *);
CheckInterfacedef(gtk_combo_box_set_active_iter,gtk_combo_box_set_active_iter_db);
extern void gtk_table_resize_db(GtkTable *, guint, guint);
CheckInterfacedef(gtk_table_resize,gtk_table_resize_db);
extern GtkWidget * gtk_aspect_frame_new_db(const gchar *, gfloat, gfloat, gfloat, gboolean);
CheckInterfacedef(gtk_aspect_frame_new,gtk_aspect_frame_new_db);
extern gint gtk_tree_view_insert_column_db(GtkTreeView *, GtkTreeViewColumn *, gint);
CheckInterfacedef(gtk_tree_view_insert_column,gtk_tree_view_insert_column_db);
extern void gtk_image_get_stock_db(GtkImage *, gchar * *, GtkIconSize *);
CheckInterfacedef(gtk_image_get_stock,gtk_image_get_stock_db);
extern void gtk_label_select_region_db(GtkLabel *, gint, gint);
CheckInterfacedef(gtk_label_select_region,gtk_label_select_region_db);
extern void gtk_tree_selection_unselect_all_db(GtkTreeSelection *);
CheckInterfacedef(gtk_tree_selection_unselect_all,gtk_tree_selection_unselect_all_db);
extern void gtk_curve_set_gamma_db(GtkCurve *, gfloat);
CheckInterfacedef(gtk_curve_set_gamma,gtk_curve_set_gamma_db);
extern void gtk_window_unfullscreen_db(GtkWindow *);
CheckInterfacedef(gtk_window_unfullscreen,gtk_window_unfullscreen_db);
extern GtkWidget * gtk_button_new_with_label_db(const gchar *);
CheckInterfacedef(gtk_button_new_with_label,gtk_button_new_with_label_db);
extern const gchar * gtk_label_get_text_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_text,gtk_label_get_text_db);
extern GtkWidget * gtk_frame_get_label_widget_db(GtkFrame *);
CheckInterfacedef(gtk_frame_get_label_widget,gtk_frame_get_label_widget_db);
extern GtkStyle * gtk_widget_get_style_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_style,gtk_widget_get_style_db);
extern GtkToolItem * gtk_tool_button_new_db(GtkWidget *, const gchar *);
CheckInterfacedef(gtk_tool_button_new,gtk_tool_button_new_db);
extern void gtk_menu_item_select_db(GtkMenuItem *);
CheckInterfacedef(gtk_menu_item_select,gtk_menu_item_select_db);
extern void gtk_tree_view_set_column_drag_function_db(GtkTreeView *, GtkTreeViewColumnDropFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_tree_view_set_column_drag_function,gtk_tree_view_set_column_drag_function_db);
extern void gtk_paint_vline_db(GtkStyle *, GdkWindow *, GtkStateType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint);
CheckInterfacedef(gtk_paint_vline,gtk_paint_vline_db);
extern gboolean gtk_event_box_get_visible_window_db(GtkEventBox *);
CheckInterfacedef(gtk_event_box_get_visible_window,gtk_event_box_get_visible_window_db);
extern gboolean gtk_tree_drag_dest_row_drop_possible_db(GtkTreeDragDest *, GtkTreePath *, GtkSelectionData *);
CheckInterfacedef(gtk_tree_drag_dest_row_drop_possible,gtk_tree_drag_dest_row_drop_possible_db);
extern gboolean gtk_tool_item_get_is_important_db(GtkToolItem *);
CheckInterfacedef(gtk_tool_item_get_is_important,gtk_tool_item_get_is_important_db);
extern void gtk_key_snooper_remove_db(guint);
CheckInterfacedef(gtk_key_snooper_remove,gtk_key_snooper_remove_db);
extern void gtk_settings_set_long_property_db(GtkSettings *, const gchar *, glong, const gchar *);
CheckInterfacedef(gtk_settings_set_long_property,gtk_settings_set_long_property_db);
extern void gtk_action_group_add_toggle_actions_db(GtkActionGroup *, const GtkToggleActionEntry *, guint, gpointer);
CheckInterfacedef(gtk_action_group_add_toggle_actions,gtk_action_group_add_toggle_actions_db);
extern void gtk_frame_set_label_db(GtkFrame *, const gchar *);
CheckInterfacedef(gtk_frame_set_label,gtk_frame_set_label_db);
extern guint gtk_accel_label_get_accel_width_db(GtkAccelLabel *);
CheckInterfacedef(gtk_accel_label_get_accel_width,gtk_accel_label_get_accel_width_db);
extern GtkTreeModel * gtk_tree_model_sort_get_model_db(GtkTreeModelSort *);
CheckInterfacedef(gtk_tree_model_sort_get_model,gtk_tree_model_sort_get_model_db);
extern void gtk_image_menu_item_set_image_db(GtkImageMenuItem *, GtkWidget *);
CheckInterfacedef(gtk_image_menu_item_set_image,gtk_image_menu_item_set_image_db);
extern GtkWidget * gtk_image_menu_item_new_with_mnemonic_db(const gchar *);
CheckInterfacedef(gtk_image_menu_item_new_with_mnemonic,gtk_image_menu_item_new_with_mnemonic_db);
extern void gtk_label_set_markup_with_mnemonic_db(GtkLabel *, const gchar *);
CheckInterfacedef(gtk_label_set_markup_with_mnemonic,gtk_label_set_markup_with_mnemonic_db);
extern void gtk_tooltips_disable_db(GtkTooltips *);
CheckInterfacedef(gtk_tooltips_disable,gtk_tooltips_disable_db);
extern GType gtk_cell_renderer_pixbuf_get_type_db(void);
CheckInterfacedef(gtk_cell_renderer_pixbuf_get_type,gtk_cell_renderer_pixbuf_get_type_db);
extern GtkWidget * gtk_widget_get_ancestor_db(GtkWidget *, GType);
CheckInterfacedef(gtk_widget_get_ancestor,gtk_widget_get_ancestor_db);
extern gboolean gtk_widget_intersect_db(GtkWidget *, GdkRectangle *, GdkRectangle *);
CheckInterfacedef(gtk_widget_intersect,gtk_widget_intersect_db);
extern GtkWidget * gtk_toolbar_new_db(void);
CheckInterfacedef(gtk_toolbar_new,gtk_toolbar_new_db);
extern void gtk_text_view_set_pixels_inside_wrap_db(GtkTextView *, gint);
CheckInterfacedef(gtk_text_view_set_pixels_inside_wrap,gtk_text_view_set_pixels_inside_wrap_db);
extern void gtk_container_child_get_property_db(GtkContainer *, GtkWidget *, const gchar *, GValue *);
CheckInterfacedef(gtk_container_child_get_property,gtk_container_child_get_property_db);
extern void gtk_text_view_get_visible_rect_db(GtkTextView *, GdkRectangle *);
CheckInterfacedef(gtk_text_view_get_visible_rect,gtk_text_view_get_visible_rect_db);
extern void gtk_cell_layout_reorder_db(GtkCellLayout *, GtkCellRenderer *, gint);
CheckInterfacedef(gtk_cell_layout_reorder,gtk_cell_layout_reorder_db);
extern GtkWidget * gtk_menu_bar_new_db(void);
CheckInterfacedef(gtk_menu_bar_new,gtk_menu_bar_new_db);
extern GType gtk_separator_tool_item_get_type_db(void);
CheckInterfacedef(gtk_separator_tool_item_get_type,gtk_separator_tool_item_get_type_db);
extern void gtk_button_pressed_db(GtkButton *);
CheckInterfacedef(gtk_button_pressed,gtk_button_pressed_db);
extern gint gtk_combo_box_get_row_span_column_db(GtkComboBox *);
CheckInterfacedef(gtk_combo_box_get_row_span_column,gtk_combo_box_get_row_span_column_db);
extern gboolean gtk_text_tag_event_db(GtkTextTag *, GObject *, GdkEvent *, const GtkTextIter *);
CheckInterfacedef(gtk_text_tag_event,gtk_text_tag_event_db);
extern GtkWidget * gtk_gamma_curve_new_db(void);
CheckInterfacedef(gtk_gamma_curve_new,gtk_gamma_curve_new_db);
extern gboolean gtk_calendar_select_month_db(GtkCalendar *, guint, guint);
CheckInterfacedef(gtk_calendar_select_month,gtk_calendar_select_month_db);
extern void gtk_window_deiconify_db(GtkWindow *);
CheckInterfacedef(gtk_window_deiconify,gtk_window_deiconify_db);
extern void gtk_plug_construct_db(GtkPlug *, GdkNativeWindow);
CheckInterfacedef(gtk_plug_construct,gtk_plug_construct_db);
extern gboolean gtk_text_iter_backward_word_starts_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_backward_word_starts,gtk_text_iter_backward_word_starts_db);
extern const gchar * gtk_file_chooser_button_get_title_db(GtkFileChooserButton *);
CheckInterfacedef(gtk_file_chooser_button_get_title,gtk_file_chooser_button_get_title_db);
extern gchar * gtk_text_iter_get_slice_db(const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_slice,gtk_text_iter_get_slice_db);
extern guint gtk_spin_button_get_digits_db(GtkSpinButton *);
CheckInterfacedef(gtk_spin_button_get_digits,gtk_spin_button_get_digits_db);
extern void gtk_image_set_from_icon_set_db(GtkImage *, GtkIconSet *, GtkIconSize);
CheckInterfacedef(gtk_image_set_from_icon_set,gtk_image_set_from_icon_set_db);
extern gboolean gtk_file_chooser_select_uri_db(GtkFileChooser *, const char *);
CheckInterfacedef(gtk_file_chooser_select_uri,gtk_file_chooser_select_uri_db);
extern void gtk_container_set_focus_chain_db(GtkContainer *, GList *);
CheckInterfacedef(gtk_container_set_focus_chain,gtk_container_set_focus_chain_db);
extern void gtk_stock_item_free_db(GtkStockItem *);
CheckInterfacedef(gtk_stock_item_free,gtk_stock_item_free_db);
extern void gtk_menu_popup_db(GtkMenu *, GtkWidget *, GtkWidget *, GtkMenuPositionFunc, gpointer, guint, guint32);
CheckInterfacedef(gtk_menu_popup,gtk_menu_popup_db);
extern GtkProgressBarOrientation gtk_progress_bar_get_orientation_db(GtkProgressBar *);
CheckInterfacedef(gtk_progress_bar_get_orientation,gtk_progress_bar_get_orientation_db);
extern void gtk_list_store_set_db(GtkListStore *, GtkTreeIter *, ...);
CheckInterfacedef(gtk_list_store_set,gtk_list_store_set_db);
extern void gtk_action_group_set_translate_func_db(GtkActionGroup *, GtkTranslateFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_action_group_set_translate_func,gtk_action_group_set_translate_func_db);
extern GtkWidget * gtk_image_new_from_stock_db(const gchar *, GtkIconSize);
CheckInterfacedef(gtk_image_new_from_stock,gtk_image_new_from_stock_db);
extern void gtk_box_pack_end_defaults_db(GtkBox *, GtkWidget *);
CheckInterfacedef(gtk_box_pack_end_defaults,gtk_box_pack_end_defaults_db);
extern void gtk_toolbar_set_style_db(GtkToolbar *, GtkToolbarStyle);
CheckInterfacedef(gtk_toolbar_set_style,gtk_toolbar_set_style_db);
extern GtkAccelGroup * gtk_accel_group_from_accel_closure_db(GClosure *);
CheckInterfacedef(gtk_accel_group_from_accel_closure,gtk_accel_group_from_accel_closure_db);
extern GType gtk_container_get_type_db(void);
CheckInterfacedef(gtk_container_get_type,gtk_container_get_type_db);
extern void gtk_about_dialog_set_version_db(GtkAboutDialog *, const gchar *);
CheckInterfacedef(gtk_about_dialog_set_version,gtk_about_dialog_set_version_db);
extern gboolean gtk_file_chooser_set_uri_db(GtkFileChooser *, const char *);
CheckInterfacedef(gtk_file_chooser_set_uri,gtk_file_chooser_set_uri_db);
extern void gtk_tree_model_filter_refilter_db(GtkTreeModelFilter *);
CheckInterfacedef(gtk_tree_model_filter_refilter,gtk_tree_model_filter_refilter_db);
extern void gtk_tooltips_force_window_db(GtkTooltips *);
CheckInterfacedef(gtk_tooltips_force_window,gtk_tooltips_force_window_db);
extern GtkWidget * gtk_tree_view_new_with_model_db(GtkTreeModel *);
CheckInterfacedef(gtk_tree_view_new_with_model,gtk_tree_view_new_with_model_db);
extern void gtk_tree_model_row_inserted_db(GtkTreeModel *, GtkTreePath *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_row_inserted,gtk_tree_model_row_inserted_db);
extern GdkModifierType gtk_window_get_mnemonic_modifier_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_mnemonic_modifier,gtk_window_get_mnemonic_modifier_db);
extern void gtk_tooltips_set_tip_db(GtkTooltips *, GtkWidget *, const gchar *, const gchar *);
CheckInterfacedef(gtk_tooltips_set_tip,gtk_tooltips_set_tip_db);
extern void gtk_cell_layout_set_cell_data_func_db(GtkCellLayout *, GtkCellRenderer *, GtkCellLayoutDataFunc, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_cell_layout_set_cell_data_func,gtk_cell_layout_set_cell_data_func_db);
extern gboolean gtk_selection_data_set_text_db(GtkSelectionData *, const gchar *, gint);
CheckInterfacedef(gtk_selection_data_set_text,gtk_selection_data_set_text_db);
extern GtkTreeRowReference * gtk_tree_row_reference_new_db(GtkTreeModel *, GtkTreePath *);
CheckInterfacedef(gtk_tree_row_reference_new,gtk_tree_row_reference_new_db);
extern void gtk_widget_set_double_buffered_db(GtkWidget *, gboolean);
CheckInterfacedef(gtk_widget_set_double_buffered,gtk_widget_set_double_buffered_db);
extern gint gtk_combo_box_get_active_db(GtkComboBox *);
CheckInterfacedef(gtk_combo_box_get_active,gtk_combo_box_get_active_db);
extern void gtk_tool_button_set_label_db(GtkToolButton *, const gchar *);
CheckInterfacedef(gtk_tool_button_set_label,gtk_tool_button_set_label_db);
extern gboolean gtk_text_iter_forward_to_line_end_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_forward_to_line_end,gtk_text_iter_forward_to_line_end_db);
extern gboolean gtk_clipboard_wait_for_targets_db(GtkClipboard *, GdkAtom * *, gint *);
CheckInterfacedef(gtk_clipboard_wait_for_targets,gtk_clipboard_wait_for_targets_db);
extern gboolean gtk_text_buffer_delete_selection_db(GtkTextBuffer *, gboolean, gboolean);
CheckInterfacedef(gtk_text_buffer_delete_selection,gtk_text_buffer_delete_selection_db);
extern void gtk_spin_button_set_wrap_db(GtkSpinButton *, gboolean);
CheckInterfacedef(gtk_spin_button_set_wrap,gtk_spin_button_set_wrap_db);
extern GType gtk_input_dialog_get_type_db(void);
CheckInterfacedef(gtk_input_dialog_get_type,gtk_input_dialog_get_type_db);
extern const gchar * gtk_file_selection_get_filename_db(GtkFileSelection *);
CheckInterfacedef(gtk_file_selection_get_filename,gtk_file_selection_get_filename_db);
extern gboolean gtk_tree_set_row_drag_data_db(GtkSelectionData *, GtkTreeModel *, GtkTreePath *);
CheckInterfacedef(gtk_tree_set_row_drag_data,gtk_tree_set_row_drag_data_db);
extern GtkWidget * gtk_widget_get_toplevel_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_toplevel,gtk_widget_get_toplevel_db);
extern void gtk_menu_set_accel_group_db(GtkMenu *, GtkAccelGroup *);
CheckInterfacedef(gtk_menu_set_accel_group,gtk_menu_set_accel_group_db);
extern GType gtk_socket_get_type_db(void);
CheckInterfacedef(gtk_socket_get_type,gtk_socket_get_type_db);
extern gboolean gtk_widget_set_scroll_adjustments_db(GtkWidget *, GtkAdjustment *, GtkAdjustment *);
CheckInterfacedef(gtk_widget_set_scroll_adjustments,gtk_widget_set_scroll_adjustments_db);
extern void gtk_selection_data_free_db(GtkSelectionData *);
CheckInterfacedef(gtk_selection_data_free,gtk_selection_data_free_db);
extern gboolean gtk_selection_data_set_uris_db(GtkSelectionData *, gchar * *);
CheckInterfacedef(gtk_selection_data_set_uris,gtk_selection_data_set_uris_db);
extern GType gtk_text_tag_table_get_type_db(void);
CheckInterfacedef(gtk_text_tag_table_get_type,gtk_text_tag_table_get_type_db);
extern void gtk_entry_completion_insert_prefix_db(GtkEntryCompletion *);
CheckInterfacedef(gtk_entry_completion_insert_prefix,gtk_entry_completion_insert_prefix_db);
extern GType gtk_window_group_get_type_db(void);
CheckInterfacedef(gtk_window_group_get_type,gtk_window_group_get_type_db);
extern void gtk_action_set_sensitive_db(GtkAction *, gboolean);
CheckInterfacedef(gtk_action_set_sensitive,gtk_action_set_sensitive_db);
extern GtkTextBuffer * gtk_text_view_get_buffer_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_buffer,gtk_text_view_get_buffer_db);
extern gboolean gtk_icon_theme_has_icon_db(GtkIconTheme *, const char *);
CheckInterfacedef(gtk_icon_theme_has_icon,gtk_icon_theme_has_icon_db);
extern void gtk_label_set_selectable_db(GtkLabel *, gboolean);
CheckInterfacedef(gtk_label_set_selectable,gtk_label_set_selectable_db);
extern gboolean gtk_file_chooser_set_current_folder_uri_db(GtkFileChooser *, const gchar *);
CheckInterfacedef(gtk_file_chooser_set_current_folder_uri,gtk_file_chooser_set_current_folder_uri_db);
extern gdouble gtk_label_get_angle_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_angle,gtk_label_get_angle_db);
extern GtkSettings * gtk_widget_get_settings_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_settings,gtk_widget_get_settings_db);
extern GSList * gtk_text_iter_get_tags_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_tags,gtk_text_iter_get_tags_db);
extern void gtk_tree_view_column_add_attribute_db(GtkTreeViewColumn *, GtkCellRenderer *, const gchar *, gint);
CheckInterfacedef(gtk_tree_view_column_add_attribute,gtk_tree_view_column_add_attribute_db);
extern void gtk_menu_popdown_db(GtkMenu *);
CheckInterfacedef(gtk_menu_popdown,gtk_menu_popdown_db);
extern void gtk_tree_model_sort_reset_default_sort_func_db(GtkTreeModelSort *);
CheckInterfacedef(gtk_tree_model_sort_reset_default_sort_func,gtk_tree_model_sort_reset_default_sort_func_db);
extern void gtk_tooltips_enable_db(GtkTooltips *);
CheckInterfacedef(gtk_tooltips_enable,gtk_tooltips_enable_db);
extern void gtk_expander_set_spacing_db(GtkExpander *, gint);
CheckInterfacedef(gtk_expander_set_spacing,gtk_expander_set_spacing_db);
extern gint gtk_entry_layout_index_to_text_index_db(GtkEntry *, gint);
CheckInterfacedef(gtk_entry_layout_index_to_text_index,gtk_entry_layout_index_to_text_index_db);
extern gdouble gtk_progress_bar_get_pulse_step_db(GtkProgressBar *);
CheckInterfacedef(gtk_progress_bar_get_pulse_step,gtk_progress_bar_get_pulse_step_db);
extern gboolean gtk_text_iter_backward_visible_word_start_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_backward_visible_word_start,gtk_text_iter_backward_visible_word_start_db);
extern void gtk_expander_set_label_db(GtkExpander *, const gchar *);
CheckInterfacedef(gtk_expander_set_label,gtk_expander_set_label_db);
extern void gtk_text_buffer_get_iter_at_line_index_db(GtkTextBuffer *, GtkTextIter *, gint, gint);
CheckInterfacedef(gtk_text_buffer_get_iter_at_line_index,gtk_text_buffer_get_iter_at_line_index_db);
extern guint gtk_ui_manager_add_ui_from_string_db(GtkUIManager *, const gchar *, gssize, GError * *);
CheckInterfacedef(gtk_ui_manager_add_ui_from_string,gtk_ui_manager_add_ui_from_string_db);
extern gboolean gtk_icon_info_get_embedded_rect_db(GtkIconInfo *, GdkRectangle *);
CheckInterfacedef(gtk_icon_info_get_embedded_rect,gtk_icon_info_get_embedded_rect_db);
extern void gtk_widget_queue_resize_db(GtkWidget *);
CheckInterfacedef(gtk_widget_queue_resize,gtk_widget_queue_resize_db);
extern GType gtk_tree_path_get_type_db(void);
CheckInterfacedef(gtk_tree_path_get_type,gtk_tree_path_get_type_db);
extern void gtk_notebook_set_tab_label_text_db(GtkNotebook *, GtkWidget *, const gchar *);
CheckInterfacedef(gtk_notebook_set_tab_label_text,gtk_notebook_set_tab_label_text_db);
extern GtkWidget * gtk_dialog_new_db(void);
CheckInterfacedef(gtk_dialog_new,gtk_dialog_new_db);
extern GtkIconSize gtk_toolbar_get_icon_size_db(GtkToolbar *);
CheckInterfacedef(gtk_toolbar_get_icon_size,gtk_toolbar_get_icon_size_db);
extern void gtk_widget_hide_db(GtkWidget *);
CheckInterfacedef(gtk_widget_hide,gtk_widget_hide_db);
extern GtkIconSet * gtk_icon_factory_lookup_default_db(const gchar *);
CheckInterfacedef(gtk_icon_factory_lookup_default,gtk_icon_factory_lookup_default_db);
extern GtkWidget * gtk_tree_view_new_db(void);
CheckInterfacedef(gtk_tree_view_new,gtk_tree_view_new_db);
extern gboolean gtk_text_iter_forward_visible_cursor_position_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_forward_visible_cursor_position,gtk_text_iter_forward_visible_cursor_position_db);
extern void gtk_paint_layout_db(GtkStyle *, GdkWindow *, GtkStateType, gboolean, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, PangoLayout *);
CheckInterfacedef(gtk_paint_layout,gtk_paint_layout_db);
extern gboolean gtk_button_get_use_stock_db(GtkButton *);
CheckInterfacedef(gtk_button_get_use_stock,gtk_button_get_use_stock_db);
extern void gtk_list_store_clear_db(GtkListStore *);
CheckInterfacedef(gtk_list_store_clear,gtk_list_store_clear_db);
extern void gtk_widget_set_app_paintable_db(GtkWidget *, gboolean);
CheckInterfacedef(gtk_widget_set_app_paintable,gtk_widget_set_app_paintable_db);
extern void gtk_gc_release_db(GdkGC *);
CheckInterfacedef(gtk_gc_release,gtk_gc_release_db);
extern void gtk_text_view_get_iter_at_location_db(GtkTextView *, GtkTextIter *, gint, gint);
CheckInterfacedef(gtk_text_view_get_iter_at_location,gtk_text_view_get_iter_at_location_db);
extern gboolean gtk_text_view_backward_display_line_start_db(GtkTextView *, GtkTextIter *);
CheckInterfacedef(gtk_text_view_backward_display_line_start,gtk_text_view_backward_display_line_start_db);
extern void gtk_text_mark_set_visible_db(GtkTextMark *, gboolean);
CheckInterfacedef(gtk_text_mark_set_visible,gtk_text_mark_set_visible_db);
extern gint gtk_file_chooser_button_get_width_chars_db(GtkFileChooserButton *);
CheckInterfacedef(gtk_file_chooser_button_get_width_chars,gtk_file_chooser_button_get_width_chars_db);
extern GType gtk_anchor_type_get_type_db(void);
CheckInterfacedef(gtk_anchor_type_get_type,gtk_anchor_type_get_type_db);
extern gboolean gtk_tree_view_get_reorderable_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_reorderable,gtk_tree_view_get_reorderable_db);
extern GType gtk_hruler_get_type_db(void);
CheckInterfacedef(gtk_hruler_get_type,gtk_hruler_get_type_db);
extern void gtk_icon_source_set_icon_name_db(GtkIconSource *, const gchar *);
CheckInterfacedef(gtk_icon_source_set_icon_name,gtk_icon_source_set_icon_name_db);
extern gboolean gtk_init_with_args_db(int *, char * * *, char *, GOptionEntry *, char *, GError * *);
CheckInterfacedef(gtk_init_with_args,gtk_init_with_args_db);
extern void gtk_cell_renderer_toggle_set_radio_db(GtkCellRendererToggle *, gboolean);
CheckInterfacedef(gtk_cell_renderer_toggle_set_radio,gtk_cell_renderer_toggle_set_radio_db);
extern void gtk_window_set_destroy_with_parent_db(GtkWindow *, gboolean);
CheckInterfacedef(gtk_window_set_destroy_with_parent,gtk_window_set_destroy_with_parent_db);
extern gboolean gtk_entry_get_visibility_db(GtkEntry *);
CheckInterfacedef(gtk_entry_get_visibility,gtk_entry_get_visibility_db);
extern GtkTreePath * gtk_tree_path_new_from_indices_db(gint, ...);
CheckInterfacedef(gtk_tree_path_new_from_indices,gtk_tree_path_new_from_indices_db);
extern PangoEllipsizeMode gtk_progress_bar_get_ellipsize_db(GtkProgressBar *);
CheckInterfacedef(gtk_progress_bar_get_ellipsize,gtk_progress_bar_get_ellipsize_db);
extern void gtk_list_store_insert_with_values_db(GtkListStore *, GtkTreeIter *, gint, ...);
CheckInterfacedef(gtk_list_store_insert_with_values,gtk_list_store_insert_with_values_db);
extern void gtk_color_button_set_color_db(GtkColorButton *, const GdkColor *);
CheckInterfacedef(gtk_color_button_set_color,gtk_color_button_set_color_db);
extern gboolean gtk_tree_path_is_ancestor_db(GtkTreePath *, GtkTreePath *);
CheckInterfacedef(gtk_tree_path_is_ancestor,gtk_tree_path_is_ancestor_db);
extern guint gtk_table_get_default_row_spacing_db(GtkTable *);
CheckInterfacedef(gtk_table_get_default_row_spacing,gtk_table_get_default_row_spacing_db);
extern GtkWidget * gtk_entry_completion_get_entry_db(GtkEntryCompletion *);
CheckInterfacedef(gtk_entry_completion_get_entry,gtk_entry_completion_get_entry_db);
extern GType gtk_progress_bar_get_type_db(void);
CheckInterfacedef(gtk_progress_bar_get_type,gtk_progress_bar_get_type_db);
extern gunichar gtk_text_iter_get_char_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_char,gtk_text_iter_get_char_db);
extern const gchar * gtk_color_button_get_title_db(GtkColorButton *);
CheckInterfacedef(gtk_color_button_get_title,gtk_color_button_get_title_db);
extern GtkTargetList * gtk_drag_source_get_target_list_db(GtkWidget *);
CheckInterfacedef(gtk_drag_source_get_target_list,gtk_drag_source_get_target_list_db);
extern gboolean gtk_text_iter_ends_tag_db(const GtkTextIter *, GtkTextTag *);
CheckInterfacedef(gtk_text_iter_ends_tag,gtk_text_iter_ends_tag_db);
extern void gtk_cell_layout_clear_db(GtkCellLayout *);
CheckInterfacedef(gtk_cell_layout_clear,gtk_cell_layout_clear_db);
extern gboolean gtk_binding_set_activate_db(GtkBindingSet *, guint, GdkModifierType, GtkObject *);
CheckInterfacedef(gtk_binding_set_activate,gtk_binding_set_activate_db);
extern void gtk_toolbar_set_drop_highlight_item_db(GtkToolbar *, GtkToolItem *, gint);
CheckInterfacedef(gtk_toolbar_set_drop_highlight_item,gtk_toolbar_set_drop_highlight_item_db);
extern void gtk_curve_set_range_db(GtkCurve *, gfloat, gfloat, gfloat, gfloat);
CheckInterfacedef(gtk_curve_set_range,gtk_curve_set_range_db);
extern void gtk_accel_group_unlock_db(GtkAccelGroup *);
CheckInterfacedef(gtk_accel_group_unlock,gtk_accel_group_unlock_db);
extern void gtk_combo_box_remove_text_db(GtkComboBox *, gint);
CheckInterfacedef(gtk_combo_box_remove_text,gtk_combo_box_remove_text_db);
extern GType gtk_message_dialog_get_type_db(void);
CheckInterfacedef(gtk_message_dialog_get_type,gtk_message_dialog_get_type_db);
extern void gtk_button_set_relief_db(GtkButton *, GtkReliefStyle);
CheckInterfacedef(gtk_button_set_relief,gtk_button_set_relief_db);
extern void gtk_file_filter_add_pattern_db(GtkFileFilter *, const gchar *);
CheckInterfacedef(gtk_file_filter_add_pattern,gtk_file_filter_add_pattern_db);
extern void gtk_widget_map_db(GtkWidget *);
CheckInterfacedef(gtk_widget_map,gtk_widget_map_db);
extern void gtk_container_child_get_db(GtkContainer *, GtkWidget *, const gchar *, ...);
CheckInterfacedef(gtk_container_child_get,gtk_container_child_get_db);
extern GType gtk_policy_type_get_type_db(void);
CheckInterfacedef(gtk_policy_type_get_type,gtk_policy_type_get_type_db);
extern void gtk_ui_manager_ensure_update_db(GtkUIManager *);
CheckInterfacedef(gtk_ui_manager_ensure_update,gtk_ui_manager_ensure_update_db);
extern gint gtk_notebook_insert_page_menu_db(GtkNotebook *, GtkWidget *, GtkWidget *, GtkWidget *, gint);
CheckInterfacedef(gtk_notebook_insert_page_menu,gtk_notebook_insert_page_menu_db);
extern gboolean gtk_tree_view_column_cell_get_position_db(GtkTreeViewColumn *, GtkCellRenderer *, gint *, gint *);
CheckInterfacedef(gtk_tree_view_column_cell_get_position,gtk_tree_view_column_cell_get_position_db);
extern gboolean gtk_toolbar_get_show_arrow_db(GtkToolbar *);
CheckInterfacedef(gtk_toolbar_get_show_arrow,gtk_toolbar_get_show_arrow_db);
extern gboolean gtk_cell_view_get_size_of_row_db(GtkCellView *, GtkTreePath *, GtkRequisition *);
CheckInterfacedef(gtk_cell_view_get_size_of_row,gtk_cell_view_get_size_of_row_db);
extern void gtk_curve_get_vector_db(GtkCurve *, int, gfloat *);
CheckInterfacedef(gtk_curve_get_vector,gtk_curve_get_vector_db);
extern void gtk_drag_source_set_icon_pixbuf_db(GtkWidget *, GdkPixbuf *);
CheckInterfacedef(gtk_drag_source_set_icon_pixbuf,gtk_drag_source_set_icon_pixbuf_db);
extern GType gtk_file_filter_get_type_db(void);
CheckInterfacedef(gtk_file_filter_get_type,gtk_file_filter_get_type_db);
extern void gtk_clipboard_set_can_store_db(GtkClipboard *, const GtkTargetEntry *, gint);
CheckInterfacedef(gtk_clipboard_set_can_store,gtk_clipboard_set_can_store_db);
extern void gtk_tree_view_tree_to_widget_coords_db(GtkTreeView *, gint, gint, gint *, gint *);
CheckInterfacedef(gtk_tree_view_tree_to_widget_coords,gtk_tree_view_tree_to_widget_coords_db);
extern void gtk_tree_view_enable_model_drag_dest_db(GtkTreeView *, const GtkTargetEntry *, gint, GdkDragAction);
CheckInterfacedef(gtk_tree_view_enable_model_drag_dest,gtk_tree_view_enable_model_drag_dest_db);
extern void gtk_clipboard_request_image_db(GtkClipboard *, GtkClipboardImageReceivedFunc, gpointer);
CheckInterfacedef(gtk_clipboard_request_image,gtk_clipboard_request_image_db);
extern const gchar * gtk_about_dialog_get_version_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_version,gtk_about_dialog_get_version_db);
extern GtkTreeModel * gtk_combo_box_get_model_db(GtkComboBox *);
CheckInterfacedef(gtk_combo_box_get_model,gtk_combo_box_get_model_db);
extern GtkWidget * gtk_tool_item_retrieve_proxy_menu_item_db(GtkToolItem *);
CheckInterfacedef(gtk_tool_item_retrieve_proxy_menu_item,gtk_tool_item_retrieve_proxy_menu_item_db);
extern void gtk_action_activate_db(GtkAction *);
CheckInterfacedef(gtk_action_activate,gtk_action_activate_db);
extern GtkWidget * gtk_vpaned_new_db(void);
CheckInterfacedef(gtk_vpaned_new,gtk_vpaned_new_db);
extern GType gtk_curve_get_type_db(void);
CheckInterfacedef(gtk_curve_get_type,gtk_curve_get_type_db);
extern const gchar * gtk_label_get_label_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_label,gtk_label_get_label_db);
extern GType gtk_toggle_button_get_type_db(void);
CheckInterfacedef(gtk_toggle_button_get_type,gtk_toggle_button_get_type_db);
extern void gtk_cell_layout_set_attributes_db(GtkCellLayout *, GtkCellRenderer *, ...);
CheckInterfacedef(gtk_cell_layout_set_attributes,gtk_cell_layout_set_attributes_db);
extern void gtk_tree_view_set_cursor_on_cell_db(GtkTreeView *, GtkTreePath *, GtkTreeViewColumn *, GtkCellRenderer *, gboolean);
CheckInterfacedef(gtk_tree_view_set_cursor_on_cell,gtk_tree_view_set_cursor_on_cell_db);
extern GType gtk_file_filter_flags_get_type_db(void);
CheckInterfacedef(gtk_file_filter_flags_get_type,gtk_file_filter_flags_get_type_db);
extern void gtk_tree_model_ref_node_db(GtkTreeModel *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_ref_node,gtk_tree_model_ref_node_db);
extern gchar * gtk_tree_path_to_string_db(GtkTreePath *);
CheckInterfacedef(gtk_tree_path_to_string,gtk_tree_path_to_string_db);
extern gboolean gtk_rc_property_parse_enum_db(const GParamSpec *, const GString *, GValue *);
CheckInterfacedef(gtk_rc_property_parse_enum,gtk_rc_property_parse_enum_db);
extern void gtk_file_chooser_set_use_preview_label_db(GtkFileChooser *, gboolean);
CheckInterfacedef(gtk_file_chooser_set_use_preview_label,gtk_file_chooser_set_use_preview_label_db);
extern GType gtk_icon_size_get_type_db(void);
CheckInterfacedef(gtk_icon_size_get_type,gtk_icon_size_get_type_db);
extern void gtk_statusbar_set_has_resize_grip_db(GtkStatusbar *, gboolean);
CheckInterfacedef(gtk_statusbar_set_has_resize_grip,gtk_statusbar_set_has_resize_grip_db);
extern GtkTreeModel * gtk_entry_completion_get_model_db(GtkEntryCompletion *);
CheckInterfacedef(gtk_entry_completion_get_model,gtk_entry_completion_get_model_db);
extern GtkPositionType gtk_notebook_get_tab_pos_db(GtkNotebook *);
CheckInterfacedef(gtk_notebook_get_tab_pos,gtk_notebook_get_tab_pos_db);
extern GtkTreeViewRowSeparatorFunc gtk_combo_box_get_row_separator_func_db(GtkComboBox *);
CheckInterfacedef(gtk_combo_box_get_row_separator_func,gtk_combo_box_get_row_separator_func_db);
extern void gtk_accel_map_save_db(const gchar *);
CheckInterfacedef(gtk_accel_map_save,gtk_accel_map_save_db);
extern GtkCellRenderer * gtk_cell_renderer_text_new_db(void);
CheckInterfacedef(gtk_cell_renderer_text_new,gtk_cell_renderer_text_new_db);
extern void gtk_menu_set_title_db(GtkMenu *, const gchar *);
CheckInterfacedef(gtk_menu_set_title,gtk_menu_set_title_db);
extern GType gtk_tool_item_get_type_db(void);
CheckInterfacedef(gtk_tool_item_get_type,gtk_tool_item_get_type_db);
extern GdkWindow * gtk_text_view_get_window_db(GtkTextView *, GtkTextWindowType);
CheckInterfacedef(gtk_text_view_get_window,gtk_text_view_get_window_db);
extern void gtk_spin_button_set_update_policy_db(GtkSpinButton *, GtkSpinButtonUpdatePolicy);
CheckInterfacedef(gtk_spin_button_set_update_policy,gtk_spin_button_set_update_policy_db);
extern guint gtk_rc_parse_color_db(GScanner *, GdkColor *);
CheckInterfacedef(gtk_rc_parse_color,gtk_rc_parse_color_db);
extern void gtk_font_selection_dialog_set_preview_text_db(GtkFontSelectionDialog *, const gchar *);
CheckInterfacedef(gtk_font_selection_dialog_set_preview_text,gtk_font_selection_dialog_set_preview_text_db);
extern GtkAdjustment * gtk_scrolled_window_get_vadjustment_db(GtkScrolledWindow *);
CheckInterfacedef(gtk_scrolled_window_get_vadjustment,gtk_scrolled_window_get_vadjustment_db);
extern void gtk_menu_shell_deactivate_db(GtkMenuShell *);
CheckInterfacedef(gtk_menu_shell_deactivate,gtk_menu_shell_deactivate_db);
extern char * gtk_icon_theme_get_example_icon_name_db(GtkIconTheme *);
CheckInterfacedef(gtk_icon_theme_get_example_icon_name,gtk_icon_theme_get_example_icon_name_db);
extern gint gtk_text_view_get_pixels_below_lines_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_pixels_below_lines,gtk_text_view_get_pixels_below_lines_db);
extern GType gtk_path_priority_type_get_type_db(void);
CheckInterfacedef(gtk_path_priority_type_get_type,gtk_path_priority_type_get_type_db);
extern void gtk_window_set_accept_focus_db(GtkWindow *, gboolean);
CheckInterfacedef(gtk_window_set_accept_focus,gtk_window_set_accept_focus_db);
extern void gtk_text_buffer_get_iter_at_offset_db(GtkTextBuffer *, GtkTextIter *, gint);
CheckInterfacedef(gtk_text_buffer_get_iter_at_offset,gtk_text_buffer_get_iter_at_offset_db);
extern void gtk_statusbar_remove_db(GtkStatusbar *, guint, guint);
CheckInterfacedef(gtk_statusbar_remove,gtk_statusbar_remove_db);
extern gboolean gtk_menu_item_get_right_justified_db(GtkMenuItem *);
CheckInterfacedef(gtk_menu_item_get_right_justified,gtk_menu_item_get_right_justified_db);
extern gboolean gtk_separator_tool_item_get_draw_db(GtkSeparatorToolItem *);
CheckInterfacedef(gtk_separator_tool_item_get_draw,gtk_separator_tool_item_get_draw_db);
extern GtkWidget * gtk_calendar_new_db(void);
CheckInterfacedef(gtk_calendar_new,gtk_calendar_new_db);
extern void gtk_entry_completion_set_model_db(GtkEntryCompletion *, GtkTreeModel *);
CheckInterfacedef(gtk_entry_completion_set_model,gtk_entry_completion_set_model_db);
extern void gtk_text_buffer_place_cursor_db(GtkTextBuffer *, const GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_place_cursor,gtk_text_buffer_place_cursor_db);
extern void gtk_list_store_insert_db(GtkListStore *, GtkTreeIter *, gint);
CheckInterfacedef(gtk_list_store_insert,gtk_list_store_insert_db);
extern gboolean gtk_events_pending_db(void);
CheckInterfacedef(gtk_events_pending,gtk_events_pending_db);
extern GtkCellEditable * gtk_cell_renderer_start_editing_db(GtkCellRenderer *, GdkEvent *, GtkWidget *, const gchar *, GdkRectangle *, GdkRectangle *, GtkCellRendererState);
CheckInterfacedef(gtk_cell_renderer_start_editing,gtk_cell_renderer_start_editing_db);
extern void gtk_cell_editable_remove_widget_db(GtkCellEditable *);
CheckInterfacedef(gtk_cell_editable_remove_widget,gtk_cell_editable_remove_widget_db);
extern GList * gtk_widget_list_accel_closures_db(GtkWidget *);
CheckInterfacedef(gtk_widget_list_accel_closures,gtk_widget_list_accel_closures_db);
extern gint * gtk_icon_theme_get_icon_sizes_db(GtkIconTheme *, const char *);
CheckInterfacedef(gtk_icon_theme_get_icon_sizes,gtk_icon_theme_get_icon_sizes_db);
extern void gtk_action_group_add_actions_full_db(GtkActionGroup *, const GtkActionEntry *, guint, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_action_group_add_actions_full,gtk_action_group_add_actions_full_db);
extern void gtk_spin_button_set_adjustment_db(GtkSpinButton *, GtkAdjustment *);
CheckInterfacedef(gtk_spin_button_set_adjustment,gtk_spin_button_set_adjustment_db);
extern void gtk_tree_model_sort_convert_child_iter_to_iter_db(GtkTreeModelSort *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_sort_convert_child_iter_to_iter,gtk_tree_model_sort_convert_child_iter_to_iter_db);
extern GtkWidget * gtk_image_menu_item_get_image_db(GtkImageMenuItem *);
CheckInterfacedef(gtk_image_menu_item_get_image,gtk_image_menu_item_get_image_db);
extern void gtk_main_quit_db(void);
CheckInterfacedef(gtk_main_quit,gtk_main_quit_db);
extern void gtk_widget_size_request_db(GtkWidget *, GtkRequisition *);
CheckInterfacedef(gtk_widget_size_request,gtk_widget_size_request_db);
extern void gtk_window_set_default_icon_list_db(GList *);
CheckInterfacedef(gtk_window_set_default_icon_list,gtk_window_set_default_icon_list_db);
extern void gtk_widget_push_composite_child_db(void);
CheckInterfacedef(gtk_widget_push_composite_child,gtk_widget_push_composite_child_db);
extern void gtk_paned_add1_db(GtkPaned *, GtkWidget *);
CheckInterfacedef(gtk_paned_add1,gtk_paned_add1_db);
extern gboolean gtk_selection_data_get_targets_db(GtkSelectionData *, GdkAtom * *, gint *);
CheckInterfacedef(gtk_selection_data_get_targets,gtk_selection_data_get_targets_db);
extern GtkTextAttributes * gtk_text_view_get_default_attributes_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_default_attributes,gtk_text_view_get_default_attributes_db);
extern GtkTreeModel * gtk_tree_model_sort_new_with_model_db(GtkTreeModel *);
CheckInterfacedef(gtk_tree_model_sort_new_with_model,gtk_tree_model_sort_new_with_model_db);
extern GSList * gtk_radio_button_get_group_db(GtkRadioButton *);
CheckInterfacedef(gtk_radio_button_get_group,gtk_radio_button_get_group_db);
extern GType gtk_sort_type_get_type_db(void);
CheckInterfacedef(gtk_sort_type_get_type,gtk_sort_type_get_type_db);
extern gboolean gtk_tool_item_get_use_drag_window_db(GtkToolItem *);
CheckInterfacedef(gtk_tool_item_get_use_drag_window,gtk_tool_item_get_use_drag_window_db);
extern gint gtk_notebook_prepend_page_menu_db(GtkNotebook *, GtkWidget *, GtkWidget *, GtkWidget *);
CheckInterfacedef(gtk_notebook_prepend_page_menu,gtk_notebook_prepend_page_menu_db);
extern GType gtk_tree_model_get_type_db(void);
CheckInterfacedef(gtk_tree_model_get_type,gtk_tree_model_get_type_db);
extern void gtk_check_menu_item_set_inconsistent_db(GtkCheckMenuItem *, gboolean);
CheckInterfacedef(gtk_check_menu_item_set_inconsistent,gtk_check_menu_item_set_inconsistent_db);
extern GType gtk_tree_drag_dest_get_type_db(void);
CheckInterfacedef(gtk_tree_drag_dest_get_type,gtk_tree_drag_dest_get_type_db);
extern GtkWidget * gtk_hscale_new_db(GtkAdjustment *);
CheckInterfacedef(gtk_hscale_new,gtk_hscale_new_db);
extern void gtk_tree_view_column_set_min_width_db(GtkTreeViewColumn *, gint);
CheckInterfacedef(gtk_tree_view_column_set_min_width,gtk_tree_view_column_set_min_width_db);
extern GtkAdjustment * gtk_scrolled_window_get_hadjustment_db(GtkScrolledWindow *);
CheckInterfacedef(gtk_scrolled_window_get_hadjustment,gtk_scrolled_window_get_hadjustment_db);
extern gboolean gtk_text_buffer_backspace_db(GtkTextBuffer *, GtkTextIter *, gboolean, gboolean);
CheckInterfacedef(gtk_text_buffer_backspace,gtk_text_buffer_backspace_db);
extern void gtk_tool_item_set_expand_db(GtkToolItem *, gboolean);
CheckInterfacedef(gtk_tool_item_set_expand,gtk_tool_item_set_expand_db);
extern GType gtk_icon_info_get_type_db(void);
CheckInterfacedef(gtk_icon_info_get_type,gtk_icon_info_get_type_db);
extern gint gtk_tree_model_iter_n_children_db(GtkTreeModel *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_iter_n_children,gtk_tree_model_iter_n_children_db);
extern GtkReliefStyle gtk_toolbar_get_relief_style_db(GtkToolbar *);
CheckInterfacedef(gtk_toolbar_get_relief_style,gtk_toolbar_get_relief_style_db);
extern void gtk_button_set_image_db(GtkButton *, GtkWidget *);
CheckInterfacedef(gtk_button_set_image,gtk_button_set_image_db);
extern void gtk_paint_shadow_gap_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, gchar *, gint, gint, gint, gint, GtkPositionType, gint, gint);
CheckInterfacedef(gtk_paint_shadow_gap,gtk_paint_shadow_gap_db);
extern void gtk_window_set_modal_db(GtkWindow *, gboolean);
CheckInterfacedef(gtk_window_set_modal,gtk_window_set_modal_db);
extern void gtk_spin_button_get_range_db(GtkSpinButton *, gdouble *, gdouble *);
CheckInterfacedef(gtk_spin_button_get_range,gtk_spin_button_get_range_db);
extern gint gtk_image_get_pixel_size_db(GtkImage *);
CheckInterfacedef(gtk_image_get_pixel_size,gtk_image_get_pixel_size_db);
extern void gtk_text_view_get_iter_location_db(GtkTextView *, const GtkTextIter *, GdkRectangle *);
CheckInterfacedef(gtk_text_view_get_iter_location,gtk_text_view_get_iter_location_db);
extern void gtk_tree_view_row_activated_db(GtkTreeView *, GtkTreePath *, GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_row_activated,gtk_tree_view_row_activated_db);
extern void gtk_container_set_focus_child_db(GtkContainer *, GtkWidget *);
CheckInterfacedef(gtk_container_set_focus_child,gtk_container_set_focus_child_db);
extern gboolean gtk_accel_groups_activate_db(GObject *, guint, GdkModifierType);
CheckInterfacedef(gtk_accel_groups_activate,gtk_accel_groups_activate_db);
extern GtkTextIter * gtk_text_iter_copy_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_copy,gtk_text_iter_copy_db);
extern gboolean gtk_action_is_sensitive_db(GtkAction *);
CheckInterfacedef(gtk_action_is_sensitive,gtk_action_is_sensitive_db);
extern void gtk_tree_store_set_valist_db(GtkTreeStore *, GtkTreeIter *, va_list);
CheckInterfacedef(gtk_tree_store_set_valist,gtk_tree_store_set_valist_db);
extern void gtk_radio_button_set_group_db(GtkRadioButton *, GSList *);
CheckInterfacedef(gtk_radio_button_set_group,gtk_radio_button_set_group_db);
extern void gtk_alignment_get_padding_db(GtkAlignment *, guint *, guint *, guint *, guint *);
CheckInterfacedef(gtk_alignment_get_padding,gtk_alignment_get_padding_db);
extern gboolean gtk_text_iter_starts_word_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_starts_word,gtk_text_iter_starts_word_db);
extern void gtk_calendar_clear_marks_db(GtkCalendar *);
CheckInterfacedef(gtk_calendar_clear_marks,gtk_calendar_clear_marks_db);
extern GType gtk_box_get_type_db(void);
CheckInterfacedef(gtk_box_get_type,gtk_box_get_type_db);
extern void gtk_widget_path_db(GtkWidget *, guint *, gchar * *, gchar * *);
CheckInterfacedef(gtk_widget_path,gtk_widget_path_db);
extern gboolean gtk_menu_get_tearoff_state_db(GtkMenu *);
CheckInterfacedef(gtk_menu_get_tearoff_state,gtk_menu_get_tearoff_state_db);
extern void gtk_window_stick_db(GtkWindow *);
CheckInterfacedef(gtk_window_stick,gtk_window_stick_db);
extern gint gtk_widget_get_events_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_events,gtk_widget_get_events_db);
extern GType gtk_cell_renderer_state_get_type_db(void);
CheckInterfacedef(gtk_cell_renderer_state_get_type,gtk_cell_renderer_state_get_type_db);
extern void gtk_text_attributes_unref_db(GtkTextAttributes *);
CheckInterfacedef(gtk_text_attributes_unref,gtk_text_attributes_unref_db);
extern gboolean gtk_tree_view_column_get_resizable_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_resizable,gtk_tree_view_column_get_resizable_db);
extern void gtk_entry_completion_insert_action_markup_db(GtkEntryCompletion *, gint, const gchar *);
CheckInterfacedef(gtk_entry_completion_insert_action_markup,gtk_entry_completion_insert_action_markup_db);
extern GType gtk_ruler_get_type_db(void);
CheckInterfacedef(gtk_ruler_get_type,gtk_ruler_get_type_db);
extern GType gtk_wrap_mode_get_type_db(void);
CheckInterfacedef(gtk_wrap_mode_get_type,gtk_wrap_mode_get_type_db);
extern GType gtk_paned_get_type_db(void);
CheckInterfacedef(gtk_paned_get_type,gtk_paned_get_type_db);
extern void gtk_text_view_set_cursor_visible_db(GtkTextView *, gboolean);
CheckInterfacedef(gtk_text_view_set_cursor_visible,gtk_text_view_set_cursor_visible_db);
extern gboolean gtk_target_list_find_db(GtkTargetList *, GdkAtom, guint *);
CheckInterfacedef(gtk_target_list_find,gtk_target_list_find_db);
extern GtkWidget * gtk_cell_view_new_with_text_db(const gchar *);
CheckInterfacedef(gtk_cell_view_new_with_text,gtk_cell_view_new_with_text_db);
extern void gtk_editable_select_region_db(GtkEditable *, gint, gint);
CheckInterfacedef(gtk_editable_select_region,gtk_editable_select_region_db);
extern gchar * gtk_clipboard_wait_for_text_db(GtkClipboard *);
CheckInterfacedef(gtk_clipboard_wait_for_text,gtk_clipboard_wait_for_text_db);
extern gboolean gtk_color_selection_get_has_palette_db(GtkColorSelection *);
CheckInterfacedef(gtk_color_selection_get_has_palette,gtk_color_selection_get_has_palette_db);
extern GType gtk_text_search_flags_get_type_db(void);
CheckInterfacedef(gtk_text_search_flags_get_type,gtk_text_search_flags_get_type_db);
extern gint gtk_tree_view_insert_column_with_data_func_db(GtkTreeView *, gint, const gchar *, GtkCellRenderer *, GtkTreeCellDataFunc, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_tree_view_insert_column_with_data_func,gtk_tree_view_insert_column_with_data_func_db);
extern GtkTextTagTable * gtk_text_tag_table_new_db(void);
CheckInterfacedef(gtk_text_tag_table_new,gtk_text_tag_table_new_db);
extern gboolean gtk_notebook_get_show_border_db(GtkNotebook *);
CheckInterfacedef(gtk_notebook_get_show_border,gtk_notebook_get_show_border_db);
extern void gtk_container_class_install_child_property_db(GtkContainerClass *, guint, GParamSpec *);
CheckInterfacedef(gtk_container_class_install_child_property,gtk_container_class_install_child_property_db);
extern void gtk_font_button_set_show_style_db(GtkFontButton *, gboolean);
CheckInterfacedef(gtk_font_button_set_show_style,gtk_font_button_set_show_style_db);
extern void gtk_cell_layout_pack_start_db(GtkCellLayout *, GtkCellRenderer *, gboolean);
CheckInterfacedef(gtk_cell_layout_pack_start,gtk_cell_layout_pack_start_db);
extern GtkAction * gtk_action_group_get_action_db(GtkActionGroup *, const gchar *);
CheckInterfacedef(gtk_action_group_get_action,gtk_action_group_get_action_db);
extern GtkWidget * gtk_color_selection_dialog_new_db(const gchar *);
CheckInterfacedef(gtk_color_selection_dialog_new,gtk_color_selection_dialog_new_db);
extern GtkEntryCompletion * gtk_entry_get_completion_db(GtkEntry *);
CheckInterfacedef(gtk_entry_get_completion,gtk_entry_get_completion_db);
extern GtkToggleAction * gtk_toggle_action_new_db(const gchar *, const gchar *, const gchar *, const gchar *);
CheckInterfacedef(gtk_toggle_action_new,gtk_toggle_action_new_db);
extern void gtk_file_chooser_set_filter_db(GtkFileChooser *, GtkFileFilter *);
CheckInterfacedef(gtk_file_chooser_set_filter,gtk_file_chooser_set_filter_db);
extern gint gtk_text_iter_get_line_offset_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_line_offset,gtk_text_iter_get_line_offset_db);
extern void gtk_text_view_set_indent_db(GtkTextView *, gint);
CheckInterfacedef(gtk_text_view_set_indent,gtk_text_view_set_indent_db);
extern void gtk_widget_set_style_db(GtkWidget *, GtkStyle *);
CheckInterfacedef(gtk_widget_set_style,gtk_widget_set_style_db);
extern void gtk_toolbar_unset_style_db(GtkToolbar *);
CheckInterfacedef(gtk_toolbar_unset_style,gtk_toolbar_unset_style_db);
extern GType gtk_hbutton_box_get_type_db(void);
CheckInterfacedef(gtk_hbutton_box_get_type,gtk_hbutton_box_get_type_db);
extern GtkWidget * gtk_file_chooser_button_new_db(const gchar *, GtkFileChooserAction);
CheckInterfacedef(gtk_file_chooser_button_new,gtk_file_chooser_button_new_db);
extern void gtk_combo_box_popup_db(GtkComboBox *);
CheckInterfacedef(gtk_combo_box_popup,gtk_combo_box_popup_db);
extern void gtk_border_free_db(GtkBorder *);
CheckInterfacedef(gtk_border_free,gtk_border_free_db);
extern void gtk_message_dialog_format_secondary_text_db(GtkMessageDialog *, const gchar *, ...);
CheckInterfacedef(gtk_message_dialog_format_secondary_text,gtk_message_dialog_format_secondary_text_db);
extern GtkListStore * gtk_list_store_new_db(gint, ...);
CheckInterfacedef(gtk_list_store_new,gtk_list_store_new_db);
extern void gtk_rc_style_ref_db(GtkRcStyle *);
CheckInterfacedef(gtk_rc_style_ref,gtk_rc_style_ref_db);
extern guint32 gtk_get_current_event_time_db(void);
CheckInterfacedef(gtk_get_current_event_time,gtk_get_current_event_time_db);
extern void gtk_container_unset_focus_chain_db(GtkContainer *);
CheckInterfacedef(gtk_container_unset_focus_chain,gtk_container_unset_focus_chain_db);
extern void gtk_text_iter_set_offset_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_set_offset,gtk_text_iter_set_offset_db);
extern void gtk_container_set_border_width_db(GtkContainer *, guint);
CheckInterfacedef(gtk_container_set_border_width,gtk_container_set_border_width_db);
extern void gtk_selection_remove_all_db(GtkWidget *);
CheckInterfacedef(gtk_selection_remove_all,gtk_selection_remove_all_db);
extern GtkReliefStyle gtk_tool_item_get_relief_style_db(GtkToolItem *);
CheckInterfacedef(gtk_tool_item_get_relief_style,gtk_tool_item_get_relief_style_db);
extern void gtk_toggle_button_toggled_db(GtkToggleButton *);
CheckInterfacedef(gtk_toggle_button_toggled,gtk_toggle_button_toggled_db);
extern void gtk_adjustment_value_changed_db(GtkAdjustment *);
CheckInterfacedef(gtk_adjustment_value_changed,gtk_adjustment_value_changed_db);
extern gboolean gtk_widget_hide_on_delete_db(GtkWidget *);
CheckInterfacedef(gtk_widget_hide_on_delete,gtk_widget_hide_on_delete_db);
extern GType gtk_container_child_type_db(GtkContainer *);
CheckInterfacedef(gtk_container_child_type,gtk_container_child_type_db);
extern void gtk_ruler_set_range_db(GtkRuler *, gdouble, gdouble, gdouble, gdouble);
CheckInterfacedef(gtk_ruler_set_range,gtk_ruler_set_range_db);
extern PangoLayout * gtk_entry_get_layout_db(GtkEntry *);
CheckInterfacedef(gtk_entry_get_layout,gtk_entry_get_layout_db);
extern void gtk_tree_sortable_sort_column_changed_db(GtkTreeSortable *);
CheckInterfacedef(gtk_tree_sortable_sort_column_changed,gtk_tree_sortable_sort_column_changed_db);
extern void gtk_menu_shell_cancel_db(GtkMenuShell *);
CheckInterfacedef(gtk_menu_shell_cancel,gtk_menu_shell_cancel_db);
extern guint gtk_table_get_col_spacing_db(GtkTable *, guint);
CheckInterfacedef(gtk_table_get_col_spacing,gtk_table_get_col_spacing_db);
extern const gchar * gtk_button_get_label_db(GtkButton *);
CheckInterfacedef(gtk_button_get_label,gtk_button_get_label_db);
extern GList * gtk_ui_manager_get_action_groups_db(GtkUIManager *);
CheckInterfacedef(gtk_ui_manager_get_action_groups,gtk_ui_manager_get_action_groups_db);
extern void gtk_action_group_set_sensitive_db(GtkActionGroup *, gboolean);
CheckInterfacedef(gtk_action_group_set_sensitive,gtk_action_group_set_sensitive_db);
extern GtkWidget * gtk_check_button_new_with_mnemonic_db(const gchar *);
CheckInterfacedef(gtk_check_button_new_with_mnemonic,gtk_check_button_new_with_mnemonic_db);
extern void gtk_widget_unparent_db(GtkWidget *);
CheckInterfacedef(gtk_widget_unparent,gtk_widget_unparent_db);
extern void gtk_widget_add_accelerator_db(GtkWidget *, const gchar *, GtkAccelGroup *, guint, GdkModifierType, GtkAccelFlags);
CheckInterfacedef(gtk_widget_add_accelerator,gtk_widget_add_accelerator_db);
extern guint gtk_ui_manager_new_merge_id_db(GtkUIManager *);
CheckInterfacedef(gtk_ui_manager_new_merge_id,gtk_ui_manager_new_merge_id_db);
extern gboolean gtk_text_iter_backward_find_char_db(GtkTextIter *, GtkTextCharPredicate, gpointer, const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_backward_find_char,gtk_text_iter_backward_find_char_db);
extern gboolean gtk_file_chooser_get_select_multiple_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_select_multiple,gtk_file_chooser_get_select_multiple_db);
extern gboolean gtk_event_box_get_above_child_db(GtkEventBox *);
CheckInterfacedef(gtk_event_box_get_above_child,gtk_event_box_get_above_child_db);
extern void gtk_widget_queue_draw_db(GtkWidget *);
CheckInterfacedef(gtk_widget_queue_draw,gtk_widget_queue_draw_db);
extern gboolean gtk_text_buffer_insert_interactive_at_cursor_db(GtkTextBuffer *, const gchar *, gint, gboolean);
CheckInterfacedef(gtk_text_buffer_insert_interactive_at_cursor,gtk_text_buffer_insert_interactive_at_cursor_db);
extern gboolean gtk_selection_data_targets_include_image_db(GtkSelectionData *, gboolean);
CheckInterfacedef(gtk_selection_data_targets_include_image,gtk_selection_data_targets_include_image_db);
extern GtkWidget * gtk_separator_menu_item_new_db(void);
CheckInterfacedef(gtk_separator_menu_item_new,gtk_separator_menu_item_new_db);
extern gboolean gtk_widget_mnemonic_activate_db(GtkWidget *, gboolean);
CheckInterfacedef(gtk_widget_mnemonic_activate,gtk_widget_mnemonic_activate_db);
extern void gtk_tree_selection_select_range_db(GtkTreeSelection *, GtkTreePath *, GtkTreePath *);
CheckInterfacedef(gtk_tree_selection_select_range,gtk_tree_selection_select_range_db);
extern void gtk_file_chooser_unselect_uri_db(GtkFileChooser *, const char *);
CheckInterfacedef(gtk_file_chooser_unselect_uri,gtk_file_chooser_unselect_uri_db);
extern void gtk_style_detach_db(GtkStyle *);
CheckInterfacedef(gtk_style_detach,gtk_style_detach_db);
extern gboolean gtk_accel_group_disconnect_key_db(GtkAccelGroup *, guint, GdkModifierType);
CheckInterfacedef(gtk_accel_group_disconnect_key,gtk_accel_group_disconnect_key_db);
extern gboolean gtk_notebook_get_show_tabs_db(GtkNotebook *);
CheckInterfacedef(gtk_notebook_get_show_tabs,gtk_notebook_get_show_tabs_db);
extern void gtk_file_chooser_set_preview_widget_active_db(GtkFileChooser *, gboolean);
CheckInterfacedef(gtk_file_chooser_set_preview_widget_active,gtk_file_chooser_set_preview_widget_active_db);
extern GList * gtk_window_get_default_icon_list_db(void);
CheckInterfacedef(gtk_window_get_default_icon_list,gtk_window_get_default_icon_list_db);
extern gboolean gtk_text_iter_backward_lines_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_backward_lines,gtk_text_iter_backward_lines_db);
extern void gtk_notebook_popup_disable_db(GtkNotebook *);
CheckInterfacedef(gtk_notebook_popup_disable,gtk_notebook_popup_disable_db);
extern GtkTreeModel * gtk_tree_model_filter_get_model_db(GtkTreeModelFilter *);
CheckInterfacedef(gtk_tree_model_filter_get_model,gtk_tree_model_filter_get_model_db);
extern gdouble gtk_adjustment_get_value_db(GtkAdjustment *);
CheckInterfacedef(gtk_adjustment_get_value,gtk_adjustment_get_value_db);
extern GtkWidget * gtk_curve_new_db(void);
CheckInterfacedef(gtk_curve_new,gtk_curve_new_db);
extern void gtk_widget_get_child_requisition_db(GtkWidget *, GtkRequisition *);
CheckInterfacedef(gtk_widget_get_child_requisition,gtk_widget_get_child_requisition_db);
extern gchar * gtk_rc_get_im_module_path_db(void);
CheckInterfacedef(gtk_rc_get_im_module_path,gtk_rc_get_im_module_path_db);
extern void gtk_window_set_default_db(GtkWindow *, GtkWidget *);
CheckInterfacedef(gtk_window_set_default,gtk_window_set_default_db);
extern void gtk_entry_set_text_db(GtkEntry *, const gchar *);
CheckInterfacedef(gtk_entry_set_text,gtk_entry_set_text_db);
extern gboolean gtk_true_db(void);
CheckInterfacedef(gtk_true,gtk_true_db);
extern void gtk_box_set_homogeneous_db(GtkBox *, gboolean);
CheckInterfacedef(gtk_box_set_homogeneous,gtk_box_set_homogeneous_db);
extern void gtk_text_buffer_apply_tag_db(GtkTextBuffer *, GtkTextTag *, const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_apply_tag,gtk_text_buffer_apply_tag_db);
extern void gtk_expander_set_use_markup_db(GtkExpander *, gboolean);
CheckInterfacedef(gtk_expander_set_use_markup,gtk_expander_set_use_markup_db);
extern GtkWidget * gtk_tearoff_menu_item_new_db(void);
CheckInterfacedef(gtk_tearoff_menu_item_new,gtk_tearoff_menu_item_new_db);
extern GtkImageType gtk_image_get_storage_type_db(GtkImage *);
CheckInterfacedef(gtk_image_get_storage_type,gtk_image_get_storage_type_db);
extern GType gtk_text_window_type_get_type_db(void);
CheckInterfacedef(gtk_text_window_type_get_type,gtk_text_window_type_get_type_db);
extern void gtk_text_buffer_remove_selection_clipboard_db(GtkTextBuffer *, GtkClipboard *);
CheckInterfacedef(gtk_text_buffer_remove_selection_clipboard,gtk_text_buffer_remove_selection_clipboard_db);
extern gboolean gtk_ui_manager_get_add_tearoffs_db(GtkUIManager *);
CheckInterfacedef(gtk_ui_manager_get_add_tearoffs,gtk_ui_manager_get_add_tearoffs_db);
extern GtkPositionType gtk_handle_box_get_snap_edge_db(GtkHandleBox *);
CheckInterfacedef(gtk_handle_box_get_snap_edge,gtk_handle_box_get_snap_edge_db);
extern void gtk_widget_get_size_request_db(GtkWidget *, gint *, gint *);
CheckInterfacedef(gtk_widget_get_size_request,gtk_widget_get_size_request_db);
extern GType gtk_action_get_type_db(void);
CheckInterfacedef(gtk_action_get_type,gtk_action_get_type_db);
extern gboolean gtk_window_get_accept_focus_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_accept_focus,gtk_window_get_accept_focus_db);
extern void gtk_spin_button_set_digits_db(GtkSpinButton *, guint);
CheckInterfacedef(gtk_spin_button_set_digits,gtk_spin_button_set_digits_db);
extern void gtk_window_group_remove_window_db(GtkWindowGroup *, GtkWindow *);
CheckInterfacedef(gtk_window_group_remove_window,gtk_window_group_remove_window_db);
extern gpointer gtk_type_class_db(GtkType);
CheckInterfacedef(gtk_type_class,gtk_type_class_db);
extern void gtk_color_selection_set_current_color_db(GtkColorSelection *, const GdkColor *);
CheckInterfacedef(gtk_color_selection_set_current_color,gtk_color_selection_set_current_color_db);
extern GtkSpinButtonUpdatePolicy gtk_spin_button_get_update_policy_db(GtkSpinButton *);
CheckInterfacedef(gtk_spin_button_get_update_policy,gtk_spin_button_get_update_policy_db);
extern void gtk_dialog_set_default_response_db(GtkDialog *, gint);
CheckInterfacedef(gtk_dialog_set_default_response,gtk_dialog_set_default_response_db);
extern gboolean gtk_font_button_set_font_name_db(GtkFontButton *, const gchar *);
CheckInterfacedef(gtk_font_button_set_font_name,gtk_font_button_set_font_name_db);
extern void gtk_tree_row_reference_inserted_db(GObject *, GtkTreePath *);
CheckInterfacedef(gtk_tree_row_reference_inserted,gtk_tree_row_reference_inserted_db);
extern const gchar * gtk_tool_button_get_label_db(GtkToolButton *);
CheckInterfacedef(gtk_tool_button_get_label,gtk_tool_button_get_label_db);
extern GtkWidget * gtk_menu_tool_button_get_menu_db(GtkMenuToolButton *);
CheckInterfacedef(gtk_menu_tool_button_get_menu,gtk_menu_tool_button_get_menu_db);
extern void gtk_tree_view_set_headers_visible_db(GtkTreeView *, gboolean);
CheckInterfacedef(gtk_tree_view_set_headers_visible,gtk_tree_view_set_headers_visible_db);
extern GList * gtk_text_child_anchor_get_widgets_db(GtkTextChildAnchor *);
CheckInterfacedef(gtk_text_child_anchor_get_widgets,gtk_text_child_anchor_get_widgets_db);
extern gint gtk_toolbar_get_drop_index_db(GtkToolbar *, gint, gint);
CheckInterfacedef(gtk_toolbar_get_drop_index,gtk_toolbar_get_drop_index_db);
extern void gtk_progress_bar_set_orientation_db(GtkProgressBar *, GtkProgressBarOrientation);
CheckInterfacedef(gtk_progress_bar_set_orientation,gtk_progress_bar_set_orientation_db);
extern void gtk_window_set_geometry_hints_db(GtkWindow *, GtkWidget *, GdkGeometry *, GdkWindowHints);
CheckInterfacedef(gtk_window_set_geometry_hints,gtk_window_set_geometry_hints_db);
extern GType gtk_progress_bar_orientation_get_type_db(void);
CheckInterfacedef(gtk_progress_bar_orientation_get_type,gtk_progress_bar_orientation_get_type_db);
extern GtkReliefStyle gtk_button_get_relief_db(GtkButton *);
CheckInterfacedef(gtk_button_get_relief,gtk_button_get_relief_db);
extern gboolean gtk_bindings_activate_db(GtkObject *, guint, GdkModifierType);
CheckInterfacedef(gtk_bindings_activate,gtk_bindings_activate_db);
extern GType gtk_toolbar_style_get_type_db(void);
CheckInterfacedef(gtk_toolbar_style_get_type,gtk_toolbar_style_get_type_db);
extern void gtk_menu_set_accel_path_db(GtkMenu *, const gchar *);
CheckInterfacedef(gtk_menu_set_accel_path,gtk_menu_set_accel_path_db);
extern void gtk_alignment_set_padding_db(GtkAlignment *, guint, guint, guint, guint);
CheckInterfacedef(gtk_alignment_set_padding,gtk_alignment_set_padding_db);
extern GtkTreeRowReference * gtk_tree_row_reference_copy_db(GtkTreeRowReference *);
CheckInterfacedef(gtk_tree_row_reference_copy,gtk_tree_row_reference_copy_db);
extern GtkToolItem * gtk_radio_tool_button_new_from_widget_db(GtkRadioToolButton *);
CheckInterfacedef(gtk_radio_tool_button_new_from_widget,gtk_radio_tool_button_new_from_widget_db);
extern GType gtk_tree_model_sort_get_type_db(void);
CheckInterfacedef(gtk_tree_model_sort_get_type,gtk_tree_model_sort_get_type_db);
extern GdkWindow * gtk_tree_view_get_bin_window_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_bin_window,gtk_tree_view_get_bin_window_db);
extern GtkToolbarStyle gtk_toolbar_get_style_db(GtkToolbar *);
CheckInterfacedef(gtk_toolbar_get_style,gtk_toolbar_get_style_db);
extern void gtk_size_group_set_mode_db(GtkSizeGroup *, GtkSizeGroupMode);
CheckInterfacedef(gtk_size_group_set_mode,gtk_size_group_set_mode_db);
extern GtkWidget * gtk_dialog_new_with_buttons_db(const gchar *, GtkWindow *, GtkDialogFlags, const gchar *, ...);
CheckInterfacedef(gtk_dialog_new_with_buttons,gtk_dialog_new_with_buttons_db);
extern void gtk_about_dialog_set_name_db(GtkAboutDialog *, const gchar *);
CheckInterfacedef(gtk_about_dialog_set_name,gtk_about_dialog_set_name_db);
extern void gtk_drag_source_add_image_targets_db(GtkWidget *);
CheckInterfacedef(gtk_drag_source_add_image_targets,gtk_drag_source_add_image_targets_db);
extern void gtk_notebook_set_menu_label_db(GtkNotebook *, GtkWidget *, GtkWidget *);
CheckInterfacedef(gtk_notebook_set_menu_label,gtk_notebook_set_menu_label_db);
extern const gchar * gtk_action_group_get_name_db(GtkActionGroup *);
CheckInterfacedef(gtk_action_group_get_name,gtk_action_group_get_name_db);
extern gboolean gtk_text_buffer_insert_interactive_db(GtkTextBuffer *, GtkTextIter *, const gchar *, gint, gboolean);
CheckInterfacedef(gtk_text_buffer_insert_interactive,gtk_text_buffer_insert_interactive_db);
extern void gtk_table_attach_defaults_db(GtkTable *, GtkWidget *, guint, guint, guint, guint);
CheckInterfacedef(gtk_table_attach_defaults,gtk_table_attach_defaults_db);
extern void gtk_notebook_reorder_child_db(GtkNotebook *, GtkWidget *, gint);
CheckInterfacedef(gtk_notebook_reorder_child,gtk_notebook_reorder_child_db);
extern void gtk_icon_source_set_state_db(GtkIconSource *, GtkStateType);
CheckInterfacedef(gtk_icon_source_set_state,gtk_icon_source_set_state_db);
extern GType gtk_tree_model_filter_get_type_db(void);
CheckInterfacedef(gtk_tree_model_filter_get_type,gtk_tree_model_filter_get_type_db);
extern void gtk_window_add_accel_group_db(GtkWindow *, GtkAccelGroup *);
CheckInterfacedef(gtk_window_add_accel_group,gtk_window_add_accel_group_db);
extern void gtk_ruler_draw_ticks_db(GtkRuler *);
CheckInterfacedef(gtk_ruler_draw_ticks,gtk_ruler_draw_ticks_db);
extern GtkIconSize gtk_icon_size_from_name_db(const gchar *);
CheckInterfacedef(gtk_icon_size_from_name,gtk_icon_size_from_name_db);
extern void gtk_combo_box_set_model_db(GtkComboBox *, GtkTreeModel *);
CheckInterfacedef(gtk_combo_box_set_model,gtk_combo_box_set_model_db);
extern GdkPixbuf * gtk_icon_set_render_icon_db(GtkIconSet *, GtkStyle *, GtkTextDirection, GtkStateType, GtkIconSize, GtkWidget *, const char *);
CheckInterfacedef(gtk_icon_set_render_icon,gtk_icon_set_render_icon_db);
extern void gtk_tree_selection_selected_foreach_db(GtkTreeSelection *, GtkTreeSelectionForeachFunc, gpointer);
CheckInterfacedef(gtk_tree_selection_selected_foreach,gtk_tree_selection_selected_foreach_db);
extern GType gtk_cell_layout_get_type_db(void);
CheckInterfacedef(gtk_cell_layout_get_type,gtk_cell_layout_get_type_db);
extern void gtk_text_iter_set_visible_line_offset_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_set_visible_line_offset,gtk_text_iter_set_visible_line_offset_db);
extern gboolean gtk_rc_property_parse_requisition_db(const GParamSpec *, const GString *, GValue *);
CheckInterfacedef(gtk_rc_property_parse_requisition,gtk_rc_property_parse_requisition_db);
extern GType gtk_combo_box_get_type_db(void);
CheckInterfacedef(gtk_combo_box_get_type,gtk_combo_box_get_type_db);
extern GtkFileFilter * gtk_file_filter_new_db(void);
CheckInterfacedef(gtk_file_filter_new,gtk_file_filter_new_db);
extern gdouble gtk_range_get_value_db(GtkRange *);
CheckInterfacedef(gtk_range_get_value,gtk_range_get_value_db);
extern GtkWidget * gtk_event_box_new_db(void);
CheckInterfacedef(gtk_event_box_new,gtk_event_box_new_db);
extern gboolean gtk_list_store_iter_is_valid_db(GtkListStore *, GtkTreeIter *);
CheckInterfacedef(gtk_list_store_iter_is_valid,gtk_list_store_iter_is_valid_db);
extern GtkIconInfo * gtk_icon_theme_lookup_icon_db(GtkIconTheme *, const gchar *, gint, GtkIconLookupFlags);
CheckInterfacedef(gtk_icon_theme_lookup_icon,gtk_icon_theme_lookup_icon_db);
extern GType gtk_tree_model_flags_get_type_db(void);
CheckInterfacedef(gtk_tree_model_flags_get_type,gtk_tree_model_flags_get_type_db);
extern void gtk_draw_insertion_cursor_db(GtkWidget *, GdkDrawable *, GdkRectangle *, GdkRectangle *, gboolean, GtkTextDirection, gboolean);
CheckInterfacedef(gtk_draw_insertion_cursor,gtk_draw_insertion_cursor_db);
extern GtkWindowGroup * gtk_window_group_new_db(void);
CheckInterfacedef(gtk_window_group_new,gtk_window_group_new_db);
extern GtkFileFilter * gtk_file_chooser_get_filter_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_filter,gtk_file_chooser_get_filter_db);
extern void gtk_label_set_use_underline_db(GtkLabel *, gboolean);
CheckInterfacedef(gtk_label_set_use_underline,gtk_label_set_use_underline_db);
extern gboolean gtk_tree_view_column_cell_is_visible_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_cell_is_visible,gtk_tree_view_column_cell_is_visible_db);
extern gint gtk_tree_model_get_n_columns_db(GtkTreeModel *);
CheckInterfacedef(gtk_tree_model_get_n_columns,gtk_tree_model_get_n_columns_db);
extern GtkTreeStore * gtk_tree_store_new_db(gint, ...);
CheckInterfacedef(gtk_tree_store_new,gtk_tree_store_new_db);
extern GType gtk_frame_get_type_db(void);
CheckInterfacedef(gtk_frame_get_type,gtk_frame_get_type_db);
extern gboolean gtk_file_chooser_remove_shortcut_folder_uri_db(GtkFileChooser *, const char *, GError * *);
CheckInterfacedef(gtk_file_chooser_remove_shortcut_folder_uri,gtk_file_chooser_remove_shortcut_folder_uri_db);
extern gboolean gtk_text_iter_backward_sentence_start_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_backward_sentence_start,gtk_text_iter_backward_sentence_start_db);
extern void gtk_text_view_set_wrap_mode_db(GtkTextView *, GtkWrapMode);
CheckInterfacedef(gtk_text_view_set_wrap_mode,gtk_text_view_set_wrap_mode_db);
extern gboolean gtk_accelerator_valid_db(guint, GdkModifierType);
CheckInterfacedef(gtk_accelerator_valid,gtk_accelerator_valid_db);
extern void gtk_text_buffer_end_user_action_db(GtkTextBuffer *);
CheckInterfacedef(gtk_text_buffer_end_user_action,gtk_text_buffer_end_user_action_db);
extern GtkToolItem * gtk_toolbar_get_nth_item_db(GtkToolbar *, gint);
CheckInterfacedef(gtk_toolbar_get_nth_item,gtk_toolbar_get_nth_item_db);
extern gboolean gtk_file_chooser_select_filename_db(GtkFileChooser *, const gchar *);
CheckInterfacedef(gtk_file_chooser_select_filename,gtk_file_chooser_select_filename_db);
extern void gtk_combo_box_set_row_span_column_db(GtkComboBox *, gint);
CheckInterfacedef(gtk_combo_box_set_row_span_column,gtk_combo_box_set_row_span_column_db);
extern GType gtk_relief_style_get_type_db(void);
CheckInterfacedef(gtk_relief_style_get_type,gtk_relief_style_get_type_db);
extern gboolean gtk_tree_path_is_descendant_db(GtkTreePath *, GtkTreePath *);
CheckInterfacedef(gtk_tree_path_is_descendant,gtk_tree_path_is_descendant_db);
extern void gtk_drag_highlight_db(GtkWidget *);
CheckInterfacedef(gtk_drag_highlight,gtk_drag_highlight_db);
extern gboolean gtk_file_selection_get_select_multiple_db(GtkFileSelection *);
CheckInterfacedef(gtk_file_selection_get_select_multiple,gtk_file_selection_get_select_multiple_db);
extern gboolean gtk_toggle_action_get_draw_as_radio_db(GtkToggleAction *);
CheckInterfacedef(gtk_toggle_action_get_draw_as_radio,gtk_toggle_action_get_draw_as_radio_db);
extern void gtk_icon_view_select_all_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_select_all,gtk_icon_view_select_all_db);
extern void gtk_button_get_alignment_db(GtkButton *, gfloat *, gfloat *);
CheckInterfacedef(gtk_button_get_alignment,gtk_button_get_alignment_db);
extern void gtk_spin_button_set_range_db(GtkSpinButton *, gdouble, gdouble);
CheckInterfacedef(gtk_spin_button_set_range,gtk_spin_button_set_range_db);
extern gint gtk_tree_view_append_column_db(GtkTreeView *, GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_append_column,gtk_tree_view_append_column_db);
extern void gtk_quit_remove_by_data_db(gpointer);
CheckInterfacedef(gtk_quit_remove_by_data,gtk_quit_remove_by_data_db);
extern const gchar * gtk_about_dialog_get_website_label_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_website_label,gtk_about_dialog_get_website_label_db);
extern void gtk_list_store_insert_before_db(GtkListStore *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_list_store_insert_before,gtk_list_store_insert_before_db);
extern void gtk_statusbar_pop_db(GtkStatusbar *, guint);
CheckInterfacedef(gtk_statusbar_pop,gtk_statusbar_pop_db);
extern gboolean gtk_tree_selection_get_selected_db(GtkTreeSelection *, GtkTreeModel * *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_selection_get_selected,gtk_tree_selection_get_selected_db);
extern void gtk_drag_get_data_db(GtkWidget *, GdkDragContext *, GdkAtom, guint32);
CheckInterfacedef(gtk_drag_get_data,gtk_drag_get_data_db);
extern const gchar * gtk_frame_get_label_db(GtkFrame *);
CheckInterfacedef(gtk_frame_get_label,gtk_frame_get_label_db);
extern GtkWidget * gtk_radio_button_new_with_label_from_widget_db(GtkRadioButton *, const gchar *);
CheckInterfacedef(gtk_radio_button_new_with_label_from_widget,gtk_radio_button_new_with_label_from_widget_db);
extern void gtk_text_view_get_iter_at_position_db(GtkTextView *, GtkTextIter *, gint *, gint, gint);
CheckInterfacedef(gtk_text_view_get_iter_at_position,gtk_text_view_get_iter_at_position_db);
extern GtkTreeViewSearchEqualFunc gtk_tree_view_get_search_equal_func_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_search_equal_func,gtk_tree_view_get_search_equal_func_db);
extern gboolean gtk_selection_data_set_pixbuf_db(GtkSelectionData *, GdkPixbuf *);
CheckInterfacedef(gtk_selection_data_set_pixbuf,gtk_selection_data_set_pixbuf_db);
extern GtkMetricType gtk_ruler_get_metric_db(GtkRuler *);
CheckInterfacedef(gtk_ruler_get_metric,gtk_ruler_get_metric_db);
extern void gtk_window_set_keep_above_db(GtkWindow *, gboolean);
CheckInterfacedef(gtk_window_set_keep_above,gtk_window_set_keep_above_db);
extern void gtk_im_context_simple_add_table_db(GtkIMContextSimple *, guint16 *, gint, gint);
CheckInterfacedef(gtk_im_context_simple_add_table,gtk_im_context_simple_add_table_db);
extern PangoLayout * gtk_scale_get_layout_db(GtkScale *);
CheckInterfacedef(gtk_scale_get_layout,gtk_scale_get_layout_db);
extern AtkObject * gtk_combo_box_get_popup_accessible_db(GtkComboBox *);
CheckInterfacedef(gtk_combo_box_get_popup_accessible,gtk_combo_box_get_popup_accessible_db);
extern GType gtk_radio_button_get_type_db(void);
CheckInterfacedef(gtk_radio_button_get_type,gtk_radio_button_get_type_db);
extern gint gtk_notebook_prepend_page_db(GtkNotebook *, GtkWidget *, GtkWidget *);
CheckInterfacedef(gtk_notebook_prepend_page,gtk_notebook_prepend_page_db);
extern gint gtk_text_view_get_indent_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_indent,gtk_text_view_get_indent_db);
extern gint gtk_text_view_get_border_window_size_db(GtkTextView *, GtkTextWindowType);
CheckInterfacedef(gtk_text_view_get_border_window_size,gtk_text_view_get_border_window_size_db);
extern GdkPixbuf * gtk_text_iter_get_pixbuf_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_pixbuf,gtk_text_iter_get_pixbuf_db);
extern const gchar * gtk_notebook_get_tab_label_text_db(GtkNotebook *, GtkWidget *);
CheckInterfacedef(gtk_notebook_get_tab_label_text,gtk_notebook_get_tab_label_text_db);
extern GtkFileChooserAction gtk_file_chooser_get_action_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_action,gtk_file_chooser_get_action_db);
extern void gtk_frame_get_label_align_db(GtkFrame *, gfloat *, gfloat *);
CheckInterfacedef(gtk_frame_get_label_align,gtk_frame_get_label_align_db);
extern GtkIconSet * gtk_icon_set_ref_db(GtkIconSet *);
CheckInterfacedef(gtk_icon_set_ref,gtk_icon_set_ref_db);
extern GType gtk_hpaned_get_type_db(void);
CheckInterfacedef(gtk_hpaned_get_type,gtk_hpaned_get_type_db);
extern void gtk_about_dialog_set_website_label_db(GtkAboutDialog *, const gchar *);
CheckInterfacedef(gtk_about_dialog_set_website_label,gtk_about_dialog_set_website_label_db);
extern GtkIconFactory * gtk_icon_factory_new_db(void);
CheckInterfacedef(gtk_icon_factory_new,gtk_icon_factory_new_db);
extern GtkCellRenderer * gtk_cell_renderer_combo_new_db(void);
CheckInterfacedef(gtk_cell_renderer_combo_new,gtk_cell_renderer_combo_new_db);
extern GtkTreeModel * gtk_tree_model_filter_new_db(GtkTreeModel *, GtkTreePath *);
CheckInterfacedef(gtk_tree_model_filter_new,gtk_tree_model_filter_new_db);
extern GtkTargetList * gtk_target_list_new_db(const GtkTargetEntry *, guint);
CheckInterfacedef(gtk_target_list_new,gtk_target_list_new_db);
extern gboolean gtk_text_view_move_visually_db(GtkTextView *, GtkTextIter *, gint);
CheckInterfacedef(gtk_text_view_move_visually,gtk_text_view_move_visually_db);
extern GList * gtk_container_get_children_db(GtkContainer *);
CheckInterfacedef(gtk_container_get_children,gtk_container_get_children_db);
extern GType gtk_tree_iter_get_type_db(void);
CheckInterfacedef(gtk_tree_iter_get_type,gtk_tree_iter_get_type_db);
extern GType gtk_toggle_action_get_type_db(void);
CheckInterfacedef(gtk_toggle_action_get_type,gtk_toggle_action_get_type_db);
extern void gtk_check_menu_item_set_draw_as_radio_db(GtkCheckMenuItem *, gboolean);
CheckInterfacedef(gtk_check_menu_item_set_draw_as_radio,gtk_check_menu_item_set_draw_as_radio_db);
extern void gtk_clipboard_request_targets_db(GtkClipboard *, GtkClipboardTargetsReceivedFunc, gpointer);
CheckInterfacedef(gtk_clipboard_request_targets,gtk_clipboard_request_targets_db);
extern void gtk_icon_view_set_item_width_db(GtkIconView *, gint);
CheckInterfacedef(gtk_icon_view_set_item_width,gtk_icon_view_set_item_width_db);
extern void gtk_tree_view_set_headers_clickable_db(GtkTreeView *, gboolean);
CheckInterfacedef(gtk_tree_view_set_headers_clickable,gtk_tree_view_set_headers_clickable_db);
extern GtkCornerType gtk_scrolled_window_get_placement_db(GtkScrolledWindow *);
CheckInterfacedef(gtk_scrolled_window_get_placement,gtk_scrolled_window_get_placement_db);
extern void gtk_text_view_set_tabs_db(GtkTextView *, PangoTabArray *);
CheckInterfacedef(gtk_text_view_set_tabs,gtk_text_view_set_tabs_db);
extern void gtk_menu_tool_button_set_menu_db(GtkMenuToolButton *, GtkWidget *);
CheckInterfacedef(gtk_menu_tool_button_set_menu,gtk_menu_tool_button_set_menu_db);
extern void gtk_window_unmaximize_db(GtkWindow *);
CheckInterfacedef(gtk_window_unmaximize,gtk_window_unmaximize_db);
extern void gtk_widget_modify_font_db(GtkWidget *, PangoFontDescription *);
CheckInterfacedef(gtk_widget_modify_font,gtk_widget_modify_font_db);
extern void gtk_toggle_tool_button_set_active_db(GtkToggleToolButton *, gboolean);
CheckInterfacedef(gtk_toggle_tool_button_set_active,gtk_toggle_tool_button_set_active_db);
extern GtkTreePath * gtk_tree_model_filter_convert_path_to_child_path_db(GtkTreeModelFilter *, GtkTreePath *);
CheckInterfacedef(gtk_tree_model_filter_convert_path_to_child_path,gtk_tree_model_filter_convert_path_to_child_path_db);
extern GObject * gtk_clipboard_get_owner_db(GtkClipboard *);
CheckInterfacedef(gtk_clipboard_get_owner,gtk_clipboard_get_owner_db);
extern void gtk_text_view_set_pixels_below_lines_db(GtkTextView *, gint);
CheckInterfacedef(gtk_text_view_set_pixels_below_lines,gtk_text_view_set_pixels_below_lines_db);
extern void gtk_text_view_set_pixels_above_lines_db(GtkTextView *, gint);
CheckInterfacedef(gtk_text_view_set_pixels_above_lines,gtk_text_view_set_pixels_above_lines_db);
extern void gtk_font_button_set_show_size_db(GtkFontButton *, gboolean);
CheckInterfacedef(gtk_font_button_set_show_size,gtk_font_button_set_show_size_db);
extern void gtk_paint_resize_grip_db(GtkStyle *, GdkWindow *, GtkStateType, GdkRectangle *, GtkWidget *, const gchar *, GdkWindowEdge, gint, gint, gint, gint);
CheckInterfacedef(gtk_paint_resize_grip,gtk_paint_resize_grip_db);
extern void gtk_widget_show_all_db(GtkWidget *);
CheckInterfacedef(gtk_widget_show_all,gtk_widget_show_all_db);
extern void gtk_widget_set_name_db(GtkWidget *, const gchar *);
CheckInterfacedef(gtk_widget_set_name,gtk_widget_set_name_db);
extern void gtk_action_disconnect_proxy_db(GtkAction *, GtkWidget *);
CheckInterfacedef(gtk_action_disconnect_proxy,gtk_action_disconnect_proxy_db);
extern void gtk_image_set_pixel_size_db(GtkImage *, gint);
CheckInterfacedef(gtk_image_set_pixel_size,gtk_image_set_pixel_size_db);
extern GList * gtk_tree_view_column_get_cell_renderers_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_cell_renderers,gtk_tree_view_column_get_cell_renderers_db);
extern GType gtk_arrow_type_get_type_db(void);
CheckInterfacedef(gtk_arrow_type_get_type,gtk_arrow_type_get_type_db);
extern void gtk_accel_group_connect_by_path_db(GtkAccelGroup *, const gchar *, GClosure *);
CheckInterfacedef(gtk_accel_group_connect_by_path,gtk_accel_group_connect_by_path_db);
extern void gtk_tree_view_scroll_to_point_db(GtkTreeView *, gint, gint);
CheckInterfacedef(gtk_tree_view_scroll_to_point,gtk_tree_view_scroll_to_point_db);
extern GtkTreePath * gtk_tree_model_get_path_db(GtkTreeModel *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_get_path,gtk_tree_model_get_path_db);
extern void gtk_menu_shell_prepend_db(GtkMenuShell *, GtkWidget *);
CheckInterfacedef(gtk_menu_shell_prepend,gtk_menu_shell_prepend_db);
extern void gtk_image_set_from_image_db(GtkImage *, GdkImage *, GdkBitmap *);
CheckInterfacedef(gtk_image_set_from_image,gtk_image_set_from_image_db);
extern GType gtk_widget_help_type_get_type_db(void);
CheckInterfacedef(gtk_widget_help_type_get_type,gtk_widget_help_type_get_type_db);
extern GType gtk_corner_type_get_type_db(void);
CheckInterfacedef(gtk_corner_type_get_type,gtk_corner_type_get_type_db);
extern void gtk_tree_row_reference_deleted_db(GObject *, GtkTreePath *);
CheckInterfacedef(gtk_tree_row_reference_deleted,gtk_tree_row_reference_deleted_db);
extern GtkWidget * gtk_combo_box_new_db(void);
CheckInterfacedef(gtk_combo_box_new,gtk_combo_box_new_db);
extern GtkAdjustment * gtk_viewport_get_vadjustment_db(GtkViewport *);
CheckInterfacedef(gtk_viewport_get_vadjustment,gtk_viewport_get_vadjustment_db);
extern gboolean gtk_text_iter_inside_sentence_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_inside_sentence,gtk_text_iter_inside_sentence_db);
extern void gtk_action_group_add_action_with_accel_db(GtkActionGroup *, GtkAction *, const gchar *);
CheckInterfacedef(gtk_action_group_add_action_with_accel,gtk_action_group_add_action_with_accel_db);
extern GSList * gtk_file_chooser_get_uris_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_uris,gtk_file_chooser_get_uris_db);
extern gboolean gtk_window_is_active_db(GtkWindow *);
CheckInterfacedef(gtk_window_is_active,gtk_window_is_active_db);
extern void gtk_settings_set_double_property_db(GtkSettings *, const gchar *, gdouble, const gchar *);
CheckInterfacedef(gtk_settings_set_double_property,gtk_settings_set_double_property_db);
extern GtkTextBuffer * gtk_text_mark_get_buffer_db(GtkTextMark *);
CheckInterfacedef(gtk_text_mark_get_buffer,gtk_text_mark_get_buffer_db);
extern GType gtk_scrolled_window_get_type_db(void);
CheckInterfacedef(gtk_scrolled_window_get_type,gtk_scrolled_window_get_type_db);
extern gboolean gtk_text_iter_equal_db(const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_equal,gtk_text_iter_equal_db);
extern void gtk_window_group_add_window_db(GtkWindowGroup *, GtkWindow *);
CheckInterfacedef(gtk_window_group_add_window,gtk_window_group_add_window_db);
extern GtkAccelGroup * gtk_menu_get_accel_group_db(GtkMenu *);
CheckInterfacedef(gtk_menu_get_accel_group,gtk_menu_get_accel_group_db);
extern gchar * gtk_rc_get_module_dir_db(void);
CheckInterfacedef(gtk_rc_get_module_dir,gtk_rc_get_module_dir_db);
extern void gtk_color_button_set_alpha_db(GtkColorButton *, guint16);
CheckInterfacedef(gtk_color_button_set_alpha,gtk_color_button_set_alpha_db);
extern void gtk_table_attach_db(GtkTable *, GtkWidget *, guint, guint, guint, guint, GtkAttachOptions, GtkAttachOptions, guint, guint);
CheckInterfacedef(gtk_table_attach,gtk_table_attach_db);
extern void gtk_menu_reorder_child_db(GtkMenu *, GtkWidget *, gint);
CheckInterfacedef(gtk_menu_reorder_child,gtk_menu_reorder_child_db);
extern gboolean gtk_widget_event_db(GtkWidget *, GdkEvent *);
CheckInterfacedef(gtk_widget_event,gtk_widget_event_db);
extern gchar * gtk_font_selection_get_font_name_db(GtkFontSelection *);
CheckInterfacedef(gtk_font_selection_get_font_name,gtk_font_selection_get_font_name_db);
extern GdkPixbuf * gtk_icon_info_load_icon_db(GtkIconInfo *, GError * *);
CheckInterfacedef(gtk_icon_info_load_icon,gtk_icon_info_load_icon_db);
extern gboolean gtk_label_get_selection_bounds_db(GtkLabel *, gint *, gint *);
CheckInterfacedef(gtk_label_get_selection_bounds,gtk_label_get_selection_bounds_db);
extern void gtk_icon_factory_remove_default_db(GtkIconFactory *);
CheckInterfacedef(gtk_icon_factory_remove_default,gtk_icon_factory_remove_default_db);
extern void gtk_tree_store_swap_db(GtkTreeStore *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_store_swap,gtk_tree_store_swap_db);
extern void gtk_color_selection_set_has_palette_db(GtkColorSelection *, gboolean);
CheckInterfacedef(gtk_color_selection_set_has_palette,gtk_color_selection_set_has_palette_db);
extern void gtk_tree_path_next_db(GtkTreePath *);
CheckInterfacedef(gtk_tree_path_next,gtk_tree_path_next_db);
extern void gtk_action_unblock_activate_from_db(GtkAction *, GtkWidget *);
CheckInterfacedef(gtk_action_unblock_activate_from,gtk_action_unblock_activate_from_db);
extern void gtk_notebook_set_tab_pos_db(GtkNotebook *, GtkPositionType);
CheckInterfacedef(gtk_notebook_set_tab_pos,gtk_notebook_set_tab_pos_db);
extern void gtk_icon_source_set_filename_db(GtkIconSource *, const gchar *);
CheckInterfacedef(gtk_icon_source_set_filename,gtk_icon_source_set_filename_db);
extern void gtk_progress_bar_set_text_db(GtkProgressBar *, const gchar *);
CheckInterfacedef(gtk_progress_bar_set_text,gtk_progress_bar_set_text_db);
extern GtkWidget * gtk_invisible_new_for_screen_db(GdkScreen *);
CheckInterfacedef(gtk_invisible_new_for_screen,gtk_invisible_new_for_screen_db);
extern gboolean gtk_tree_view_get_enable_search_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_enable_search,gtk_tree_view_get_enable_search_db);
extern gboolean gtk_tree_store_is_ancestor_db(GtkTreeStore *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_store_is_ancestor,gtk_tree_store_is_ancestor_db);
extern GtkWidget * gtk_button_get_image_db(GtkButton *);
CheckInterfacedef(gtk_button_get_image,gtk_button_get_image_db);
extern void gtk_tool_button_set_stock_id_db(GtkToolButton *, const gchar *);
CheckInterfacedef(gtk_tool_button_set_stock_id,gtk_tool_button_set_stock_id_db);
extern GtkWidget * gtk_font_selection_dialog_new_db(const gchar *);
CheckInterfacedef(gtk_font_selection_dialog_new,gtk_font_selection_dialog_new_db);
extern void gtk_drag_source_set_icon_db(GtkWidget *, GdkColormap *, GdkPixmap *, GdkBitmap *);
CheckInterfacedef(gtk_drag_source_set_icon,gtk_drag_source_set_icon_db);
extern void gtk_file_chooser_set_local_only_db(GtkFileChooser *, gboolean);
CheckInterfacedef(gtk_file_chooser_set_local_only,gtk_file_chooser_set_local_only_db);
extern void gtk_text_buffer_remove_all_tags_db(GtkTextBuffer *, const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_remove_all_tags,gtk_text_buffer_remove_all_tags_db);
extern gfloat gtk_entry_get_alignment_db(GtkEntry *);
CheckInterfacedef(gtk_entry_get_alignment,gtk_entry_get_alignment_db);
extern GSList * gtk_text_iter_get_toggled_tags_db(const GtkTextIter *, gboolean);
CheckInterfacedef(gtk_text_iter_get_toggled_tags,gtk_text_iter_get_toggled_tags_db);
extern gchar * gtk_text_buffer_get_text_db(GtkTextBuffer *, const GtkTextIter *, const GtkTextIter *, gboolean);
CheckInterfacedef(gtk_text_buffer_get_text,gtk_text_buffer_get_text_db);
extern void gtk_progress_bar_set_pulse_step_db(GtkProgressBar *, gdouble);
CheckInterfacedef(gtk_progress_bar_set_pulse_step,gtk_progress_bar_set_pulse_step_db);
extern GtkTreePath * gtk_cell_view_get_displayed_row_db(GtkCellView *);
CheckInterfacedef(gtk_cell_view_get_displayed_row,gtk_cell_view_get_displayed_row_db);
extern GtkTreePath * gtk_tree_path_copy_db(const GtkTreePath *);
CheckInterfacedef(gtk_tree_path_copy,gtk_tree_path_copy_db);
extern GQuark gtk_icon_theme_error_quark_db(void);
CheckInterfacedef(gtk_icon_theme_error_quark,gtk_icon_theme_error_quark_db);
extern void gtk_disable_setlocale_db(void);
CheckInterfacedef(gtk_disable_setlocale,gtk_disable_setlocale_db);
extern GSList * gtk_radio_tool_button_get_group_db(GtkRadioToolButton *);
CheckInterfacedef(gtk_radio_tool_button_get_group,gtk_radio_tool_button_get_group_db);
extern GType gtk_accel_flags_get_type_db(void);
CheckInterfacedef(gtk_accel_flags_get_type,gtk_accel_flags_get_type_db);
extern gboolean gtk_window_get_skip_taskbar_hint_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_skip_taskbar_hint,gtk_window_get_skip_taskbar_hint_db);
extern void gtk_widget_style_get_valist_db(GtkWidget *, const gchar *, va_list);
CheckInterfacedef(gtk_widget_style_get_valist,gtk_widget_style_get_valist_db);
extern GType gtk_message_type_get_type_db(void);
CheckInterfacedef(gtk_message_type_get_type,gtk_message_type_get_type_db);
extern GType gtk_icon_lookup_flags_get_type_db(void);
CheckInterfacedef(gtk_icon_lookup_flags_get_type,gtk_icon_lookup_flags_get_type_db);
extern gint gtk_text_iter_get_chars_in_line_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_chars_in_line,gtk_text_iter_get_chars_in_line_db);
extern void gtk_clipboard_request_text_db(GtkClipboard *, GtkClipboardTextReceivedFunc, gpointer);
CheckInterfacedef(gtk_clipboard_request_text,gtk_clipboard_request_text_db);
extern GType gtk_tree_selection_get_type_db(void);
CheckInterfacedef(gtk_tree_selection_get_type,gtk_tree_selection_get_type_db);
extern void gtk_text_buffer_cut_clipboard_db(GtkTextBuffer *, GtkClipboard *, gboolean);
CheckInterfacedef(gtk_text_buffer_cut_clipboard,gtk_text_buffer_cut_clipboard_db);
extern void gtk_tree_view_widget_to_tree_coords_db(GtkTreeView *, gint, gint, gint *, gint *);
CheckInterfacedef(gtk_tree_view_widget_to_tree_coords,gtk_tree_view_widget_to_tree_coords_db);
extern gboolean gtk_list_store_remove_db(GtkListStore *, GtkTreeIter *);
CheckInterfacedef(gtk_list_store_remove,gtk_list_store_remove_db);
extern void gtk_drag_dest_unset_db(GtkWidget *);
CheckInterfacedef(gtk_drag_dest_unset,gtk_drag_dest_unset_db);
extern GType gtk_accel_label_get_type_db(void);
CheckInterfacedef(gtk_accel_label_get_type,gtk_accel_label_get_type_db);
extern gboolean gtk_text_iter_ends_line_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_ends_line,gtk_text_iter_ends_line_db);
extern void gtk_spin_button_set_numeric_db(GtkSpinButton *, gboolean);
CheckInterfacedef(gtk_spin_button_set_numeric,gtk_spin_button_set_numeric_db);
extern gboolean gtk_text_iter_backward_chars_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_backward_chars,gtk_text_iter_backward_chars_db);
extern void gtk_tree_view_column_cell_get_size_db(GtkTreeViewColumn *, GdkRectangle *, gint *, gint *, gint *, gint *);
CheckInterfacedef(gtk_tree_view_column_cell_get_size,gtk_tree_view_column_cell_get_size_db);
extern GtkTreePath * gtk_tree_path_new_from_string_db(const gchar *);
CheckInterfacedef(gtk_tree_path_new_from_string,gtk_tree_path_new_from_string_db);
extern GScanner * gtk_rc_scanner_new_db(void);
CheckInterfacedef(gtk_rc_scanner_new,gtk_rc_scanner_new_db);
extern GtkWidget * gtk_combo_box_entry_new_db(void);
CheckInterfacedef(gtk_combo_box_entry_new,gtk_combo_box_entry_new_db);
extern GtkWidget * gtk_radio_button_new_with_mnemonic_from_widget_db(GtkRadioButton *, const gchar *);
CheckInterfacedef(gtk_radio_button_new_with_mnemonic_from_widget,gtk_radio_button_new_with_mnemonic_from_widget_db);
extern GType gtk_tree_sortable_get_type_db(void);
CheckInterfacedef(gtk_tree_sortable_get_type,gtk_tree_sortable_get_type_db);
extern GtkTextTag * gtk_text_tag_new_db(const gchar *);
CheckInterfacedef(gtk_text_tag_new,gtk_text_tag_new_db);
extern GtkWidget * gtk_hbutton_box_new_db(void);
CheckInterfacedef(gtk_hbutton_box_new,gtk_hbutton_box_new_db);
extern GType gtk_alignment_get_type_db(void);
CheckInterfacedef(gtk_alignment_get_type,gtk_alignment_get_type_db);
extern GtkTreeRowReference * gtk_tree_row_reference_new_proxy_db(GObject *, GtkTreeModel *, GtkTreePath *);
CheckInterfacedef(gtk_tree_row_reference_new_proxy,gtk_tree_row_reference_new_proxy_db);
extern const gchar * gtk_about_dialog_get_license_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_license,gtk_about_dialog_get_license_db);
extern GtkWidget * gtk_check_menu_item_new_db(void);
CheckInterfacedef(gtk_check_menu_item_new,gtk_check_menu_item_new_db);
extern GType gtk_size_group_mode_get_type_db(void);
CheckInterfacedef(gtk_size_group_mode_get_type,gtk_size_group_mode_get_type_db);
extern gboolean gtk_calendar_unmark_day_db(GtkCalendar *, guint);
CheckInterfacedef(gtk_calendar_unmark_day,gtk_calendar_unmark_day_db);
extern GtkWidget * gtk_label_get_mnemonic_widget_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_mnemonic_widget,gtk_label_get_mnemonic_widget_db);
extern void gtk_button_set_focus_on_click_db(GtkButton *, gboolean);
CheckInterfacedef(gtk_button_set_focus_on_click,gtk_button_set_focus_on_click_db);
extern void gtk_combo_box_prepend_text_db(GtkComboBox *, const gchar *);
CheckInterfacedef(gtk_combo_box_prepend_text,gtk_combo_box_prepend_text_db);
extern void gtk_tree_store_set_db(GtkTreeStore *, GtkTreeIter *, ...);
CheckInterfacedef(gtk_tree_store_set,gtk_tree_store_set_db);
extern GType gtk_im_preedit_style_get_type_db(void);
CheckInterfacedef(gtk_im_preedit_style_get_type,gtk_im_preedit_style_get_type_db);
extern gboolean gtk_get_current_event_state_db(GdkModifierType *);
CheckInterfacedef(gtk_get_current_event_state,gtk_get_current_event_state_db);
extern GType gtk_handle_box_get_type_db(void);
CheckInterfacedef(gtk_handle_box_get_type,gtk_handle_box_get_type_db);
extern void gtk_tree_model_sort_clear_cache_db(GtkTreeModelSort *);
CheckInterfacedef(gtk_tree_model_sort_clear_cache,gtk_tree_model_sort_clear_cache_db);
extern void gtk_selection_clear_targets_db(GtkWidget *, GdkAtom);
CheckInterfacedef(gtk_selection_clear_targets,gtk_selection_clear_targets_db);
extern void gtk_about_dialog_set_comments_db(GtkAboutDialog *, const gchar *);
CheckInterfacedef(gtk_about_dialog_set_comments,gtk_about_dialog_set_comments_db);
extern void gtk_list_store_append_db(GtkListStore *, GtkTreeIter *);
CheckInterfacedef(gtk_list_store_append,gtk_list_store_append_db);
extern gboolean gtk_tool_item_get_visible_horizontal_db(GtkToolItem *);
CheckInterfacedef(gtk_tool_item_get_visible_horizontal,gtk_tool_item_get_visible_horizontal_db);
extern void gtk_window_set_default_size_db(GtkWindow *, gint, gint);
CheckInterfacedef(gtk_window_set_default_size,gtk_window_set_default_size_db);
extern void gtk_drag_set_icon_stock_db(GdkDragContext *, const gchar *, gint, gint);
CheckInterfacedef(gtk_drag_set_icon_stock,gtk_drag_set_icon_stock_db);
extern void gtk_paned_set_position_db(GtkPaned *, gint);
CheckInterfacedef(gtk_paned_set_position,gtk_paned_set_position_db);
extern void gtk_tree_view_column_set_sort_order_db(GtkTreeViewColumn *, GtkSortType);
CheckInterfacedef(gtk_tree_view_column_set_sort_order,gtk_tree_view_column_set_sort_order_db);
extern GtkWidget * gtk_image_new_from_icon_set_db(GtkIconSet *, GtkIconSize);
CheckInterfacedef(gtk_image_new_from_icon_set,gtk_image_new_from_icon_set_db);
extern GType gtk_image_get_type_db(void);
CheckInterfacedef(gtk_image_get_type,gtk_image_get_type_db);
extern GtkTextDirection gtk_widget_get_default_direction_db(void);
CheckInterfacedef(gtk_widget_get_default_direction,gtk_widget_get_default_direction_db);
extern GtkWidget * gtk_color_button_new_db(void);
CheckInterfacedef(gtk_color_button_new,gtk_color_button_new_db);
extern void gtk_paint_hline_db(GtkStyle *, GdkWindow *, GtkStateType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint);
CheckInterfacedef(gtk_paint_hline,gtk_paint_hline_db);
extern void gtk_menu_item_toggle_size_request_db(GtkMenuItem *, gint *);
CheckInterfacedef(gtk_menu_item_toggle_size_request,gtk_menu_item_toggle_size_request_db);
extern void gtk_size_group_remove_widget_db(GtkSizeGroup *, GtkWidget *);
CheckInterfacedef(gtk_size_group_remove_widget,gtk_size_group_remove_widget_db);
extern GtkClipboard * gtk_widget_get_clipboard_db(GtkWidget *, GdkAtom);
CheckInterfacedef(gtk_widget_get_clipboard,gtk_widget_get_clipboard_db);
extern void gtk_scale_set_draw_value_db(GtkScale *, gboolean);
CheckInterfacedef(gtk_scale_set_draw_value,gtk_scale_set_draw_value_db);
extern void gtk_frame_set_label_widget_db(GtkFrame *, GtkWidget *);
CheckInterfacedef(gtk_frame_set_label_widget,gtk_frame_set_label_widget_db);
extern GType gtk_check_button_get_type_db(void);
CheckInterfacedef(gtk_check_button_get_type,gtk_check_button_get_type_db);
extern void gtk_widget_show_db(GtkWidget *);
CheckInterfacedef(gtk_widget_show,gtk_widget_show_db);
extern void gtk_adjustment_changed_db(GtkAdjustment *);
CheckInterfacedef(gtk_adjustment_changed,gtk_adjustment_changed_db);
extern gboolean gtk_text_iter_forward_visible_word_ends_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_forward_visible_word_ends,gtk_text_iter_forward_visible_word_ends_db);
extern void gtk_entry_set_has_frame_db(GtkEntry *, gboolean);
CheckInterfacedef(gtk_entry_set_has_frame,gtk_entry_set_has_frame_db);
extern GtkWidget * gtk_hbox_new_db(gboolean, gint);
CheckInterfacedef(gtk_hbox_new,gtk_hbox_new_db);
extern PangoContext * gtk_widget_get_pango_context_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_pango_context,gtk_widget_get_pango_context_db);
extern GtkAccelKey * gtk_accel_group_find_db(GtkAccelGroup *, GtkAccelGroupFindFunc, gpointer);
CheckInterfacedef(gtk_accel_group_find,gtk_accel_group_find_db);
extern const gchar * gtk_font_button_get_font_name_db(GtkFontButton *);
CheckInterfacedef(gtk_font_button_get_font_name,gtk_font_button_get_font_name_db);
extern void gtk_entry_completion_set_inline_completion_db(GtkEntryCompletion *, gboolean);
CheckInterfacedef(gtk_entry_completion_set_inline_completion,gtk_entry_completion_set_inline_completion_db);
extern gboolean gtk_toggle_tool_button_get_active_db(GtkToggleToolButton *);
CheckInterfacedef(gtk_toggle_tool_button_get_active,gtk_toggle_tool_button_get_active_db);
extern gchar * gtk_widget_get_composite_name_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_composite_name,gtk_widget_get_composite_name_db);
extern GType gtk_ui_manager_item_type_get_type_db(void);
CheckInterfacedef(gtk_ui_manager_item_type_get_type,gtk_ui_manager_item_type_get_type_db);
extern void gtk_tree_sortable_set_sort_column_id_db(GtkTreeSortable *, gint, GtkSortType);
CheckInterfacedef(gtk_tree_sortable_set_sort_column_id,gtk_tree_sortable_set_sort_column_id_db);
extern void gtk_tree_path_append_index_db(GtkTreePath *, gint);
CheckInterfacedef(gtk_tree_path_append_index,gtk_tree_path_append_index_db);
extern GtkToolItem * gtk_radio_tool_button_new_from_stock_db(GSList *, const gchar *);
CheckInterfacedef(gtk_radio_tool_button_new_from_stock,gtk_radio_tool_button_new_from_stock_db);
extern void gtk_image_get_icon_name_db(GtkImage *, const gchar * *, GtkIconSize *);
CheckInterfacedef(gtk_image_get_icon_name,gtk_image_get_icon_name_db);
extern GtkIconSource * gtk_icon_source_copy_db(const GtkIconSource *);
CheckInterfacedef(gtk_icon_source_copy,gtk_icon_source_copy_db);
extern void gtk_icon_view_set_text_column_db(GtkIconView *, gint);
CheckInterfacedef(gtk_icon_view_set_text_column,gtk_icon_view_set_text_column_db);
extern void gtk_label_set_justify_db(GtkLabel *, GtkJustification);
CheckInterfacedef(gtk_label_set_justify,gtk_label_set_justify_db);
extern void gtk_tree_view_column_set_attributes_db(GtkTreeViewColumn *, GtkCellRenderer *, ...);
CheckInterfacedef(gtk_tree_view_column_set_attributes,gtk_tree_view_column_set_attributes_db);
extern void gtk_box_pack_start_db(GtkBox *, GtkWidget *, gboolean, gboolean, guint);
CheckInterfacedef(gtk_box_pack_start,gtk_box_pack_start_db);
extern const gchar *const  * gtk_about_dialog_get_artists_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_artists,gtk_about_dialog_get_artists_db);
extern void gtk_label_set_markup_db(GtkLabel *, const gchar *);
CheckInterfacedef(gtk_label_set_markup,gtk_label_set_markup_db);
extern GdkPixbuf * gtk_icon_info_get_builtin_pixbuf_db(GtkIconInfo *);
CheckInterfacedef(gtk_icon_info_get_builtin_pixbuf,gtk_icon_info_get_builtin_pixbuf_db);
extern gboolean gtk_text_iter_starts_sentence_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_starts_sentence,gtk_text_iter_starts_sentence_db);
extern void gtk_tree_view_set_destroy_count_func_db(GtkTreeView *, GtkTreeDestroyCountFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_tree_view_set_destroy_count_func,gtk_tree_view_set_destroy_count_func_db);
extern GType gtk_expander_get_type_db(void);
CheckInterfacedef(gtk_expander_get_type,gtk_expander_get_type_db);
extern void gtk_list_store_move_before_db(GtkListStore *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_list_store_move_before,gtk_list_store_move_before_db);
extern gboolean gtk_tree_view_column_get_visible_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_visible,gtk_tree_view_column_get_visible_db);
extern GType gtk_text_buffer_get_type_db(void);
CheckInterfacedef(gtk_text_buffer_get_type,gtk_text_buffer_get_type_db);
extern void gtk_file_chooser_add_filter_db(GtkFileChooser *, GtkFileFilter *);
CheckInterfacedef(gtk_file_chooser_add_filter,gtk_file_chooser_add_filter_db);
extern gint gtk_text_tag_table_get_size_db(GtkTextTagTable *);
CheckInterfacedef(gtk_text_tag_table_get_size,gtk_text_tag_table_get_size_db);
extern GType gtk_attach_options_get_type_db(void);
CheckInterfacedef(gtk_attach_options_get_type,gtk_attach_options_get_type_db);
extern gboolean gtk_rc_reparse_all_for_settings_db(GtkSettings *, gboolean);
CheckInterfacedef(gtk_rc_reparse_all_for_settings,gtk_rc_reparse_all_for_settings_db);
extern gunichar gtk_entry_get_invisible_char_db(GtkEntry *);
CheckInterfacedef(gtk_entry_get_invisible_char,gtk_entry_get_invisible_char_db);
extern GType gtk_text_view_get_type_db(void);
CheckInterfacedef(gtk_text_view_get_type,gtk_text_view_get_type_db);
extern gboolean gtk_text_iter_is_end_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_is_end,gtk_text_iter_is_end_db);
extern GdkPixbuf * gtk_icon_source_get_pixbuf_db(const GtkIconSource *);
CheckInterfacedef(gtk_icon_source_get_pixbuf,gtk_icon_source_get_pixbuf_db);
extern gboolean gtk_text_iter_forward_word_end_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_forward_word_end,gtk_text_iter_forward_word_end_db);
extern GType gtk_menu_shell_get_type_db(void);
CheckInterfacedef(gtk_menu_shell_get_type,gtk_menu_shell_get_type_db);
extern const gchar * gtk_tool_button_get_stock_id_db(GtkToolButton *);
CheckInterfacedef(gtk_tool_button_get_stock_id,gtk_tool_button_get_stock_id_db);
extern GtkTextMark * gtk_text_buffer_get_mark_db(GtkTextBuffer *, const gchar *);
CheckInterfacedef(gtk_text_buffer_get_mark,gtk_text_buffer_get_mark_db);
extern gboolean gtk_icon_view_path_is_selected_db(GtkIconView *, GtkTreePath *);
CheckInterfacedef(gtk_icon_view_path_is_selected,gtk_icon_view_path_is_selected_db);
extern GtkCellRenderer * gtk_cell_renderer_pixbuf_new_db(void);
CheckInterfacedef(gtk_cell_renderer_pixbuf_new,gtk_cell_renderer_pixbuf_new_db);
extern gchar * gtk_file_chooser_get_current_folder_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_current_folder,gtk_file_chooser_get_current_folder_db);
extern gboolean gtk_selection_owner_set_db(GtkWidget *, GdkAtom, guint32);
CheckInterfacedef(gtk_selection_owner_set,gtk_selection_owner_set_db);
extern void gtk_window_get_size_db(GtkWindow *, gint *, gint *);
CheckInterfacedef(gtk_window_get_size,gtk_window_get_size_db);
extern void gtk_binding_entry_add_signall_db(GtkBindingSet *, guint, GdkModifierType, const gchar *, GSList *);
CheckInterfacedef(gtk_binding_entry_add_signall,gtk_binding_entry_add_signall_db);
extern PangoLanguage * gtk_text_iter_get_language_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_language,gtk_text_iter_get_language_db);
extern void gtk_dialog_add_buttons_db(GtkDialog *, const gchar *, ...);
CheckInterfacedef(gtk_dialog_add_buttons,gtk_dialog_add_buttons_db);
extern void gtk_action_disconnect_accelerator_db(GtkAction *);
CheckInterfacedef(gtk_action_disconnect_accelerator,gtk_action_disconnect_accelerator_db);
extern char * gtk_file_chooser_get_preview_uri_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_preview_uri,gtk_file_chooser_get_preview_uri_db);
extern void gtk_requisition_free_db(GtkRequisition *);
CheckInterfacedef(gtk_requisition_free,gtk_requisition_free_db);
extern GSList * gtk_text_iter_get_marks_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_marks,gtk_text_iter_get_marks_db);
extern GType gtk_delete_type_get_type_db(void);
CheckInterfacedef(gtk_delete_type_get_type,gtk_delete_type_get_type_db);
extern void gtk_box_reorder_child_db(GtkBox *, GtkWidget *, gint);
CheckInterfacedef(gtk_box_reorder_child,gtk_box_reorder_child_db);
extern GtkWidget * gtk_menu_item_new_with_mnemonic_db(const gchar *);
CheckInterfacedef(gtk_menu_item_new_with_mnemonic,gtk_menu_item_new_with_mnemonic_db);
extern void gtk_item_deselect_db(GtkItem *);
CheckInterfacedef(gtk_item_deselect,gtk_item_deselect_db);
extern gboolean gtk_file_chooser_get_show_hidden_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_show_hidden,gtk_file_chooser_get_show_hidden_db);
extern GType gtk_hscrollbar_get_type_db(void);
CheckInterfacedef(gtk_hscrollbar_get_type,gtk_hscrollbar_get_type_db);
extern GtkStyle * gtk_widget_get_default_style_db(void);
CheckInterfacedef(gtk_widget_get_default_style,gtk_widget_get_default_style_db);
extern GtkToolItem * gtk_radio_tool_button_new_with_stock_from_widget_db(GtkRadioToolButton *, const gchar *);
CheckInterfacedef(gtk_radio_tool_button_new_with_stock_from_widget,gtk_radio_tool_button_new_with_stock_from_widget_db);
extern void gtk_tree_view_get_drag_dest_row_db(GtkTreeView *, GtkTreePath * *, GtkTreeViewDropPosition *);
CheckInterfacedef(gtk_tree_view_get_drag_dest_row,gtk_tree_view_get_drag_dest_row_db);
extern GSList * gtk_radio_action_get_group_db(GtkRadioAction *);
CheckInterfacedef(gtk_radio_action_get_group,gtk_radio_action_get_group_db);
extern void gtk_drag_finish_db(GdkDragContext *, gboolean, gboolean, guint32);
CheckInterfacedef(gtk_drag_finish,gtk_drag_finish_db);
extern GType gtk_button_box_get_type_db(void);
CheckInterfacedef(gtk_button_box_get_type,gtk_button_box_get_type_db);
extern void gtk_binding_entry_remove_db(GtkBindingSet *, guint, GdkModifierType);
CheckInterfacedef(gtk_binding_entry_remove,gtk_binding_entry_remove_db);
extern GtkWidget * gtk_accel_label_get_accel_widget_db(GtkAccelLabel *);
CheckInterfacedef(gtk_accel_label_get_accel_widget,gtk_accel_label_get_accel_widget_db);
extern gboolean gtk_accel_map_change_entry_db(const gchar *, guint, GdkModifierType, gboolean);
CheckInterfacedef(gtk_accel_map_change_entry,gtk_accel_map_change_entry_db);
extern gboolean gtk_cell_renderer_toggle_get_active_db(GtkCellRendererToggle *);
CheckInterfacedef(gtk_cell_renderer_toggle_get_active,gtk_cell_renderer_toggle_get_active_db);
extern void gtk_cell_renderer_get_size_db(GtkCellRenderer *, GtkWidget *, GdkRectangle *, gint *, gint *, gint *, gint *);
CheckInterfacedef(gtk_cell_renderer_get_size,gtk_cell_renderer_get_size_db);
extern void gtk_layout_put_db(GtkLayout *, GtkWidget *, gint, gint);
CheckInterfacedef(gtk_layout_put,gtk_layout_put_db);
extern void gtk_widget_set_parent_db(GtkWidget *, GtkWidget *);
CheckInterfacedef(gtk_widget_set_parent,gtk_widget_set_parent_db);
extern gboolean gtk_text_iter_forward_lines_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_forward_lines,gtk_text_iter_forward_lines_db);
extern gboolean gtk_expander_get_use_markup_db(GtkExpander *);
CheckInterfacedef(gtk_expander_get_use_markup,gtk_expander_get_use_markup_db);
extern gboolean gtk_main_iteration_db(void);
CheckInterfacedef(gtk_main_iteration,gtk_main_iteration_db);
extern void gtk_tree_view_column_set_sort_column_id_db(GtkTreeViewColumn *, gint);
CheckInterfacedef(gtk_tree_view_column_set_sort_column_id,gtk_tree_view_column_set_sort_column_id_db);
extern gboolean gtk_text_mark_get_deleted_db(GtkTextMark *);
CheckInterfacedef(gtk_text_mark_get_deleted,gtk_text_mark_get_deleted_db);
extern GtkWidget * gtk_combo_box_new_with_model_db(GtkTreeModel *);
CheckInterfacedef(gtk_combo_box_new_with_model,gtk_combo_box_new_with_model_db);
extern GtkWidget * gtk_icon_view_new_with_model_db(GtkTreeModel *);
CheckInterfacedef(gtk_icon_view_new_with_model,gtk_icon_view_new_with_model_db);
extern GType gtk_side_type_get_type_db(void);
CheckInterfacedef(gtk_side_type_get_type,gtk_side_type_get_type_db);
extern void gtk_settings_install_property_db(GParamSpec *);
CheckInterfacedef(gtk_settings_install_property,gtk_settings_install_property_db);
extern void gtk_image_get_image_db(GtkImage *, GdkImage * *, GdkBitmap * *);
CheckInterfacedef(gtk_image_get_image,gtk_image_get_image_db);
extern GType gtk_entry_get_type_db(void);
CheckInterfacedef(gtk_entry_get_type,gtk_entry_get_type_db);
extern GType gtk_file_selection_get_type_db(void);
CheckInterfacedef(gtk_file_selection_get_type,gtk_file_selection_get_type_db);
extern void gtk_calendar_set_display_options_db(GtkCalendar *, GtkCalendarDisplayOptions);
CheckInterfacedef(gtk_calendar_set_display_options,gtk_calendar_set_display_options_db);
extern gboolean gtk_entry_completion_get_popup_completion_db(GtkEntryCompletion *);
CheckInterfacedef(gtk_entry_completion_get_popup_completion,gtk_entry_completion_get_popup_completion_db);
extern void gtk_widget_pop_composite_child_db(void);
CheckInterfacedef(gtk_widget_pop_composite_child,gtk_widget_pop_composite_child_db);
extern gboolean gtk_text_iter_forward_cursor_position_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_forward_cursor_position,gtk_text_iter_forward_cursor_position_db);
extern void gtk_drag_dest_set_target_list_db(GtkWidget *, GtkTargetList *);
CheckInterfacedef(gtk_drag_dest_set_target_list,gtk_drag_dest_set_target_list_db);
extern GtkTextAttributes * gtk_text_attributes_new_db(void);
CheckInterfacedef(gtk_text_attributes_new,gtk_text_attributes_new_db);
extern void gtk_paned_pack2_db(GtkPaned *, GtkWidget *, gboolean, gboolean);
CheckInterfacedef(gtk_paned_pack2,gtk_paned_pack2_db);
extern void gtk_aspect_frame_set_db(GtkAspectFrame *, gfloat, gfloat, gfloat, gboolean);
CheckInterfacedef(gtk_aspect_frame_set,gtk_aspect_frame_set_db);
extern void gtk_propagate_event_db(GtkWidget *, GdkEvent *);
CheckInterfacedef(gtk_propagate_event,gtk_propagate_event_db);
extern void gtk_rc_style_unref_db(GtkRcStyle *);
CheckInterfacedef(gtk_rc_style_unref,gtk_rc_style_unref_db);
extern void gtk_tree_path_prepend_index_db(GtkTreePath *, gint);
CheckInterfacedef(gtk_tree_path_prepend_index,gtk_tree_path_prepend_index_db);
extern void gtk_text_buffer_delete_mark_by_name_db(GtkTextBuffer *, const gchar *);
CheckInterfacedef(gtk_text_buffer_delete_mark_by_name,gtk_text_buffer_delete_mark_by_name_db);
extern GtkToolItem * gtk_separator_tool_item_new_db(void);
CheckInterfacedef(gtk_separator_tool_item_new,gtk_separator_tool_item_new_db);
extern void gtk_ruler_draw_pos_db(GtkRuler *);
CheckInterfacedef(gtk_ruler_draw_pos,gtk_ruler_draw_pos_db);
extern void gtk_im_context_focus_in_db(GtkIMContext *);
CheckInterfacedef(gtk_im_context_focus_in,gtk_im_context_focus_in_db);
extern void gtk_widget_shape_combine_mask_db(GtkWidget *, GdkBitmap *, gint, gint);
CheckInterfacedef(gtk_widget_shape_combine_mask,gtk_widget_shape_combine_mask_db);
extern gint gtk_dialog_run_db(GtkDialog *);
CheckInterfacedef(gtk_dialog_run,gtk_dialog_run_db);
extern gboolean gtk_cell_renderer_toggle_get_radio_db(GtkCellRendererToggle *);
CheckInterfacedef(gtk_cell_renderer_toggle_get_radio,gtk_cell_renderer_toggle_get_radio_db);
extern GType gtk_entry_completion_get_type_db(void);
CheckInterfacedef(gtk_entry_completion_get_type,gtk_entry_completion_get_type_db);
extern void gtk_tree_model_get_value_db(GtkTreeModel *, GtkTreeIter *, gint, GValue *);
CheckInterfacedef(gtk_tree_model_get_value,gtk_tree_model_get_value_db);
extern GType gtk_pack_type_get_type_db(void);
CheckInterfacedef(gtk_pack_type_get_type,gtk_pack_type_get_type_db);
extern GtkTreePath * gtk_tree_row_reference_get_path_db(GtkTreeRowReference *);
CheckInterfacedef(gtk_tree_row_reference_get_path,gtk_tree_row_reference_get_path_db);
extern void gtk_file_filter_add_custom_db(GtkFileFilter *, GtkFileFilterFlags, GtkFileFilterFunc, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_file_filter_add_custom,gtk_file_filter_add_custom_db);
extern void gtk_window_move_db(GtkWindow *, gint, gint);
CheckInterfacedef(gtk_window_move,gtk_window_move_db);
extern void gtk_tree_store_set_column_types_db(GtkTreeStore *, gint, GType *);
CheckInterfacedef(gtk_tree_store_set_column_types,gtk_tree_store_set_column_types_db);
extern gboolean gtk_text_buffer_insert_range_interactive_db(GtkTextBuffer *, GtkTextIter *, const GtkTextIter *, const GtkTextIter *, gboolean);
CheckInterfacedef(gtk_text_buffer_insert_range_interactive,gtk_text_buffer_insert_range_interactive_db);
extern gboolean gtk_color_selection_palette_from_string_db(const gchar *, GdkColor * *, gint *);
CheckInterfacedef(gtk_color_selection_palette_from_string,gtk_color_selection_palette_from_string_db);
extern void gtk_text_buffer_get_iter_at_mark_db(GtkTextBuffer *, GtkTextIter *, GtkTextMark *);
CheckInterfacedef(gtk_text_buffer_get_iter_at_mark,gtk_text_buffer_get_iter_at_mark_db);
extern GType gtk_target_flags_get_type_db(void);
CheckInterfacedef(gtk_target_flags_get_type,gtk_target_flags_get_type_db);
extern void gtk_text_view_move_child_db(GtkTextView *, GtkWidget *, gint, gint);
CheckInterfacedef(gtk_text_view_move_child,gtk_text_view_move_child_db);
extern void gtk_binding_entry_add_signal_db(GtkBindingSet *, guint, GdkModifierType, const gchar *, guint, ...);
CheckInterfacedef(gtk_binding_entry_add_signal,gtk_binding_entry_add_signal_db);
extern void gtk_text_iter_set_line_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_set_line,gtk_text_iter_set_line_db);
extern void gtk_text_buffer_set_text_db(GtkTextBuffer *, const gchar *, gint);
CheckInterfacedef(gtk_text_buffer_set_text,gtk_text_buffer_set_text_db);
extern void gtk_window_set_default_icon_name_db(const gchar *);
CheckInterfacedef(gtk_window_set_default_icon_name,gtk_window_set_default_icon_name_db);
extern const char * gtk_expander_get_label_db(GtkExpander *);
CheckInterfacedef(gtk_expander_get_label,gtk_expander_get_label_db);
extern gpointer gtk_tree_selection_get_user_data_db(GtkTreeSelection *);
CheckInterfacedef(gtk_tree_selection_get_user_data,gtk_tree_selection_get_user_data_db);
extern GtkWidget * gtk_button_new_from_stock_db(const gchar *);
CheckInterfacedef(gtk_button_new_from_stock,gtk_button_new_from_stock_db);
extern void gtk_text_iter_set_line_index_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_set_line_index,gtk_text_iter_set_line_index_db);
extern GType gtk_radio_action_get_type_db(void);
CheckInterfacedef(gtk_radio_action_get_type,gtk_radio_action_get_type_db);
extern GtkAdjustment * gtk_tree_view_get_vadjustment_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_vadjustment,gtk_tree_view_get_vadjustment_db);
extern void gtk_label_set_line_wrap_db(GtkLabel *, gboolean);
CheckInterfacedef(gtk_label_set_line_wrap,gtk_label_set_line_wrap_db);
extern gchar * gtk_accelerator_get_label_db(guint, GdkModifierType);
CheckInterfacedef(gtk_accelerator_get_label,gtk_accelerator_get_label_db);
extern void gtk_socket_add_id_db(GtkSocket *, GdkNativeWindow);
CheckInterfacedef(gtk_socket_add_id,gtk_socket_add_id_db);
extern GtkWidget * gtk_font_selection_new_db(void);
CheckInterfacedef(gtk_font_selection_new,gtk_font_selection_new_db);
extern void gtk_text_iter_order_db(GtkTextIter *, GtkTextIter *);
CheckInterfacedef(gtk_text_iter_order,gtk_text_iter_order_db);
extern GtkWidget * gtk_radio_menu_item_new_from_widget_db(GtkRadioMenuItem *);
CheckInterfacedef(gtk_radio_menu_item_new_from_widget,gtk_radio_menu_item_new_from_widget_db);
extern gint gtk_text_iter_get_visible_line_index_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_visible_line_index,gtk_text_iter_get_visible_line_index_db);
extern gboolean gtk_widget_get_child_visible_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_child_visible,gtk_widget_get_child_visible_db);
extern void gtk_about_dialog_set_documenters_db(GtkAboutDialog *, const gchar * *);
CheckInterfacedef(gtk_about_dialog_set_documenters,gtk_about_dialog_set_documenters_db);
extern GtkToolItem * gtk_menu_tool_button_new_from_stock_db(const gchar *);
CheckInterfacedef(gtk_menu_tool_button_new_from_stock,gtk_menu_tool_button_new_from_stock_db);
extern void gtk_accel_map_save_fd_db(gint);
CheckInterfacedef(gtk_accel_map_save_fd,gtk_accel_map_save_fd_db);
extern void gtk_tree_sortable_set_default_sort_func_db(GtkTreeSortable *, GtkTreeIterCompareFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_tree_sortable_set_default_sort_func,gtk_tree_sortable_set_default_sort_func_db);
extern GType gtk_text_tag_get_type_db(void);
CheckInterfacedef(gtk_text_tag_get_type,gtk_text_tag_get_type_db);
extern gboolean gtk_widget_child_focus_db(GtkWidget *, GtkDirectionType);
CheckInterfacedef(gtk_widget_child_focus,gtk_widget_child_focus_db);
extern void gtk_tree_view_set_drag_dest_row_db(GtkTreeView *, GtkTreePath *, GtkTreeViewDropPosition);
CheckInterfacedef(gtk_tree_view_set_drag_dest_row,gtk_tree_view_set_drag_dest_row_db);
extern void gtk_layout_set_vadjustment_db(GtkLayout *, GtkAdjustment *);
CheckInterfacedef(gtk_layout_set_vadjustment,gtk_layout_set_vadjustment_db);
extern void gtk_text_view_scroll_to_mark_db(GtkTextView *, GtkTextMark *, gdouble, gboolean, gdouble, gdouble);
CheckInterfacedef(gtk_text_view_scroll_to_mark,gtk_text_view_scroll_to_mark_db);
extern const gchar * gtk_about_dialog_get_translator_credits_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_translator_credits,gtk_about_dialog_get_translator_credits_db);
extern gboolean gtk_notebook_get_scrollable_db(GtkNotebook *);
CheckInterfacedef(gtk_notebook_get_scrollable,gtk_notebook_get_scrollable_db);
extern gboolean gtk_text_iter_forward_word_ends_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_forward_word_ends,gtk_text_iter_forward_word_ends_db);
extern void gtk_tree_view_column_set_clickable_db(GtkTreeViewColumn *, gboolean);
CheckInterfacedef(gtk_tree_view_column_set_clickable,gtk_tree_view_column_set_clickable_db);
extern void gtk_ui_manager_insert_action_group_db(GtkUIManager *, GtkActionGroup *, gint);
CheckInterfacedef(gtk_ui_manager_insert_action_group,gtk_ui_manager_insert_action_group_db);
extern void gtk_text_iter_free_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_free,gtk_text_iter_free_db);
extern GdkPixbuf * gtk_clipboard_wait_for_image_db(GtkClipboard *);
CheckInterfacedef(gtk_clipboard_wait_for_image,gtk_clipboard_wait_for_image_db);
extern void gtk_im_multicontext_append_menuitems_db(GtkIMMulticontext *, GtkMenuShell *);
CheckInterfacedef(gtk_im_multicontext_append_menuitems,gtk_im_multicontext_append_menuitems_db);
extern gint gtk_tree_view_column_get_max_width_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_max_width,gtk_tree_view_column_get_max_width_db);
extern GdkDisplay * gtk_widget_get_display_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_display,gtk_widget_get_display_db);
extern void gtk_scrolled_window_add_with_viewport_db(GtkScrolledWindow *, GtkWidget *);
CheckInterfacedef(gtk_scrolled_window_add_with_viewport,gtk_scrolled_window_add_with_viewport_db);
extern GType gtk_justification_get_type_db(void);
CheckInterfacedef(gtk_justification_get_type,gtk_justification_get_type_db);
extern void gtk_file_selection_show_fileop_buttons_db(GtkFileSelection *);
CheckInterfacedef(gtk_file_selection_show_fileop_buttons,gtk_file_selection_show_fileop_buttons_db);
extern void gtk_widget_set_size_request_db(GtkWidget *, gint, gint);
CheckInterfacedef(gtk_widget_set_size_request,gtk_widget_set_size_request_db);
extern const gchar * gtk_about_dialog_get_copyright_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_copyright,gtk_about_dialog_get_copyright_db);
extern void gtk_window_begin_move_drag_db(GtkWindow *, gint, gint, gint, guint32);
CheckInterfacedef(gtk_window_begin_move_drag,gtk_window_begin_move_drag_db);
extern void gtk_range_set_adjustment_db(GtkRange *, GtkAdjustment *);
CheckInterfacedef(gtk_range_set_adjustment,gtk_range_set_adjustment_db);
extern gboolean gtk_text_iter_is_cursor_position_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_is_cursor_position,gtk_text_iter_is_cursor_position_db);
extern gboolean gtk_text_iter_ends_sentence_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_ends_sentence,gtk_text_iter_ends_sentence_db);
extern gboolean gtk_text_view_forward_display_line_db(GtkTextView *, GtkTextIter *);
CheckInterfacedef(gtk_text_view_forward_display_line,gtk_text_view_forward_display_line_db);
extern void gtk_item_toggle_db(GtkItem *);
CheckInterfacedef(gtk_item_toggle,gtk_item_toggle_db);
extern gint gtk_tree_path_compare_db(const GtkTreePath *, const GtkTreePath *);
CheckInterfacedef(gtk_tree_path_compare,gtk_tree_path_compare_db);
extern GtkWidget * gtk_paned_get_child1_db(GtkPaned *);
CheckInterfacedef(gtk_paned_get_child1,gtk_paned_get_child1_db);
extern GType gtk_rc_style_get_type_db(void);
CheckInterfacedef(gtk_rc_style_get_type,gtk_rc_style_get_type_db);
extern gint gtk_text_view_get_right_margin_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_right_margin,gtk_text_view_get_right_margin_db);
extern void gtk_paint_extension_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, gchar *, gint, gint, gint, gint, GtkPositionType);
CheckInterfacedef(gtk_paint_extension,gtk_paint_extension_db);
extern void gtk_icon_source_set_state_wildcarded_db(GtkIconSource *, gboolean);
CheckInterfacedef(gtk_icon_source_set_state_wildcarded,gtk_icon_source_set_state_wildcarded_db);
extern guint16 gtk_color_selection_get_previous_alpha_db(GtkColorSelection *);
CheckInterfacedef(gtk_color_selection_get_previous_alpha,gtk_color_selection_get_previous_alpha_db);
extern gboolean gtk_file_chooser_set_current_folder_db(GtkFileChooser *, const gchar *);
CheckInterfacedef(gtk_file_chooser_set_current_folder,gtk_file_chooser_set_current_folder_db);
extern GdkNativeWindow gtk_plug_get_id_db(GtkPlug *);
CheckInterfacedef(gtk_plug_get_id,gtk_plug_get_id_db);
extern GtkAdjustment * gtk_range_get_adjustment_db(GtkRange *);
CheckInterfacedef(gtk_range_get_adjustment,gtk_range_get_adjustment_db);
extern GType gtk_ui_manager_get_type_db(void);
CheckInterfacedef(gtk_ui_manager_get_type,gtk_ui_manager_get_type_db);
extern void gtk_color_selection_set_has_opacity_control_db(GtkColorSelection *, gboolean);
CheckInterfacedef(gtk_color_selection_set_has_opacity_control,gtk_color_selection_set_has_opacity_control_db);
extern gboolean gtk_drag_check_threshold_db(GtkWidget *, gint, gint, gint, gint);
CheckInterfacedef(gtk_drag_check_threshold,gtk_drag_check_threshold_db);
extern GtkWidget * gtk_paned_get_child2_db(GtkPaned *);
CheckInterfacedef(gtk_paned_get_child2,gtk_paned_get_child2_db);
extern void gtk_icon_view_set_orientation_db(GtkIconView *, GtkOrientation);
CheckInterfacedef(gtk_icon_view_set_orientation,gtk_icon_view_set_orientation_db);
extern void gtk_font_button_set_use_size_db(GtkFontButton *, gboolean);
CheckInterfacedef(gtk_font_button_set_use_size,gtk_font_button_set_use_size_db);
extern gboolean gtk_file_chooser_add_shortcut_folder_db(GtkFileChooser *, const char *, GError * *);
CheckInterfacedef(gtk_file_chooser_add_shortcut_folder,gtk_file_chooser_add_shortcut_folder_db);
extern void gtk_text_buffer_get_iter_at_child_anchor_db(GtkTextBuffer *, GtkTextIter *, GtkTextChildAnchor *);
CheckInterfacedef(gtk_text_buffer_get_iter_at_child_anchor,gtk_text_buffer_get_iter_at_child_anchor_db);
extern void gtk_stock_add_static_db(const GtkStockItem *, guint);
CheckInterfacedef(gtk_stock_add_static,gtk_stock_add_static_db);
extern GtkStyle * gtk_style_copy_db(GtkStyle *);
CheckInterfacedef(gtk_style_copy,gtk_style_copy_db);
extern GtkWidget * gtk_file_chooser_button_new_with_dialog_db(GtkWidget *);
CheckInterfacedef(gtk_file_chooser_button_new_with_dialog,gtk_file_chooser_button_new_with_dialog_db);
extern void gtk_tree_store_reorder_db(GtkTreeStore *, GtkTreeIter *, gint *);
CheckInterfacedef(gtk_tree_store_reorder,gtk_tree_store_reorder_db);
extern gboolean gtk_window_parse_geometry_db(GtkWindow *, const gchar *);
CheckInterfacedef(gtk_window_parse_geometry,gtk_window_parse_geometry_db);
extern void gtk_icon_source_set_direction_wildcarded_db(GtkIconSource *, gboolean);
CheckInterfacedef(gtk_icon_source_set_direction_wildcarded,gtk_icon_source_set_direction_wildcarded_db);
extern void gtk_im_context_reset_db(GtkIMContext *);
CheckInterfacedef(gtk_im_context_reset,gtk_im_context_reset_db);
extern GType gtk_debug_flag_get_type_db(void);
CheckInterfacedef(gtk_debug_flag_get_type,gtk_debug_flag_get_type_db);
extern void gtk_tree_path_free_db(GtkTreePath *);
CheckInterfacedef(gtk_tree_path_free,gtk_tree_path_free_db);
extern GtkRcStyle * gtk_widget_get_modifier_style_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_modifier_style,gtk_widget_get_modifier_style_db);
extern void gtk_icon_source_set_direction_db(GtkIconSource *, GtkTextDirection);
CheckInterfacedef(gtk_icon_source_set_direction,gtk_icon_source_set_direction_db);
extern GtkTreeViewColumn * gtk_tree_view_get_column_db(GtkTreeView *, gint);
CheckInterfacedef(gtk_tree_view_get_column,gtk_tree_view_get_column_db);
extern GtkWidget * gtk_notebook_new_db(void);
CheckInterfacedef(gtk_notebook_new,gtk_notebook_new_db);
extern void gtk_window_unstick_db(GtkWindow *);
CheckInterfacedef(gtk_window_unstick,gtk_window_unstick_db);
extern GParamSpec * gtk_widget_class_find_style_property_db(GtkWidgetClass *, const gchar *);
CheckInterfacedef(gtk_widget_class_find_style_property,gtk_widget_class_find_style_property_db);
extern void gtk_combo_box_set_wrap_width_db(GtkComboBox *, gint);
CheckInterfacedef(gtk_combo_box_set_wrap_width,gtk_combo_box_set_wrap_width_db);
extern void gtk_spin_button_set_increments_db(GtkSpinButton *, gdouble, gdouble);
CheckInterfacedef(gtk_spin_button_set_increments,gtk_spin_button_set_increments_db);
extern GtkAdjustment * gtk_tree_view_get_hadjustment_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_hadjustment,gtk_tree_view_get_hadjustment_db);
extern void gtk_window_set_icon_db(GtkWindow *, GdkPixbuf *);
CheckInterfacedef(gtk_window_set_icon,gtk_window_set_icon_db);
extern gint gtk_text_view_get_pixels_inside_wrap_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_pixels_inside_wrap,gtk_text_view_get_pixels_inside_wrap_db);
extern void gtk_icon_factory_add_db(GtkIconFactory *, const gchar *, GtkIconSet *);
CheckInterfacedef(gtk_icon_factory_add,gtk_icon_factory_add_db);
extern void gtk_container_propagate_expose_db(GtkContainer *, GtkWidget *, GdkEventExpose *);
CheckInterfacedef(gtk_container_propagate_expose,gtk_container_propagate_expose_db);
extern void gtk_list_store_move_after_db(GtkListStore *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_list_store_move_after,gtk_list_store_move_after_db);
extern GtkWidget * gtk_color_selection_new_db(void);
CheckInterfacedef(gtk_color_selection_new,gtk_color_selection_new_db);
extern GtkOrientation gtk_tool_item_get_orientation_db(GtkToolItem *);
CheckInterfacedef(gtk_tool_item_get_orientation,gtk_tool_item_get_orientation_db);
extern GtkTextAttributes * gtk_text_attributes_ref_db(GtkTextAttributes *);
CheckInterfacedef(gtk_text_attributes_ref,gtk_text_attributes_ref_db);
extern void gtk_label_set_use_markup_db(GtkLabel *, gboolean);
CheckInterfacedef(gtk_label_set_use_markup,gtk_label_set_use_markup_db);
extern GtkWidget * gtk_message_dialog_new_db(GtkWindow *, GtkDialogFlags, GtkMessageType, GtkButtonsType, const gchar *, ...);
CheckInterfacedef(gtk_message_dialog_new,gtk_message_dialog_new_db);
extern GType gtk_hseparator_get_type_db(void);
CheckInterfacedef(gtk_hseparator_get_type,gtk_hseparator_get_type_db);
extern void gtk_menu_set_active_db(GtkMenu *, guint);
CheckInterfacedef(gtk_menu_set_active,gtk_menu_set_active_db);
extern gboolean gtk_text_buffer_get_modified_db(GtkTextBuffer *);
CheckInterfacedef(gtk_text_buffer_get_modified,gtk_text_buffer_get_modified_db);
extern void gtk_icon_view_select_path_db(GtkIconView *, GtkTreePath *);
CheckInterfacedef(gtk_icon_view_select_path,gtk_icon_view_select_path_db);
extern gboolean gtk_widget_can_activate_accel_db(GtkWidget *, guint);
CheckInterfacedef(gtk_widget_can_activate_accel,gtk_widget_can_activate_accel_db);
extern void gtk_box_pack_end_db(GtkBox *, GtkWidget *, gboolean, gboolean, guint);
CheckInterfacedef(gtk_box_pack_end,gtk_box_pack_end_db);
extern gboolean gtk_dialog_get_has_separator_db(GtkDialog *);
CheckInterfacedef(gtk_dialog_get_has_separator,gtk_dialog_get_has_separator_db);
extern void gtk_tree_store_insert_db(GtkTreeStore *, GtkTreeIter *, GtkTreeIter *, gint);
CheckInterfacedef(gtk_tree_store_insert,gtk_tree_store_insert_db);
extern GType gtk_position_type_get_type_db(void);
CheckInterfacedef(gtk_position_type_get_type,gtk_position_type_get_type_db);
extern gboolean gtk_file_chooser_remove_shortcut_folder_db(GtkFileChooser *, const char *, GError * *);
CheckInterfacedef(gtk_file_chooser_remove_shortcut_folder,gtk_file_chooser_remove_shortcut_folder_db);
extern gboolean gtk_text_iter_forward_visible_word_end_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_forward_visible_word_end,gtk_text_iter_forward_visible_word_end_db);
extern gboolean gtk_tool_item_get_homogeneous_db(GtkToolItem *);
CheckInterfacedef(gtk_tool_item_get_homogeneous,gtk_tool_item_get_homogeneous_db);
extern gboolean gtk_parse_args_db(int *, char * * *);
CheckInterfacedef(gtk_parse_args,gtk_parse_args_db);
extern void gtk_window_set_screen_db(GtkWindow *, GdkScreen *);
CheckInterfacedef(gtk_window_set_screen,gtk_window_set_screen_db);
extern GtkJustification gtk_text_view_get_justification_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_justification,gtk_text_view_get_justification_db);
extern void gtk_container_remove_db(GtkContainer *, GtkWidget *);
CheckInterfacedef(gtk_container_remove,gtk_container_remove_db);
extern void gtk_range_set_increments_db(GtkRange *, gdouble, gdouble);
CheckInterfacedef(gtk_range_set_increments,gtk_range_set_increments_db);
extern void gtk_action_group_add_action_db(GtkActionGroup *, GtkAction *);
CheckInterfacedef(gtk_action_group_add_action,gtk_action_group_add_action_db);
extern void gtk_icon_theme_append_search_path_db(GtkIconTheme *, const gchar *);
CheckInterfacedef(gtk_icon_theme_append_search_path,gtk_icon_theme_append_search_path_db);
extern void gtk_widget_destroyed_db(GtkWidget *, GtkWidget * *);
CheckInterfacedef(gtk_widget_destroyed,gtk_widget_destroyed_db);
extern void gtk_image_set_from_file_db(GtkImage *, const gchar *);
CheckInterfacedef(gtk_image_set_from_file,gtk_image_set_from_file_db);
extern gint gtk_icon_view_get_pixbuf_column_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_pixbuf_column,gtk_icon_view_get_pixbuf_column_db);
extern void gtk_size_group_add_widget_db(GtkSizeGroup *, GtkWidget *);
CheckInterfacedef(gtk_size_group_add_widget,gtk_size_group_add_widget_db);
extern gboolean gtk_tree_view_column_get_expand_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_expand,gtk_tree_view_column_get_expand_db);
extern GtkWidget * gtk_menu_new_db(void);
CheckInterfacedef(gtk_menu_new,gtk_menu_new_db);
extern GType gtk_window_get_type_db(void);
CheckInterfacedef(gtk_window_get_type,gtk_window_get_type_db);
extern GType gtk_range_get_type_db(void);
CheckInterfacedef(gtk_range_get_type,gtk_range_get_type_db);
extern void gtk_rc_parse_string_db(const gchar *);
CheckInterfacedef(gtk_rc_parse_string,gtk_rc_parse_string_db);
extern GType gtk_progress_bar_style_get_type_db(void);
CheckInterfacedef(gtk_progress_bar_style_get_type,gtk_progress_bar_style_get_type_db);
extern void gtk_container_set_focus_hadjustment_db(GtkContainer *, GtkAdjustment *);
CheckInterfacedef(gtk_container_set_focus_hadjustment,gtk_container_set_focus_hadjustment_db);
extern void gtk_accel_map_foreach_db(gpointer, GtkAccelMapForeach);
CheckInterfacedef(gtk_accel_map_foreach,gtk_accel_map_foreach_db);
extern gchar * * gtk_file_selection_get_selections_db(GtkFileSelection *);
CheckInterfacedef(gtk_file_selection_get_selections,gtk_file_selection_get_selections_db);
extern gboolean gtk_spin_button_get_wrap_db(GtkSpinButton *);
CheckInterfacedef(gtk_spin_button_get_wrap,gtk_spin_button_get_wrap_db);
extern GType gtk_dialog_get_type_db(void);
CheckInterfacedef(gtk_dialog_get_type,gtk_dialog_get_type_db);
extern GType gtk_misc_get_type_db(void);
CheckInterfacedef(gtk_misc_get_type,gtk_misc_get_type_db);
extern void gtk_selection_add_target_db(GtkWidget *, GdkAtom, GdkAtom, guint);
CheckInterfacedef(gtk_selection_add_target,gtk_selection_add_target_db);
extern GtkWidget * gtk_file_chooser_dialog_new_db(const gchar *, GtkWindow *, GtkFileChooserAction, const gchar *, ...);
CheckInterfacedef(gtk_file_chooser_dialog_new,gtk_file_chooser_dialog_new_db);
extern void gtk_quit_remove_db(guint);
CheckInterfacedef(gtk_quit_remove,gtk_quit_remove_db);
extern GtkSizeGroupMode gtk_size_group_get_mode_db(GtkSizeGroup *);
CheckInterfacedef(gtk_size_group_get_mode,gtk_size_group_get_mode_db);
extern void gtk_action_group_set_translation_domain_db(GtkActionGroup *, const gchar *);
CheckInterfacedef(gtk_action_group_set_translation_domain,gtk_action_group_set_translation_domain_db);
extern void gtk_notebook_remove_page_db(GtkNotebook *, gint);
CheckInterfacedef(gtk_notebook_remove_page,gtk_notebook_remove_page_db);
extern const gchar * gtk_font_button_get_title_db(GtkFontButton *);
CheckInterfacedef(gtk_font_button_get_title,gtk_font_button_get_title_db);
extern void gtk_file_filter_add_pixbuf_formats_db(GtkFileFilter *);
CheckInterfacedef(gtk_file_filter_add_pixbuf_formats,gtk_file_filter_add_pixbuf_formats_db);
extern void gtk_editable_cut_clipboard_db(GtkEditable *);
CheckInterfacedef(gtk_editable_cut_clipboard,gtk_editable_cut_clipboard_db);
extern void gtk_tree_view_column_set_expand_db(GtkTreeViewColumn *, gboolean);
CheckInterfacedef(gtk_tree_view_column_set_expand,gtk_tree_view_column_set_expand_db);
extern void gtk_widget_thaw_child_notify_db(GtkWidget *);
CheckInterfacedef(gtk_widget_thaw_child_notify,gtk_widget_thaw_child_notify_db);
extern void gtk_label_set_attributes_db(GtkLabel *, PangoAttrList *);
CheckInterfacedef(gtk_label_set_attributes,gtk_label_set_attributes_db);
extern void gtk_ui_manager_remove_ui_db(GtkUIManager *, guint);
CheckInterfacedef(gtk_ui_manager_remove_ui,gtk_ui_manager_remove_ui_db);
extern gboolean gtk_text_iter_forward_chars_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_forward_chars,gtk_text_iter_forward_chars_db);
extern void gtk_entry_set_invisible_char_db(GtkEntry *, gunichar);
CheckInterfacedef(gtk_entry_set_invisible_char,gtk_entry_set_invisible_char_db);
extern void gtk_text_view_set_border_window_size_db(GtkTextView *, GtkTextWindowType, gint);
CheckInterfacedef(gtk_text_view_set_border_window_size,gtk_text_view_set_border_window_size_db);
extern void gtk_notebook_query_tab_label_packing_db(GtkNotebook *, GtkWidget *, gboolean *, gboolean *, GtkPackType *);
CheckInterfacedef(gtk_notebook_query_tab_label_packing,gtk_notebook_query_tab_label_packing_db);
extern GtkWidget * gtk_radio_menu_item_new_with_mnemonic_from_widget_db(GtkRadioMenuItem *, const gchar *);
CheckInterfacedef(gtk_radio_menu_item_new_with_mnemonic_from_widget,gtk_radio_menu_item_new_with_mnemonic_from_widget_db);
extern GtkWidget * gtk_toggle_button_new_with_label_db(const gchar *);
CheckInterfacedef(gtk_toggle_button_new_with_label,gtk_toggle_button_new_with_label_db);
extern GType gtk_buttons_type_get_type_db(void);
CheckInterfacedef(gtk_buttons_type_get_type,gtk_buttons_type_get_type_db);
extern void gtk_text_buffer_apply_tag_by_name_db(GtkTextBuffer *, const gchar *, const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_apply_tag_by_name,gtk_text_buffer_apply_tag_by_name_db);
extern void gtk_accel_group_connect_db(GtkAccelGroup *, guint, GdkModifierType, GtkAccelFlags, GClosure *);
CheckInterfacedef(gtk_accel_group_connect,gtk_accel_group_connect_db);
extern gchar * gtk_text_iter_get_visible_text_db(const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_visible_text,gtk_text_iter_get_visible_text_db);
extern gboolean gtk_stock_lookup_db(const gchar *, GtkStockItem *);
CheckInterfacedef(gtk_stock_lookup,gtk_stock_lookup_db);
extern void gtk_label_set_mnemonic_widget_db(GtkLabel *, GtkWidget *);
CheckInterfacedef(gtk_label_set_mnemonic_widget,gtk_label_set_mnemonic_widget_db);
extern void gtk_tree_view_collapse_all_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_collapse_all,gtk_tree_view_collapse_all_db);
extern void gtk_action_set_accel_group_db(GtkAction *, GtkAccelGroup *);
CheckInterfacedef(gtk_action_set_accel_group,gtk_action_set_accel_group_db);
extern void gtk_ui_manager_add_ui_db(GtkUIManager *, guint, const gchar *, const gchar *, const gchar *, GtkUIManagerItemType, gboolean);
CheckInterfacedef(gtk_ui_manager_add_ui,gtk_ui_manager_add_ui_db);
extern GtkWidget * gtk_check_menu_item_new_with_label_db(const gchar *);
CheckInterfacedef(gtk_check_menu_item_new_with_label,gtk_check_menu_item_new_with_label_db);
extern void gtk_window_set_default_icon_db(GdkPixbuf *);
CheckInterfacedef(gtk_window_set_default_icon,gtk_window_set_default_icon_db);
extern gboolean gtk_tree_selection_iter_is_selected_db(GtkTreeSelection *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_selection_iter_is_selected,gtk_tree_selection_iter_is_selected_db);
extern void gtk_scrolled_window_get_policy_db(GtkScrolledWindow *, GtkPolicyType *, GtkPolicyType *);
CheckInterfacedef(gtk_scrolled_window_get_policy,gtk_scrolled_window_get_policy_db);
extern void gtk_adjustment_clamp_page_db(GtkAdjustment *, gdouble, gdouble);
CheckInterfacedef(gtk_adjustment_clamp_page,gtk_adjustment_clamp_page_db);
extern void gtk_about_dialog_set_translator_credits_db(GtkAboutDialog *, const gchar *);
CheckInterfacedef(gtk_about_dialog_set_translator_credits,gtk_about_dialog_set_translator_credits_db);
extern void gtk_menu_item_remove_submenu_db(GtkMenuItem *);
CheckInterfacedef(gtk_menu_item_remove_submenu,gtk_menu_item_remove_submenu_db);
extern GtkResizeMode gtk_container_get_resize_mode_db(GtkContainer *);
CheckInterfacedef(gtk_container_get_resize_mode,gtk_container_get_resize_mode_db);
extern GtkWidget * gtk_menu_item_new_with_label_db(const gchar *);
CheckInterfacedef(gtk_menu_item_new_with_label,gtk_menu_item_new_with_label_db);
extern gboolean gtk_tree_sortable_has_default_sort_func_db(GtkTreeSortable *);
CheckInterfacedef(gtk_tree_sortable_has_default_sort_func,gtk_tree_sortable_has_default_sort_func_db);
extern void gtk_accel_map_foreach_unfiltered_db(gpointer, GtkAccelMapForeach);
CheckInterfacedef(gtk_accel_map_foreach_unfiltered,gtk_accel_map_foreach_unfiltered_db);
extern GType gtk_editable_get_type_db(void);
CheckInterfacedef(gtk_editable_get_type,gtk_editable_get_type_db);
extern void gtk_widget_show_now_db(GtkWidget *);
CheckInterfacedef(gtk_widget_show_now,gtk_widget_show_now_db);
extern GtkColorSelectionChangePaletteWithScreenFunc gtk_color_selection_set_change_palette_with_screen_hook_db(GtkColorSelectionChangePaletteWithScreenFunc);
CheckInterfacedef(gtk_color_selection_set_change_palette_with_screen_hook,gtk_color_selection_set_change_palette_with_screen_hook_db);
extern void gtk_entry_completion_complete_db(GtkEntryCompletion *);
CheckInterfacedef(gtk_entry_completion_complete,gtk_entry_completion_complete_db);
extern gboolean gtk_tree_get_row_drag_data_db(GtkSelectionData *, GtkTreeModel * *, GtkTreePath * *);
CheckInterfacedef(gtk_tree_get_row_drag_data,gtk_tree_get_row_drag_data_db);
extern gchar * gtk_rc_get_im_module_file_db(void);
CheckInterfacedef(gtk_rc_get_im_module_file,gtk_rc_get_im_module_file_db);
extern void gtk_text_view_get_line_at_y_db(GtkTextView *, GtkTextIter *, gint, gint *);
CheckInterfacedef(gtk_text_view_get_line_at_y,gtk_text_view_get_line_at_y_db);
extern GtkToolbarStyle gtk_tool_item_get_toolbar_style_db(GtkToolItem *);
CheckInterfacedef(gtk_tool_item_get_toolbar_style,gtk_tool_item_get_toolbar_style_db);
extern gint gtk_tree_view_column_get_fixed_width_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_fixed_width,gtk_tree_view_column_get_fixed_width_db);
extern const gchar * gtk_icon_source_get_icon_name_db(const GtkIconSource *);
CheckInterfacedef(gtk_icon_source_get_icon_name,gtk_icon_source_get_icon_name_db);
extern GtkStyle * gtk_rc_get_style_by_paths_db(GtkSettings *, const char *, const char *, GType);
CheckInterfacedef(gtk_rc_get_style_by_paths,gtk_rc_get_style_by_paths_db);
extern gint gtk_text_view_get_left_margin_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_left_margin,gtk_text_view_get_left_margin_db);
extern void gtk_target_list_remove_db(GtkTargetList *, GdkAtom);
CheckInterfacedef(gtk_target_list_remove,gtk_target_list_remove_db);
extern void gtk_stock_add_db(const GtkStockItem *, guint);
CheckInterfacedef(gtk_stock_add,gtk_stock_add_db);
extern void gtk_progress_bar_pulse_db(GtkProgressBar *);
CheckInterfacedef(gtk_progress_bar_pulse,gtk_progress_bar_pulse_db);
extern void gtk_scale_set_value_pos_db(GtkScale *, GtkPositionType);
CheckInterfacedef(gtk_scale_set_value_pos,gtk_scale_set_value_pos_db);
extern void gtk_label_set_max_width_chars_db(GtkLabel *, gint);
CheckInterfacedef(gtk_label_set_max_width_chars,gtk_label_set_max_width_chars_db);
extern gint gtk_label_get_width_chars_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_width_chars,gtk_label_get_width_chars_db);
extern GtkWidget * gtk_viewport_new_db(GtkAdjustment *, GtkAdjustment *);
CheckInterfacedef(gtk_viewport_new,gtk_viewport_new_db);
extern void gtk_tree_store_insert_after_db(GtkTreeStore *, GtkTreeIter *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_store_insert_after,gtk_tree_store_insert_after_db);
extern GType gtk_font_selection_dialog_get_type_db(void);
CheckInterfacedef(gtk_font_selection_dialog_get_type,gtk_font_selection_dialog_get_type_db);
extern void gtk_accel_map_load_fd_db(gint);
CheckInterfacedef(gtk_accel_map_load_fd,gtk_accel_map_load_fd_db);
extern void gtk_editable_delete_selection_db(GtkEditable *);
CheckInterfacedef(gtk_editable_delete_selection,gtk_editable_delete_selection_db);
extern GtkShadowType gtk_viewport_get_shadow_type_db(GtkViewport *);
CheckInterfacedef(gtk_viewport_get_shadow_type,gtk_viewport_get_shadow_type_db);
extern GType gtk_color_button_get_type_db(void);
CheckInterfacedef(gtk_color_button_get_type,gtk_color_button_get_type_db);
extern void gtk_container_set_reallocate_redraws_db(GtkContainer *, gboolean);
CheckInterfacedef(gtk_container_set_reallocate_redraws,gtk_container_set_reallocate_redraws_db);
extern void gtk_menu_shell_select_item_db(GtkMenuShell *, GtkWidget *);
CheckInterfacedef(gtk_menu_shell_select_item,gtk_menu_shell_select_item_db);
extern void gtk_toggle_button_set_mode_db(GtkToggleButton *, gboolean);
CheckInterfacedef(gtk_toggle_button_set_mode,gtk_toggle_button_set_mode_db);
extern gint * gtk_tree_path_get_indices_db(GtkTreePath *);
CheckInterfacedef(gtk_tree_path_get_indices,gtk_tree_path_get_indices_db);
extern void gtk_target_list_add_image_targets_db(GtkTargetList *, guint, gboolean);
CheckInterfacedef(gtk_target_list_add_image_targets,gtk_target_list_add_image_targets_db);
extern GtkSelectionMode gtk_tree_selection_get_mode_db(GtkTreeSelection *);
CheckInterfacedef(gtk_tree_selection_get_mode,gtk_tree_selection_get_mode_db);
extern GType gtk_arrow_get_type_db(void);
CheckInterfacedef(gtk_arrow_get_type,gtk_arrow_get_type_db);
extern gboolean gtk_clipboard_wait_is_image_available_db(GtkClipboard *);
CheckInterfacedef(gtk_clipboard_wait_is_image_available,gtk_clipboard_wait_is_image_available_db);
extern void gtk_icon_view_set_pixbuf_column_db(GtkIconView *, gint);
CheckInterfacedef(gtk_icon_view_set_pixbuf_column,gtk_icon_view_set_pixbuf_column_db);
extern gint gtk_notebook_get_n_pages_db(GtkNotebook *);
CheckInterfacedef(gtk_notebook_get_n_pages,gtk_notebook_get_n_pages_db);
extern gboolean gtk_text_iter_forward_find_char_db(GtkTextIter *, GtkTextCharPredicate, gpointer, const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_forward_find_char,gtk_text_iter_forward_find_char_db);
extern GList * gtk_window_get_icon_list_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_icon_list,gtk_window_get_icon_list_db);
extern void gtk_entry_set_width_chars_db(GtkEntry *, gint);
CheckInterfacedef(gtk_entry_set_width_chars,gtk_entry_set_width_chars_db);
extern GtkTreePath * gtk_tree_path_new_first_db(void);
CheckInterfacedef(gtk_tree_path_new_first,gtk_tree_path_new_first_db);
extern void gtk_im_context_set_cursor_location_db(GtkIMContext *, GdkRectangle *);
CheckInterfacedef(gtk_im_context_set_cursor_location,gtk_im_context_set_cursor_location_db);
extern void gtk_text_view_add_child_in_window_db(GtkTextView *, GtkWidget *, GtkTextWindowType, gint, gint);
CheckInterfacedef(gtk_text_view_add_child_in_window,gtk_text_view_add_child_in_window_db);
extern void gtk_tree_view_scroll_to_cell_db(GtkTreeView *, GtkTreePath *, GtkTreeViewColumn *, gboolean, gfloat, gfloat);
CheckInterfacedef(gtk_tree_view_scroll_to_cell,gtk_tree_view_scroll_to_cell_db);
extern void gtk_editable_set_position_db(GtkEditable *, gint);
CheckInterfacedef(gtk_editable_set_position,gtk_editable_set_position_db);
extern gint gtk_expander_get_spacing_db(GtkExpander *);
CheckInterfacedef(gtk_expander_get_spacing,gtk_expander_get_spacing_db);
extern void gtk_widget_add_events_db(GtkWidget *, gint);
CheckInterfacedef(gtk_widget_add_events,gtk_widget_add_events_db);
extern void gtk_tool_item_set_use_drag_window_db(GtkToolItem *, gboolean);
CheckInterfacedef(gtk_tool_item_set_use_drag_window,gtk_tool_item_set_use_drag_window_db);
extern gint gtk_tree_path_get_depth_db(GtkTreePath *);
CheckInterfacedef(gtk_tree_path_get_depth,gtk_tree_path_get_depth_db);
extern void gtk_spin_button_update_db(GtkSpinButton *);
CheckInterfacedef(gtk_spin_button_update,gtk_spin_button_update_db);
extern gboolean gtk_accel_group_disconnect_db(GtkAccelGroup *, GClosure *);
CheckInterfacedef(gtk_accel_group_disconnect,gtk_accel_group_disconnect_db);
extern void gtk_clipboard_request_contents_db(GtkClipboard *, GdkAtom, GtkClipboardReceivedFunc, gpointer);
CheckInterfacedef(gtk_clipboard_request_contents,gtk_clipboard_request_contents_db);
extern void gtk_tree_view_get_cell_area_db(GtkTreeView *, GtkTreePath *, GtkTreeViewColumn *, GdkRectangle *);
CheckInterfacedef(gtk_tree_view_get_cell_area,gtk_tree_view_get_cell_area_db);
extern GType gtk_combo_box_entry_get_type_db(void);
CheckInterfacedef(gtk_combo_box_entry_get_type,gtk_combo_box_entry_get_type_db);
extern GtkTextTagTable * gtk_text_buffer_get_tag_table_db(GtkTextBuffer *);
CheckInterfacedef(gtk_text_buffer_get_tag_table,gtk_text_buffer_get_tag_table_db);
extern gboolean gtk_tree_model_get_iter_db(GtkTreeModel *, GtkTreeIter *, GtkTreePath *);
CheckInterfacedef(gtk_tree_model_get_iter,gtk_tree_model_get_iter_db);
extern void gtk_window_remove_accel_group_db(GtkWindow *, GtkAccelGroup *);
CheckInterfacedef(gtk_window_remove_accel_group,gtk_window_remove_accel_group_db);
extern gint gtk_notebook_append_page_db(GtkNotebook *, GtkWidget *, GtkWidget *);
CheckInterfacedef(gtk_notebook_append_page,gtk_notebook_append_page_db);
extern void gtk_container_set_focus_vadjustment_db(GtkContainer *, GtkAdjustment *);
CheckInterfacedef(gtk_container_set_focus_vadjustment,gtk_container_set_focus_vadjustment_db);
extern void gtk_window_reshow_with_initial_size_db(GtkWindow *);
CheckInterfacedef(gtk_window_reshow_with_initial_size,gtk_window_reshow_with_initial_size_db);
extern void gtk_viewport_set_hadjustment_db(GtkViewport *, GtkAdjustment *);
CheckInterfacedef(gtk_viewport_set_hadjustment,gtk_viewport_set_hadjustment_db);
extern gboolean gtk_text_iter_backward_to_tag_toggle_db(GtkTextIter *, GtkTextTag *);
CheckInterfacedef(gtk_text_iter_backward_to_tag_toggle,gtk_text_iter_backward_to_tag_toggle_db);
extern void gtk_entry_completion_insert_action_text_db(GtkEntryCompletion *, gint, const gchar *);
CheckInterfacedef(gtk_entry_completion_insert_action_text,gtk_entry_completion_insert_action_text_db);
extern void gtk_editable_copy_clipboard_db(GtkEditable *);
CheckInterfacedef(gtk_editable_copy_clipboard,gtk_editable_copy_clipboard_db);
extern GtkTextMark * gtk_text_buffer_create_mark_db(GtkTextBuffer *, const gchar *, const GtkTextIter *, gboolean);
CheckInterfacedef(gtk_text_buffer_create_mark,gtk_text_buffer_create_mark_db);
extern GType gtk_scroll_type_get_type_db(void);
CheckInterfacedef(gtk_scroll_type_get_type,gtk_scroll_type_get_type_db);
extern void gtk_ui_manager_set_add_tearoffs_db(GtkUIManager *, gboolean);
CheckInterfacedef(gtk_ui_manager_set_add_tearoffs,gtk_ui_manager_set_add_tearoffs_db);
extern void gtk_paint_flat_box_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint, gint);
CheckInterfacedef(gtk_paint_flat_box,gtk_paint_flat_box_db);
extern void gtk_tree_view_get_cursor_db(GtkTreeView *, GtkTreePath * *, GtkTreeViewColumn * *);
CheckInterfacedef(gtk_tree_view_get_cursor,gtk_tree_view_get_cursor_db);
extern GtkWidget * gtk_label_new_db(const gchar *);
CheckInterfacedef(gtk_label_new,gtk_label_new_db);
extern void gtk_widget_remove_mnemonic_label_db(GtkWidget *, GtkWidget *);
CheckInterfacedef(gtk_widget_remove_mnemonic_label,gtk_widget_remove_mnemonic_label_db);
extern GType gtk_size_group_get_type_db(void);
CheckInterfacedef(gtk_size_group_get_type,gtk_size_group_get_type_db);
extern void gtk_text_buffer_insert_child_anchor_db(GtkTextBuffer *, GtkTextIter *, GtkTextChildAnchor *);
CheckInterfacedef(gtk_text_buffer_insert_child_anchor,gtk_text_buffer_insert_child_anchor_db);
extern void gtk_text_iter_forward_to_end_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_forward_to_end,gtk_text_iter_forward_to_end_db);
extern void gtk_tree_view_column_set_sort_indicator_db(GtkTreeViewColumn *, gboolean);
CheckInterfacedef(gtk_tree_view_column_set_sort_indicator,gtk_tree_view_column_set_sort_indicator_db);
extern void gtk_widget_destroy_db(GtkWidget *);
CheckInterfacedef(gtk_widget_destroy,gtk_widget_destroy_db);
extern void gtk_widget_class_install_style_property_db(GtkWidgetClass *, GParamSpec *);
CheckInterfacedef(gtk_widget_class_install_style_property,gtk_widget_class_install_style_property_db);
extern GType gtk_icon_factory_get_type_db(void);
CheckInterfacedef(gtk_icon_factory_get_type,gtk_icon_factory_get_type_db);
extern gboolean gtk_text_buffer_get_selection_bounds_db(GtkTextBuffer *, GtkTextIter *, GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_get_selection_bounds,gtk_text_buffer_get_selection_bounds_db);
extern void gtk_widget_set_composite_name_db(GtkWidget *, const gchar *);
CheckInterfacedef(gtk_widget_set_composite_name,gtk_widget_set_composite_name_db);
extern GtkWidget * gtk_vseparator_new_db(void);
CheckInterfacedef(gtk_vseparator_new,gtk_vseparator_new_db);
extern GtkFileFilterFlags gtk_file_filter_get_needed_db(GtkFileFilter *);
CheckInterfacedef(gtk_file_filter_get_needed,gtk_file_filter_get_needed_db);
extern gint gtk_entry_get_width_chars_db(GtkEntry *);
CheckInterfacedef(gtk_entry_get_width_chars,gtk_entry_get_width_chars_db);
extern GtkWidget * gtk_get_event_widget_db(GdkEvent *);
CheckInterfacedef(gtk_get_event_widget,gtk_get_event_widget_db);
extern void gtk_tree_view_column_set_title_db(GtkTreeViewColumn *, const gchar *);
CheckInterfacedef(gtk_tree_view_column_set_title,gtk_tree_view_column_set_title_db);
extern gboolean gtk_text_iter_toggles_tag_db(const GtkTextIter *, GtkTextTag *);
CheckInterfacedef(gtk_text_iter_toggles_tag,gtk_text_iter_toggles_tag_db);
extern void gtk_icon_factory_add_default_db(GtkIconFactory *);
CheckInterfacedef(gtk_icon_factory_add_default,gtk_icon_factory_add_default_db);
extern void gtk_about_dialog_set_authors_db(GtkAboutDialog *, const gchar * *);
CheckInterfacedef(gtk_about_dialog_set_authors,gtk_about_dialog_set_authors_db);
extern void gtk_expander_set_expanded_db(GtkExpander *, gboolean);
CheckInterfacedef(gtk_expander_set_expanded,gtk_expander_set_expanded_db);
extern void gtk_container_foreach_db(GtkContainer *, GtkCallback, gpointer);
CheckInterfacedef(gtk_container_foreach,gtk_container_foreach_db);
extern void gtk_notebook_popup_enable_db(GtkNotebook *);
CheckInterfacedef(gtk_notebook_popup_enable,gtk_notebook_popup_enable_db);
extern void gtk_widget_set_child_visible_db(GtkWidget *, gboolean);
CheckInterfacedef(gtk_widget_set_child_visible,gtk_widget_set_child_visible_db);
extern GtkPositionType gtk_scale_get_value_pos_db(GtkScale *);
CheckInterfacedef(gtk_scale_get_value_pos,gtk_scale_get_value_pos_db);
extern void gtk_target_list_unref_db(GtkTargetList *);
CheckInterfacedef(gtk_target_list_unref,gtk_target_list_unref_db);
extern GType gtk_rc_flags_get_type_db(void);
CheckInterfacedef(gtk_rc_flags_get_type,gtk_rc_flags_get_type_db);
extern void gtk_dialog_set_response_sensitive_db(GtkDialog *, gint, gboolean);
CheckInterfacedef(gtk_dialog_set_response_sensitive,gtk_dialog_set_response_sensitive_db);
extern void gtk_paint_slider_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint, gint, GtkOrientation);
CheckInterfacedef(gtk_paint_slider,gtk_paint_slider_db);
extern void gtk_notebook_set_tab_label_db(GtkNotebook *, GtkWidget *, GtkWidget *);
CheckInterfacedef(gtk_notebook_set_tab_label,gtk_notebook_set_tab_label_db);
extern void gtk_list_store_set_valist_db(GtkListStore *, GtkTreeIter *, va_list);
CheckInterfacedef(gtk_list_store_set_valist,gtk_list_store_set_valist_db);
extern void gtk_widget_grab_default_db(GtkWidget *);
CheckInterfacedef(gtk_widget_grab_default,gtk_widget_grab_default_db);
extern gboolean gtk_table_get_homogeneous_db(GtkTable *);
CheckInterfacedef(gtk_table_get_homogeneous,gtk_table_get_homogeneous_db);
extern GtkWidget * gtk_layout_new_db(GtkAdjustment *, GtkAdjustment *);
CheckInterfacedef(gtk_layout_new,gtk_layout_new_db);
extern void gtk_accel_label_set_accel_closure_db(GtkAccelLabel *, GClosure *);
CheckInterfacedef(gtk_accel_label_set_accel_closure,gtk_accel_label_set_accel_closure_db);
extern void gtk_tree_view_map_expanded_rows_db(GtkTreeView *, GtkTreeViewMappingFunc, gpointer);
CheckInterfacedef(gtk_tree_view_map_expanded_rows,gtk_tree_view_map_expanded_rows_db);
extern void gtk_tree_model_filter_set_visible_func_db(GtkTreeModelFilter *, GtkTreeModelFilterVisibleFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_tree_model_filter_set_visible_func,gtk_tree_model_filter_set_visible_func_db);
extern void gtk_tree_view_set_model_db(GtkTreeView *, GtkTreeModel *);
CheckInterfacedef(gtk_tree_view_set_model,gtk_tree_view_set_model_db);
extern gboolean gtk_icon_source_get_state_wildcarded_db(const GtkIconSource *);
CheckInterfacedef(gtk_icon_source_get_state_wildcarded,gtk_icon_source_get_state_wildcarded_db);
extern void gtk_icon_theme_add_builtin_icon_db(const gchar *, gint, GdkPixbuf *);
CheckInterfacedef(gtk_icon_theme_add_builtin_icon,gtk_icon_theme_add_builtin_icon_db);
extern GtkWidget * gtk_socket_new_db(void);
CheckInterfacedef(gtk_socket_new,gtk_socket_new_db);
extern GtkWidget * gtk_drawing_area_new_db(void);
CheckInterfacedef(gtk_drawing_area_new,gtk_drawing_area_new_db);
extern void gtk_selection_data_set_db(GtkSelectionData *, GdkAtom, gint, const guchar *, gint);
CheckInterfacedef(gtk_selection_data_set,gtk_selection_data_set_db);
extern gboolean gtk_text_iter_backward_cursor_position_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_backward_cursor_position,gtk_text_iter_backward_cursor_position_db);
extern PangoContext * gtk_widget_create_pango_context_db(GtkWidget *);
CheckInterfacedef(gtk_widget_create_pango_context,gtk_widget_create_pango_context_db);
extern void gtk_cell_view_set_model_db(GtkCellView *, GtkTreeModel *);
CheckInterfacedef(gtk_cell_view_set_model,gtk_cell_view_set_model_db);
extern gboolean gtk_clipboard_wait_is_target_available_db(GtkClipboard *, GdkAtom);
CheckInterfacedef(gtk_clipboard_wait_is_target_available,gtk_clipboard_wait_is_target_available_db);
extern gboolean gtk_window_get_modal_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_modal,gtk_window_get_modal_db);
extern void gtk_tree_view_column_clicked_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_clicked,gtk_tree_view_column_clicked_db);
extern void gtk_menu_set_monitor_db(GtkMenu *, gint);
CheckInterfacedef(gtk_menu_set_monitor,gtk_menu_set_monitor_db);
extern gboolean gtk_text_iter_forward_sentence_end_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_forward_sentence_end,gtk_text_iter_forward_sentence_end_db);
extern gboolean gtk_button_box_get_child_secondary_db(GtkButtonBox *, GtkWidget *);
CheckInterfacedef(gtk_button_box_get_child_secondary,gtk_button_box_get_child_secondary_db);
extern GtkObject * gtk_adjustment_new_db(gdouble, gdouble, gdouble, gdouble, gdouble, gdouble);
CheckInterfacedef(gtk_adjustment_new,gtk_adjustment_new_db);
extern GtkWidget * gtk_cell_view_new_db(void);
CheckInterfacedef(gtk_cell_view_new,gtk_cell_view_new_db);
extern gboolean gtk_combo_box_get_add_tearoffs_db(GtkComboBox *);
CheckInterfacedef(gtk_combo_box_get_add_tearoffs,gtk_combo_box_get_add_tearoffs_db);
extern gboolean gtk_text_iter_forward_cursor_positions_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_forward_cursor_positions,gtk_text_iter_forward_cursor_positions_db);
extern void gtk_window_set_type_hint_db(GtkWindow *, GdkWindowTypeHint);
CheckInterfacedef(gtk_window_set_type_hint,gtk_window_set_type_hint_db);
extern void gtk_dialog_set_has_separator_db(GtkDialog *, gboolean);
CheckInterfacedef(gtk_dialog_set_has_separator,gtk_dialog_set_has_separator_db);
extern GtkWidget * gtk_fixed_new_db(void);
CheckInterfacedef(gtk_fixed_new,gtk_fixed_new_db);
extern void gtk_tree_view_enable_model_drag_source_db(GtkTreeView *, GdkModifierType, const GtkTargetEntry *, gint, GdkDragAction);
CheckInterfacedef(gtk_tree_view_enable_model_drag_source,gtk_tree_view_enable_model_drag_source_db);
extern void gtk_button_set_label_db(GtkButton *, const gchar *);
CheckInterfacedef(gtk_button_set_label,gtk_button_set_label_db);
extern void gtk_text_view_scroll_mark_onscreen_db(GtkTextView *, GtkTextMark *);
CheckInterfacedef(gtk_text_view_scroll_mark_onscreen,gtk_text_view_scroll_mark_onscreen_db);
extern gchar * gtk_tree_model_get_string_from_iter_db(GtkTreeModel *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_get_string_from_iter,gtk_tree_model_get_string_from_iter_db);
extern void gtk_viewport_set_vadjustment_db(GtkViewport *, GtkAdjustment *);
CheckInterfacedef(gtk_viewport_set_vadjustment,gtk_viewport_set_vadjustment_db);
extern GtkIconSize gtk_icon_source_get_size_db(const GtkIconSource *);
CheckInterfacedef(gtk_icon_source_get_size,gtk_icon_source_get_size_db);
extern void gtk_init_add_db(GtkFunction, gpointer);
CheckInterfacedef(gtk_init_add,gtk_init_add_db);
extern GtkOrientation gtk_icon_view_get_orientation_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_orientation,gtk_icon_view_get_orientation_db);
extern gint gtk_icon_view_get_markup_column_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_markup_column,gtk_icon_view_get_markup_column_db);
extern void gtk_scrolled_window_set_vadjustment_db(GtkScrolledWindow *, GtkAdjustment *);
CheckInterfacedef(gtk_scrolled_window_set_vadjustment,gtk_scrolled_window_set_vadjustment_db);
extern void gtk_icon_view_set_model_db(GtkIconView *, GtkTreeModel *);
CheckInterfacedef(gtk_icon_view_set_model,gtk_icon_view_set_model_db);
extern void gtk_widget_set_state_db(GtkWidget *, GtkStateType);
CheckInterfacedef(gtk_widget_set_state,gtk_widget_set_state_db);
extern void gtk_event_box_set_above_child_db(GtkEventBox *, gboolean);
CheckInterfacedef(gtk_event_box_set_above_child,gtk_event_box_set_above_child_db);
extern gboolean gtk_tree_path_prev_db(GtkTreePath *);
CheckInterfacedef(gtk_tree_path_prev,gtk_tree_path_prev_db);
extern GType gtk_tree_view_get_type_db(void);
CheckInterfacedef(gtk_tree_view_get_type,gtk_tree_view_get_type_db);
extern void gtk_action_connect_proxy_db(GtkAction *, GtkWidget *);
CheckInterfacedef(gtk_action_connect_proxy,gtk_action_connect_proxy_db);
extern gboolean gtk_tree_view_get_dest_row_at_pos_db(GtkTreeView *, gint, gint, GtkTreePath * *, GtkTreeViewDropPosition *);
CheckInterfacedef(gtk_tree_view_get_dest_row_at_pos,gtk_tree_view_get_dest_row_at_pos_db);
extern void gtk_tree_view_column_set_max_width_db(GtkTreeViewColumn *, gint);
CheckInterfacedef(gtk_tree_view_column_set_max_width,gtk_tree_view_column_set_max_width_db);
extern GtkTreeViewColumn * gtk_tree_view_column_new_db(void);
CheckInterfacedef(gtk_tree_view_column_new,gtk_tree_view_column_new_db);
extern void gtk_tree_view_column_clear_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_clear,gtk_tree_view_column_clear_db);
extern void gtk_menu_tool_button_set_arrow_tooltip_db(GtkMenuToolButton *, GtkTooltips *, const gchar *, const gchar *);
CheckInterfacedef(gtk_menu_tool_button_set_arrow_tooltip,gtk_menu_tool_button_set_arrow_tooltip_db);
extern GtkSettings * gtk_settings_get_default_db(void);
CheckInterfacedef(gtk_settings_get_default,gtk_settings_get_default_db);
extern gboolean gtk_text_iter_backward_search_db(const GtkTextIter *, const gchar *, GtkTextSearchFlags, GtkTextIter *, GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_backward_search,gtk_text_iter_backward_search_db);
extern void gtk_object_destroy_db(GtkObject *);
CheckInterfacedef(gtk_object_destroy,gtk_object_destroy_db);
extern gchar * gtk_text_buffer_get_slice_db(GtkTextBuffer *, const GtkTextIter *, const GtkTextIter *, gboolean);
CheckInterfacedef(gtk_text_buffer_get_slice,gtk_text_buffer_get_slice_db);
extern gboolean gtk_text_iter_backward_char_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_backward_char,gtk_text_iter_backward_char_db);
extern void gtk_tree_view_column_set_spacing_db(GtkTreeViewColumn *, gint);
CheckInterfacedef(gtk_tree_view_column_set_spacing,gtk_tree_view_column_set_spacing_db);
extern gboolean gtk_action_get_sensitive_db(GtkAction *);
CheckInterfacedef(gtk_action_get_sensitive,gtk_action_get_sensitive_db);
extern gboolean gtk_tree_view_collapse_row_db(GtkTreeView *, GtkTreePath *);
CheckInterfacedef(gtk_tree_view_collapse_row,gtk_tree_view_collapse_row_db);
extern void gtk_color_selection_set_previous_color_db(GtkColorSelection *, const GdkColor *);
CheckInterfacedef(gtk_color_selection_set_previous_color,gtk_color_selection_set_previous_color_db);
extern gboolean gtk_label_get_selectable_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_selectable,gtk_label_get_selectable_db);
extern const gchar * gtk_file_filter_get_name_db(GtkFileFilter *);
CheckInterfacedef(gtk_file_filter_get_name,gtk_file_filter_get_name_db);
extern gboolean gtk_font_button_get_show_size_db(GtkFontButton *);
CheckInterfacedef(gtk_font_button_get_show_size,gtk_font_button_get_show_size_db);
extern void gtk_radio_action_set_group_db(GtkRadioAction *, GSList *);
CheckInterfacedef(gtk_radio_action_set_group,gtk_radio_action_set_group_db);
extern GtkWidget * gtk_hscale_new_with_range_db(gdouble, gdouble, gdouble);
CheckInterfacedef(gtk_hscale_new_with_range,gtk_hscale_new_with_range_db);
extern GtkWidget * gtk_check_menu_item_new_with_mnemonic_db(const gchar *);
CheckInterfacedef(gtk_check_menu_item_new_with_mnemonic,gtk_check_menu_item_new_with_mnemonic_db);
extern GType gtk_path_type_get_type_db(void);
CheckInterfacedef(gtk_path_type_get_type,gtk_path_type_get_type_db);
extern gboolean gtk_accel_label_refetch_db(GtkAccelLabel *);
CheckInterfacedef(gtk_accel_label_refetch,gtk_accel_label_refetch_db);
extern gboolean gtk_im_context_get_surrounding_db(GtkIMContext *, gchar * *, gint *);
CheckInterfacedef(gtk_im_context_get_surrounding,gtk_im_context_get_surrounding_db);
extern void gtk_text_buffer_insert_db(GtkTextBuffer *, GtkTextIter *, const gchar *, gint);
CheckInterfacedef(gtk_text_buffer_insert,gtk_text_buffer_insert_db);
extern GtkWidget * gtk_toggle_button_new_with_mnemonic_db(const gchar *);
CheckInterfacedef(gtk_toggle_button_new_with_mnemonic,gtk_toggle_button_new_with_mnemonic_db);
extern void gtk_tree_selection_select_path_db(GtkTreeSelection *, GtkTreePath *);
CheckInterfacedef(gtk_tree_selection_select_path,gtk_tree_selection_select_path_db);
extern guint gtk_accelerator_get_default_mod_mask_db(void);
CheckInterfacedef(gtk_accelerator_get_default_mod_mask,gtk_accelerator_get_default_mod_mask_db);
extern GtkWidget * gtk_notebook_get_tab_label_db(GtkNotebook *, GtkWidget *);
CheckInterfacedef(gtk_notebook_get_tab_label,gtk_notebook_get_tab_label_db);
extern gboolean gtk_text_iter_inside_word_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_inside_word,gtk_text_iter_inside_word_db);
extern void gtk_box_query_child_packing_db(GtkBox *, GtkWidget *, gboolean *, gboolean *, guint *, GtkPackType *);
CheckInterfacedef(gtk_box_query_child_packing,gtk_box_query_child_packing_db);
extern void gtk_rc_add_default_file_db(const gchar *);
CheckInterfacedef(gtk_rc_add_default_file,gtk_rc_add_default_file_db);
extern void gtk_spin_button_set_value_db(GtkSpinButton *, gdouble);
CheckInterfacedef(gtk_spin_button_set_value,gtk_spin_button_set_value_db);
extern gboolean gtk_window_get_has_frame_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_has_frame,gtk_window_get_has_frame_db);
extern void gtk_color_button_set_title_db(GtkColorButton *, const gchar *);
CheckInterfacedef(gtk_color_button_set_title,gtk_color_button_set_title_db);
extern void gtk_text_buffer_copy_clipboard_db(GtkTextBuffer *, GtkClipboard *);
CheckInterfacedef(gtk_text_buffer_copy_clipboard,gtk_text_buffer_copy_clipboard_db);
extern void gtk_widget_realize_db(GtkWidget *);
CheckInterfacedef(gtk_widget_realize,gtk_widget_realize_db);
extern GType gtk_im_status_style_get_type_db(void);
CheckInterfacedef(gtk_im_status_style_get_type,gtk_im_status_style_get_type_db);
extern void gtk_icon_view_item_activated_db(GtkIconView *, GtkTreePath *);
CheckInterfacedef(gtk_icon_view_item_activated,gtk_icon_view_item_activated_db);
extern gint gtk_scale_get_digits_db(GtkScale *);
CheckInterfacedef(gtk_scale_get_digits,gtk_scale_get_digits_db);
extern GtkTreeModel * gtk_tree_view_get_model_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_model,gtk_tree_view_get_model_db);
extern guint gtk_quit_add_db(guint, GtkFunction, gpointer);
CheckInterfacedef(gtk_quit_add,gtk_quit_add_db);
extern void gtk_tool_button_set_use_underline_db(GtkToolButton *, gboolean);
CheckInterfacedef(gtk_tool_button_set_use_underline,gtk_tool_button_set_use_underline_db);
extern gboolean gtk_window_activate_key_db(GtkWindow *, GdkEventKey *);
CheckInterfacedef(gtk_window_activate_key,gtk_window_activate_key_db);
extern GtkWidget * gtk_drag_get_source_widget_db(GdkDragContext *);
CheckInterfacedef(gtk_drag_get_source_widget,gtk_drag_get_source_widget_db);
extern guint gtk_statusbar_get_context_id_db(GtkStatusbar *, const gchar *);
CheckInterfacedef(gtk_statusbar_get_context_id,gtk_statusbar_get_context_id_db);
extern gboolean gtk_file_chooser_get_use_preview_label_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_use_preview_label,gtk_file_chooser_get_use_preview_label_db);
extern void gtk_icon_set_unref_db(GtkIconSet *);
CheckInterfacedef(gtk_icon_set_unref,gtk_icon_set_unref_db);
extern void gtk_tree_store_insert_before_db(GtkTreeStore *, GtkTreeIter *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_store_insert_before,gtk_tree_store_insert_before_db);
extern void gtk_button_box_set_layout_db(GtkButtonBox *, GtkButtonBoxStyle);
CheckInterfacedef(gtk_button_box_set_layout,gtk_button_box_set_layout_db);
extern void gtk_label_set_pattern_db(GtkLabel *, const gchar *);
CheckInterfacedef(gtk_label_set_pattern,gtk_label_set_pattern_db);
extern GType gtk_toggle_tool_button_get_type_db(void);
CheckInterfacedef(gtk_toggle_tool_button_get_type,gtk_toggle_tool_button_get_type_db);
extern GtkWidget * gtk_tree_view_column_get_widget_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_widget,gtk_tree_view_column_get_widget_db);
extern GtkWidget * gtk_radio_button_new_with_mnemonic_db(GSList *, const gchar *);
CheckInterfacedef(gtk_radio_button_new_with_mnemonic,gtk_radio_button_new_with_mnemonic_db);
extern void gtk_clipboard_clear_db(GtkClipboard *);
CheckInterfacedef(gtk_clipboard_clear,gtk_clipboard_clear_db);
extern void gtk_misc_get_alignment_db(GtkMisc *, gfloat *, gfloat *);
CheckInterfacedef(gtk_misc_get_alignment,gtk_misc_get_alignment_db);
extern void gtk_tree_store_set_value_db(GtkTreeStore *, GtkTreeIter *, gint, GValue *);
CheckInterfacedef(gtk_tree_store_set_value,gtk_tree_store_set_value_db);
extern GType gtk_font_selection_get_type_db(void);
CheckInterfacedef(gtk_font_selection_get_type,gtk_font_selection_get_type_db);
extern GParamSpec * * gtk_container_class_list_child_properties_db(GObjectClass *, guint *);
CheckInterfacedef(gtk_container_class_list_child_properties,gtk_container_class_list_child_properties_db);
extern void gtk_tree_model_row_has_child_toggled_db(GtkTreeModel *, GtkTreePath *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_row_has_child_toggled,gtk_tree_model_row_has_child_toggled_db);
extern GType gtk_vbox_get_type_db(void);
CheckInterfacedef(gtk_vbox_get_type,gtk_vbox_get_type_db);
extern void gtk_drag_set_icon_pixbuf_db(GdkDragContext *, GdkPixbuf *, gint, gint);
CheckInterfacedef(gtk_drag_set_icon_pixbuf,gtk_drag_set_icon_pixbuf_db);
extern void gtk_text_view_set_overwrite_db(GtkTextView *, gboolean);
CheckInterfacedef(gtk_text_view_set_overwrite,gtk_text_view_set_overwrite_db);
extern void gtk_combo_box_set_row_separator_func_db(GtkComboBox *, GtkTreeViewRowSeparatorFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_combo_box_set_row_separator_func,gtk_combo_box_set_row_separator_func_db);
extern GType gtk_cell_renderer_progress_get_type_db(void);
CheckInterfacedef(gtk_cell_renderer_progress_get_type,gtk_cell_renderer_progress_get_type_db);
extern gboolean gtk_fixed_get_has_window_db(GtkFixed *);
CheckInterfacedef(gtk_fixed_get_has_window,gtk_fixed_get_has_window_db);
extern gboolean gtk_editable_get_selection_bounds_db(GtkEditable *, gint *, gint *);
CheckInterfacedef(gtk_editable_get_selection_bounds,gtk_editable_get_selection_bounds_db);
extern gboolean gtk_icon_theme_rescan_if_needed_db(GtkIconTheme *);
CheckInterfacedef(gtk_icon_theme_rescan_if_needed,gtk_icon_theme_rescan_if_needed_db);
extern void gtk_accel_map_add_entry_db(const gchar *, guint, GdkModifierType);
CheckInterfacedef(gtk_accel_map_add_entry,gtk_accel_map_add_entry_db);
extern void gtk_text_iter_set_line_offset_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_set_line_offset,gtk_text_iter_set_line_offset_db);
extern void gtk_icon_source_set_size_db(GtkIconSource *, GtkIconSize);
CheckInterfacedef(gtk_icon_source_set_size,gtk_icon_source_set_size_db);
extern gboolean gtk_window_has_toplevel_focus_db(GtkWindow *);
CheckInterfacedef(gtk_window_has_toplevel_focus,gtk_window_has_toplevel_focus_db);
extern void gtk_menu_item_deselect_db(GtkMenuItem *);
CheckInterfacedef(gtk_menu_item_deselect,gtk_menu_item_deselect_db);
extern void gtk_accel_label_set_accel_widget_db(GtkAccelLabel *, GtkWidget *);
CheckInterfacedef(gtk_accel_label_set_accel_widget,gtk_accel_label_set_accel_widget_db);
extern gboolean gtk_main_iteration_do_db(gboolean);
CheckInterfacedef(gtk_main_iteration_do,gtk_main_iteration_do_db);
extern GtkIconTheme * gtk_icon_theme_get_default_db(void);
CheckInterfacedef(gtk_icon_theme_get_default,gtk_icon_theme_get_default_db);
extern void gtk_drag_dest_set_db(GtkWidget *, GtkDestDefaults, const GtkTargetEntry *, gint, GdkDragAction);
CheckInterfacedef(gtk_drag_dest_set,gtk_drag_dest_set_db);
extern gchar * gtk_rc_find_pixmap_in_path_db(GtkSettings *, GScanner *, const gchar *);
CheckInterfacedef(gtk_rc_find_pixmap_in_path,gtk_rc_find_pixmap_in_path_db);
extern void gtk_style_apply_default_background_db(GtkStyle *, GdkWindow *, gboolean, GtkStateType, GdkRectangle *, gint, gint, gint, gint);
CheckInterfacedef(gtk_style_apply_default_background,gtk_style_apply_default_background_db);
extern GType gtk_file_chooser_dialog_get_type_db(void);
CheckInterfacedef(gtk_file_chooser_dialog_get_type,gtk_file_chooser_dialog_get_type_db);
extern gboolean gtk_tree_model_iter_parent_db(GtkTreeModel *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_iter_parent,gtk_tree_model_iter_parent_db);
extern GtkWidget * gtk_vscale_new_db(GtkAdjustment *);
CheckInterfacedef(gtk_vscale_new,gtk_vscale_new_db);
extern GtkWidget * gtk_spin_button_new_with_range_db(gdouble, gdouble, gdouble);
CheckInterfacedef(gtk_spin_button_new_with_range,gtk_spin_button_new_with_range_db);
extern GtkWidget * gtk_image_new_db(void);
CheckInterfacedef(gtk_image_new,gtk_image_new_db);
extern GtkIMContext * gtk_im_multicontext_new_db(void);
CheckInterfacedef(gtk_im_multicontext_new,gtk_im_multicontext_new_db);
extern void gtk_tree_view_column_set_sizing_db(GtkTreeViewColumn *, GtkTreeViewColumnSizing);
CheckInterfacedef(gtk_tree_view_column_set_sizing,gtk_tree_view_column_set_sizing_db);
extern GtkWidget * gtk_radio_button_new_with_label_db(GSList *, const gchar *);
CheckInterfacedef(gtk_radio_button_new_with_label,gtk_radio_button_new_with_label_db);
extern GtkTreePath * gtk_icon_view_get_path_at_pos_db(GtkIconView *, gint, gint);
CheckInterfacedef(gtk_icon_view_get_path_at_pos,gtk_icon_view_get_path_at_pos_db);
extern gboolean gtk_tree_view_column_get_clickable_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_clickable,gtk_tree_view_column_get_clickable_db);
extern void gtk_editable_insert_text_db(GtkEditable *, const gchar *, gint, gint *);
CheckInterfacedef(gtk_editable_insert_text,gtk_editable_insert_text_db);
extern guint gtk_key_snooper_install_db(GtkKeySnoopFunc, gpointer);
CheckInterfacedef(gtk_key_snooper_install,gtk_key_snooper_install_db);
extern void gtk_object_sink_db(GtkObject *);
CheckInterfacedef(gtk_object_sink,gtk_object_sink_db);
extern void gtk_widget_style_get_db(GtkWidget *, const gchar *, ...);
CheckInterfacedef(gtk_widget_style_get,gtk_widget_style_get_db);
extern GList * gtk_icon_theme_list_icons_db(GtkIconTheme *, const char *);
CheckInterfacedef(gtk_icon_theme_list_icons,gtk_icon_theme_list_icons_db);
extern void gtk_cell_renderer_get_fixed_size_db(GtkCellRenderer *, gint *, gint *);
CheckInterfacedef(gtk_cell_renderer_get_fixed_size,gtk_cell_renderer_get_fixed_size_db);
extern void gtk_button_released_db(GtkButton *);
CheckInterfacedef(gtk_button_released,gtk_button_released_db);
extern void gtk_icon_source_set_size_wildcarded_db(GtkIconSource *, gboolean);
CheckInterfacedef(gtk_icon_source_set_size_wildcarded,gtk_icon_source_set_size_wildcarded_db);
extern void gtk_window_begin_resize_drag_db(GtkWindow *, GdkWindowEdge, gint, gint, gint, guint32);
CheckInterfacedef(gtk_window_begin_resize_drag,gtk_window_begin_resize_drag_db);
extern gboolean gtk_text_iter_forward_to_tag_toggle_db(GtkTextIter *, GtkTextTag *);
CheckInterfacedef(gtk_text_iter_forward_to_tag_toggle,gtk_text_iter_forward_to_tag_toggle_db);
extern gboolean gtk_tree_selection_path_is_selected_db(GtkTreeSelection *, GtkTreePath *);
CheckInterfacedef(gtk_tree_selection_path_is_selected,gtk_tree_selection_path_is_selected_db);
extern void gtk_window_set_wmclass_db(GtkWindow *, const gchar *, const gchar *);
CheckInterfacedef(gtk_window_set_wmclass,gtk_window_set_wmclass_db);
extern GtkWidget * gtk_action_create_icon_db(GtkAction *, GtkIconSize);
CheckInterfacedef(gtk_action_create_icon,gtk_action_create_icon_db);
extern gboolean gtk_text_iter_backward_line_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_backward_line,gtk_text_iter_backward_line_db);
extern gchar * gtk_font_selection_dialog_get_font_name_db(GtkFontSelectionDialog *);
CheckInterfacedef(gtk_font_selection_dialog_get_font_name,gtk_font_selection_dialog_get_font_name_db);
extern GType gtk_cell_renderer_toggle_get_type_db(void);
CheckInterfacedef(gtk_cell_renderer_toggle_get_type,gtk_cell_renderer_toggle_get_type_db);
extern void gtk_tree_model_rows_reordered_db(GtkTreeModel *, GtkTreePath *, GtkTreeIter *, gint *);
CheckInterfacedef(gtk_tree_model_rows_reordered,gtk_tree_model_rows_reordered_db);
extern PangoLayout * gtk_label_get_layout_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_layout,gtk_label_get_layout_db);
extern gboolean gtk_tree_view_get_path_at_pos_db(GtkTreeView *, gint, gint, GtkTreePath * *, GtkTreeViewColumn * *, gint *, gint *);
CheckInterfacedef(gtk_tree_view_get_path_at_pos,gtk_tree_view_get_path_at_pos_db);
extern gboolean gtk_combo_box_get_active_iter_db(GtkComboBox *, GtkTreeIter *);
CheckInterfacedef(gtk_combo_box_get_active_iter,gtk_combo_box_get_active_iter_db);
extern gboolean gtk_label_get_line_wrap_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_line_wrap,gtk_label_get_line_wrap_db);
extern gboolean gtk_window_activate_focus_db(GtkWindow *);
CheckInterfacedef(gtk_window_activate_focus,gtk_window_activate_focus_db);
extern void gtk_table_set_row_spacing_db(GtkTable *, guint, guint);
CheckInterfacedef(gtk_table_set_row_spacing,gtk_table_set_row_spacing_db);
extern void gtk_widget_ensure_style_db(GtkWidget *);
CheckInterfacedef(gtk_widget_ensure_style,gtk_widget_ensure_style_db);
extern GType gtk_selection_mode_get_type_db(void);
CheckInterfacedef(gtk_selection_mode_get_type,gtk_selection_mode_get_type_db);
extern gboolean gtk_window_activate_default_db(GtkWindow *);
CheckInterfacedef(gtk_window_activate_default,gtk_window_activate_default_db);
extern GtkAboutDialogActivateLinkFunc gtk_about_dialog_set_url_hook_db(GtkAboutDialogActivateLinkFunc, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_about_dialog_set_url_hook,gtk_about_dialog_set_url_hook_db);
extern gboolean gtk_check_menu_item_get_inconsistent_db(GtkCheckMenuItem *);
CheckInterfacedef(gtk_check_menu_item_get_inconsistent,gtk_check_menu_item_get_inconsistent_db);
extern gchar * gtk_set_locale_db(void);
CheckInterfacedef(gtk_set_locale,gtk_set_locale_db);
extern void gtk_icon_theme_set_screen_db(GtkIconTheme *, GdkScreen *);
CheckInterfacedef(gtk_icon_theme_set_screen,gtk_icon_theme_set_screen_db);
extern gint gtk_editable_get_position_db(GtkEditable *);
CheckInterfacedef(gtk_editable_get_position,gtk_editable_get_position_db);
extern void gtk_icon_theme_set_search_path_db(GtkIconTheme *, const gchar * *, gint);
CheckInterfacedef(gtk_icon_theme_set_search_path,gtk_icon_theme_set_search_path_db);
extern void gtk_text_view_set_justification_db(GtkTextView *, GtkJustification);
CheckInterfacedef(gtk_text_view_set_justification,gtk_text_view_set_justification_db);
extern GdkPixbuf * gtk_selection_data_get_pixbuf_db(GtkSelectionData *);
CheckInterfacedef(gtk_selection_data_get_pixbuf,gtk_selection_data_get_pixbuf_db);
extern void gtk_spin_button_spin_db(GtkSpinButton *, GtkSpinType, gdouble);
CheckInterfacedef(gtk_spin_button_spin,gtk_spin_button_spin_db);
extern gint gtk_notebook_append_page_menu_db(GtkNotebook *, GtkWidget *, GtkWidget *, GtkWidget *);
CheckInterfacedef(gtk_notebook_append_page_menu,gtk_notebook_append_page_menu_db);
extern gboolean gtk_text_view_move_mark_onscreen_db(GtkTextView *, GtkTextMark *);
CheckInterfacedef(gtk_text_view_move_mark_onscreen,gtk_text_view_move_mark_onscreen_db);
extern void gtk_widget_set_sensitive_db(GtkWidget *, gboolean);
CheckInterfacedef(gtk_widget_set_sensitive,gtk_widget_set_sensitive_db);
extern GtkTreePath * gtk_tree_model_sort_convert_path_to_child_path_db(GtkTreeModelSort *, GtkTreePath *);
CheckInterfacedef(gtk_tree_model_sort_convert_path_to_child_path,gtk_tree_model_sort_convert_path_to_child_path_db);
extern void gtk_drag_set_icon_pixmap_db(GdkDragContext *, GdkColormap *, GdkPixmap *, GdkBitmap *, gint, gint);
CheckInterfacedef(gtk_drag_set_icon_pixmap,gtk_drag_set_icon_pixmap_db);
extern gboolean gtk_text_child_anchor_get_deleted_db(GtkTextChildAnchor *);
CheckInterfacedef(gtk_text_child_anchor_get_deleted,gtk_text_child_anchor_get_deleted_db);
extern gboolean gtk_tree_view_expand_row_db(GtkTreeView *, GtkTreePath *, gboolean);
CheckInterfacedef(gtk_tree_view_expand_row,gtk_tree_view_expand_row_db);
extern GtkWidget * gtk_expander_get_label_widget_db(GtkExpander *);
CheckInterfacedef(gtk_expander_get_label_widget,gtk_expander_get_label_widget_db);
extern void gtk_range_set_update_policy_db(GtkRange *, GtkUpdateType);
CheckInterfacedef(gtk_range_set_update_policy,gtk_range_set_update_policy_db);
extern void gtk_curve_set_curve_type_db(GtkCurve *, GtkCurveType);
CheckInterfacedef(gtk_curve_set_curve_type,gtk_curve_set_curve_type_db);
extern void gtk_handle_box_set_shadow_type_db(GtkHandleBox *, GtkShadowType);
CheckInterfacedef(gtk_handle_box_set_shadow_type,gtk_handle_box_set_shadow_type_db);
extern gboolean gtk_tool_item_get_expand_db(GtkToolItem *);
CheckInterfacedef(gtk_tool_item_get_expand,gtk_tool_item_get_expand_db);
extern GtkWidget * gtk_window_new_db(GtkWindowType);
CheckInterfacedef(gtk_window_new,gtk_window_new_db);
extern GType gtk_list_store_get_type_db(void);
CheckInterfacedef(gtk_list_store_get_type,gtk_list_store_get_type_db);
extern GtkWidget * gtk_cell_view_new_with_markup_db(const gchar *);
CheckInterfacedef(gtk_cell_view_new_with_markup,gtk_cell_view_new_with_markup_db);
extern void gtk_fixed_set_has_window_db(GtkFixed *, gboolean);
CheckInterfacedef(gtk_fixed_set_has_window,gtk_fixed_set_has_window_db);
extern void gtk_cell_view_set_displayed_row_db(GtkCellView *, GtkTreePath *);
CheckInterfacedef(gtk_cell_view_set_displayed_row,gtk_cell_view_set_displayed_row_db);
extern void gtk_button_set_use_underline_db(GtkButton *, gboolean);
CheckInterfacedef(gtk_button_set_use_underline,gtk_button_set_use_underline_db);
extern GtkWindow * gtk_window_get_transient_for_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_transient_for,gtk_window_get_transient_for_db);
extern GtkTreeIter * gtk_tree_iter_copy_db(GtkTreeIter *);
CheckInterfacedef(gtk_tree_iter_copy,gtk_tree_iter_copy_db);
extern void gtk_file_chooser_set_current_name_db(GtkFileChooser *, const gchar *);
CheckInterfacedef(gtk_file_chooser_set_current_name,gtk_file_chooser_set_current_name_db);
extern void gtk_window_set_decorated_db(GtkWindow *, gboolean);
CheckInterfacedef(gtk_window_set_decorated,gtk_window_set_decorated_db);
extern void gtk_menu_shell_deselect_db(GtkMenuShell *);
CheckInterfacedef(gtk_menu_shell_deselect,gtk_menu_shell_deselect_db);
extern gboolean gtk_text_iter_backward_cursor_positions_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_backward_cursor_positions,gtk_text_iter_backward_cursor_positions_db);
extern gboolean gtk_text_iter_can_insert_db(const GtkTextIter *, gboolean);
CheckInterfacedef(gtk_text_iter_can_insert,gtk_text_iter_can_insert_db);
extern gboolean gtk_widget_is_ancestor_db(GtkWidget *, GtkWidget *);
CheckInterfacedef(gtk_widget_is_ancestor,gtk_widget_is_ancestor_db);
extern GType gtk_check_menu_item_get_type_db(void);
CheckInterfacedef(gtk_check_menu_item_get_type,gtk_check_menu_item_get_type_db);
extern gboolean gtk_tree_path_up_db(GtkTreePath *);
CheckInterfacedef(gtk_tree_path_up,gtk_tree_path_up_db);
extern void gtk_dialog_response_db(GtkDialog *, gint);
CheckInterfacedef(gtk_dialog_response,gtk_dialog_response_db);
extern GdkWindowTypeHint gtk_window_get_type_hint_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_type_hint,gtk_window_get_type_hint_db);
extern void gtk_widget_queue_resize_no_redraw_db(GtkWidget *);
CheckInterfacedef(gtk_widget_queue_resize_no_redraw,gtk_widget_queue_resize_no_redraw_db);
extern GtkWidget * gtk_frame_new_db(const gchar *);
CheckInterfacedef(gtk_frame_new,gtk_frame_new_db);
extern void gtk_tree_view_column_set_reorderable_db(GtkTreeViewColumn *, gboolean);
CheckInterfacedef(gtk_tree_view_column_set_reorderable,gtk_tree_view_column_set_reorderable_db);
extern GtkCellRenderer * gtk_cell_renderer_progress_new_db(void);
CheckInterfacedef(gtk_cell_renderer_progress_new,gtk_cell_renderer_progress_new_db);
extern void gtk_widget_grab_focus_db(GtkWidget *);
CheckInterfacedef(gtk_widget_grab_focus,gtk_widget_grab_focus_db);
extern void gtk_target_list_ref_db(GtkTargetList *);
CheckInterfacedef(gtk_target_list_ref,gtk_target_list_ref_db);
extern PangoTabArray * gtk_text_view_get_tabs_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_tabs,gtk_text_view_get_tabs_db);
extern void gtk_icon_info_set_raw_coordinates_db(GtkIconInfo *, gboolean);
CheckInterfacedef(gtk_icon_info_set_raw_coordinates,gtk_icon_info_set_raw_coordinates_db);
extern void gtk_window_present_db(GtkWindow *);
CheckInterfacedef(gtk_window_present,gtk_window_present_db);
extern GType gtk_button_box_style_get_type_db(void);
CheckInterfacedef(gtk_button_box_style_get_type,gtk_button_box_style_get_type_db);
extern void gtk_image_get_icon_set_db(GtkImage *, GtkIconSet * *, GtkIconSize *);
CheckInterfacedef(gtk_image_get_icon_set,gtk_image_get_icon_set_db);
extern PangoLanguage * gtk_get_default_language_db(void);
CheckInterfacedef(gtk_get_default_language,gtk_get_default_language_db);
extern gchar * * gtk_selection_data_get_uris_db(GtkSelectionData *);
CheckInterfacedef(gtk_selection_data_get_uris,gtk_selection_data_get_uris_db);
extern gdouble gtk_progress_bar_get_fraction_db(GtkProgressBar *);
CheckInterfacedef(gtk_progress_bar_get_fraction,gtk_progress_bar_get_fraction_db);
extern GType gtk_radio_tool_button_get_type_db(void);
CheckInterfacedef(gtk_radio_tool_button_get_type,gtk_radio_tool_button_get_type_db);
extern gboolean gtk_toggle_action_get_active_db(GtkToggleAction *);
CheckInterfacedef(gtk_toggle_action_get_active,gtk_toggle_action_get_active_db);
extern GType gtk_signal_run_type_get_type_db(void);
CheckInterfacedef(gtk_signal_run_type_get_type,gtk_signal_run_type_get_type_db);
extern void gtk_rc_reset_styles_db(GtkSettings *);
CheckInterfacedef(gtk_rc_reset_styles,gtk_rc_reset_styles_db);
extern void gtk_tree_view_set_search_column_db(GtkTreeView *, gint);
CheckInterfacedef(gtk_tree_view_set_search_column,gtk_tree_view_set_search_column_db);
extern void gtk_widget_modify_fg_db(GtkWidget *, GtkStateType, const GdkColor *);
CheckInterfacedef(gtk_widget_modify_fg,gtk_widget_modify_fg_db);
extern void gtk_icon_size_register_alias_db(const gchar *, GtkIconSize);
CheckInterfacedef(gtk_icon_size_register_alias,gtk_icon_size_register_alias_db);
extern void gtk_text_view_window_to_buffer_coords_db(GtkTextView *, GtkTextWindowType, gint, gint, gint *, gint *);
CheckInterfacedef(gtk_text_view_window_to_buffer_coords,gtk_text_view_window_to_buffer_coords_db);
extern void gtk_cell_renderer_render_db(GtkCellRenderer *, GdkWindow *, GtkWidget *, GdkRectangle *, GdkRectangle *, GdkRectangle *, GtkCellRendererState);
CheckInterfacedef(gtk_cell_renderer_render,gtk_cell_renderer_render_db);
extern gboolean gtk_calendar_mark_day_db(GtkCalendar *, guint);
CheckInterfacedef(gtk_calendar_mark_day,gtk_calendar_mark_day_db);
extern const gchar * gtk_window_get_icon_name_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_icon_name,gtk_window_get_icon_name_db);
extern void gtk_menu_attach_db(GtkMenu *, GtkWidget *, guint, guint, guint, guint);
CheckInterfacedef(gtk_menu_attach,gtk_menu_attach_db);
extern const gchar * gtk_about_dialog_get_name_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_name,gtk_about_dialog_get_name_db);
extern gint gtk_tree_selection_count_selected_rows_db(GtkTreeSelection *);
CheckInterfacedef(gtk_tree_selection_count_selected_rows,gtk_tree_selection_count_selected_rows_db);
extern GtkAccelGroup * gtk_ui_manager_get_accel_group_db(GtkUIManager *);
CheckInterfacedef(gtk_ui_manager_get_accel_group,gtk_ui_manager_get_accel_group_db);
extern void gtk_tree_view_column_focus_cell_db(GtkTreeViewColumn *, GtkCellRenderer *);
CheckInterfacedef(gtk_tree_view_column_focus_cell,gtk_tree_view_column_focus_cell_db);
extern gboolean gtk_window_get_resizable_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_resizable,gtk_window_get_resizable_db);
extern void gtk_label_set_angle_db(GtkLabel *, gdouble);
CheckInterfacedef(gtk_label_set_angle,gtk_label_set_angle_db);
extern void gtk_tree_view_column_set_alignment_db(GtkTreeViewColumn *, gfloat);
CheckInterfacedef(gtk_tree_view_column_set_alignment,gtk_tree_view_column_set_alignment_db);
extern void gtk_drag_unhighlight_db(GtkWidget *);
CheckInterfacedef(gtk_drag_unhighlight,gtk_drag_unhighlight_db);
extern GType gtk_tree_view_mode_get_type_db(void);
CheckInterfacedef(gtk_tree_view_mode_get_type,gtk_tree_view_mode_get_type_db);
extern void gtk_notebook_set_tab_label_packing_db(GtkNotebook *, GtkWidget *, gboolean, gboolean, GtkPackType);
CheckInterfacedef(gtk_notebook_set_tab_label_packing,gtk_notebook_set_tab_label_packing_db);
extern GType gtk_tree_drag_source_get_type_db(void);
CheckInterfacedef(gtk_tree_drag_source_get_type,gtk_tree_drag_source_get_type_db);
extern gchar * gtk_check_version_db(guint, guint, guint);
CheckInterfacedef(gtk_check_version,gtk_check_version_db);
extern gboolean gtk_text_iter_backward_word_start_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_backward_word_start,gtk_text_iter_backward_word_start_db);
extern void gtk_toggle_action_set_draw_as_radio_db(GtkToggleAction *, gboolean);
CheckInterfacedef(gtk_toggle_action_set_draw_as_radio,gtk_toggle_action_set_draw_as_radio_db);
extern GtkRcStyle * gtk_rc_style_new_db(void);
CheckInterfacedef(gtk_rc_style_new,gtk_rc_style_new_db);
extern gint gtk_toolbar_get_item_index_db(GtkToolbar *, GtkToolItem *);
CheckInterfacedef(gtk_toolbar_get_item_index,gtk_toolbar_get_item_index_db);
extern GtkWidget * gtk_file_chooser_get_extra_widget_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_extra_widget,gtk_file_chooser_get_extra_widget_db);
extern gboolean gtk_font_button_get_use_size_db(GtkFontButton *);
CheckInterfacedef(gtk_font_button_get_use_size,gtk_font_button_get_use_size_db);
extern gboolean gtk_false_db(void);
CheckInterfacedef(gtk_false,gtk_false_db);
extern void gtk_accel_map_unlock_path_db(const gchar *);
CheckInterfacedef(gtk_accel_map_unlock_path,gtk_accel_map_unlock_path_db);
extern GtkShadowType gtk_scrolled_window_get_shadow_type_db(GtkScrolledWindow *);
CheckInterfacedef(gtk_scrolled_window_get_shadow_type,gtk_scrolled_window_get_shadow_type_db);
extern void gtk_tree_view_column_set_visible_db(GtkTreeViewColumn *, gboolean);
CheckInterfacedef(gtk_tree_view_column_set_visible,gtk_tree_view_column_set_visible_db);
extern GtkAction * gtk_ui_manager_get_action_db(GtkUIManager *, const gchar *);
CheckInterfacedef(gtk_ui_manager_get_action,gtk_ui_manager_get_action_db);
extern gboolean gtk_rc_property_parse_flags_db(const GParamSpec *, const GString *, GValue *);
CheckInterfacedef(gtk_rc_property_parse_flags,gtk_rc_property_parse_flags_db);
extern void gtk_icon_theme_prepend_search_path_db(GtkIconTheme *, const gchar *);
CheckInterfacedef(gtk_icon_theme_prepend_search_path,gtk_icon_theme_prepend_search_path_db);
extern gint gtk_radio_action_get_current_value_db(GtkRadioAction *);
CheckInterfacedef(gtk_radio_action_get_current_value,gtk_radio_action_get_current_value_db);
extern void gtk_file_selection_set_filename_db(GtkFileSelection *, const gchar *);
CheckInterfacedef(gtk_file_selection_set_filename,gtk_file_selection_set_filename_db);
extern void gtk_im_context_set_surrounding_db(GtkIMContext *, const gchar *, gint, gint);
CheckInterfacedef(gtk_im_context_set_surrounding,gtk_im_context_set_surrounding_db);
extern void gtk_drag_dest_add_text_targets_db(GtkWidget *);
CheckInterfacedef(gtk_drag_dest_add_text_targets,gtk_drag_dest_add_text_targets_db);
extern void gtk_image_set_from_pixmap_db(GtkImage *, GdkPixmap *, GdkBitmap *);
CheckInterfacedef(gtk_image_set_from_pixmap,gtk_image_set_from_pixmap_db);
extern void gtk_icon_view_unselect_path_db(GtkIconView *, GtkTreePath *);
CheckInterfacedef(gtk_icon_view_unselect_path,gtk_icon_view_unselect_path_db);
extern GSList * gtk_stock_list_ids_db(void);
CheckInterfacedef(gtk_stock_list_ids,gtk_stock_list_ids_db);
extern void gtk_file_chooser_remove_filter_db(GtkFileChooser *, GtkFileFilter *);
CheckInterfacedef(gtk_file_chooser_remove_filter,gtk_file_chooser_remove_filter_db);
extern GtkListStore * gtk_list_store_newv_db(gint, GType *);
CheckInterfacedef(gtk_list_store_newv,gtk_list_store_newv_db);
extern GtkTextTag * gtk_text_tag_table_lookup_db(GtkTextTagTable *, const gchar *);
CheckInterfacedef(gtk_text_tag_table_lookup,gtk_text_tag_table_lookup_db);
extern void gtk_window_set_skip_pager_hint_db(GtkWindow *, gboolean);
CheckInterfacedef(gtk_window_set_skip_pager_hint,gtk_window_set_skip_pager_hint_db);
extern gboolean gtk_button_get_focus_on_click_db(GtkButton *);
CheckInterfacedef(gtk_button_get_focus_on_click,gtk_button_get_focus_on_click_db);
extern void gtk_file_selection_hide_fileop_buttons_db(GtkFileSelection *);
CheckInterfacedef(gtk_file_selection_hide_fileop_buttons,gtk_file_selection_hide_fileop_buttons_db);
extern void gtk_radio_menu_item_set_group_db(GtkRadioMenuItem *, GSList *);
CheckInterfacedef(gtk_radio_menu_item_set_group,gtk_radio_menu_item_set_group_db);
extern void gtk_color_button_set_use_alpha_db(GtkColorButton *, gboolean);
CheckInterfacedef(gtk_color_button_set_use_alpha,gtk_color_button_set_use_alpha_db);
extern void gtk_widget_pop_colormap_db(void);
CheckInterfacedef(gtk_widget_pop_colormap,gtk_widget_pop_colormap_db);
extern void gtk_widget_set_no_show_all_db(GtkWidget *, gboolean);
CheckInterfacedef(gtk_widget_set_no_show_all,gtk_widget_set_no_show_all_db);
extern GtkSettings * gtk_settings_get_for_screen_db(GdkScreen *);
CheckInterfacedef(gtk_settings_get_for_screen,gtk_settings_get_for_screen_db);
extern void gtk_font_selection_set_preview_text_db(GtkFontSelection *, const gchar *);
CheckInterfacedef(gtk_font_selection_set_preview_text,gtk_font_selection_set_preview_text_db);
extern GtkSelectionData * gtk_clipboard_wait_for_contents_db(GtkClipboard *, GdkAtom);
CheckInterfacedef(gtk_clipboard_wait_for_contents,gtk_clipboard_wait_for_contents_db);
extern GType gtk_spin_type_get_type_db(void);
CheckInterfacedef(gtk_spin_type_get_type,gtk_spin_type_get_type_db);
extern GType gtk_movement_step_get_type_db(void);
CheckInterfacedef(gtk_movement_step_get_type,gtk_movement_step_get_type_db);
extern GType gtk_icon_source_get_type_db(void);
CheckInterfacedef(gtk_icon_source_get_type,gtk_icon_source_get_type_db);
extern void gtk_window_set_skip_taskbar_hint_db(GtkWindow *, gboolean);
CheckInterfacedef(gtk_window_set_skip_taskbar_hint,gtk_window_set_skip_taskbar_hint_db);
extern gint gtk_tree_view_column_get_width_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_width,gtk_tree_view_column_get_width_db);
extern GType gtk_invisible_get_type_db(void);
CheckInterfacedef(gtk_invisible_get_type,gtk_invisible_get_type_db);
extern void gtk_cell_renderer_toggle_set_active_db(GtkCellRendererToggle *, gboolean);
CheckInterfacedef(gtk_cell_renderer_toggle_set_active,gtk_cell_renderer_toggle_set_active_db);
extern void gtk_menu_item_set_right_justified_db(GtkMenuItem *, gboolean);
CheckInterfacedef(gtk_menu_item_set_right_justified,gtk_menu_item_set_right_justified_db);
extern GType gtk_widget_flags_get_type_db(void);
CheckInterfacedef(gtk_widget_flags_get_type,gtk_widget_flags_get_type_db);
extern void gtk_action_connect_accelerator_db(GtkAction *);
CheckInterfacedef(gtk_action_connect_accelerator,gtk_action_connect_accelerator_db);
extern GtkWidget * gtk_image_new_from_pixbuf_db(GdkPixbuf *);
CheckInterfacedef(gtk_image_new_from_pixbuf,gtk_image_new_from_pixbuf_db);
extern gint gtk_icon_view_get_columns_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_columns,gtk_icon_view_get_columns_db);
extern void gtk_menu_set_tearoff_state_db(GtkMenu *, gboolean);
CheckInterfacedef(gtk_menu_set_tearoff_state,gtk_menu_set_tearoff_state_db);
extern void gtk_progress_bar_set_ellipsize_db(GtkProgressBar *, PangoEllipsizeMode);
CheckInterfacedef(gtk_progress_bar_set_ellipsize,gtk_progress_bar_set_ellipsize_db);
extern void gtk_image_set_from_pixbuf_db(GtkImage *, GdkPixbuf *);
CheckInterfacedef(gtk_image_set_from_pixbuf,gtk_image_set_from_pixbuf_db);
extern gboolean gtk_text_view_get_cursor_visible_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_cursor_visible,gtk_text_view_get_cursor_visible_db);
extern void gtk_image_set_from_stock_db(GtkImage *, const gchar *, GtkIconSize);
CheckInterfacedef(gtk_image_set_from_stock,gtk_image_set_from_stock_db);
extern GType gtk_event_box_get_type_db(void);
CheckInterfacedef(gtk_event_box_get_type,gtk_event_box_get_type_db);
extern void gtk_icon_source_free_db(GtkIconSource *);
CheckInterfacedef(gtk_icon_source_free,gtk_icon_source_free_db);
extern void gtk_menu_attach_to_widget_db(GtkMenu *, GtkWidget *, GtkMenuDetachFunc);
CheckInterfacedef(gtk_menu_attach_to_widget,gtk_menu_attach_to_widget_db);
extern void gtk_menu_reposition_db(GtkMenu *);
CheckInterfacedef(gtk_menu_reposition,gtk_menu_reposition_db);
extern GtkTreeSelection * gtk_tree_view_get_selection_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_selection,gtk_tree_view_get_selection_db);
extern void gtk_button_clicked_db(GtkButton *);
CheckInterfacedef(gtk_button_clicked,gtk_button_clicked_db);
extern GType gtk_file_chooser_error_get_type_db(void);
CheckInterfacedef(gtk_file_chooser_error_get_type,gtk_file_chooser_error_get_type_db);
extern void gtk_list_store_swap_db(GtkListStore *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_list_store_swap,gtk_list_store_swap_db);
extern void gtk_tree_model_get_db(GtkTreeModel *, GtkTreeIter *, ...);
CheckInterfacedef(gtk_tree_model_get,gtk_tree_model_get_db);
extern GtkWidget * gtk_ui_manager_get_widget_db(GtkUIManager *, const gchar *);
CheckInterfacedef(gtk_ui_manager_get_widget,gtk_ui_manager_get_widget_db);
extern GtkIconSize gtk_icon_size_register_db(const gchar *, gint, gint);
CheckInterfacedef(gtk_icon_size_register,gtk_icon_size_register_db);
extern gboolean gtk_text_view_get_accepts_tab_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_accepts_tab,gtk_text_view_get_accepts_tab_db);
extern GtkWidget * gtk_radio_button_new_from_widget_db(GtkRadioButton *);
CheckInterfacedef(gtk_radio_button_new_from_widget,gtk_radio_button_new_from_widget_db);
extern char * gtk_file_chooser_get_preview_filename_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_preview_filename,gtk_file_chooser_get_preview_filename_db);
extern void gtk_invisible_set_screen_db(GtkInvisible *, GdkScreen *);
CheckInterfacedef(gtk_invisible_set_screen,gtk_invisible_set_screen_db);
extern GdkDisplay * gtk_clipboard_get_display_db(GtkClipboard *);
CheckInterfacedef(gtk_clipboard_get_display,gtk_clipboard_get_display_db);
extern GType gtk_statusbar_get_type_db(void);
CheckInterfacedef(gtk_statusbar_get_type,gtk_statusbar_get_type_db);
extern GtkWidget * gtk_font_button_new_db(void);
CheckInterfacedef(gtk_font_button_new,gtk_font_button_new_db);
extern GType gtk_tearoff_menu_item_get_type_db(void);
CheckInterfacedef(gtk_tearoff_menu_item_get_type,gtk_tearoff_menu_item_get_type_db);
extern const gchar * gtk_icon_size_get_name_db(GtkIconSize);
CheckInterfacedef(gtk_icon_size_get_name,gtk_icon_size_get_name_db);
extern GSList * gtk_file_chooser_list_shortcut_folder_uris_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_list_shortcut_folder_uris,gtk_file_chooser_list_shortcut_folder_uris_db);
extern GType gtk_tree_row_reference_get_type_db(void);
CheckInterfacedef(gtk_tree_row_reference_get_type,gtk_tree_row_reference_get_type_db);
extern gfloat gtk_tree_view_column_get_alignment_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_alignment,gtk_tree_view_column_get_alignment_db);
extern gboolean gtk_file_chooser_add_shortcut_folder_uri_db(GtkFileChooser *, const char *, GError * *);
CheckInterfacedef(gtk_file_chooser_add_shortcut_folder_uri,gtk_file_chooser_add_shortcut_folder_uri_db);
extern GtkWidget * gtk_window_get_focus_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_focus,gtk_window_get_focus_db);
extern GtkWidget * gtk_label_new_with_mnemonic_db(const gchar *);
CheckInterfacedef(gtk_label_new_with_mnemonic,gtk_label_new_with_mnemonic_db);
extern gboolean gtk_entry_get_activates_default_db(GtkEntry *);
CheckInterfacedef(gtk_entry_get_activates_default,gtk_entry_get_activates_default_db);
extern void gtk_layout_set_hadjustment_db(GtkLayout *, GtkAdjustment *);
CheckInterfacedef(gtk_layout_set_hadjustment,gtk_layout_set_hadjustment_db);
extern gint gtk_text_buffer_get_line_count_db(GtkTextBuffer *);
CheckInterfacedef(gtk_text_buffer_get_line_count,gtk_text_buffer_get_line_count_db);
extern GType gtk_button_get_type_db(void);
CheckInterfacedef(gtk_button_get_type,gtk_button_get_type_db);
extern void gtk_table_set_row_spacings_db(GtkTable *, guint);
CheckInterfacedef(gtk_table_set_row_spacings,gtk_table_set_row_spacings_db);
extern GtkWidget * gtk_statusbar_new_db(void);
CheckInterfacedef(gtk_statusbar_new,gtk_statusbar_new_db);
extern GtkCellRenderer * gtk_cell_renderer_toggle_new_db(void);
CheckInterfacedef(gtk_cell_renderer_toggle_new,gtk_cell_renderer_toggle_new_db);
extern void gtk_widget_modify_style_db(GtkWidget *, GtkRcStyle *);
CheckInterfacedef(gtk_widget_modify_style,gtk_widget_modify_style_db);
extern GdkPixbuf * gtk_widget_render_icon_db(GtkWidget *, const gchar *, GtkIconSize, const gchar *);
CheckInterfacedef(gtk_widget_render_icon,gtk_widget_render_icon_db);
extern void gtk_accel_map_add_filter_db(const gchar *);
CheckInterfacedef(gtk_accel_map_add_filter,gtk_accel_map_add_filter_db);
extern void gtk_window_set_position_db(GtkWindow *, GtkWindowPosition);
CheckInterfacedef(gtk_window_set_position,gtk_window_set_position_db);
extern void gtk_text_tag_table_foreach_db(GtkTextTagTable *, GtkTextTagTableForeach, gpointer);
CheckInterfacedef(gtk_text_tag_table_foreach,gtk_text_tag_table_foreach_db);
extern GtkIconSet * gtk_icon_set_new_from_pixbuf_db(GdkPixbuf *);
CheckInterfacedef(gtk_icon_set_new_from_pixbuf,gtk_icon_set_new_from_pixbuf_db);
extern GtkWidget * gtk_hruler_new_db(void);
CheckInterfacedef(gtk_hruler_new,gtk_hruler_new_db);
extern gboolean gtk_expander_get_expanded_db(GtkExpander *);
CheckInterfacedef(gtk_expander_get_expanded,gtk_expander_get_expanded_db);
extern void gtk_editable_delete_text_db(GtkEditable *, gint, gint);
CheckInterfacedef(gtk_editable_delete_text,gtk_editable_delete_text_db);
extern void gtk_paint_shadow_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint, gint);
CheckInterfacedef(gtk_paint_shadow,gtk_paint_shadow_db);
extern GdkPixbuf * gtk_icon_theme_load_icon_db(GtkIconTheme *, const gchar *, gint, GtkIconLookupFlags, GError * *);
CheckInterfacedef(gtk_icon_theme_load_icon,gtk_icon_theme_load_icon_db);
extern void gtk_window_maximize_db(GtkWindow *);
CheckInterfacedef(gtk_window_maximize,gtk_window_maximize_db);
extern GtkWidget * gtk_bin_get_child_db(GtkBin *);
CheckInterfacedef(gtk_bin_get_child,gtk_bin_get_child_db);
extern void gtk_notebook_set_menu_label_text_db(GtkNotebook *, GtkWidget *, const gchar *);
CheckInterfacedef(gtk_notebook_set_menu_label_text,gtk_notebook_set_menu_label_text_db);
extern GtkStockItem * gtk_stock_item_copy_db(const GtkStockItem *);
CheckInterfacedef(gtk_stock_item_copy,gtk_stock_item_copy_db);
extern void gtk_tool_item_rebuild_menu_db(GtkToolItem *);
CheckInterfacedef(gtk_tool_item_rebuild_menu,gtk_tool_item_rebuild_menu_db);
extern void gtk_style_set_background_db(GtkStyle *, GdkWindow *, GtkStateType);
CheckInterfacedef(gtk_style_set_background,gtk_style_set_background_db);
extern gboolean gtk_text_iter_starts_line_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_starts_line,gtk_text_iter_starts_line_db);
extern gboolean gtk_tree_model_sort_iter_is_valid_db(GtkTreeModelSort *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_sort_iter_is_valid,gtk_tree_model_sort_iter_is_valid_db);
extern void gtk_clipboard_set_image_db(GtkClipboard *, GdkPixbuf *);
CheckInterfacedef(gtk_clipboard_set_image,gtk_clipboard_set_image_db);
extern gboolean gtk_selection_owner_set_for_display_db(GdkDisplay *, GtkWidget *, GdkAtom, guint32);
CheckInterfacedef(gtk_selection_owner_set_for_display,gtk_selection_owner_set_for_display_db);
extern void gtk_tree_view_column_pack_start_db(GtkTreeViewColumn *, GtkCellRenderer *, gboolean);
CheckInterfacedef(gtk_tree_view_column_pack_start,gtk_tree_view_column_pack_start_db);
extern gboolean gtk_text_iter_in_range_db(const GtkTextIter *, const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_in_range,gtk_text_iter_in_range_db);
extern const gchar * gtk_about_dialog_get_comments_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_comments,gtk_about_dialog_get_comments_db);
extern GtkWidget * gtk_file_chooser_button_new_with_backend_db(const gchar *, GtkFileChooserAction, const gchar *);
CheckInterfacedef(gtk_file_chooser_button_new_with_backend,gtk_file_chooser_button_new_with_backend_db);
extern GtkWidget * gtk_widget_new_db(GType, const gchar *, ...);
CheckInterfacedef(gtk_widget_new,gtk_widget_new_db);
extern GtkWidget * gtk_combo_box_entry_new_text_db(void);
CheckInterfacedef(gtk_combo_box_entry_new_text,gtk_combo_box_entry_new_text_db);
extern GType gtk_resize_mode_get_type_db(void);
CheckInterfacedef(gtk_resize_mode_get_type,gtk_resize_mode_get_type_db);
extern void gtk_entry_completion_set_match_func_db(GtkEntryCompletion *, GtkEntryCompletionMatchFunc, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_entry_completion_set_match_func,gtk_entry_completion_set_match_func_db);
extern void gtk_spin_button_get_increments_db(GtkSpinButton *, gdouble *, gdouble *);
CheckInterfacedef(gtk_spin_button_get_increments,gtk_spin_button_get_increments_db);
extern void gtk_font_button_set_use_font_db(GtkFontButton *, gboolean);
CheckInterfacedef(gtk_font_button_set_use_font,gtk_font_button_set_use_font_db);
extern GdkColormap * gtk_widget_get_colormap_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_colormap,gtk_widget_get_colormap_db);
extern GtkToolItem * gtk_radio_tool_button_new_db(GSList *);
CheckInterfacedef(gtk_radio_tool_button_new,gtk_radio_tool_button_new_db);
extern void gtk_color_selection_set_current_alpha_db(GtkColorSelection *, guint16);
CheckInterfacedef(gtk_color_selection_set_current_alpha,gtk_color_selection_set_current_alpha_db);
extern gchar * * gtk_rc_get_default_files_db(void);
CheckInterfacedef(gtk_rc_get_default_files,gtk_rc_get_default_files_db);
extern void gtk_editable_paste_clipboard_db(GtkEditable *);
CheckInterfacedef(gtk_editable_paste_clipboard,gtk_editable_paste_clipboard_db);
extern void gtk_accel_map_load_db(const gchar *);
CheckInterfacedef(gtk_accel_map_load,gtk_accel_map_load_db);
extern GtkTooltips * gtk_tooltips_new_db(void);
CheckInterfacedef(gtk_tooltips_new,gtk_tooltips_new_db);
extern GtkWidget * gtk_image_new_from_file_db(const gchar *);
CheckInterfacedef(gtk_image_new_from_file,gtk_image_new_from_file_db);
extern gint gtk_icon_view_get_spacing_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_spacing,gtk_icon_view_get_spacing_db);
extern GtkWidget * gtk_vbutton_box_new_db(void);
CheckInterfacedef(gtk_vbutton_box_new,gtk_vbutton_box_new_db);
extern void gtk_widget_freeze_child_notify_db(GtkWidget *);
CheckInterfacedef(gtk_widget_freeze_child_notify,gtk_widget_freeze_child_notify_db);
extern GtkStyle * gtk_style_new_db(void);
CheckInterfacedef(gtk_style_new,gtk_style_new_db);
extern void gtk_editable_set_editable_db(GtkEditable *, gboolean);
CheckInterfacedef(gtk_editable_set_editable,gtk_editable_set_editable_db);
extern GtkWidget * gtk_button_new_with_mnemonic_db(const gchar *);
CheckInterfacedef(gtk_button_new_with_mnemonic,gtk_button_new_with_mnemonic_db);
extern GType gtk_separator_menu_item_get_type_db(void);
CheckInterfacedef(gtk_separator_menu_item_get_type,gtk_separator_menu_item_get_type_db);
extern void gtk_window_set_frame_dimensions_db(GtkWindow *, gint, gint, gint, gint);
CheckInterfacedef(gtk_window_set_frame_dimensions,gtk_window_set_frame_dimensions_db);
extern void gtk_text_buffer_select_range_db(GtkTextBuffer *, const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_select_range,gtk_text_buffer_select_range_db);
extern gboolean gtk_tree_view_row_expanded_db(GtkTreeView *, GtkTreePath *);
CheckInterfacedef(gtk_tree_view_row_expanded,gtk_tree_view_row_expanded_db);
extern void gtk_window_set_role_db(GtkWindow *, const gchar *);
CheckInterfacedef(gtk_window_set_role,gtk_window_set_role_db);
extern void gtk_plug_construct_for_display_db(GtkPlug *, GdkDisplay *, GdkNativeWindow);
CheckInterfacedef(gtk_plug_construct_for_display,gtk_plug_construct_for_display_db);
extern void gtk_action_group_set_visible_db(GtkActionGroup *, gboolean);
CheckInterfacedef(gtk_action_group_set_visible,gtk_action_group_set_visible_db);
extern void gtk_misc_get_padding_db(GtkMisc *, gint *, gint *);
CheckInterfacedef(gtk_misc_get_padding,gtk_misc_get_padding_db);
extern GType gtk_file_chooser_get_type_db(void);
CheckInterfacedef(gtk_file_chooser_get_type,gtk_file_chooser_get_type_db);
extern void gtk_tree_view_column_set_resizable_db(GtkTreeViewColumn *, gboolean);
CheckInterfacedef(gtk_tree_view_column_set_resizable,gtk_tree_view_column_set_resizable_db);
extern void gtk_tree_view_columns_autosize_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_columns_autosize,gtk_tree_view_columns_autosize_db);
extern void gtk_layout_set_size_db(GtkLayout *, guint, guint);
CheckInterfacedef(gtk_layout_set_size,gtk_layout_set_size_db);
extern gboolean gtk_toggle_button_get_mode_db(GtkToggleButton *);
CheckInterfacedef(gtk_toggle_button_get_mode,gtk_toggle_button_get_mode_db);
extern GType gtk_expander_style_get_type_db(void);
CheckInterfacedef(gtk_expander_style_get_type,gtk_expander_style_get_type_db);
extern void gtk_accessible_connect_widget_destroyed_db(GtkAccessible *);
CheckInterfacedef(gtk_accessible_connect_widget_destroyed,gtk_accessible_connect_widget_destroyed_db);
extern void gtk_tree_view_set_cursor_db(GtkTreeView *, GtkTreePath *, GtkTreeViewColumn *, gboolean);
CheckInterfacedef(gtk_tree_view_set_cursor,gtk_tree_view_set_cursor_db);
extern void gtk_button_box_set_child_secondary_db(GtkButtonBox *, GtkWidget *, gboolean);
CheckInterfacedef(gtk_button_box_set_child_secondary,gtk_button_box_set_child_secondary_db);
extern void gtk_tree_model_row_deleted_db(GtkTreeModel *, GtkTreePath *);
CheckInterfacedef(gtk_tree_model_row_deleted,gtk_tree_model_row_deleted_db);
extern void gtk_tree_selection_set_select_function_db(GtkTreeSelection *, GtkTreeSelectionFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_tree_selection_set_select_function,gtk_tree_selection_set_select_function_db);
extern gboolean gtk_tree_drag_source_row_draggable_db(GtkTreeDragSource *, GtkTreePath *);
CheckInterfacedef(gtk_tree_drag_source_row_draggable,gtk_tree_drag_source_row_draggable_db);
extern GtkAccelGroupEntry * gtk_accel_group_query_db(GtkAccelGroup *, guint, GdkModifierType, guint *);
CheckInterfacedef(gtk_accel_group_query,gtk_accel_group_query_db);
extern void gtk_expander_set_label_widget_db(GtkExpander *, GtkWidget *);
CheckInterfacedef(gtk_expander_set_label_widget,gtk_expander_set_label_widget_db);
extern void gtk_target_list_add_table_db(GtkTargetList *, const GtkTargetEntry *, guint);
CheckInterfacedef(gtk_target_list_add_table,gtk_target_list_add_table_db);
extern gint gtk_icon_view_get_row_spacing_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_row_spacing,gtk_icon_view_get_row_spacing_db);
extern gboolean gtk_text_view_forward_display_line_end_db(GtkTextView *, GtkTextIter *);
CheckInterfacedef(gtk_text_view_forward_display_line_end,gtk_text_view_forward_display_line_end_db);
extern GtkIconSize gtk_tool_item_get_icon_size_db(GtkToolItem *);
CheckInterfacedef(gtk_tool_item_get_icon_size,gtk_tool_item_get_icon_size_db);
extern void gtk_widget_set_default_direction_db(GtkTextDirection);
CheckInterfacedef(gtk_widget_set_default_direction,gtk_widget_set_default_direction_db);
extern void gtk_tree_view_move_column_after_db(GtkTreeView *, GtkTreeViewColumn *, GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_move_column_after,gtk_tree_view_move_column_after_db);
extern GType gtk_notebook_tab_get_type_db(void);
CheckInterfacedef(gtk_notebook_tab_get_type,gtk_notebook_tab_get_type_db);
extern GtkActionGroup * gtk_action_group_new_db(const gchar *);
CheckInterfacedef(gtk_action_group_new,gtk_action_group_new_db);
extern void gtk_widget_add_mnemonic_label_db(GtkWidget *, GtkWidget *);
CheckInterfacedef(gtk_widget_add_mnemonic_label,gtk_widget_add_mnemonic_label_db);
extern GType gtk_text_child_anchor_get_type_db(void);
CheckInterfacedef(gtk_text_child_anchor_get_type,gtk_text_child_anchor_get_type_db);
extern const gchar * gtk_icon_info_get_filename_db(GtkIconInfo *);
CheckInterfacedef(gtk_icon_info_get_filename,gtk_icon_info_get_filename_db);
extern void gtk_menu_item_set_submenu_db(GtkMenuItem *, GtkWidget *);
CheckInterfacedef(gtk_menu_item_set_submenu,gtk_menu_item_set_submenu_db);
extern void gtk_menu_detach_db(GtkMenu *);
CheckInterfacedef(gtk_menu_detach,gtk_menu_detach_db);
extern void gtk_container_resize_children_db(GtkContainer *);
CheckInterfacedef(gtk_container_resize_children,gtk_container_resize_children_db);
extern GType gtk_text_mark_get_type_db(void);
CheckInterfacedef(gtk_text_mark_get_type,gtk_text_mark_get_type_db);
extern gint gtk_entry_get_max_length_db(GtkEntry *);
CheckInterfacedef(gtk_entry_get_max_length,gtk_entry_get_max_length_db);
extern GSList * gtk_radio_menu_item_get_group_db(GtkRadioMenuItem *);
CheckInterfacedef(gtk_radio_menu_item_get_group,gtk_radio_menu_item_get_group_db);
extern GType gtk_text_attributes_get_type_db(void);
CheckInterfacedef(gtk_text_attributes_get_type,gtk_text_attributes_get_type_db);
extern gboolean gtk_text_mark_get_left_gravity_db(GtkTextMark *);
CheckInterfacedef(gtk_text_mark_get_left_gravity,gtk_text_mark_get_left_gravity_db);
extern GdkRegion * gtk_widget_region_intersect_db(GtkWidget *, GdkRegion *);
CheckInterfacedef(gtk_widget_region_intersect,gtk_widget_region_intersect_db);
extern GtkWidget * gtk_handle_box_new_db(void);
CheckInterfacedef(gtk_handle_box_new,gtk_handle_box_new_db);
extern GList * gtk_menu_get_for_attach_widget_db(GtkWidget *);
CheckInterfacedef(gtk_menu_get_for_attach_widget,gtk_menu_get_for_attach_widget_db);
extern void gtk_list_store_set_column_types_db(GtkListStore *, gint, GType *);
CheckInterfacedef(gtk_list_store_set_column_types,gtk_list_store_set_column_types_db);
extern void gtk_paint_option_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint, gint);
CheckInterfacedef(gtk_paint_option,gtk_paint_option_db);
extern void gtk_tree_selection_select_iter_db(GtkTreeSelection *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_selection_select_iter,gtk_tree_selection_select_iter_db);
extern void gtk_tree_view_column_set_fixed_width_db(GtkTreeViewColumn *, gint);
CheckInterfacedef(gtk_tree_view_column_set_fixed_width,gtk_tree_view_column_set_fixed_width_db);
extern GtkTextBuffer * gtk_text_buffer_new_db(GtkTextTagTable *);
CheckInterfacedef(gtk_text_buffer_new,gtk_text_buffer_new_db);
extern void gtk_menu_shell_activate_item_db(GtkMenuShell *, GtkWidget *, gboolean);
CheckInterfacedef(gtk_menu_shell_activate_item,gtk_menu_shell_activate_item_db);
extern void gtk_tree_view_column_set_widget_db(GtkTreeViewColumn *, GtkWidget *);
CheckInterfacedef(gtk_tree_view_column_set_widget,gtk_tree_view_column_set_widget_db);
extern gint gtk_notebook_get_current_page_db(GtkNotebook *);
CheckInterfacedef(gtk_notebook_get_current_page,gtk_notebook_get_current_page_db);
extern GtkWidget * gtk_message_dialog_new_with_markup_db(GtkWindow *, GtkDialogFlags, GtkMessageType, GtkButtonsType, const gchar *, ...);
CheckInterfacedef(gtk_message_dialog_new_with_markup,gtk_message_dialog_new_with_markup_db);
extern const gchar * gtk_widget_get_name_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_name,gtk_widget_get_name_db);
extern gint gtk_entry_completion_get_text_column_db(GtkEntryCompletion *);
CheckInterfacedef(gtk_entry_completion_get_text_column,gtk_entry_completion_get_text_column_db);
extern GType gtk_calendar_get_type_db(void);
CheckInterfacedef(gtk_calendar_get_type,gtk_calendar_get_type_db);
extern void gtk_tree_view_unset_rows_drag_source_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_unset_rows_drag_source,gtk_tree_view_unset_rows_drag_source_db);
extern void gtk_tool_button_set_icon_widget_db(GtkToolButton *, GtkWidget *);
CheckInterfacedef(gtk_tool_button_set_icon_widget,gtk_tool_button_set_icon_widget_db);
extern GType gtk_cell_renderer_mode_get_type_db(void);
CheckInterfacedef(gtk_cell_renderer_mode_get_type,gtk_cell_renderer_mode_get_type_db);
extern GtkWidget * gtk_check_button_new_with_label_db(const gchar *);
CheckInterfacedef(gtk_check_button_new_with_label,gtk_check_button_new_with_label_db);
extern void gtk_cell_editable_start_editing_db(GtkCellEditable *, GdkEvent *);
CheckInterfacedef(gtk_cell_editable_start_editing,gtk_cell_editable_start_editing_db);
extern gboolean gtk_widget_has_screen_db(GtkWidget *);
CheckInterfacedef(gtk_widget_has_screen,gtk_widget_has_screen_db);
extern void gtk_dialog_set_alternative_button_order_db(GtkDialog *, gint, ...);
CheckInterfacedef(gtk_dialog_set_alternative_button_order,gtk_dialog_set_alternative_button_order_db);
extern void gtk_radio_tool_button_set_group_db(GtkRadioToolButton *, GSList *);
CheckInterfacedef(gtk_radio_tool_button_set_group,gtk_radio_tool_button_set_group_db);
extern void gtk_menu_item_activate_db(GtkMenuItem *);
CheckInterfacedef(gtk_menu_item_activate,gtk_menu_item_activate_db);
extern const gchar * gtk_window_get_title_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_title,gtk_window_get_title_db);
extern void gtk_window_set_gravity_db(GtkWindow *, GdkGravity);
CheckInterfacedef(gtk_window_set_gravity,gtk_window_set_gravity_db);
extern GtkCalendarDisplayOptions gtk_calendar_get_display_options_db(GtkCalendar *);
CheckInterfacedef(gtk_calendar_get_display_options,gtk_calendar_get_display_options_db);
extern void gtk_text_tag_table_remove_db(GtkTextTagTable *, GtkTextTag *);
CheckInterfacedef(gtk_text_tag_table_remove,gtk_text_tag_table_remove_db);
extern void gtk_font_button_set_title_db(GtkFontButton *, const gchar *);
CheckInterfacedef(gtk_font_button_set_title,gtk_font_button_set_title_db);
extern void gtk_tree_row_reference_reordered_db(GObject *, GtkTreePath *, GtkTreeIter *, gint *);
CheckInterfacedef(gtk_tree_row_reference_reordered,gtk_tree_row_reference_reordered_db);
extern void gtk_file_filter_add_mime_type_db(GtkFileFilter *, const gchar *);
CheckInterfacedef(gtk_file_filter_add_mime_type,gtk_file_filter_add_mime_type_db);
extern GOptionGroup * gtk_get_option_group_db(gboolean);
CheckInterfacedef(gtk_get_option_group,gtk_get_option_group_db);
extern gchar * gtk_ui_manager_get_ui_db(GtkUIManager *);
CheckInterfacedef(gtk_ui_manager_get_ui,gtk_ui_manager_get_ui_db);
extern void gtk_ruler_set_metric_db(GtkRuler *, GtkMetricType);
CheckInterfacedef(gtk_ruler_set_metric,gtk_ruler_set_metric_db);
extern GtkToolItem * gtk_tool_item_new_db(void);
CheckInterfacedef(gtk_tool_item_new,gtk_tool_item_new_db);
extern void gtk_about_dialog_set_license_db(GtkAboutDialog *, const gchar *);
CheckInterfacedef(gtk_about_dialog_set_license,gtk_about_dialog_set_license_db);
extern void gtk_paint_box_gap_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, gchar *, gint, gint, gint, gint, GtkPositionType, gint, gint);
CheckInterfacedef(gtk_paint_box_gap,gtk_paint_box_gap_db);
extern GtkWidget * gtk_plug_new_db(GdkNativeWindow);
CheckInterfacedef(gtk_plug_new,gtk_plug_new_db);
extern GType gtk_im_multicontext_get_type_db(void);
CheckInterfacedef(gtk_im_multicontext_get_type,gtk_im_multicontext_get_type_db);
extern void gtk_toggle_action_set_active_db(GtkToggleAction *, gboolean);
CheckInterfacedef(gtk_toggle_action_set_active,gtk_toggle_action_set_active_db);
extern void gtk_label_set_text_with_mnemonic_db(GtkLabel *, const gchar *);
CheckInterfacedef(gtk_label_set_text_with_mnemonic,gtk_label_set_text_with_mnemonic_db);
extern GtkWidget * gtk_table_new_db(guint, guint, gboolean);
CheckInterfacedef(gtk_table_new,gtk_table_new_db);
extern GtkWidget * gtk_alignment_new_db(gfloat, gfloat, gfloat, gfloat);
CheckInterfacedef(gtk_alignment_new,gtk_alignment_new_db);
extern gint gtk_icon_view_get_margin_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_margin,gtk_icon_view_get_margin_db);
extern void gtk_notebook_set_show_border_db(GtkNotebook *, gboolean);
CheckInterfacedef(gtk_notebook_set_show_border,gtk_notebook_set_show_border_db);
extern void gtk_text_buffer_paste_clipboard_db(GtkTextBuffer *, GtkClipboard *, GtkTextIter *, gboolean);
CheckInterfacedef(gtk_text_buffer_paste_clipboard,gtk_text_buffer_paste_clipboard_db);
extern GtkWidget * gtk_hscrollbar_new_db(GtkAdjustment *);
CheckInterfacedef(gtk_hscrollbar_new,gtk_hscrollbar_new_db);
extern gboolean gtk_tree_view_get_fixed_height_mode_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_fixed_height_mode,gtk_tree_view_get_fixed_height_mode_db);
extern gboolean gtk_tree_store_remove_db(GtkTreeStore *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_store_remove,gtk_tree_store_remove_db);
extern GList * gtk_widget_list_mnemonic_labels_db(GtkWidget *);
CheckInterfacedef(gtk_widget_list_mnemonic_labels,gtk_widget_list_mnemonic_labels_db);
extern void gtk_cell_layout_add_attribute_db(GtkCellLayout *, GtkCellRenderer *, const gchar *, gint);
CheckInterfacedef(gtk_cell_layout_add_attribute,gtk_cell_layout_add_attribute_db);
extern GParamSpec * * gtk_widget_class_list_style_properties_db(GtkWidgetClass *, guint *);
CheckInterfacedef(gtk_widget_class_list_style_properties,gtk_widget_class_list_style_properties_db);
extern gint gtk_entry_completion_get_minimum_key_length_db(GtkEntryCompletion *);
CheckInterfacedef(gtk_entry_completion_get_minimum_key_length,gtk_entry_completion_get_minimum_key_length_db);
extern void gtk_text_buffer_move_mark_db(GtkTextBuffer *, GtkTextMark *, const GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_move_mark,gtk_text_buffer_move_mark_db);
extern gboolean gtk_text_mark_get_visible_db(GtkTextMark *);
CheckInterfacedef(gtk_text_mark_get_visible,gtk_text_mark_get_visible_db);
extern void gtk_list_store_set_value_db(GtkListStore *, GtkTreeIter *, gint, GValue *);
CheckInterfacedef(gtk_list_store_set_value,gtk_list_store_set_value_db);
extern void gtk_widget_style_get_property_db(GtkWidget *, const gchar *, GValue *);
CheckInterfacedef(gtk_widget_style_get_property,gtk_widget_style_get_property_db);
extern void gtk_widget_modify_bg_db(GtkWidget *, GtkStateType, const GdkColor *);
CheckInterfacedef(gtk_widget_modify_bg,gtk_widget_modify_bg_db);
extern GtkWidget * gtk_image_menu_item_new_with_label_db(const gchar *);
CheckInterfacedef(gtk_image_menu_item_new_with_label,gtk_image_menu_item_new_with_label_db);
extern gboolean gtk_font_button_get_use_font_db(GtkFontButton *);
CheckInterfacedef(gtk_font_button_get_use_font,gtk_font_button_get_use_font_db);
extern gboolean gtk_im_context_delete_surrounding_db(GtkIMContext *, gint, gint);
CheckInterfacedef(gtk_im_context_delete_surrounding,gtk_im_context_delete_surrounding_db);
extern void gtk_misc_set_alignment_db(GtkMisc *, gfloat, gfloat);
CheckInterfacedef(gtk_misc_set_alignment,gtk_misc_set_alignment_db);
extern GtkWidget * gtk_tool_button_get_label_widget_db(GtkToolButton *);
CheckInterfacedef(gtk_tool_button_get_label_widget,gtk_tool_button_get_label_widget_db);
extern gint gtk_toolbar_get_n_items_db(GtkToolbar *);
CheckInterfacedef(gtk_toolbar_get_n_items,gtk_toolbar_get_n_items_db);
extern GtkWidget * gtk_tool_button_get_icon_widget_db(GtkToolButton *);
CheckInterfacedef(gtk_tool_button_get_icon_widget,gtk_tool_button_get_icon_widget_db);
extern gboolean gtk_tree_row_reference_valid_db(GtkTreeRowReference *);
CheckInterfacedef(gtk_tree_row_reference_valid,gtk_tree_row_reference_valid_db);
extern gboolean gtk_tree_model_iter_nth_child_db(GtkTreeModel *, GtkTreeIter *, GtkTreeIter *, gint);
CheckInterfacedef(gtk_tree_model_iter_nth_child,gtk_tree_model_iter_nth_child_db);
extern void gtk_tree_view_set_search_equal_func_db(GtkTreeView *, GtkTreeViewSearchEqualFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_tree_view_set_search_equal_func,gtk_tree_view_set_search_equal_func_db);
extern GtkWidget * gtk_image_new_from_animation_db(GdkPixbufAnimation *);
CheckInterfacedef(gtk_image_new_from_animation,gtk_image_new_from_animation_db);
extern gint gtk_tree_view_remove_column_db(GtkTreeView *, GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_remove_column,gtk_tree_view_remove_column_db);
extern void gtk_window_remove_mnemonic_db(GtkWindow *, guint, GtkWidget *);
CheckInterfacedef(gtk_window_remove_mnemonic,gtk_window_remove_mnemonic_db);
extern GType gtk_text_iter_get_type_db(void);
CheckInterfacedef(gtk_text_iter_get_type,gtk_text_iter_get_type_db);
extern gboolean gtk_action_get_visible_db(GtkAction *);
CheckInterfacedef(gtk_action_get_visible,gtk_action_get_visible_db);
extern GtkWidget * gtk_radio_button_new_db(GSList *);
CheckInterfacedef(gtk_radio_button_new,gtk_radio_button_new_db);
extern gboolean gtk_text_iter_ends_word_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_ends_word,gtk_text_iter_ends_word_db);
extern GType gtk_visibility_get_type_db(void);
CheckInterfacedef(gtk_visibility_get_type,gtk_visibility_get_type_db);
extern GType gtk_im_context_simple_get_type_db(void);
CheckInterfacedef(gtk_im_context_simple_get_type,gtk_im_context_simple_get_type_db);
extern GdkWindow * gtk_widget_get_root_window_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_root_window,gtk_widget_get_root_window_db);
extern GType gtk_vruler_get_type_db(void);
CheckInterfacedef(gtk_vruler_get_type,gtk_vruler_get_type_db);
extern void gtk_image_set_from_animation_db(GtkImage *, GdkPixbufAnimation *);
CheckInterfacedef(gtk_image_set_from_animation,gtk_image_set_from_animation_db);
extern void gtk_tree_view_set_enable_search_db(GtkTreeView *, gboolean);
CheckInterfacedef(gtk_tree_view_set_enable_search,gtk_tree_view_set_enable_search_db);
extern void gtk_combo_box_popdown_db(GtkComboBox *);
CheckInterfacedef(gtk_combo_box_popdown,gtk_combo_box_popdown_db);
extern void gtk_tree_view_expand_all_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_expand_all,gtk_tree_view_expand_all_db);
extern void gtk_drag_source_set_icon_stock_db(GtkWidget *, const gchar *);
CheckInterfacedef(gtk_drag_source_set_icon_stock,gtk_drag_source_set_icon_stock_db);
extern const gchar * gtk_icon_info_get_display_name_db(GtkIconInfo *);
CheckInterfacedef(gtk_icon_info_get_display_name,gtk_icon_info_get_display_name_db);
extern void gtk_window_iconify_db(GtkWindow *);
CheckInterfacedef(gtk_window_iconify,gtk_window_iconify_db);
extern GType gtk_color_selection_dialog_get_type_db(void);
CheckInterfacedef(gtk_color_selection_dialog_get_type,gtk_color_selection_dialog_get_type_db);
extern GtkIconTheme * gtk_icon_theme_new_db(void);
CheckInterfacedef(gtk_icon_theme_new,gtk_icon_theme_new_db);
extern gint gtk_icon_info_get_base_size_db(GtkIconInfo *);
CheckInterfacedef(gtk_icon_info_get_base_size,gtk_icon_info_get_base_size_db);
extern void gtk_action_block_activate_from_db(GtkAction *, GtkWidget *);
CheckInterfacedef(gtk_action_block_activate_from,gtk_action_block_activate_from_db);
extern void gtk_action_group_add_actions_db(GtkActionGroup *, const GtkActionEntry *, guint, gpointer);
CheckInterfacedef(gtk_action_group_add_actions,gtk_action_group_add_actions_db);
extern GType gtk_separator_get_type_db(void);
CheckInterfacedef(gtk_separator_get_type,gtk_separator_get_type_db);
extern void gtk_table_set_col_spacing_db(GtkTable *, guint, guint);
CheckInterfacedef(gtk_table_set_col_spacing,gtk_table_set_col_spacing_db);
extern gboolean gtk_text_view_get_editable_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_editable,gtk_text_view_get_editable_db);
extern GdkWindow * gtk_widget_get_parent_window_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_parent_window,gtk_widget_get_parent_window_db);
extern void gtk_color_selection_get_current_color_db(GtkColorSelection *, GdkColor *);
CheckInterfacedef(gtk_color_selection_get_current_color,gtk_color_selection_get_current_color_db);
extern void gtk_about_dialog_set_website_db(GtkAboutDialog *, const gchar *);
CheckInterfacedef(gtk_about_dialog_set_website,gtk_about_dialog_set_website_db);
extern GType gtk_requisition_get_type_db(void);
CheckInterfacedef(gtk_requisition_get_type,gtk_requisition_get_type_db);
extern void gtk_accelerator_parse_db(const gchar *, guint *, GdkModifierType *);
CheckInterfacedef(gtk_accelerator_parse,gtk_accelerator_parse_db);
extern GtkShadowType gtk_frame_get_shadow_type_db(GtkFrame *);
CheckInterfacedef(gtk_frame_get_shadow_type,gtk_frame_get_shadow_type_db);
extern gboolean gtk_tree_view_get_rules_hint_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_rules_hint,gtk_tree_view_get_rules_hint_db);
extern void gtk_accelerator_set_default_mod_mask_db(GdkModifierType);
CheckInterfacedef(gtk_accelerator_set_default_mod_mask,gtk_accelerator_set_default_mod_mask_db);
extern void gtk_window_set_keep_below_db(GtkWindow *, gboolean);
CheckInterfacedef(gtk_window_set_keep_below,gtk_window_set_keep_below_db);
extern gchar * gtk_text_iter_get_visible_slice_db(const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_visible_slice,gtk_text_iter_get_visible_slice_db);
extern void gtk_drag_source_add_uri_targets_db(GtkWidget *);
CheckInterfacedef(gtk_drag_source_add_uri_targets,gtk_drag_source_add_uri_targets_db);
extern gboolean gtk_font_selection_set_font_name_db(GtkFontSelection *, const gchar *);
CheckInterfacedef(gtk_font_selection_set_font_name,gtk_font_selection_set_font_name_db);
extern void gtk_entry_set_completion_db(GtkEntry *, GtkEntryCompletion *);
CheckInterfacedef(gtk_entry_set_completion,gtk_entry_set_completion_db);
extern gboolean gtk_action_group_get_sensitive_db(GtkActionGroup *);
CheckInterfacedef(gtk_action_group_get_sensitive,gtk_action_group_get_sensitive_db);
extern void gtk_label_set_ellipsize_db(GtkLabel *, PangoEllipsizeMode);
CheckInterfacedef(gtk_label_set_ellipsize,gtk_label_set_ellipsize_db);
extern GType gtk_arg_flags_get_type_db(void);
CheckInterfacedef(gtk_arg_flags_get_type,gtk_arg_flags_get_type_db);
extern void gtk_rc_parse_db(const gchar *);
CheckInterfacedef(gtk_rc_parse,gtk_rc_parse_db);
extern gboolean gtk_text_iter_has_tag_db(const GtkTextIter *, GtkTextTag *);
CheckInterfacedef(gtk_text_iter_has_tag,gtk_text_iter_has_tag_db);
extern void gtk_file_selection_set_select_multiple_db(GtkFileSelection *, gboolean);
CheckInterfacedef(gtk_file_selection_set_select_multiple,gtk_file_selection_set_select_multiple_db);
extern GtkTreePath * gtk_tree_model_filter_convert_child_path_to_path_db(GtkTreeModelFilter *, GtkTreePath *);
CheckInterfacedef(gtk_tree_model_filter_convert_child_path_to_path,gtk_tree_model_filter_convert_child_path_to_path_db);
extern void gtk_fixed_put_db(GtkFixed *, GtkWidget *, gint, gint);
CheckInterfacedef(gtk_fixed_put,gtk_fixed_put_db);
extern GtkSizeGroup * gtk_size_group_new_db(GtkSizeGroupMode);
CheckInterfacedef(gtk_size_group_new,gtk_size_group_new_db);
extern void gtk_entry_completion_delete_action_db(GtkEntryCompletion *, gint);
CheckInterfacedef(gtk_entry_completion_delete_action,gtk_entry_completion_delete_action_db);
extern void gtk_paint_expander_db(GtkStyle *, GdkWindow *, GtkStateType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, GtkExpanderStyle);
CheckInterfacedef(gtk_paint_expander,gtk_paint_expander_db);
extern GtkTreePath * gtk_tree_path_new_db(void);
CheckInterfacedef(gtk_tree_path_new,gtk_tree_path_new_db);
extern GType gtk_rc_token_type_get_type_db(void);
CheckInterfacedef(gtk_rc_token_type_get_type,gtk_rc_token_type_get_type_db);
extern void gtk_accel_group_lock_db(GtkAccelGroup *);
CheckInterfacedef(gtk_accel_group_lock,gtk_accel_group_lock_db);
extern gboolean gtk_tree_model_iter_has_child_db(GtkTreeModel *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_iter_has_child,gtk_tree_model_iter_has_child_db);
extern gboolean gtk_widget_activate_db(GtkWidget *);
CheckInterfacedef(gtk_widget_activate,gtk_widget_activate_db);
extern void gtk_text_buffer_begin_user_action_db(GtkTextBuffer *);
CheckInterfacedef(gtk_text_buffer_begin_user_action,gtk_text_buffer_begin_user_action_db);
extern void gtk_check_menu_item_toggled_db(GtkCheckMenuItem *);
CheckInterfacedef(gtk_check_menu_item_toggled,gtk_check_menu_item_toggled_db);
extern gboolean gtk_rc_property_parse_color_db(const GParamSpec *, const GString *, GValue *);
CheckInterfacedef(gtk_rc_property_parse_color,gtk_rc_property_parse_color_db);
extern void gtk_menu_item_toggle_size_allocate_db(GtkMenuItem *, gint);
CheckInterfacedef(gtk_menu_item_toggle_size_allocate,gtk_menu_item_toggle_size_allocate_db);
extern void gtk_file_chooser_button_set_title_db(GtkFileChooserButton *, const gchar *);
CheckInterfacedef(gtk_file_chooser_button_set_title,gtk_file_chooser_button_set_title_db);
extern void gtk_cell_renderer_stop_editing_db(GtkCellRenderer *, gboolean);
CheckInterfacedef(gtk_cell_renderer_stop_editing,gtk_cell_renderer_stop_editing_db);
extern void gtk_widget_unrealize_db(GtkWidget *);
CheckInterfacedef(gtk_widget_unrealize,gtk_widget_unrealize_db);
extern GType gtk_icon_theme_get_type_db(void);
CheckInterfacedef(gtk_icon_theme_get_type,gtk_icon_theme_get_type_db);
extern GSList * gtk_file_chooser_get_filenames_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_filenames,gtk_file_chooser_get_filenames_db);
extern void gtk_box_pack_start_defaults_db(GtkBox *, GtkWidget *);
CheckInterfacedef(gtk_box_pack_start_defaults,gtk_box_pack_start_defaults_db);
extern GParamSpec * gtk_container_class_find_child_property_db(GObjectClass *, const gchar *);
CheckInterfacedef(gtk_container_class_find_child_property,gtk_container_class_find_child_property_db);
extern guint gtk_table_get_default_col_spacing_db(GtkTable *);
CheckInterfacedef(gtk_table_get_default_col_spacing,gtk_table_get_default_col_spacing_db);
extern void gtk_menu_shell_insert_db(GtkMenuShell *, GtkWidget *, gint);
CheckInterfacedef(gtk_menu_shell_insert,gtk_menu_shell_insert_db);
extern GtkWidget * gtk_notebook_get_nth_page_db(GtkNotebook *, gint);
CheckInterfacedef(gtk_notebook_get_nth_page,gtk_notebook_get_nth_page_db);
extern void gtk_text_buffer_get_iter_at_line_offset_db(GtkTextBuffer *, GtkTextIter *, gint, gint);
CheckInterfacedef(gtk_text_buffer_get_iter_at_line_offset,gtk_text_buffer_get_iter_at_line_offset_db);
extern GtkWidget * gtk_combo_box_entry_new_with_model_db(GtkTreeModel *, gint);
CheckInterfacedef(gtk_combo_box_entry_new_with_model,gtk_combo_box_entry_new_with_model_db);
extern void gtk_handle_box_set_snap_edge_db(GtkHandleBox *, GtkPositionType);
CheckInterfacedef(gtk_handle_box_set_snap_edge,gtk_handle_box_set_snap_edge_db);
extern void gtk_combo_box_set_active_db(GtkComboBox *, gint);
CheckInterfacedef(gtk_combo_box_set_active,gtk_combo_box_set_active_db);
extern void gtk_message_dialog_format_secondary_markup_db(GtkMessageDialog *, const gchar *, ...);
CheckInterfacedef(gtk_message_dialog_format_secondary_markup,gtk_message_dialog_format_secondary_markup_db);
extern GType gtk_toolbar_get_type_db(void);
CheckInterfacedef(gtk_toolbar_get_type,gtk_toolbar_get_type_db);
extern GType gtk_border_get_type_db(void);
CheckInterfacedef(gtk_border_get_type,gtk_border_get_type_db);
extern gboolean gtk_bindings_activate_event_db(GtkObject *, GdkEventKey *);
CheckInterfacedef(gtk_bindings_activate_event,gtk_bindings_activate_event_db);
extern const gchar * gtk_font_selection_get_preview_text_db(GtkFontSelection *);
CheckInterfacedef(gtk_font_selection_get_preview_text,gtk_font_selection_get_preview_text_db);
extern GtkWidget * gtk_progress_bar_new_db(void);
CheckInterfacedef(gtk_progress_bar_new,gtk_progress_bar_new_db);
extern const gchar * gtk_font_selection_dialog_get_preview_text_db(GtkFontSelectionDialog *);
CheckInterfacedef(gtk_font_selection_dialog_get_preview_text,gtk_font_selection_dialog_get_preview_text_db);
extern void gtk_curve_set_vector_db(GtkCurve *, int, gfloat *);
CheckInterfacedef(gtk_curve_set_vector,gtk_curve_set_vector_db);
extern void gtk_tree_view_set_hadjustment_db(GtkTreeView *, GtkAdjustment *);
CheckInterfacedef(gtk_tree_view_set_hadjustment,gtk_tree_view_set_hadjustment_db);
extern gboolean gtk_toolbar_get_tooltips_db(GtkToolbar *);
CheckInterfacedef(gtk_toolbar_get_tooltips,gtk_toolbar_get_tooltips_db);
extern GtkWidget * gtk_image_new_from_pixmap_db(GdkPixmap *, GdkBitmap *);
CheckInterfacedef(gtk_image_new_from_pixmap,gtk_image_new_from_pixmap_db);
extern void gtk_file_chooser_select_all_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_select_all,gtk_file_chooser_select_all_db);
extern void gtk_tree_selection_unselect_iter_db(GtkTreeSelection *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_selection_unselect_iter,gtk_tree_selection_unselect_iter_db);
extern GType gtk_scroll_step_get_type_db(void);
CheckInterfacedef(gtk_scroll_step_get_type,gtk_scroll_step_get_type_db);
extern GType gtk_identifier_get_type_db(void);
CheckInterfacedef(gtk_identifier_get_type,gtk_identifier_get_type_db);
extern GtkWidget * gtk_font_button_new_with_font_db(const gchar *);
CheckInterfacedef(gtk_font_button_new_with_font,gtk_font_button_new_with_font_db);
extern void gtk_combo_box_set_focus_on_click_db(GtkComboBox *, gboolean);
CheckInterfacedef(gtk_combo_box_set_focus_on_click,gtk_combo_box_set_focus_on_click_db);
extern void gtk_icon_view_set_selection_mode_db(GtkIconView *, GtkSelectionMode);
CheckInterfacedef(gtk_icon_view_set_selection_mode,gtk_icon_view_set_selection_mode_db);
extern void gtk_message_dialog_set_markup_db(GtkMessageDialog *, const gchar *);
CheckInterfacedef(gtk_message_dialog_set_markup,gtk_message_dialog_set_markup_db);
extern gchar * gtk_file_chooser_get_uri_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_uri,gtk_file_chooser_get_uri_db);
extern GtkWidget * gtk_action_create_tool_item_db(GtkAction *);
CheckInterfacedef(gtk_action_create_tool_item,gtk_action_create_tool_item_db);
extern void gtk_widget_unref_db(GtkWidget *);
CheckInterfacedef(gtk_widget_unref,gtk_widget_unref_db);
extern gint gtk_widget_send_expose_db(GtkWidget *, GdkEvent *);
CheckInterfacedef(gtk_widget_send_expose,gtk_widget_send_expose_db);
extern gchar * gtk_text_iter_get_text_db(const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_text,gtk_text_iter_get_text_db);
extern GType gtk_image_type_get_type_db(void);
CheckInterfacedef(gtk_image_type_get_type,gtk_image_type_get_type_db);
extern GtkWidget * gtk_file_chooser_widget_new_db(GtkFileChooserAction);
CheckInterfacedef(gtk_file_chooser_widget_new,gtk_file_chooser_widget_new_db);
extern gboolean gtk_entry_completion_get_inline_completion_db(GtkEntryCompletion *);
CheckInterfacedef(gtk_entry_completion_get_inline_completion,gtk_entry_completion_get_inline_completion_db);
extern GType gtk_response_type_get_type_db(void);
CheckInterfacedef(gtk_response_type_get_type,gtk_response_type_get_type_db);
extern void gtk_widget_modify_text_db(GtkWidget *, GtkStateType, const GdkColor *);
CheckInterfacedef(gtk_widget_modify_text,gtk_widget_modify_text_db);
extern guint gtk_rc_parse_priority_db(GScanner *, GtkPathPriorityType *);
CheckInterfacedef(gtk_rc_parse_priority,gtk_rc_parse_priority_db);
extern GtkWidget * gtk_invisible_new_db(void);
CheckInterfacedef(gtk_invisible_new,gtk_invisible_new_db);
extern void gtk_paint_handle_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint, gint, GtkOrientation);
CheckInterfacedef(gtk_paint_handle,gtk_paint_handle_db);
extern gboolean gtk_text_iter_backward_visible_cursor_positions_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_backward_visible_cursor_positions,gtk_text_iter_backward_visible_cursor_positions_db);
extern gboolean gtk_font_button_get_show_style_db(GtkFontButton *);
CheckInterfacedef(gtk_font_button_get_show_style,gtk_font_button_get_show_style_db);
extern guint gtk_container_get_border_width_db(GtkContainer *);
CheckInterfacedef(gtk_container_get_border_width,gtk_container_get_border_width_db);
extern GtkWidget * gtk_widget_get_parent_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_parent,gtk_widget_get_parent_db);
extern void gtk_button_enter_db(GtkButton *);
CheckInterfacedef(gtk_button_enter,gtk_button_enter_db);
extern void gtk_text_view_set_accepts_tab_db(GtkTextView *, gboolean);
CheckInterfacedef(gtk_text_view_set_accepts_tab,gtk_text_view_set_accepts_tab_db);
extern void gtk_widget_set_redraw_on_allocate_db(GtkWidget *, gboolean);
CheckInterfacedef(gtk_widget_set_redraw_on_allocate,gtk_widget_set_redraw_on_allocate_db);
extern GtkWidget * gtk_radio_menu_item_new_with_label_db(GSList *, const gchar *);
CheckInterfacedef(gtk_radio_menu_item_new_with_label,gtk_radio_menu_item_new_with_label_db);
extern gboolean gtk_tree_view_column_get_reorderable_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_reorderable,gtk_tree_view_column_get_reorderable_db);
extern GType gtk_icon_view_get_type_db(void);
CheckInterfacedef(gtk_icon_view_get_type,gtk_icon_view_get_type_db);
extern void gtk_entry_set_visibility_db(GtkEntry *, gboolean);
CheckInterfacedef(gtk_entry_set_visibility,gtk_entry_set_visibility_db);
extern const gchar *const  * gtk_about_dialog_get_documenters_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_documenters,gtk_about_dialog_get_documenters_db);
extern GtkWidget * gtk_vruler_new_db(void);
CheckInterfacedef(gtk_vruler_new,gtk_vruler_new_db);
extern void gtk_widget_set_parent_window_db(GtkWidget *, GdkWindow *);
CheckInterfacedef(gtk_widget_set_parent_window,gtk_widget_set_parent_window_db);
extern GdkScreen * gtk_window_get_screen_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_screen,gtk_window_get_screen_db);
extern GType gtk_clipboard_get_type_db(void);
CheckInterfacedef(gtk_clipboard_get_type,gtk_clipboard_get_type_db);
extern GType gtk_layout_get_type_db(void);
CheckInterfacedef(gtk_layout_get_type,gtk_layout_get_type_db);
extern void gtk_tree_selection_unselect_path_db(GtkTreeSelection *, GtkTreePath *);
CheckInterfacedef(gtk_tree_selection_unselect_path,gtk_tree_selection_unselect_path_db);
extern GdkScreen * gtk_invisible_get_screen_db(GtkInvisible *);
CheckInterfacedef(gtk_invisible_get_screen,gtk_invisible_get_screen_db);
extern void gtk_paint_tab_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint, gint);
CheckInterfacedef(gtk_paint_tab,gtk_paint_tab_db);
extern void gtk_button_set_alignment_db(GtkButton *, gfloat, gfloat);
CheckInterfacedef(gtk_button_set_alignment,gtk_button_set_alignment_db);
extern void gtk_file_chooser_button_set_width_chars_db(GtkFileChooserButton *, gint);
CheckInterfacedef(gtk_file_chooser_button_set_width_chars,gtk_file_chooser_button_set_width_chars_db);
extern void gtk_action_group_add_radio_actions_full_db(GtkActionGroup *, const GtkRadioActionEntry *, guint, gint, GCallback, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_action_group_add_radio_actions_full,gtk_action_group_add_radio_actions_full_db);
extern void gtk_alignment_set_db(GtkAlignment *, gfloat, gfloat, gfloat, gfloat);
CheckInterfacedef(gtk_alignment_set,gtk_alignment_set_db);
extern void gtk_container_set_resize_mode_db(GtkContainer *, GtkResizeMode);
CheckInterfacedef(gtk_container_set_resize_mode,gtk_container_set_resize_mode_db);
extern void gtk_notebook_set_show_tabs_db(GtkNotebook *, gboolean);
CheckInterfacedef(gtk_notebook_set_show_tabs,gtk_notebook_set_show_tabs_db);
extern GtkWidget * gtk_grab_get_current_db(void);
CheckInterfacedef(gtk_grab_get_current,gtk_grab_get_current_db);
extern GType gtk_tooltips_get_type_db(void);
CheckInterfacedef(gtk_tooltips_get_type,gtk_tooltips_get_type_db);
extern GtkToolItem * gtk_tool_button_new_from_stock_db(const gchar *);
CheckInterfacedef(gtk_tool_button_new_from_stock,gtk_tool_button_new_from_stock_db);
extern GtkWidget * gtk_color_button_new_with_color_db(const GdkColor *);
CheckInterfacedef(gtk_color_button_new_with_color,gtk_color_button_new_with_color_db);
extern void gtk_arrow_set_db(GtkArrow *, GtkArrowType, GtkShadowType);
CheckInterfacedef(gtk_arrow_set,gtk_arrow_set_db);
extern GtkTextTag * gtk_text_buffer_create_tag_db(GtkTextBuffer *, const gchar *, const gchar *, ...);
CheckInterfacedef(gtk_text_buffer_create_tag,gtk_text_buffer_create_tag_db);
extern void gtk_icon_view_selected_foreach_db(GtkIconView *, GtkIconViewForeachFunc, gpointer);
CheckInterfacedef(gtk_icon_view_selected_foreach,gtk_icon_view_selected_foreach_db);
extern gboolean gtk_icon_source_get_size_wildcarded_db(const GtkIconSource *);
CheckInterfacedef(gtk_icon_source_get_size_wildcarded,gtk_icon_source_get_size_wildcarded_db);
extern GQuark gtk_file_chooser_error_quark_db(void);
CheckInterfacedef(gtk_file_chooser_error_quark,gtk_file_chooser_error_quark_db);
extern gboolean gtk_tooltips_get_info_from_tip_window_db(GtkWindow *, GtkTooltips * *, GtkWidget * *);
CheckInterfacedef(gtk_tooltips_get_info_from_tip_window,gtk_tooltips_get_info_from_tip_window_db);
extern gboolean gtk_window_mnemonic_activate_db(GtkWindow *, guint, GdkModifierType);
CheckInterfacedef(gtk_window_mnemonic_activate,gtk_window_mnemonic_activate_db);
extern GtkWidget * gtk_hseparator_new_db(void);
CheckInterfacedef(gtk_hseparator_new,gtk_hseparator_new_db);
extern const gchar * gtk_progress_bar_get_text_db(GtkProgressBar *);
CheckInterfacedef(gtk_progress_bar_get_text,gtk_progress_bar_get_text_db);
extern void gtk_window_remove_embedded_xid_db(GtkWindow *, guint);
CheckInterfacedef(gtk_window_remove_embedded_xid,gtk_window_remove_embedded_xid_db);
extern GtkWidget * gtk_menu_item_new_db(void);
CheckInterfacedef(gtk_menu_item_new,gtk_menu_item_new_db);
extern void gtk_window_set_has_frame_db(GtkWindow *, gboolean);
CheckInterfacedef(gtk_window_set_has_frame,gtk_window_set_has_frame_db);
extern void gtk_tree_model_filter_set_modify_func_db(GtkTreeModelFilter *, gint, GType *, GtkTreeModelFilterModifyFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_tree_model_filter_set_modify_func,gtk_tree_model_filter_set_modify_func_db);
extern gboolean gtk_selection_convert_db(GtkWidget *, GdkAtom, GdkAtom, guint32);
CheckInterfacedef(gtk_selection_convert,gtk_selection_convert_db);
extern void gtk_text_buffer_get_end_iter_db(GtkTextBuffer *, GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_get_end_iter,gtk_text_buffer_get_end_iter_db);
extern GType gtk_hbox_get_type_db(void);
CheckInterfacedef(gtk_hbox_get_type,gtk_hbox_get_type_db);
extern void gtk_widget_set_accel_path_db(GtkWidget *, const gchar *, GtkAccelGroup *);
CheckInterfacedef(gtk_widget_set_accel_path,gtk_widget_set_accel_path_db);
extern void gtk_text_tag_set_priority_db(GtkTextTag *, gint);
CheckInterfacedef(gtk_text_tag_set_priority,gtk_text_tag_set_priority_db);
extern void gtk_text_buffer_move_mark_by_name_db(GtkTextBuffer *, const gchar *, const GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_move_mark_by_name,gtk_text_buffer_move_mark_by_name_db);
extern void gtk_handle_box_set_handle_position_db(GtkHandleBox *, GtkPositionType);
CheckInterfacedef(gtk_handle_box_set_handle_position,gtk_handle_box_set_handle_position_db);
extern GtkWidget * gtk_cell_view_new_with_pixbuf_db(GdkPixbuf *);
CheckInterfacedef(gtk_cell_view_new_with_pixbuf,gtk_cell_view_new_with_pixbuf_db);
extern void gtk_grab_remove_db(GtkWidget *);
CheckInterfacedef(gtk_grab_remove,gtk_grab_remove_db);
extern void gtk_window_set_auto_startup_notification_db(gboolean);
CheckInterfacedef(gtk_window_set_auto_startup_notification,gtk_window_set_auto_startup_notification_db);
extern GType gtk_orientation_get_type_db(void);
CheckInterfacedef(gtk_orientation_get_type,gtk_orientation_get_type_db);
extern gint gtk_text_iter_get_line_index_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_line_index,gtk_text_iter_get_line_index_db);
extern void gtk_text_buffer_get_bounds_db(GtkTextBuffer *, GtkTextIter *, GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_get_bounds,gtk_text_buffer_get_bounds_db);
extern gboolean gtk_widget_is_focus_db(GtkWidget *);
CheckInterfacedef(gtk_widget_is_focus,gtk_widget_is_focus_db);
extern gboolean gtk_check_menu_item_get_active_db(GtkCheckMenuItem *);
CheckInterfacedef(gtk_check_menu_item_get_active,gtk_check_menu_item_get_active_db);
extern gint gtk_icon_view_get_item_width_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_item_width,gtk_icon_view_get_item_width_db);
extern gboolean gtk_check_menu_item_get_draw_as_radio_db(GtkCheckMenuItem *);
CheckInterfacedef(gtk_check_menu_item_get_draw_as_radio,gtk_check_menu_item_get_draw_as_radio_db);
extern GtkClipboard * gtk_clipboard_get_for_display_db(GdkDisplay *, GdkAtom);
CheckInterfacedef(gtk_clipboard_get_for_display,gtk_clipboard_get_for_display_db);
extern void gtk_tree_iter_free_db(GtkTreeIter *);
CheckInterfacedef(gtk_tree_iter_free,gtk_tree_iter_free_db);
extern void gtk_widget_unmap_db(GtkWidget *);
CheckInterfacedef(gtk_widget_unmap,gtk_widget_unmap_db);
extern gboolean gtk_cell_renderer_activate_db(GtkCellRenderer *, GdkEvent *, GtkWidget *, const gchar *, GdkRectangle *, GdkRectangle *, GtkCellRendererState);
CheckInterfacedef(gtk_cell_renderer_activate,gtk_cell_renderer_activate_db);
extern GType gtk_settings_get_type_db(void);
CheckInterfacedef(gtk_settings_get_type,gtk_settings_get_type_db);
extern GType gtk_aspect_frame_get_type_db(void);
CheckInterfacedef(gtk_aspect_frame_get_type,gtk_aspect_frame_get_type_db);
extern GtkBindingSet * gtk_binding_set_by_class_db(gpointer);
CheckInterfacedef(gtk_binding_set_by_class,gtk_binding_set_by_class_db);
extern void gtk_icon_source_set_pixbuf_db(GtkIconSource *, GdkPixbuf *);
CheckInterfacedef(gtk_icon_source_set_pixbuf,gtk_icon_source_set_pixbuf_db);
extern void gtk_main_do_event_db(GdkEvent *);
CheckInterfacedef(gtk_main_do_event,gtk_main_do_event_db);
extern GtkWidget * gtk_check_button_new_db(void);
CheckInterfacedef(gtk_check_button_new,gtk_check_button_new_db);
extern gboolean gtk_rc_reparse_all_db(void);
CheckInterfacedef(gtk_rc_reparse_all,gtk_rc_reparse_all_db);
extern GtkTreeStore * gtk_tree_store_newv_db(gint, GType *);
CheckInterfacedef(gtk_tree_store_newv,gtk_tree_store_newv_db);
extern gboolean gtk_text_view_place_cursor_onscreen_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_place_cursor_onscreen,gtk_text_view_place_cursor_onscreen_db);
extern void gtk_box_set_spacing_db(GtkBox *, gint);
CheckInterfacedef(gtk_box_set_spacing,gtk_box_set_spacing_db);
extern GType gtk_accel_map_get_type_db(void);
CheckInterfacedef(gtk_accel_map_get_type,gtk_accel_map_get_type_db);
extern gboolean gtk_color_button_get_use_alpha_db(GtkColorButton *);
CheckInterfacedef(gtk_color_button_get_use_alpha,gtk_color_button_get_use_alpha_db);
extern gboolean gtk_text_iter_forward_visible_cursor_positions_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_forward_visible_cursor_positions,gtk_text_iter_forward_visible_cursor_positions_db);
extern void gtk_menu_item_set_accel_path_db(GtkMenuItem *, const gchar *);
CheckInterfacedef(gtk_menu_item_set_accel_path,gtk_menu_item_set_accel_path_db);
extern gchar * gtk_combo_box_get_active_text_db(GtkComboBox *);
CheckInterfacedef(gtk_combo_box_get_active_text,gtk_combo_box_get_active_text_db);
extern gboolean gtk_icon_info_get_attach_points_db(GtkIconInfo *, GdkPoint * *, gint *);
CheckInterfacedef(gtk_icon_info_get_attach_points,gtk_icon_info_get_attach_points_db);
extern void gtk_entry_completion_set_minimum_key_length_db(GtkEntryCompletion *, gint);
CheckInterfacedef(gtk_entry_completion_set_minimum_key_length,gtk_entry_completion_set_minimum_key_length_db);
extern void gtk_text_view_set_buffer_db(GtkTextView *, GtkTextBuffer *);
CheckInterfacedef(gtk_text_view_set_buffer,gtk_text_view_set_buffer_db);
extern void gtk_cell_layout_clear_attributes_db(GtkCellLayout *, GtkCellRenderer *);
CheckInterfacedef(gtk_cell_layout_clear_attributes,gtk_cell_layout_clear_attributes_db);
extern void gtk_toolbar_set_show_arrow_db(GtkToolbar *, gboolean);
CheckInterfacedef(gtk_toolbar_set_show_arrow,gtk_toolbar_set_show_arrow_db);
extern GtkWidget * gtk_file_chooser_widget_new_with_backend_db(GtkFileChooserAction, const gchar *);
CheckInterfacedef(gtk_file_chooser_widget_new_with_backend,gtk_file_chooser_widget_new_with_backend_db);
extern void gtk_text_buffer_insert_at_cursor_db(GtkTextBuffer *, const gchar *, gint);
CheckInterfacedef(gtk_text_buffer_insert_at_cursor,gtk_text_buffer_insert_at_cursor_db);
extern void gtk_tool_item_set_visible_vertical_db(GtkToolItem *, gboolean);
CheckInterfacedef(gtk_tool_item_set_visible_vertical,gtk_tool_item_set_visible_vertical_db);
extern void gtk_cell_renderer_text_set_fixed_height_from_font_db(GtkCellRendererText *, gint);
CheckInterfacedef(gtk_cell_renderer_text_set_fixed_height_from_font,gtk_cell_renderer_text_set_fixed_height_from_font_db);
extern gboolean gtk_window_get_skip_pager_hint_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_skip_pager_hint,gtk_window_get_skip_pager_hint_db);
extern GType gtk_gamma_curve_get_type_db(void);
CheckInterfacedef(gtk_gamma_curve_get_type,gtk_gamma_curve_get_type_db);
extern void gtk_tree_model_filter_convert_child_iter_to_iter_db(GtkTreeModelFilter *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_filter_convert_child_iter_to_iter,gtk_tree_model_filter_convert_child_iter_to_iter_db);
extern void gtk_text_buffer_remove_tag_by_name_db(GtkTextBuffer *, const gchar *, const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_remove_tag_by_name,gtk_text_buffer_remove_tag_by_name_db);
extern gboolean gtk_file_chooser_set_filename_db(GtkFileChooser *, const gchar *);
CheckInterfacedef(gtk_file_chooser_set_filename,gtk_file_chooser_set_filename_db);
extern void gtk_about_dialog_set_logo_icon_name_db(GtkAboutDialog *, const gchar *);
CheckInterfacedef(gtk_about_dialog_set_logo_icon_name,gtk_about_dialog_set_logo_icon_name_db);
extern GdkPixbuf * gtk_image_get_pixbuf_db(GtkImage *);
CheckInterfacedef(gtk_image_get_pixbuf,gtk_image_get_pixbuf_db);
extern GtkWidget * gtk_action_create_menu_item_db(GtkAction *);
CheckInterfacedef(gtk_action_create_menu_item,gtk_action_create_menu_item_db);
extern GtkJustification gtk_label_get_justify_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_justify,gtk_label_get_justify_db);
extern void gtk_file_filter_set_name_db(GtkFileFilter *, const gchar *);
CheckInterfacedef(gtk_file_filter_set_name,gtk_file_filter_set_name_db);
extern gboolean gtk_text_iter_forward_char_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_forward_char,gtk_text_iter_forward_char_db);
extern GtkWidget * gtk_radio_menu_item_new_db(GSList *);
CheckInterfacedef(gtk_radio_menu_item_new,gtk_radio_menu_item_new_db);
extern void gtk_action_group_add_toggle_actions_full_db(GtkActionGroup *, const GtkToggleActionEntry *, guint, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_action_group_add_toggle_actions_full,gtk_action_group_add_toggle_actions_full_db);
extern gboolean gtk_text_iter_is_start_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_is_start,gtk_text_iter_is_start_db);
extern void gtk_cell_renderer_set_fixed_size_db(GtkCellRenderer *, gint, gint);
CheckInterfacedef(gtk_cell_renderer_set_fixed_size,gtk_cell_renderer_set_fixed_size_db);
extern void gtk_rc_set_default_files_db(gchar * *);
CheckInterfacedef(gtk_rc_set_default_files,gtk_rc_set_default_files_db);
extern void gtk_tool_item_set_proxy_menu_item_db(GtkToolItem *, const gchar *, GtkWidget *);
CheckInterfacedef(gtk_tool_item_set_proxy_menu_item,gtk_tool_item_set_proxy_menu_item_db);
extern void gtk_paint_check_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint, gint);
CheckInterfacedef(gtk_paint_check,gtk_paint_check_db);
extern void gtk_scrolled_window_set_policy_db(GtkScrolledWindow *, GtkPolicyType, GtkPolicyType);
CheckInterfacedef(gtk_scrolled_window_set_policy,gtk_scrolled_window_set_policy_db);
extern GtkEntryCompletion * gtk_entry_completion_new_db(void);
CheckInterfacedef(gtk_entry_completion_new,gtk_entry_completion_new_db);
extern guint gtk_rc_parse_state_db(GScanner *, GtkStateType *);
CheckInterfacedef(gtk_rc_parse_state,gtk_rc_parse_state_db);
extern gint gtk_tree_view_get_search_column_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_search_column,gtk_tree_view_get_search_column_db);
extern void gtk_ui_manager_remove_action_group_db(GtkUIManager *, GtkActionGroup *);
CheckInterfacedef(gtk_ui_manager_remove_action_group,gtk_ui_manager_remove_action_group_db);
extern PangoEllipsizeMode gtk_label_get_ellipsize_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_ellipsize,gtk_label_get_ellipsize_db);
extern gboolean gtk_file_chooser_get_preview_widget_active_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_preview_widget_active,gtk_file_chooser_get_preview_widget_active_db);
extern gboolean gtk_button_get_use_underline_db(GtkButton *);
CheckInterfacedef(gtk_button_get_use_underline,gtk_button_get_use_underline_db);
extern void gtk_entry_set_activates_default_db(GtkEntry *, gboolean);
CheckInterfacedef(gtk_entry_set_activates_default,gtk_entry_set_activates_default_db);
extern GtkStyle * gtk_rc_get_style_db(GtkWidget *);
CheckInterfacedef(gtk_rc_get_style,gtk_rc_get_style_db);
extern GtkTreeViewColumn * gtk_tree_view_column_new_with_attributes_db(const gchar *, GtkCellRenderer *, ...);
CheckInterfacedef(gtk_tree_view_column_new_with_attributes,gtk_tree_view_column_new_with_attributes_db);
extern gchar * gtk_file_chooser_get_filename_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_filename,gtk_file_chooser_get_filename_db);
extern GType gtk_font_button_get_type_db(void);
CheckInterfacedef(gtk_font_button_get_type,gtk_font_button_get_type_db);
extern GtkAdjustment * gtk_spin_button_get_adjustment_db(GtkSpinButton *);
CheckInterfacedef(gtk_spin_button_get_adjustment,gtk_spin_button_get_adjustment_db);
extern void gtk_dialog_set_alternative_button_order_from_array_db(GtkDialog *, gint, gint *);
CheckInterfacedef(gtk_dialog_set_alternative_button_order_from_array,gtk_dialog_set_alternative_button_order_from_array_db);
extern void gtk_window_set_icon_name_db(GtkWindow *, const gchar *);
CheckInterfacedef(gtk_window_set_icon_name,gtk_window_set_icon_name_db);
extern void gtk_ruler_get_range_db(GtkRuler *, gdouble *, gdouble *, gdouble *, gdouble *);
CheckInterfacedef(gtk_ruler_get_range,gtk_ruler_get_range_db);
extern void gtk_action_group_remove_action_db(GtkActionGroup *, GtkAction *);
CheckInterfacedef(gtk_action_group_remove_action,gtk_action_group_remove_action_db);
extern const char * gtk_text_mark_get_name_db(GtkTextMark *);
CheckInterfacedef(gtk_text_mark_get_name,gtk_text_mark_get_name_db);
extern gboolean gtk_tool_button_get_use_underline_db(GtkToolButton *);
CheckInterfacedef(gtk_tool_button_get_use_underline,gtk_tool_button_get_use_underline_db);
extern gboolean gtk_clipboard_wait_is_text_available_db(GtkClipboard *);
CheckInterfacedef(gtk_clipboard_wait_is_text_available,gtk_clipboard_wait_is_text_available_db);
extern void gtk_label_set_single_line_mode_db(GtkLabel *, gboolean);
CheckInterfacedef(gtk_label_set_single_line_mode,gtk_label_set_single_line_mode_db);
extern void gtk_label_set_width_chars_db(GtkLabel *, gint);
CheckInterfacedef(gtk_label_set_width_chars,gtk_label_set_width_chars_db);
extern GType gtk_file_chooser_button_get_type_db(void);
CheckInterfacedef(gtk_file_chooser_button_get_type,gtk_file_chooser_button_get_type_db);
extern void gtk_scrolled_window_set_hadjustment_db(GtkScrolledWindow *, GtkAdjustment *);
CheckInterfacedef(gtk_scrolled_window_set_hadjustment,gtk_scrolled_window_set_hadjustment_db);
extern void gtk_accel_map_lock_path_db(const gchar *);
CheckInterfacedef(gtk_accel_map_lock_path,gtk_accel_map_lock_path_db);
extern void gtk_tree_sortable_set_sort_func_db(GtkTreeSortable *, gint, GtkTreeIterCompareFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_tree_sortable_set_sort_func,gtk_tree_sortable_set_sort_func_db);
extern gboolean gtk_icon_size_lookup_for_settings_db(GtkSettings *, GtkIconSize, gint *, gint *);
CheckInterfacedef(gtk_icon_size_lookup_for_settings,gtk_icon_size_lookup_for_settings_db);
extern void gtk_tree_model_unref_node_db(GtkTreeModel *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_unref_node,gtk_tree_model_unref_node_db);
extern GtkWidget * gtk_menu_get_active_db(GtkMenu *);
CheckInterfacedef(gtk_menu_get_active,gtk_menu_get_active_db);
extern GtkTextChildAnchor * gtk_text_buffer_create_child_anchor_db(GtkTextBuffer *, GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_create_child_anchor,gtk_text_buffer_create_child_anchor_db);
extern void gtk_file_chooser_set_extra_widget_db(GtkFileChooser *, GtkWidget *);
CheckInterfacedef(gtk_file_chooser_set_extra_widget,gtk_file_chooser_set_extra_widget_db);
extern GtkWidget * gtk_image_new_from_image_db(GdkImage *, GdkBitmap *);
CheckInterfacedef(gtk_image_new_from_image,gtk_image_new_from_image_db);
extern GType gtk_fixed_get_type_db(void);
CheckInterfacedef(gtk_fixed_get_type,gtk_fixed_get_type_db);
extern GtkWidget * gtk_scrolled_window_new_db(GtkAdjustment *, GtkAdjustment *);
CheckInterfacedef(gtk_scrolled_window_new,gtk_scrolled_window_new_db);
extern void gtk_about_dialog_set_copyright_db(GtkAboutDialog *, const gchar *);
CheckInterfacedef(gtk_about_dialog_set_copyright,gtk_about_dialog_set_copyright_db);
extern void gtk_target_list_add_db(GtkTargetList *, GdkAtom, guint, guint);
CheckInterfacedef(gtk_target_list_add,gtk_target_list_add_db);
extern GList * gtk_tree_view_get_columns_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_columns,gtk_tree_view_get_columns_db);
extern GtkIconSource * gtk_icon_source_new_db(void);
CheckInterfacedef(gtk_icon_source_new,gtk_icon_source_new_db);
extern void gtk_check_menu_item_set_active_db(GtkCheckMenuItem *, gboolean);
CheckInterfacedef(gtk_check_menu_item_set_active,gtk_check_menu_item_set_active_db);
extern gboolean gtk_text_iter_forward_sentence_ends_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_forward_sentence_ends,gtk_text_iter_forward_sentence_ends_db);
extern GdkScreen * gtk_widget_get_screen_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_screen,gtk_widget_get_screen_db);
extern GtkWidget * gtk_expander_new_db(const gchar *);
CheckInterfacedef(gtk_expander_new,gtk_expander_new_db);
extern GtkWidget * gtk_spin_button_new_db(GtkAdjustment *, gdouble, guint);
CheckInterfacedef(gtk_spin_button_new,gtk_spin_button_new_db);
extern void gtk_window_fullscreen_db(GtkWindow *);
CheckInterfacedef(gtk_window_fullscreen,gtk_window_fullscreen_db);
extern void gtk_toolbar_set_tooltips_db(GtkToolbar *, gboolean);
CheckInterfacedef(gtk_toolbar_set_tooltips,gtk_toolbar_set_tooltips_db);
extern void gtk_file_chooser_set_preview_widget_db(GtkFileChooser *, GtkWidget *);
CheckInterfacedef(gtk_file_chooser_set_preview_widget,gtk_file_chooser_set_preview_widget_db);
extern gboolean gtk_accel_group_activate_db(GtkAccelGroup *, GQuark, GObject *, guint, GdkModifierType);
CheckInterfacedef(gtk_accel_group_activate,gtk_accel_group_activate_db);
extern gboolean gtk_tree_drag_source_drag_data_get_db(GtkTreeDragSource *, GtkTreePath *, GtkSelectionData *);
CheckInterfacedef(gtk_tree_drag_source_drag_data_get,gtk_tree_drag_source_drag_data_get_db);
extern GtkTextDirection gtk_widget_get_direction_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_direction,gtk_widget_get_direction_db);
extern gboolean gtk_text_iter_get_attributes_db(const GtkTextIter *, GtkTextAttributes *);
CheckInterfacedef(gtk_text_iter_get_attributes,gtk_text_iter_get_attributes_db);
extern gboolean gtk_editable_get_editable_db(GtkEditable *);
CheckInterfacedef(gtk_editable_get_editable,gtk_editable_get_editable_db);
extern void gtk_widget_set_events_db(GtkWidget *, gint);
CheckInterfacedef(gtk_widget_set_events,gtk_widget_set_events_db);
extern void gtk_paned_pack1_db(GtkPaned *, GtkWidget *, gboolean, gboolean);
CheckInterfacedef(gtk_paned_pack1,gtk_paned_pack1_db);
extern GType gtk_state_type_get_type_db(void);
CheckInterfacedef(gtk_state_type_get_type,gtk_state_type_get_type_db);
extern gboolean gtk_text_iter_editable_db(const GtkTextIter *, gboolean);
CheckInterfacedef(gtk_text_iter_editable,gtk_text_iter_editable_db);
extern gboolean gtk_tree_model_get_iter_from_string_db(GtkTreeModel *, GtkTreeIter *, const gchar *);
CheckInterfacedef(gtk_tree_model_get_iter_from_string,gtk_tree_model_get_iter_from_string_db);
extern gboolean gtk_container_get_focus_chain_db(GtkContainer *, GList * *);
CheckInterfacedef(gtk_container_get_focus_chain,gtk_container_get_focus_chain_db);
extern void gtk_icon_view_set_margin_db(GtkIconView *, gint);
CheckInterfacedef(gtk_icon_view_set_margin,gtk_icon_view_set_margin_db);
extern void gtk_tree_selection_unselect_range_db(GtkTreeSelection *, GtkTreePath *, GtkTreePath *);
CheckInterfacedef(gtk_tree_selection_unselect_range,gtk_tree_selection_unselect_range_db);
extern gboolean gtk_widget_get_no_show_all_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_no_show_all,gtk_widget_get_no_show_all_db);
extern GList * gtk_cell_view_get_cell_renderers_db(GtkCellView *);
CheckInterfacedef(gtk_cell_view_get_cell_renderers,gtk_cell_view_get_cell_renderers_db);
extern gboolean gtk_clipboard_set_with_owner_db(GtkClipboard *, const GtkTargetEntry *, guint, GtkClipboardGetFunc, GtkClipboardClearFunc, GObject *);
CheckInterfacedef(gtk_clipboard_set_with_owner,gtk_clipboard_set_with_owner_db);
extern void gtk_tree_store_clear_db(GtkTreeStore *);
CheckInterfacedef(gtk_tree_store_clear,gtk_tree_store_clear_db);
extern GType gtk_vscrollbar_get_type_db(void);
CheckInterfacedef(gtk_vscrollbar_get_type,gtk_vscrollbar_get_type_db);
extern GType gtk_curve_type_get_type_db(void);
CheckInterfacedef(gtk_curve_type_get_type,gtk_curve_type_get_type_db);
extern gboolean gtk_entry_get_has_frame_db(GtkEntry *);
CheckInterfacedef(gtk_entry_get_has_frame,gtk_entry_get_has_frame_db);
extern GType gtk_dest_defaults_get_type_db(void);
CheckInterfacedef(gtk_dest_defaults_get_type,gtk_dest_defaults_get_type_db);
extern GType gtk_window_position_get_type_db(void);
CheckInterfacedef(gtk_window_position_get_type,gtk_window_position_get_type_db);
extern void gtk_tree_model_get_valist_db(GtkTreeModel *, GtkTreeIter *, va_list);
CheckInterfacedef(gtk_tree_model_get_valist,gtk_tree_model_get_valist_db);
extern GtkWidget * gtk_expander_new_with_mnemonic_db(const gchar *);
CheckInterfacedef(gtk_expander_new_with_mnemonic,gtk_expander_new_with_mnemonic_db);
extern void gtk_viewport_set_shadow_type_db(GtkViewport *, GtkShadowType);
CheckInterfacedef(gtk_viewport_set_shadow_type,gtk_viewport_set_shadow_type_db);
extern gint gtk_tree_view_insert_column_with_attributes_db(GtkTreeView *, gint, const gchar *, GtkCellRenderer *, ...);
CheckInterfacedef(gtk_tree_view_insert_column_with_attributes,gtk_tree_view_insert_column_with_attributes_db);
extern GSList * gtk_file_chooser_list_shortcut_folders_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_list_shortcut_folders,gtk_file_chooser_list_shortcut_folders_db);
extern GType gtk_drawing_area_get_type_db(void);
CheckInterfacedef(gtk_drawing_area_get_type,gtk_drawing_area_get_type_db);
extern GtkOrientation gtk_toolbar_get_orientation_db(GtkToolbar *);
CheckInterfacedef(gtk_toolbar_get_orientation,gtk_toolbar_get_orientation_db);
extern void gtk_tree_model_foreach_db(GtkTreeModel *, GtkTreeModelForeachFunc, gpointer);
CheckInterfacedef(gtk_tree_model_foreach,gtk_tree_model_foreach_db);
extern gboolean gtk_color_selection_get_has_opacity_control_db(GtkColorSelection *);
CheckInterfacedef(gtk_color_selection_get_has_opacity_control,gtk_color_selection_get_has_opacity_control_db);
extern gboolean gtk_tree_drag_dest_drag_data_received_db(GtkTreeDragDest *, GtkTreePath *, GtkSelectionData *);
CheckInterfacedef(gtk_tree_drag_dest_drag_data_received,gtk_tree_drag_dest_drag_data_received_db);
extern gboolean gtk_window_set_icon_from_file_db(GtkWindow *, const gchar *, GError * *);
CheckInterfacedef(gtk_window_set_icon_from_file,gtk_window_set_icon_from_file_db);
extern void gtk_window_set_focus_db(GtkWindow *, GtkWidget *);
CheckInterfacedef(gtk_window_set_focus,gtk_window_set_focus_db);
extern void gtk_button_set_use_stock_db(GtkButton *, gboolean);
CheckInterfacedef(gtk_button_set_use_stock,gtk_button_set_use_stock_db);
extern void gtk_paint_arrow_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, const gchar *, GtkArrowType, gboolean, gint, gint, gint, gint);
CheckInterfacedef(gtk_paint_arrow,gtk_paint_arrow_db);
extern GtkWidget * gtk_hpaned_new_db(void);
CheckInterfacedef(gtk_hpaned_new,gtk_hpaned_new_db);
extern void gtk_calendar_select_day_db(GtkCalendar *, guint);
CheckInterfacedef(gtk_calendar_select_day,gtk_calendar_select_day_db);
extern void gtk_settings_set_property_value_db(GtkSettings *, const gchar *, const GtkSettingsValue *);
CheckInterfacedef(gtk_settings_set_property_value,gtk_settings_set_property_value_db);
extern void gtk_toolbar_insert_db(GtkToolbar *, GtkToolItem *, gint);
CheckInterfacedef(gtk_toolbar_insert,gtk_toolbar_insert_db);
extern void gtk_im_context_get_preedit_string_db(GtkIMContext *, gchar * *, PangoAttrList * *, gint *);
CheckInterfacedef(gtk_im_context_get_preedit_string,gtk_im_context_get_preedit_string_db);
extern void gtk_event_box_set_visible_window_db(GtkEventBox *, gboolean);
CheckInterfacedef(gtk_event_box_set_visible_window,gtk_event_box_set_visible_window_db);
extern GType gtk_menu_item_get_type_db(void);
CheckInterfacedef(gtk_menu_item_get_type,gtk_menu_item_get_type_db);
extern gboolean gtk_text_buffer_delete_interactive_db(GtkTextBuffer *, GtkTextIter *, GtkTextIter *, gboolean);
CheckInterfacedef(gtk_text_buffer_delete_interactive,gtk_text_buffer_delete_interactive_db);
extern void gtk_range_set_inverted_db(GtkRange *, gboolean);
CheckInterfacedef(gtk_range_set_inverted,gtk_range_set_inverted_db);
extern void gtk_selection_add_targets_db(GtkWidget *, GdkAtom, const GtkTargetEntry *, guint);
CheckInterfacedef(gtk_selection_add_targets,gtk_selection_add_targets_db);
extern gchar * gtk_rc_get_theme_dir_db(void);
CheckInterfacedef(gtk_rc_get_theme_dir,gtk_rc_get_theme_dir_db);
extern const gchar * gtk_action_get_name_db(GtkAction *);
CheckInterfacedef(gtk_action_get_name,gtk_action_get_name_db);
extern gint gtk_tree_store_iter_depth_db(GtkTreeStore *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_store_iter_depth,gtk_tree_store_iter_depth_db);
extern void gtk_icon_view_set_markup_column_db(GtkIconView *, gint);
CheckInterfacedef(gtk_icon_view_set_markup_column,gtk_icon_view_set_markup_column_db);
extern void gtk_scale_get_layout_offsets_db(GtkScale *, gint *, gint *);
CheckInterfacedef(gtk_scale_get_layout_offsets,gtk_scale_get_layout_offsets_db);
extern GType gtk_bin_get_type_db(void);
CheckInterfacedef(gtk_bin_get_type,gtk_bin_get_type_db);
extern long unsigned int gtk_object_get_type_db(void);
CheckInterfacedef(gtk_object_get_type,gtk_object_get_type_db);
extern void gtk_tree_store_prepend_db(GtkTreeStore *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_store_prepend,gtk_tree_store_prepend_db);
extern void gtk_list_store_insert_after_db(GtkListStore *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_list_store_insert_after,gtk_list_store_insert_after_db);
extern void gtk_im_context_focus_out_db(GtkIMContext *);
CheckInterfacedef(gtk_im_context_focus_out,gtk_im_context_focus_out_db);
extern GtkBindingSet * gtk_binding_set_find_db(const gchar *);
CheckInterfacedef(gtk_binding_set_find,gtk_binding_set_find_db);
extern const gchar * gtk_action_group_translate_string_db(GtkActionGroup *, const gchar *);
CheckInterfacedef(gtk_action_group_translate_string,gtk_action_group_translate_string_db);
extern gboolean gtk_window_get_decorated_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_decorated,gtk_window_get_decorated_db);
extern gboolean gtk_range_get_inverted_db(GtkRange *);
CheckInterfacedef(gtk_range_get_inverted,gtk_range_get_inverted_db);
extern void gtk_widget_child_notify_db(GtkWidget *, const gchar *);
CheckInterfacedef(gtk_widget_child_notify,gtk_widget_child_notify_db);
extern void gtk_text_view_set_right_margin_db(GtkTextView *, gint);
CheckInterfacedef(gtk_text_view_set_right_margin,gtk_text_view_set_right_margin_db);
extern guint gtk_table_get_row_spacing_db(GtkTable *, guint);
CheckInterfacedef(gtk_table_get_row_spacing,gtk_table_get_row_spacing_db);
extern GtkAction * gtk_action_new_db(const gchar *, const gchar *, const gchar *, const gchar *);
CheckInterfacedef(gtk_action_new,gtk_action_new_db);
extern void gtk_container_child_set_property_db(GtkContainer *, GtkWidget *, const gchar *, const GValue *);
CheckInterfacedef(gtk_container_child_set_property,gtk_container_child_set_property_db);
extern void gtk_tree_model_filter_convert_iter_to_child_iter_db(GtkTreeModelFilter *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_filter_convert_iter_to_child_iter,gtk_tree_model_filter_convert_iter_to_child_iter_db);
extern void gtk_widget_reset_shapes_db(GtkWidget *);
CheckInterfacedef(gtk_widget_reset_shapes,gtk_widget_reset_shapes_db);
extern GtkTextWindowType gtk_text_view_get_window_type_db(GtkTextView *, GdkWindow *);
CheckInterfacedef(gtk_text_view_get_window_type,gtk_text_view_get_window_type_db);
extern void gtk_text_view_set_editable_db(GtkTextView *, gboolean);
CheckInterfacedef(gtk_text_view_set_editable,gtk_text_view_set_editable_db);
extern gint gtk_text_iter_get_offset_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_offset,gtk_text_iter_get_offset_db);
extern GType gtk_plug_get_type_db(void);
CheckInterfacedef(gtk_plug_get_type,gtk_plug_get_type_db);
extern void gtk_im_context_set_client_window_db(GtkIMContext *, GdkWindow *);
CheckInterfacedef(gtk_im_context_set_client_window,gtk_im_context_set_client_window_db);
extern void gtk_image_set_from_icon_name_db(GtkImage *, const gchar *, GtkIconSize);
CheckInterfacedef(gtk_image_set_from_icon_name,gtk_image_set_from_icon_name_db);
extern gboolean gtk_text_iter_forward_search_db(const GtkTextIter *, const gchar *, GtkTextSearchFlags, GtkTextIter *, GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_forward_search,gtk_text_iter_forward_search_db);
extern void gtk_tree_view_set_fixed_height_mode_db(GtkTreeView *, gboolean);
CheckInterfacedef(gtk_tree_view_set_fixed_height_mode,gtk_tree_view_set_fixed_height_mode_db);
extern GList * gtk_icon_view_get_selected_items_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_selected_items,gtk_icon_view_get_selected_items_db);
extern void gtk_widget_hide_all_db(GtkWidget *);
CheckInterfacedef(gtk_widget_hide_all,gtk_widget_hide_all_db);
extern void gtk_about_dialog_set_artists_db(GtkAboutDialog *, const gchar * *);
CheckInterfacedef(gtk_about_dialog_set_artists,gtk_about_dialog_set_artists_db);
extern void gtk_target_list_add_uri_targets_db(GtkTargetList *, guint);
CheckInterfacedef(gtk_target_list_add_uri_targets,gtk_target_list_add_uri_targets_db);
extern GType gtk_scale_get_type_db(void);
CheckInterfacedef(gtk_scale_get_type,gtk_scale_get_type_db);
extern gint gtk_text_tag_get_priority_db(GtkTextTag *);
CheckInterfacedef(gtk_text_tag_get_priority,gtk_text_tag_get_priority_db);
extern void gtk_tree_selection_set_mode_db(GtkTreeSelection *, GtkSelectionMode);
CheckInterfacedef(gtk_tree_selection_set_mode,gtk_tree_selection_set_mode_db);
extern GType gtk_text_direction_get_type_db(void);
CheckInterfacedef(gtk_text_direction_get_type,gtk_text_direction_get_type_db);
extern GType gtk_accessible_get_type_db(void);
CheckInterfacedef(gtk_accessible_get_type,gtk_accessible_get_type_db);
extern void gtk_window_get_frame_dimensions_db(GtkWindow *, gint *, gint *, gint *, gint *);
CheckInterfacedef(gtk_window_get_frame_dimensions,gtk_window_get_frame_dimensions_db);
extern GType gtk_tool_button_get_type_db(void);
CheckInterfacedef(gtk_tool_button_get_type,gtk_tool_button_get_type_db);
extern gboolean gtk_text_iter_backward_visible_word_starts_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_backward_visible_word_starts,gtk_text_iter_backward_visible_word_starts_db);
extern void gtk_container_add_with_properties_db(GtkContainer *, GtkWidget *, const gchar *, ...);
CheckInterfacedef(gtk_container_add_with_properties,gtk_container_add_with_properties_db);
extern void gtk_spin_button_set_snap_to_ticks_db(GtkSpinButton *, gboolean);
CheckInterfacedef(gtk_spin_button_set_snap_to_ticks,gtk_spin_button_set_snap_to_ticks_db);
extern GtkClipboard * gtk_clipboard_get_db(GdkAtom);
CheckInterfacedef(gtk_clipboard_get,gtk_clipboard_get_db);
extern GtkWrapMode gtk_text_view_get_wrap_mode_db(GtkTextView *);
CheckInterfacedef(gtk_text_view_get_wrap_mode,gtk_text_view_get_wrap_mode_db);
extern GType gtk_menu_tool_button_get_type_db(void);
CheckInterfacedef(gtk_menu_tool_button_get_type,gtk_menu_tool_button_get_type_db);
extern const gchar * gtk_tree_view_column_get_title_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_get_title,gtk_tree_view_column_get_title_db);
extern GType gtk_window_type_get_type_db(void);
CheckInterfacedef(gtk_window_type_get_type,gtk_window_type_get_type_db);
extern void gtk_widget_reset_rc_styles_db(GtkWidget *);
CheckInterfacedef(gtk_widget_reset_rc_styles,gtk_widget_reset_rc_styles_db);
extern GList * gtk_action_group_list_actions_db(GtkActionGroup *);
CheckInterfacedef(gtk_action_group_list_actions,gtk_action_group_list_actions_db);
extern void gtk_list_store_prepend_db(GtkListStore *, GtkTreeIter *);
CheckInterfacedef(gtk_list_store_prepend,gtk_list_store_prepend_db);
extern GType gtk_hscale_get_type_db(void);
CheckInterfacedef(gtk_hscale_get_type,gtk_hscale_get_type_db);
extern void gtk_binding_set_add_path_db(GtkBindingSet *, GtkPathType, const gchar *, GtkPathPriorityType);
CheckInterfacedef(gtk_binding_set_add_path,gtk_binding_set_add_path_db);
extern void gtk_paint_diamond_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint, gint);
CheckInterfacedef(gtk_paint_diamond,gtk_paint_diamond_db);
extern void gtk_tool_item_set_visible_horizontal_db(GtkToolItem *, gboolean);
CheckInterfacedef(gtk_tool_item_set_visible_horizontal,gtk_tool_item_set_visible_horizontal_db);
extern GType gtk_object_flags_get_type_db(void);
CheckInterfacedef(gtk_object_flags_get_type,gtk_object_flags_get_type_db);
extern const gchar * gtk_about_dialog_get_website_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_website,gtk_about_dialog_get_website_db);
extern GtkBorder * gtk_border_copy_db(const GtkBorder *);
CheckInterfacedef(gtk_border_copy,gtk_border_copy_db);
extern gboolean gtk_spin_button_get_numeric_db(GtkSpinButton *);
CheckInterfacedef(gtk_spin_button_get_numeric,gtk_spin_button_get_numeric_db);
extern gint gtk_label_get_max_width_chars_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_max_width_chars,gtk_label_get_max_width_chars_db);
extern gboolean gtk_tree_view_get_hover_selection_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_get_hover_selection,gtk_tree_view_get_hover_selection_db);
extern GType gtk_dialog_flags_get_type_db(void);
CheckInterfacedef(gtk_dialog_flags_get_type,gtk_dialog_flags_get_type_db);
extern GType gtk_cell_view_get_type_db(void);
CheckInterfacedef(gtk_cell_view_get_type,gtk_cell_view_get_type_db);
extern GtkWidget * gtk_image_menu_item_new_from_stock_db(const gchar *, GtkAccelGroup *);
CheckInterfacedef(gtk_image_menu_item_new_from_stock,gtk_image_menu_item_new_from_stock_db);
extern void gtk_icon_view_set_spacing_db(GtkIconView *, gint);
CheckInterfacedef(gtk_icon_view_set_spacing,gtk_icon_view_set_spacing_db);
extern void gtk_paint_box_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint, gint);
CheckInterfacedef(gtk_paint_box,gtk_paint_box_db);
extern void gtk_entry_completion_set_popup_completion_db(GtkEntryCompletion *, gboolean);
CheckInterfacedef(gtk_entry_completion_set_popup_completion,gtk_entry_completion_set_popup_completion_db);
extern void gtk_toolbar_set_orientation_db(GtkToolbar *, GtkOrientation);
CheckInterfacedef(gtk_toolbar_set_orientation,gtk_toolbar_set_orientation_db);
extern void gtk_drag_source_set_target_list_db(GtkWidget *, GtkTargetList *);
CheckInterfacedef(gtk_drag_source_set_target_list,gtk_drag_source_set_target_list_db);
extern void gtk_settings_install_property_parser_db(GParamSpec *, GtkRcPropertyParser);
CheckInterfacedef(gtk_settings_install_property_parser,gtk_settings_install_property_parser_db);
extern void gtk_file_chooser_set_show_hidden_db(GtkFileChooser *, gboolean);
CheckInterfacedef(gtk_file_chooser_set_show_hidden,gtk_file_chooser_set_show_hidden_db);
extern gboolean gtk_icon_source_get_direction_wildcarded_db(const GtkIconSource *);
CheckInterfacedef(gtk_icon_source_get_direction_wildcarded,gtk_icon_source_get_direction_wildcarded_db);
extern void gtk_spin_button_configure_db(GtkSpinButton *, GtkAdjustment *, gdouble, guint);
CheckInterfacedef(gtk_spin_button_configure,gtk_spin_button_configure_db);
extern void gtk_notebook_next_page_db(GtkNotebook *);
CheckInterfacedef(gtk_notebook_next_page,gtk_notebook_next_page_db);
extern void gtk_icon_view_set_column_spacing_db(GtkIconView *, gint);
CheckInterfacedef(gtk_icon_view_set_column_spacing,gtk_icon_view_set_column_spacing_db);
extern GSList * gtk_file_chooser_list_filters_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_list_filters,gtk_file_chooser_list_filters_db);
extern void gtk_fixed_move_db(GtkFixed *, GtkWidget *, gint, gint);
CheckInterfacedef(gtk_fixed_move,gtk_fixed_move_db);
extern GtkAccelMap * gtk_accel_map_get_db(void);
CheckInterfacedef(gtk_accel_map_get,gtk_accel_map_get_db);
extern GType gtk_vscale_get_type_db(void);
CheckInterfacedef(gtk_vscale_get_type,gtk_vscale_get_type_db);
extern void gtk_about_dialog_set_logo_db(GtkAboutDialog *, GdkPixbuf *);
CheckInterfacedef(gtk_about_dialog_set_logo,gtk_about_dialog_set_logo_db);
extern gint gtk_text_iter_get_line_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_line,gtk_text_iter_get_line_db);
extern GtkToolItem * gtk_toggle_tool_button_new_from_stock_db(const gchar *);
CheckInterfacedef(gtk_toggle_tool_button_new_from_stock,gtk_toggle_tool_button_new_from_stock_db);
extern gboolean gtk_tree_model_get_iter_first_db(GtkTreeModel *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_get_iter_first,gtk_tree_model_get_iter_first_db);
extern PangoAttrList * gtk_label_get_attributes_db(GtkLabel *);
CheckInterfacedef(gtk_label_get_attributes,gtk_label_get_attributes_db);
extern GtkWidget * gtk_image_new_from_icon_name_db(const gchar *, GtkIconSize);
CheckInterfacedef(gtk_image_new_from_icon_name,gtk_image_new_from_icon_name_db);
extern AtkObject * gtk_widget_get_accessible_db(GtkWidget *);
CheckInterfacedef(gtk_widget_get_accessible,gtk_widget_get_accessible_db);
extern GType gtk_metric_type_get_type_db(void);
CheckInterfacedef(gtk_metric_type_get_type,gtk_metric_type_get_type_db);
extern GtkToolItem * gtk_menu_tool_button_new_db(GtkWidget *, const gchar *);
CheckInterfacedef(gtk_menu_tool_button_new,gtk_menu_tool_button_new_db);
extern void gtk_scale_set_digits_db(GtkScale *, gint);
CheckInterfacedef(gtk_scale_set_digits,gtk_scale_set_digits_db);
extern void gtk_label_set_text_db(GtkLabel *, const gchar *);
CheckInterfacedef(gtk_label_set_text,gtk_label_set_text_db);
extern GtkWidget * gtk_notebook_get_menu_label_db(GtkNotebook *, GtkWidget *);
CheckInterfacedef(gtk_notebook_get_menu_label,gtk_notebook_get_menu_label_db);
extern GtkIMContext * gtk_im_context_simple_new_db(void);
CheckInterfacedef(gtk_im_context_simple_new,gtk_im_context_simple_new_db);
extern GtkIconSet * gtk_icon_set_copy_db(GtkIconSet *);
CheckInterfacedef(gtk_icon_set_copy,gtk_icon_set_copy_db);
extern GtkRcStyle * gtk_rc_style_copy_db(GtkRcStyle *);
CheckInterfacedef(gtk_rc_style_copy,gtk_rc_style_copy_db);
extern void gtk_text_buffer_remove_tag_db(GtkTextBuffer *, GtkTextTag *, const GtkTextIter *, const GtkTextIter *);
CheckInterfacedef(gtk_text_buffer_remove_tag,gtk_text_buffer_remove_tag_db);
extern GType gtk_tree_view_drop_position_get_type_db(void);
CheckInterfacedef(gtk_tree_view_drop_position_get_type,gtk_tree_view_drop_position_get_type_db);
extern GType gtk_match_type_get_type_db(void);
CheckInterfacedef(gtk_match_type_get_type,gtk_match_type_get_type_db);
extern GType gtk_toolbar_space_style_get_type_db(void);
CheckInterfacedef(gtk_toolbar_space_style_get_type,gtk_toolbar_space_style_get_type_db);
extern GtkAdjustment * gtk_container_get_focus_vadjustment_db(GtkContainer *);
CheckInterfacedef(gtk_container_get_focus_vadjustment,gtk_container_get_focus_vadjustment_db);
extern gboolean gtk_widget_translate_coordinates_db(GtkWidget *, GtkWidget *, gint, gint, gint *, gint *);
CheckInterfacedef(gtk_widget_translate_coordinates,gtk_widget_translate_coordinates_db);
extern void gtk_label_set_label_db(GtkLabel *, const gchar *);
CheckInterfacedef(gtk_label_set_label,gtk_label_set_label_db);
extern void gtk_entry_set_alignment_db(GtkEntry *, gfloat);
CheckInterfacedef(gtk_entry_set_alignment,gtk_entry_set_alignment_db);
extern GtkTextChildAnchor * gtk_text_iter_get_child_anchor_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_child_anchor,gtk_text_iter_get_child_anchor_db);
extern void gtk_tree_view_unset_rows_drag_dest_db(GtkTreeView *);
CheckInterfacedef(gtk_tree_view_unset_rows_drag_dest,gtk_tree_view_unset_rows_drag_dest_db);
extern GdkVisual * gtk_widget_get_default_visual_db(void);
CheckInterfacedef(gtk_widget_get_default_visual,gtk_widget_get_default_visual_db);
extern void gtk_drag_dest_set_proxy_db(GtkWidget *, GdkWindow *, GdkDragProtocol, gboolean);
CheckInterfacedef(gtk_drag_dest_set_proxy,gtk_drag_dest_set_proxy_db);
extern void gtk_entry_set_max_length_db(GtkEntry *, gint);
CheckInterfacedef(gtk_entry_set_max_length,gtk_entry_set_max_length_db);
extern GType gtk_vseparator_get_type_db(void);
CheckInterfacedef(gtk_vseparator_get_type,gtk_vseparator_get_type_db);
extern void gtk_tree_view_set_vadjustment_db(GtkTreeView *, GtkAdjustment *);
CheckInterfacedef(gtk_tree_view_set_vadjustment,gtk_tree_view_set_vadjustment_db);
extern GtkSelectionData * gtk_selection_data_copy_db(GtkSelectionData *);
CheckInterfacedef(gtk_selection_data_copy,gtk_selection_data_copy_db);
extern void gtk_list_store_reorder_db(GtkListStore *, gint *);
CheckInterfacedef(gtk_list_store_reorder,gtk_list_store_reorder_db);
extern void gtk_accel_map_load_scanner_db(GScanner *);
CheckInterfacedef(gtk_accel_map_load_scanner,gtk_accel_map_load_scanner_db);
extern void gtk_tree_view_set_hover_expand_db(GtkTreeView *, gboolean);
CheckInterfacedef(gtk_tree_view_set_hover_expand,gtk_tree_view_set_hover_expand_db);
extern void gtk_table_set_col_spacings_db(GtkTable *, guint);
CheckInterfacedef(gtk_table_set_col_spacings,gtk_table_set_col_spacings_db);
extern void gtk_widget_queue_draw_area_db(GtkWidget *, gint, gint, gint, gint);
CheckInterfacedef(gtk_widget_queue_draw_area,gtk_widget_queue_draw_area_db);
extern GtkTreeModel * gtk_icon_view_get_model_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_model,gtk_icon_view_get_model_db);
extern void gtk_tree_view_set_reorderable_db(GtkTreeView *, gboolean);
CheckInterfacedef(gtk_tree_view_set_reorderable,gtk_tree_view_set_reorderable_db);
extern GtkTextMark * gtk_text_buffer_get_insert_db(GtkTextBuffer *);
CheckInterfacedef(gtk_text_buffer_get_insert,gtk_text_buffer_get_insert_db);
extern const gchar * gtk_action_get_accel_path_db(GtkAction *);
CheckInterfacedef(gtk_action_get_accel_path,gtk_action_get_accel_path_db);
extern GtkWidget * gtk_entry_new_db(void);
CheckInterfacedef(gtk_entry_new,gtk_entry_new_db);
extern void gtk_tree_view_expand_to_path_db(GtkTreeView *, GtkTreePath *);
CheckInterfacedef(gtk_tree_view_expand_to_path,gtk_tree_view_expand_to_path_db);
extern void gtk_paint_polygon_db(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, GdkRectangle *, GtkWidget *, const gchar *, GdkPoint *, gint, gboolean);
CheckInterfacedef(gtk_paint_polygon,gtk_paint_polygon_db);
extern gboolean gtk_init_check_db(int *, char * * *);
CheckInterfacedef(gtk_init_check,gtk_init_check_db);
extern gboolean gtk_tool_item_get_visible_vertical_db(GtkToolItem *);
CheckInterfacedef(gtk_tool_item_get_visible_vertical,gtk_tool_item_get_visible_vertical_db);
extern gint gtk_text_iter_get_visible_line_offset_db(const GtkTextIter *);
CheckInterfacedef(gtk_text_iter_get_visible_line_offset,gtk_text_iter_get_visible_line_offset_db);
extern gboolean gtk_spin_button_get_snap_to_ticks_db(GtkSpinButton *);
CheckInterfacedef(gtk_spin_button_get_snap_to_ticks,gtk_spin_button_get_snap_to_ticks_db);
extern gboolean gtk_text_iter_forward_line_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_forward_line,gtk_text_iter_forward_line_db);
extern GType gtk_tree_view_column_get_type_db(void);
CheckInterfacedef(gtk_tree_view_column_get_type,gtk_tree_view_column_get_type_db);
extern GType gtk_direction_type_get_type_db(void);
CheckInterfacedef(gtk_direction_type_get_type,gtk_direction_type_get_type_db);
extern void gtk_tree_view_set_hover_selection_db(GtkTreeView *, gboolean);
CheckInterfacedef(gtk_tree_view_set_hover_selection,gtk_tree_view_set_hover_selection_db);
extern void gtk_tree_view_set_expander_column_db(GtkTreeView *, GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_set_expander_column,gtk_tree_view_set_expander_column_db);
extern GType gtk_cell_renderer_combo_get_type_db(void);
CheckInterfacedef(gtk_cell_renderer_combo_get_type,gtk_cell_renderer_combo_get_type_db);
extern void gtk_toggle_button_set_inconsistent_db(GtkToggleButton *, gboolean);
CheckInterfacedef(gtk_toggle_button_set_inconsistent,gtk_toggle_button_set_inconsistent_db);
extern GtkWidget * gtk_menu_get_attach_widget_db(GtkMenu *);
CheckInterfacedef(gtk_menu_get_attach_widget,gtk_menu_get_attach_widget_db);
extern gboolean gtk_tree_model_iter_children_db(GtkTreeModel *, GtkTreeIter *, GtkTreeIter *);
CheckInterfacedef(gtk_tree_model_iter_children,gtk_tree_model_iter_children_db);
extern GdkPixbuf * gtk_window_get_icon_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_icon,gtk_window_get_icon_db);
extern GdkDragContext * gtk_drag_begin_db(GtkWidget *, GtkTargetList *, GdkDragAction, gint, GdkEvent *);
CheckInterfacedef(gtk_drag_begin,gtk_drag_begin_db);
extern void gtk_init_db(int *, char * * *);
CheckInterfacedef(gtk_init,gtk_init_db);
extern gchar * gtk_color_selection_palette_to_string_db(const GdkColor *, gint);
CheckInterfacedef(gtk_color_selection_palette_to_string,gtk_color_selection_palette_to_string_db);
extern void gtk_container_child_set_valist_db(GtkContainer *, GtkWidget *, const gchar *, va_list);
CheckInterfacedef(gtk_container_child_set_valist,gtk_container_child_set_valist_db);
extern void gtk_paint_focus_db(GtkStyle *, GdkWindow *, GtkStateType, GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint, gint);
CheckInterfacedef(gtk_paint_focus,gtk_paint_focus_db);
extern GtkUpdateType gtk_range_get_update_policy_db(GtkRange *);
CheckInterfacedef(gtk_range_get_update_policy,gtk_range_get_update_policy_db);
extern void gtk_toolbar_set_icon_size_db(GtkToolbar *, GtkIconSize);
CheckInterfacedef(gtk_toolbar_set_icon_size,gtk_toolbar_set_icon_size_db);
extern GType gtk_combo_get_type_db(void);
CheckInterfacedef(gtk_combo_get_type,gtk_combo_get_type_db);
extern GType gtk_pack_direction_get_type_db(void);
CheckInterfacedef(gtk_pack_direction_get_type,gtk_pack_direction_get_type_db);
extern GdkPixmap * gtk_icon_view_create_drag_icon_db(GtkIconView *, GtkTreePath *);
CheckInterfacedef(gtk_icon_view_create_drag_icon,gtk_icon_view_create_drag_icon_db);
extern gboolean gtk_icon_view_get_cursor_db(GtkTreeIter *, GtkTreePath * *, GtkCellRenderer * *);
CheckInterfacedef(gtk_icon_view_get_cursor,gtk_icon_view_get_cursor_db);
extern void gtk_icon_view_scroll_to_path_db(GtkIconView *, GtkTreePath *, gboolean, gfloat, gfloat);
CheckInterfacedef(gtk_icon_view_scroll_to_path,gtk_icon_view_scroll_to_path_db);
extern void gtk_icon_view_set_cursor_db(GtkIconView *, GtkTreePath *, GtkCellRenderer *, gboolean);
CheckInterfacedef(gtk_icon_view_set_cursor,gtk_icon_view_set_cursor_db);
extern void gtk_icon_view_set_reorderable_db(GtkIconView *, gboolean);
CheckInterfacedef(gtk_icon_view_set_reorderable,gtk_icon_view_set_reorderable_db);
extern gboolean gtk_icon_view_get_reorderable_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_get_reorderable,gtk_icon_view_get_reorderable_db);
extern gboolean gtk_icon_view_get_item_at_pos_db(GtkIconView *, gint, gint, GtkTreePath * *, GtkCellRenderer * *);
CheckInterfacedef(gtk_icon_view_get_item_at_pos,gtk_icon_view_get_item_at_pos_db);
extern gboolean gtk_icon_view_get_visible_range_db(GtkIconView *, GtkTreePath * *, GtkTreePath * *);
CheckInterfacedef(gtk_icon_view_get_visible_range,gtk_icon_view_get_visible_range_db);
extern void gtk_icon_view_enable_model_drag_dest_db(GtkIconView *, const GtkTargetEntry *, gint, GdkDragAction *);
CheckInterfacedef(gtk_icon_view_enable_model_drag_dest,gtk_icon_view_enable_model_drag_dest_db);
extern void gtk_icon_view_enable_model_drag_source_db(GtkIconView *, GdkModifierType, const GtkTargetEntry *, gint, GdkDragAction);
CheckInterfacedef(gtk_icon_view_enable_model_drag_source,gtk_icon_view_enable_model_drag_source_db);
extern gboolean gtk_icon_view_get_dest_item_at_pos_db(GtkIconView *, gint, gint, GtkTreePath * *, GtkIconViewDropPosition *);
CheckInterfacedef(gtk_icon_view_get_dest_item_at_pos,gtk_icon_view_get_dest_item_at_pos_db);
extern void gtk_icon_view_get_drag_dest_item_db(GtkIconView *, GtkTreePath * *, GtkIconViewDropPosition *);
CheckInterfacedef(gtk_icon_view_get_drag_dest_item,gtk_icon_view_get_drag_dest_item_db);
extern void gtk_icon_view_set_drag_dest_item_db(GtkIconView *, GtkTreePath *, GtkIconViewDropPosition);
CheckInterfacedef(gtk_icon_view_set_drag_dest_item,gtk_icon_view_set_drag_dest_item_db);
extern void gtk_icon_view_unset_model_drag_source_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_unset_model_drag_source,gtk_icon_view_unset_model_drag_source_db);
extern void gtk_icon_view_unset_model_drag_dest_db(GtkIconView *);
CheckInterfacedef(gtk_icon_view_unset_model_drag_dest,gtk_icon_view_unset_model_drag_dest_db);
extern void gtk_drag_set_icon_name_db(GdkDragContext *, const gchar *, gint, gint);
CheckInterfacedef(gtk_drag_set_icon_name,gtk_drag_set_icon_name_db);
extern void gtk_drag_source_set_icon_name_db(GtkWidget *, const gchar *);
CheckInterfacedef(gtk_drag_source_set_icon_name,gtk_drag_source_set_icon_name_db);
extern void gtk_image_clear_db(GtkImage *);
CheckInterfacedef(gtk_image_clear,gtk_image_clear_db);
extern gint gtk_dialog_get_response_for_widget_db(GtkDialog *, GtkWidget *);
CheckInterfacedef(gtk_dialog_get_response_for_widget,gtk_dialog_get_response_for_widget_db);
extern void gtk_tool_button_set_icon_name_db(GtkToolButton *, const gchar *);
CheckInterfacedef(gtk_tool_button_set_icon_name,gtk_tool_button_set_icon_name_db);
extern const gchar * gtk_tool_button_get_icon_name_db(GtkWidget *);
CheckInterfacedef(gtk_tool_button_get_icon_name,gtk_tool_button_get_icon_name_db);
extern GtkTreeModel * gtk_tree_row_reference_get_model_db(GtkTreeRowReference *);
CheckInterfacedef(gtk_tree_row_reference_get_model,gtk_tree_row_reference_get_model_db);
extern void gtk_tree_view_column_queue_resize_db(GtkTreeViewColumn *);
CheckInterfacedef(gtk_tree_view_column_queue_resize,gtk_tree_view_column_queue_resize_db);
extern gboolean gtk_tree_view_get_visible_range_db(GtkTreeView *, GtkTreePath * *, GtkTreePath * *);
CheckInterfacedef(gtk_tree_view_get_visible_range,gtk_tree_view_get_visible_range_db);
extern gboolean gtk_size_group_get_ignore_hidden_db(GtkSizeGroup *);
CheckInterfacedef(gtk_size_group_get_ignore_hidden,gtk_size_group_get_ignore_hidden_db);
extern void gtk_size_group_set_ignore_hidden_db(GtkSizeGroup *, gboolean);
CheckInterfacedef(gtk_size_group_set_ignore_hidden,gtk_size_group_set_ignore_hidden_db);
extern void gtk_file_chooser_set_do_overwrite_confirmation_db(GtkFileChooser *, gboolean);
CheckInterfacedef(gtk_file_chooser_set_do_overwrite_confirmation,gtk_file_chooser_set_do_overwrite_confirmation_db);
extern gboolean gtk_file_chooser_get_do_overwrite_confirmation_db(GtkFileChooser *);
CheckInterfacedef(gtk_file_chooser_get_do_overwrite_confirmation,gtk_file_chooser_get_do_overwrite_confirmation_db);
extern gboolean gtk_entry_completion_get_popup_single_match_db(GtkEntryCompletion *);
CheckInterfacedef(gtk_entry_completion_get_popup_single_match,gtk_entry_completion_get_popup_single_match_db);
extern void gtk_entry_completion_set_popup_single_match_db(GtkEntryCompletion *, gboolean);
CheckInterfacedef(gtk_entry_completion_set_popup_single_match,gtk_entry_completion_set_popup_single_match_db);
extern gboolean gtk_entry_completion_get_popup_set_width_db(GtkEntryCompletion *);
CheckInterfacedef(gtk_entry_completion_get_popup_set_width,gtk_entry_completion_get_popup_set_width_db);
extern void gtk_entry_completion_set_popup_set_width_db(GtkEntryCompletion *, gboolean);
CheckInterfacedef(gtk_entry_completion_set_popup_set_width,gtk_entry_completion_set_popup_set_width_db);
extern void gtk_window_set_urgency_hint_db(GtkWindow *, gboolean);
CheckInterfacedef(gtk_window_set_urgency_hint,gtk_window_set_urgency_hint_db);
extern void gtk_window_present_with_time_db(GtkWindow *, guint32);
CheckInterfacedef(gtk_window_present_with_time,gtk_window_present_with_time_db);
extern gboolean gtk_window_get_urgency_hint_db(GtkWindow *);
CheckInterfacedef(gtk_window_get_urgency_hint,gtk_window_get_urgency_hint_db);
extern void gtk_about_dialog_set_wrap_license_db(GtkAboutDialog *, gboolean);
CheckInterfacedef(gtk_about_dialog_set_wrap_license,gtk_about_dialog_set_wrap_license_db);
extern gboolean gtk_about_dialog_get_wrap_license_db(GtkAboutDialog *);
CheckInterfacedef(gtk_about_dialog_get_wrap_license,gtk_about_dialog_get_wrap_license_db);
extern GtkPackDirection gtk_menu_bar_get_child_pack_direction_db(GtkMenuBar *);
CheckInterfacedef(gtk_menu_bar_get_child_pack_direction,gtk_menu_bar_get_child_pack_direction_db);
extern GtkPackDirection gtk_menu_bar_get_pack_direction_db(GtkMenuBar *);
CheckInterfacedef(gtk_menu_bar_get_pack_direction,gtk_menu_bar_get_pack_direction_db);
extern void gtk_menu_bar_set_child_pack_direction_db(GtkMenuBar *, GtkPackDirection);
CheckInterfacedef(gtk_menu_bar_set_child_pack_direction,gtk_menu_bar_set_child_pack_direction_db);
extern void gtk_menu_bar_set_pack_direction_db(GtkMenuBar *, GtkPackDirection);
CheckInterfacedef(gtk_menu_bar_set_pack_direction,gtk_menu_bar_set_pack_direction_db);
extern void gtk_stock_set_translate_func_db(const gchar *, GtkTranslateFunc, gpointer, GtkDestroyNotify);
CheckInterfacedef(gtk_stock_set_translate_func,gtk_stock_set_translate_func_db);
extern GClosure * gtk_action_get_accel_closure_db(GtkAction *);
CheckInterfacedef(gtk_action_get_accel_closure,gtk_action_get_accel_closure_db);
extern GtkWidget * gtk_scrolled_window_get_hscrollbar_db(GtkScrolledWindow *);
CheckInterfacedef(gtk_scrolled_window_get_hscrollbar,gtk_scrolled_window_get_hscrollbar_db);
extern GtkWidget * gtk_scrolled_window_get_vscrollbar_db(GtkScrolledWindow *);
CheckInterfacedef(gtk_scrolled_window_get_vscrollbar,gtk_scrolled_window_get_vscrollbar_db);
extern gboolean gtk_menu_shell_get_take_focus_db(GtkMenuShell *);
CheckInterfacedef(gtk_menu_shell_get_take_focus,gtk_menu_shell_get_take_focus_db);
extern void gtk_menu_shell_set_take_focus_db(GtkMenuShell *, gboolean);
CheckInterfacedef(gtk_menu_shell_set_take_focus,gtk_menu_shell_set_take_focus_db);
extern gboolean gtk_text_iter_backward_visible_line_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_backward_visible_line,gtk_text_iter_backward_visible_line_db);
extern gboolean gtk_text_iter_backward_visible_lines_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_backward_visible_lines,gtk_text_iter_backward_visible_lines_db);
extern gboolean gtk_text_iter_forward_visible_line_db(GtkTextIter *);
CheckInterfacedef(gtk_text_iter_forward_visible_line,gtk_text_iter_forward_visible_line_db);
extern gboolean gtk_text_iter_forward_visible_lines_db(GtkTextIter *, gint);
CheckInterfacedef(gtk_text_iter_forward_visible_lines,gtk_text_iter_forward_visible_lines_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-2.0/gtk/gtk.h\n\n",pcnt,cnt);
return cnt;
#endif

}
