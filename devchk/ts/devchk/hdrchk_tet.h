#include <tet_api.h>

#include "testdefs.h"

static void startup(), cleanup();

void (*tet_startup)() = NULL;
void (*tet_cleanup)() = NULL;

struct tet_testlist tet_testlist[] = {
	{ GL_gl_h, 1 },
	{ GL_glx_h, 2 },
	{ X11_ICE_ICElib_h, 3 },
	{ X11_Intrinsic_h, 4 },
	{ X11_SM_SMlib_h, 5 },
	{ X11_X_h, 6 },
	{ X11_XKBlib_h, 7 },
	{ X11_Xcms_h, 8 },
	{ X11_Xlib_h, 9 },
	{ X11_Xresource_h, 10 },
	{ X11_Xutil_h, 11 },
	{ X11_extensions_XKBgeom_h, 12 },
	{ X11_extensions_Xdbe_h, 13 },
	{ X11_extensions_security_h, 14 },
	{ X11_extensions_sync_h, 15 },
	{ aio_h, 16 },
	{ curses_h, 17 },
	{ dirent_h, 18 },
	{ dlfcn_h, 19 },
	{ errno_h, 20 },
	{ fcntl_h, 21 },
	{ ftw_h, 22 },
	{ glob_h, 23 },
	{ iconv_h, 24 },
	{ inttypes_h, 25 },
	{ nl_types_h, 26 },
	{ regex_h, 27 },
	{ rpc_xdr_h, 28 },
	{ search_h, 29 },
	{ semaphore_h, 30 },
	{ setjmp_h, 31 },
	{ signal_h, 32 },
	{ stdio_h, 33 },
	{ stdlib_h, 34 },
	{ sys_socket_h, 35 },
	{ sys_time_h, 36 },
	{ sys_types_h, 37 },
	{ sys_wait_h, 38 },
	{ time_h, 39 },
	{ unistd_h, 40 },
	{ wchar_h, 41 },
	{ wctype_h, 42 },
	{ zlib_h, 43 },
	{ NULL, 0 }
};
