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


#include <fontconfig/fontconfig.h>
struct _GdkAtom { };
struct _GdkRegion { };
struct _GdkDisplayManager { };
struct _GdkPangoRendererPrivate { };
#ifdef LSBCC_MODE
struct _GdkFont {};
#endif
struct _GdkDeviceClass {};
struct _GdkVisualClass {};
