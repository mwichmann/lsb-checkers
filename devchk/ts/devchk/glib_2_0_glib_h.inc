/* #define G_DISABLE_DEPRECATED */
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE

#ifndef LSBCC_MODE
#include <glibconfig.h>
#endif
#include <float.h>

struct _GStringChunk { };
struct _GHashTable { };
struct _GKeyFile { };
struct _GDir { };
struct _GMainContext { };
struct _GMutex { };
struct _GCond { };
struct _GMemChunk { };
struct _GRelation { };
struct _GData { };
struct _GOptionContext { };
struct _GOptionGroup { };
struct _GAllocator { };
struct _GRand { };
struct _GMarkupParseContext { };
struct _GCache { };
struct _GTree { };
struct _GIConv { };
struct _GAsyncQueue { };
struct _GTimer { };
struct _GMainLoop { };
struct _GPrivate { };
struct _GPatternSpec { };
