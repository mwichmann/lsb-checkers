#include <stdio.h>
#include <stdarg.h>

#ifdef __i386__
int architecture=2;
#define __found_arch__
#endif
#ifdef __ia64__
int architecture=3;
#define __found_arch__
#endif
#ifdef __arm__
int architecture=4;
#define __found_arch__
#endif
#ifdef __mc68000__
int architecture=5;
#define __found_arch__
#endif
#ifdef __powerpc__
int architecture=6;
#define __found_arch__
#endif
#ifdef __alpha__
int architecture=7;
#define __found_arch__
#endif
#ifdef __not_def__
int architecture=8;
#define __found_arch__
#endif
#ifndef __found_arch__
#error "Unable to identify architecture"
#endif

#ifdef TET_TEST

#include "hdrchk_tet.h"

#endif

Msg( char *f, ...)
{
va_list args;
va_start(args,f);
vfprintf(stderr, f, args);
va_end(args);
}

Log( char *f, ...)
{
/* Quietly drop extraneous messages when running in non TET mode */
}

int tcnt=0;

#ifndef TET_TEST

main()
{
tcnt+=GL_gl_h();
tcnt+=GL_glx_h();
tcnt+=X11_ICE_ICElib_h();
tcnt+=X11_ICE_ICEutil_h();
tcnt+=X11_SM_SMlib_h();
tcnt+=X11_X_h();
tcnt+=X11_Xauth_h();
tcnt+=X11_Xcms_h();
tcnt+=X11_Xlib_h();
tcnt+=X11_Xutil_h();
tcnt+=X11_extensions_security_h();
tcnt+=X11_extensions_sync_h();
tcnt+=aio_h();
tcnt+=assert_h();
tcnt+=cpio_h();
tcnt+=curses_h();
tcnt+=dirent_h();
tcnt+=dlfcn_h();
tcnt+=errno_h();
tcnt+=fcntl_h();
tcnt+=fnmatch_h();
tcnt+=ftw_h();
tcnt+=glob_h();
tcnt+=grp_h();
tcnt+=iconv_h();
tcnt+=inttypes_h();
tcnt+=limits_h();
tcnt+=locale_h();
tcnt+=math_h();
tcnt+=netdb_h();
tcnt+=netinet_in_h();
tcnt+=nl_types_h();
tcnt+=pthread_h();
tcnt+=pwd_h();
tcnt+=regex_h();
tcnt+=sched_h();
tcnt+=search_h();
tcnt+=semaphore_h();
tcnt+=setjmp_h();
tcnt+=signal_h();
tcnt+=stddef_h();
tcnt+=stdio_h();
tcnt+=stdlib_h();
tcnt+=sys_ioctl_h();
tcnt+=sys_ipc_h();
tcnt+=sys_mman_h();
tcnt+=sys_msg_h();
tcnt+=sys_param_h();
tcnt+=sys_resource_h();
tcnt+=sys_select_h();
tcnt+=sys_sem_h();
tcnt+=sys_shm_h();
tcnt+=sys_socket_h();
tcnt+=sys_stat_h();
tcnt+=sys_time_h();
tcnt+=sys_times_h();
tcnt+=sys_types_h();
tcnt+=sys_utsname_h();
tcnt+=sys_wait_h();
tcnt+=tar_h();
tcnt+=termios_h();
tcnt+=time_h();
tcnt+=ulimit_h();
tcnt+=unistd_h();
tcnt+=utime_h();
tcnt+=wchar_h();
tcnt+=wctype_h();
tcnt+=wordexp_h();
tcnt+=zlib_h();
tcnt+=intrinsic();
printf("Total Tests: %d\n", tcnt );
}
#endif
