#include <tet_api.h>

#include "testdefs.h"

static void startup(), cleanup();

void (*tet_startup)() = NULL;
void (*tet_cleanup)() = NULL;

struct tet_testlist tet_testlist[] = {
	{ GL_gl_h, 1 },
	{ GL_glx_h, 2 },
	{ X11_ICE_ICElib_h, 3 },
	{ X11_SM_SMlib_h, 4 },
	{ X11_X_h, 5 },
	{ X11_Xcms_h, 6 },
	{ X11_Xlib_h, 7 },
	{ X11_Xutil_h, 8 },
	{ X11_extensions_security_h, 9 },
	{ X11_extensions_sync_h, 10 },
	{ curses_h, 11 },
	{ ftw_h, 12 },
	{ iconv_h, 13 },
	{ inttypes_h, 14 },
	{ nl_types_h, 15 },
	{ regex_h, 16 },
	{ search_h, 17 },
	{ setjmp_h, 18 },
	{ signal_h, 19 },
	{ stdlib_h, 20 },
	{ sys_socket_h, 21 },
	{ sys_types_h, 22 },
	{ sys_wait_h, 23 },
	{ time_h, 24 },
	{ unistd_h, 25 },
	{ wchar_h, 26 },
	{ wctype_h, 27 },
	{ NULL, 0 }
};
