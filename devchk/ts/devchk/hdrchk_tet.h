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
	{ dlfcn_h, 15 },
	{ errno_h, 16 },
	{ fcntl_h, 17 },
	{ fnmatch_h, 18 },
	{ ftw_h, 19 },
	{ glob_h, 20 },
	{ iconv_h, 21 },
	{ inttypes_h, 22 },
	{ limits_h, 23 },
	{ locale_h, 24 },
	{ math_h, 25 },
	{ netdb_h, 26 },
	{ netinet_in_h, 27 },
	{ nl_types_h, 28 },
	{ pthread_h, 29 },
	{ regex_h, 30 },
	{ sched_h, 31 },
	{ search_h, 32 },
	{ semaphore_h, 33 },
	{ setjmp_h, 34 },
	{ signal_h, 35 },
	{ stdio_h, 36 },
	{ stdlib_h, 37 },
	{ sys_ioctl_h, 38 },
	{ sys_ipc_h, 39 },
	{ sys_mman_h, 40 },
	{ sys_msg_h, 41 },
	{ sys_param_h, 42 },
	{ sys_resource_h, 43 },
	{ sys_select_h, 44 },
	{ sys_sem_h, 45 },
	{ sys_shm_h, 46 },
	{ sys_socket_h, 47 },
	{ sys_stat_h, 48 },
	{ sys_time_h, 49 },
	{ sys_types_h, 50 },
	{ sys_wait_h, 51 },
	{ tar_h, 52 },
	{ termios_h, 53 },
	{ time_h, 54 },
	{ ulimit_h, 55 },
	{ unistd_h, 56 },
	{ wchar_h, 57 },
	{ wctype_h, 58 },
	{ zlib_h, 59 },
	{ NULL, 0 }
};
