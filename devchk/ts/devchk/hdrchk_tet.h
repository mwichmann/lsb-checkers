#include <tet_api.h>

#include "testdefs.h"

static void startup(), cleanup();

void (*tet_startup)() = NULL;
void (*tet_cleanup)() = NULL;

struct tet_testlist tet_testlist[] = {
	{ GL_gl_h, 1 },
	{ GL_glx_h, 2 },
	{ X11_Composite_h, 3 },
	{ X11_CompositeP_h, 4 },
	{ X11_ConstrainP_h, 5 },
	{ X11_Constraint_h, 6 },
	{ X11_ICE_ICElib_h, 7 },
	{ X11_ICE_ICEutil_h, 8 },
	{ X11_Intrinsic_h, 9 },
	{ X11_ObjectP_h, 10 },
	{ X11_SM_SMlib_h, 11 },
	{ X11_X_h, 12 },
	{ X11_Xauth_h, 13 },
	{ X11_Xcms_h, 14 },
	{ X11_Xlib_h, 15 },
	{ X11_Xutil_h, 16 },
	{ X11_extensions_security_h, 17 },
	{ X11_extensions_sync_h, 18 },
	{ assert_h, 19 },
	{ cpio_h, 20 },
	{ ctype_h, 21 },
	{ curses_h, 22 },
	{ dirent_h, 23 },
	{ dlfcn_h, 24 },
	{ errno_h, 25 },
	{ fcntl_h, 26 },
	{ fmtmsg_h, 27 },
	{ fnmatch_h, 28 },
	{ ftw_h, 29 },
	{ getopt_h, 30 },
	{ glob_h, 31 },
	{ grp_h, 32 },
	{ iconv_h, 33 },
	{ inttypes_h, 34 },
	{ langinfo_h, 35 },
	{ limits_h, 36 },
	{ locale_h, 37 },
	{ math_h, 38 },
	{ net_if_h, 39 },
	{ netdb_h, 40 },
	{ netinet_in_h, 41 },
	{ netinet_tcp_h, 42 },
	{ netinet_udp_h, 43 },
	{ nl_types_h, 44 },
	{ pthread_h, 45 },
	{ pwd_h, 46 },
	{ regex_h, 47 },
	{ rpc_auth_h, 48 },
	{ rpc_clnt_h, 49 },
	{ rpc_rpc_msg_h, 50 },
	{ rpc_svc_h, 51 },
	{ rpc_types_h, 52 },
	{ rpc_xdr_h, 53 },
	{ sched_h, 54 },
	{ search_h, 55 },
	{ security_pam_appl_h, 56 },
	{ semaphore_h, 57 },
	{ setjmp_h, 58 },
	{ signal_h, 59 },
	{ stddef_h, 60 },
	{ stdio_h, 61 },
	{ stdlib_h, 62 },
	{ sys_file_h, 63 },
	{ sys_ioctl_h, 64 },
	{ sys_ipc_h, 65 },
	{ sys_mman_h, 66 },
	{ sys_msg_h, 67 },
	{ sys_param_h, 68 },
	{ sys_poll_h, 69 },
	{ sys_resource_h, 70 },
	{ sys_sem_h, 71 },
	{ sys_shm_h, 72 },
	{ sys_socket_h, 73 },
	{ sys_stat_h, 74 },
	{ sys_statvfs_h, 75 },
	{ sys_time_h, 76 },
	{ sys_timeb_h, 77 },
	{ sys_times_h, 78 },
	{ sys_types_h, 79 },
	{ sys_un_h, 80 },
	{ sys_utsname_h, 81 },
	{ sys_wait_h, 82 },
	{ syslog_h, 83 },
	{ tar_h, 84 },
	{ term_h, 85 },
	{ termios_h, 86 },
	{ time_h, 87 },
	{ ucontext_h, 88 },
	{ ulimit_h, 89 },
	{ unistd_h, 90 },
	{ utime_h, 91 },
	{ utmp_h, 92 },
	{ utmpx_h, 93 },
	{ wchar_h, 94 },
	{ wctype_h, 95 },
	{ wordexp_h, 96 },
	{ zlib_h, 97 },
	{ NULL, 0 }
};
