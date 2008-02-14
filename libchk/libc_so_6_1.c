#include <stdlib.h>
#include "elfchk.h"
struct versym libc_so_6_1[] = {
#if defined __i386__
	{"_Exit","GLIBC_2.1.1",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"_IO_feof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_IO_getc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_IO_putc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_IO_puts","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__assert_fail","GLIBC_2.0",0,LSB_Core,1,1},
#endif
	{"__ctype_b_loc","GLIBC_2.3",0,LSB_Core,0,1},
#if defined __ia64__
	{"__ctype_get_mb_cur_max","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"__ctype_tolower_loc","GLIBC_2.3",0,LSB_Core,0,1},
	{"__ctype_toupper_loc","GLIBC_2.3",0,LSB_Core,0,1},
#if defined __i386__
	{"__cxa_atexit","GLIBC_2.1.3",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__daylight","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __i386__
	{"__environ","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __i386__
	{"__errno_location","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__fpending","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__fxstat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__fxstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__getpagesize","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__getpgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__h_errno_location","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__isinf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__isinff","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__isinfl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__isnan","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__isnanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__isnanl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__libc_current_sigrtmax","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__libc_current_sigrtmin","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__libc_start_main","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__lxstat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__lxstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__mempcpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"__rawmemchr","GLIBC_2.1",0,LSB_Core,0,1},
#endif
	{"__register_atfork","GLIBC_2.3.2",0,LSB_Core,0,1},
#if defined __i386__
	{"__sigsetjmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__stpcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__strdup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__strtod_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__strtof_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__strtok_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__strtol_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__strtold_internal","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"__strtoll_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__strtoul_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__strtoull_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__sysconf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__sysv_signal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__timezone","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __i386__
	{"__tzname","GLIBC_2.0",0,LSB_Core,8,0},
#endif
#if defined __i386__
	{"__wcstod_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__wcstof_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__wcstol_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__wcstold_internal","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"__wcstoul_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__xmknod","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__xstat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__xstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_environ","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_exit","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"_longjmp","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"_nl_msg_cat_cntr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_setjmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_sys_errlist","GLIBC_2.3",0,LSB_Core,0,0},
#endif
#if defined __i386__
	{"_sys_siglist","GLIBC_2.3.3",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"_tolower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_toupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"a64l","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"abort","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"abs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"accept","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"access","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"acct","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"adjtime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"alarm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"asctime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"asctime_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"asprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"atof","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"atoi","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"atol","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"atoll","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"authnone_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"basename","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"bcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"bcopy","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"bind","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"bind_textdomain_codeset","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"bindresvport","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"bindtextdomain","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"brk","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"bsd_signal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"bsearch","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"btowc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"bzero","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"calloc","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"catclose","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"catgets","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"catopen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cfgetispeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cfgetospeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cfmakeraw","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"cfsetispeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cfsetospeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cfsetspeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"chdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"chmod","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"chown","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"chroot","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"clearerr","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"clnt_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"clnt_pcreateerror","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"clnt_perrno","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"clnt_perror","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"clnt_spcreateerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"clnt_sperrno","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"clnt_sperror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"clock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"close","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"closedir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"closelog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"confstr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"connect","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"creat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"creat64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ctermid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ctime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ctime_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cuserid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"daemon","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"daylight","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"dcgettext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"dcngettext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dgettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"difftime","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"dirname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"div","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"dngettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"drand48","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"dup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"dup2","GLIBC_2.0",0,LSB_Core,4,1},
#endif
	{"duplocale","GLIBC_2.3",0,LSB_Core,0,1},
#if defined __i386__
	{"ecvt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"endgrent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"endprotoent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"endpwent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"endservent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"endutent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"endutxent","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"environ","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"erand48","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"err","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"error","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"errx","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"execl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"execle","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"execlp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"execv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"execve","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"execvp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"exit","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"fchdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fchmod","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fchown","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fclose","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fcntl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fcvt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fdatasync","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fdopen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"feof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ferror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fflush","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fflush_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ffs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgetc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgetpos","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgetpos64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgets","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgetwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgetwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgetws","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"fileno","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"flock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"flockfile","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"fmtmsg","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fnmatch","GLIBC_2.2.3",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fopen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fopen64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fork","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fpathconf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fputc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fputs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fputwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fputws","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fread","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"free","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"freeaddrinfo","GLIBC_2.0",0,LSB_Core,1,1},
#endif
	{"freelocale","GLIBC_2.3",0,LSB_Core,0,1},
#if defined __i386__
	{"freopen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"freopen64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fseek","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fseeko","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fseeko64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fsetpos","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fsetpos64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fstatfs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fstatfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fstatvfs","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fstatvfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fsync","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftell","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftello","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftello64","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ftime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ftok","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftruncate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftruncate64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftrylockfile","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftw","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftw64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"funlockfile","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"fwide","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fwrite","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gai_strerror","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gcvt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getaddrinfo","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getchar","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getchar_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getcontext","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getcwd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getdate","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getdate_err","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getegid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"geteuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getgrent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getgrgid","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getgrgid_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getgrnam","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getgrnam_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getgrouplist","GLIBC_2.2.4",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getgroups","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gethostbyaddr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"gethostbyaddr_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gethostbyname","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"gethostid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gethostname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getitimer","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getloadavg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getlogin","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getlogin_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getnameinfo","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getopt_long","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getopt_long_only","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpagesize","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpeername","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getppid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpriority","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getprotobyname","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getprotobynumber","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getprotoent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getpwent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getpwnam","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getpwnam_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpwuid","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getpwuid_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getrlimit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getrlimit64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getrusage","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getservbyname","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getservbyport","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getservent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getsid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getsockname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getsockopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getsubopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gettext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gettimeofday","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getutent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getutent_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getutxent","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getutxid","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getutxline","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getw","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getwchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getwd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"glob","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"glob64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"globfree","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"globfree64","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"gmtime","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"gmtime_r","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"grantpt","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"hcreate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"hdestroy","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"hsearch","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"htonl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"htons","GLIBC_2.0",0,LSB_Core,2,1},
#endif
#if defined __i386__
	{"iconv","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iconv_close","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iconv_open","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"if_freenameindex","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"if_indextoname","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"if_nameindex","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"if_nametoindex","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"imaxabs","GLIBC_2.1.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"imaxdiv","GLIBC_2.1.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"index","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"inet_addr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"inet_ntoa","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"inet_ntop","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"inet_pton","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"initgroups","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"initstate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"insque","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"ioctl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isalnum","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isalpha","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isascii","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isatty","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isblank","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iscntrl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isgraph","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"islower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isprint","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ispunct","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isspace","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswalnum","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswalpha","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswblank","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswcntrl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswctype","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswgraph","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswlower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswprint","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswpunct","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswspace","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswxdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isxdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"jrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"key_decryptsession","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"kill","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"killpg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"l64a","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"labs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lchown","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lcong48","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"ldiv","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"lfind","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"link","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"listen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"llabs","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"lldiv","GLIBC_2.0",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"localeconv","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"localtime","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"localtime_r","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"lockf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lockf64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"longjmp","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"lrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lsearch","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"lseek","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"makecontext","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"malloc","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"mblen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mbrlen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mbrtowc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mbsinit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mbsnrtowcs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mbsrtowcs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mbstowcs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mbtowc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"memccpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"memchr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"memcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"memcpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"memmem","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"memmove","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"memrchr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"memset","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"mkdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mkfifo","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mkstemp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mkstemp64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mktemp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mktime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mlock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mlockall","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mmap","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"mmap64","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"mprotect","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"msgctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"msgget","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"msgrcv","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"msgsnd","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"msync","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"munlock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"munlockall","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"munmap","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"nanosleep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
	{"newlocale","GLIBC_2.3",0,LSB_Core,0,1},
#if defined __i386__
	{"nftw","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"nftw64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ngettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"nice","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"nl_langinfo","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"nrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ntohl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ntohs","GLIBC_2.0",0,LSB_Core,2,1},
#endif
#if defined __i386__
	{"open","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"opendir","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"openlog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"optarg","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"opterr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"optind","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"optopt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"pathconf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"pause","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"pclose","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"perror","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"pipe","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"pmap_getport","GLIBC_2.2",0,LSB_Core,2,1},
#endif
#if defined __ia64__
	{"pmap_set","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"pmap_unset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"poll","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"popen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_memalign","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_openpt","GLIBC_2.2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawn","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"printf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"psignal","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"ptsname","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putchar","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putchar_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"puts","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"pututxline","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putw","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putwchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"qsort","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"raise","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"rand","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"rand_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"random","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"read","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"readdir","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"readdir64","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"readdir_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"readlink","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"readv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"realloc","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"realpath","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"recv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"recvfrom","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"recvmsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"regcomp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"regerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"regexec","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"regfree","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"remove","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"remque","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"rename","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"rewind","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"rewinddir","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"rindex","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"rmdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sbrk","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"scanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_get_priority_max","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_get_priority_min","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_getparam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_getscheduler","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_rr_get_interval","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_setparam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_setscheduler","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_yield","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"seed48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"seekdir","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"select","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"semctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"semget","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"semop","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"send","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sendmsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sendto","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setbuf","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setbuffer","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setcontext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setegid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"seteuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setgrent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setgroups","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sethostname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setitimer","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setlocale","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setlogmask","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setpgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setpriority","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setprotoent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setpwent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setregid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setreuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setrlimit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setrlimit64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setservent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setsid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setsockopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setstate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setutent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setutxent","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setvbuf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"shmat","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"shmctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"shmdt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"shmget","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"shutdown","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigaction","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigaddset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigaltstack","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigandset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigdelset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigemptyset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigfillset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sighold","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigignore","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"siginterrupt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigisemptyset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigismember","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"siglongjmp","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"signal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigorset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigpause","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigpending","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigprocmask","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigqueue","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigrelse","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigreturn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigset","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigsuspend","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigtimedwait","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigwait","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigwaitinfo","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sleep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"snprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sockatmark","GLIBC_2.2.4",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"socket","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"socketpair","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"srand","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"srand48","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"srandom","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"sscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"statfs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"statfs64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"statvfs","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"statvfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"stderr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"stdin","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"stdout","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"stime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"stpcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"stpncpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strcasecmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strcasestr","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strcat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strchr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strcoll","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strcspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strdup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strerror_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strfmon","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strftime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strlen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strncasecmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strncat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strncmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strncpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strndup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strnlen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strpbrk","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strptime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strrchr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strsep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strsignal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strstr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strtod","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strtoimax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtok","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strtok_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strtol","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strtold","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"strtoll","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtoq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtoul","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strtoull","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtoumax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtouq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strxfrm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"svc_getreqset","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"svc_register","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"svc_run","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"svc_sendreply","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"svcerr_auth","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcerr_decode","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcerr_noproc","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcerr_noprog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcerr_progvers","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcerr_systemerr","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcerr_weakauth","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"svctcp_create","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"svcudp_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"swab","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"swapcontext","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"swprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"swscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"symlink","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sync","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"sysconf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"syslog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"system","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcdrain","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcflow","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcflush","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcgetattr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcgetpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcgetsid","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcsendbreak","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcsetattr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcsetpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tdelete","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"telldir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tempnam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"textdomain","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tfind","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"time","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"times","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"timezone","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tmpfile","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tmpfile64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tmpnam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"toascii","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tolower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"toupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"towctrans","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"towlower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"towupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"truncate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"truncate64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tsearch","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"ttyname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ttyname_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"twalk","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"tzname","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"tzset","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"ualarm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ulimit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"umask","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"uname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ungetc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ungetwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"unlink","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"unlockpt","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"unsetenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
	{"uselocale","GLIBC_2.3",0,LSB_Core,0,1},
#if defined __i386__
	{"usleep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"utime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"utimes","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"utmpname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vasprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vdprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"verrx","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"vfork","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vfprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vfscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vfwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vfwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vsnprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vsprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vsscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vswprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vswscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vsyslog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"vwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wait","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wait4","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"waitpid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"warn","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"warnx","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"wcpcpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcpncpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcrtomb","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcscasecmp","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcscat","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcschr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcscmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcscoll","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcscpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcscspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcsdup","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcsftime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcslen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcsncasecmp","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcsncat","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcsncmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcsncpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcsnlen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcsnrtombs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcspbrk","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcsrchr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcsrtombs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcsspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcsstr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcstod","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcstoimax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstok","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcstol","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcstold","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"wcstoll","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstombs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcstoq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstoul","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcstoull","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstoumax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstouq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcswcs","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcswidth","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcsxfrm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wctob","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wctomb","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wctrans","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wctype","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcwidth","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wmemchr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wmemcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wmemcpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wmemmove","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wmemset","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wordexp","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wordfree","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"wprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"write","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"writev","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_accepted_reply","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_array","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_bool","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_bytes","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_callhdr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_callmsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_char","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_double","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_enum","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_float","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_free","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"xdr_int","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_long","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_opaque","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_opaque_auth","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_pointer","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_reference","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_rejected_reply","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_replymsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_short","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_string","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_u_char","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_u_int","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_u_long","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_u_short","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_union","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_vector","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_void","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_wrapstring","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdrmem_create","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"xdrrec_create","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"xdrrec_eof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
	{0,0}};

struct classinfo *libc_so_6_1_classinfo[] = {

	NULL	};
