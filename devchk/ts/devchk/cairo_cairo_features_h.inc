#ifndef LSBCC_MODE
/* version defines have moved to cairo-version.h except for
 * CAIRO_VERSION_STRING which is in cairo.h now.  Include
 * the latter since it includes the former.
 * This is the only place this is an issue: normally people
 * wouldn't just include cairo-features.h directly.
 */
#ifndef CAIRO_VERSION_MAJOR
#include <cairo/cairo.h>
#endif
#endif
