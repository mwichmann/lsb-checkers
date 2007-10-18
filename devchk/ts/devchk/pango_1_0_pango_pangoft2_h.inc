/* #define G_DISABLE_DEPRECATED */
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE
/* #define PANGO_DISABLE_DEPRECATED */

struct _PangoFT2FontMap { };
struct _PangoFcFont { };
struct _PangoFontMap { };
struct _PangoEngineShape { };
struct _PangoEngineLang { };
struct _PangoFcFontClass { };
struct _PangoFontFamily { };
struct _PangoFontFace { };
struct _PangoFontset { };

#ifdef LSBCC_MODE
#include <ft2build.h>
#include FT_FREETYPE_H
#define _XFT_NO_COMPAT
#define _XFTCOMPAT_H_
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>
#endif
