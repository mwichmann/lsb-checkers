#ifndef LSBCC_MODE
/* version defines have moved to a new header in later cairo 
 * it's included by cairo.h so normally works, it's only the
 * test of cairo-features.h here where it causes a problem
 */
#ifndef CAIRO_VERSION_MAJOR
#include <cairo/cairo-version.h>
#endif
#endif
