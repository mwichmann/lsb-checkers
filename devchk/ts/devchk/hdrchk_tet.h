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
	{ complex_h, 19 },
	{ cpio_h, 20 },
	{ ctype_h, 21 },
	{ curses_h, 22 },
	{ dirent_h, 23 },
	{ dlfcn_h, 24 },
	{ errno_h, 25 },
	{ fcntl_h, 26 },
	{ fenv_h, 27 },
	{ fmtmsg_h, 28 },
	{ fnmatch_h, 29 },
	{ ftw_h, 30 },
	{ getopt_h, 31 },
	{ glob_h, 32 },
	{ grp_h, 33 },
	{ iconv_h, 34 },
	{ inttypes_h, 35 },
	{ langinfo_h, 36 },
	{ limits_h, 37 },
	{ locale_h, 38 },
	{ math_h, 39 },
	{ net_if_h, 40 },
	{ netdb_h, 41 },
	{ netinet_in_h, 42 },
	{ netinet_ip_h, 43 },
	{ netinet_tcp_h, 44 },
	{ netinet_udp_h, 45 },
	{ nl_types_h, 46 },
	{ pthread_h, 47 },
	{ pty_h, 48 },
	{ pwd_h, 49 },
	{ regex_h, 50 },
	{ rpc_auth_h, 51 },
	{ rpc_clnt_h, 52 },
	{ rpc_rpc_msg_h, 53 },
	{ rpc_svc_h, 54 },
	{ rpc_types_h, 55 },
	{ rpc_xdr_h, 56 },
	{ sched_h, 57 },
	{ search_h, 58 },
	{ security_pam_appl_h, 59 },
	{ semaphore_h, 60 },
	{ setjmp_h, 61 },
	{ signal_h, 62 },
	{ stddef_h, 63 },
	{ stdio_h, 64 },
	{ stdlib_h, 65 },
	{ sys_file_h, 66 },
	{ sys_ioctl_h, 67 },
	{ sys_ipc_h, 68 },
	{ sys_mman_h, 69 },
	{ sys_msg_h, 70 },
	{ sys_param_h, 71 },
	{ sys_poll_h, 72 },
	{ sys_resource_h, 73 },
	{ sys_sem_h, 74 },
	{ sys_shm_h, 75 },
	{ sys_socket_h, 76 },
	{ sys_stat_h, 77 },
	{ sys_statvfs_h, 78 },
	{ sys_time_h, 79 },
	{ sys_timeb_h, 80 },
	{ sys_times_h, 81 },
	{ sys_types_h, 82 },
	{ sys_un_h, 83 },
	{ sys_utsname_h, 84 },
	{ sys_wait_h, 85 },
	{ syslog_h, 86 },
	{ tar_h, 87 },
	{ termios_h, 88 },
	{ time_h, 89 },
	{ ucontext_h, 90 },
	{ ulimit_h, 91 },
	{ unistd_h, 92 },
	{ utime_h, 93 },
	{ utmp_h, 94 },
	{ utmpx_h, 95 },
	{ wchar_h, 96 },
	{ wctype_h, 97 },
	{ wordexp_h, 98 },
	{ zlib_h, 99 },
	{ NULL, 0 }
};
