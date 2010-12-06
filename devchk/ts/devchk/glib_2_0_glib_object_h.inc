/* #define G_DISABLE_DEPRECATED */
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE

/*XXX this was added, but breaks lsbcc build - drop for now
union _GTypeCValue {
};
*/

struct _GParamSpecPool {
};

struct _GTypePlugin {
};

#ifndef LSBCC_MODE
#include "glib-2.0/gobject/gvaluecollector.h"
#endif
