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
	{ aio_h, 11 },
	{ assert_h, 12 },
	{ cpio_h, 13 },
	{ curses_h, 14 },
	{ dirent_h, 15 },
	{ dlfcn_h, 16 },
	{ errno_h, 17 },
	{ fcntl_h, 18 },
	{ fnmatch_h, 19 },
	{ ftw_h, 20 },
	{ glob_h, 21 },
	{ iconv_h, 22 },
	{ inttypes_h, 23 },
	{ limits_h, 24 },
	{ locale_h, 25 },
	{ math_h, 26 },
	{ nl_types_h, 27 },
	{ pthread_h, 28 },
	{ regex_h, 29 },
	{ search_h, 30 },
	{ semaphore_h, 31 },
	{ setjmp_h, 32 },
	{ signal_h, 33 },
	{ stddef_h, 34 },
	{ stdio_h, 35 },
	{ stdlib_h, 36 },
	{ sys_ipc_h, 37 },
	{ sys_shm_h, 38 },
	{ sys_socket_h, 39 },
	{ sys_stat_h, 40 },
	{ sys_types_h, 41 },
	{ sys_wait_h, 42 },
	{ termios_h, 43 },
	{ time_h, 44 },
	{ unistd_h, 45 },
	{ wchar_h, 46 },
	{ wctype_h, 47 },
	{ NULL, 0 }
};
