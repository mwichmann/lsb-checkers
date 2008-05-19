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
#ifndef LSBCC_MODE
#define GTK_ENABLE_BROKEN
#include <gtk/gtktext.h>
#endif
