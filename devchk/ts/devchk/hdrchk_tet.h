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
	{ dlfcn_h, 12 },
	{ errno_h, 13 },
	{ ftw_h, 14 },
	{ iconv_h, 15 },
	{ inttypes_h, 16 },
	{ nl_types_h, 17 },
	{ regex_h, 18 },
	{ search_h, 19 },
	{ setjmp_h, 20 },
	{ signal_h, 21 },
	{ stdlib_h, 22 },
	{ sys_socket_h, 23 },
	{ sys_types_h, 24 },
	{ sys_wait_h, 25 },
	{ time_h, 26 },
	{ unistd_h, 27 },
	{ wchar_h, 28 },
	{ wctype_h, 29 },
	{ NULL, 0 }
};
