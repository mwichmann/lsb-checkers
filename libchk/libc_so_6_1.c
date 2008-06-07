#include <stdlib.h>
#include "elfchk.h"
struct versym libc_so_6_1[] = {
#if defined __i386__
	{"_Exit","GLIBC_2.1.1",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"_Exit","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_Exit","GLIBC_2.1.1",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"_Exit","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_Exit","GLIBC_2.1.1",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"_Exit","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"_Exit","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"_IO_feof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"_IO_feof","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_IO_feof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"_IO_feof","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_IO_feof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"_IO_feof","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"_IO_feof","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_IO_getc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"_IO_getc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_IO_getc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"_IO_getc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_IO_getc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"_IO_getc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"_IO_getc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_IO_putc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"_IO_putc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_IO_putc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"_IO_putc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_IO_putc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"_IO_putc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"_IO_putc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_IO_puts","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"_IO_puts","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_IO_puts","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"_IO_puts","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_IO_puts","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"_IO_puts","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"_IO_puts","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__assert_fail","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"__assert_fail","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__assert_fail","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"__assert_fail","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__assert_fail","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"__assert_fail","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"__assert_fail","GLIBC_2.2",0,LSB_Core,1,1},
#endif
	{"__chk_fail","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__ctype_b_loc","GLIBC_2.3",0,LSB_Core,0,1},
#if defined __i386__
	{"__ctype_get_mb_cur_max","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__ctype_get_mb_cur_max","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__ctype_get_mb_cur_max","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__ctype_get_mb_cur_max","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__ctype_get_mb_cur_max","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__ctype_get_mb_cur_max","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__ctype_get_mb_cur_max","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"__ctype_tolower_loc","GLIBC_2.3",0,LSB_Core,0,1},
	{"__ctype_toupper_loc","GLIBC_2.3",0,LSB_Core,0,1},
#if defined __i386__
	{"__cxa_atexit","GLIBC_2.1.3",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__cxa_atexit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__cxa_atexit","GLIBC_2.1.3",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__cxa_atexit","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__cxa_atexit","GLIBC_2.1.3",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__cxa_atexit","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__cxa_atexit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__cxa_finalize","GLIBC_2.1.3",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"__cxa_finalize","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__cxa_finalize","GLIBC_2.1.3",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"__cxa_finalize","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__cxa_finalize","GLIBC_2.1.3",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"__cxa_finalize","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"__cxa_finalize","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"__daylight","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __ia64__
	{"__daylight","GLIBC_2.2",0,LSB_Core,4,0},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__daylight","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __powerpc64__
	{"__daylight","GLIBC_2.3",0,LSB_Core,4,0},
#endif
#if defined __s390__ && !defined __s390x__
	{"__daylight","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __x86_64__
	{"__daylight","GLIBC_2.2.5",0,LSB_Core,4,0},
#endif
#if defined __s390x__
	{"__daylight","GLIBC_2.2",0,LSB_Core,4,0},
#endif
#if defined __i386__
	{"__environ","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __ia64__
	{"__environ","GLIBC_2.2",0,LSB_Core,8,0},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__environ","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __powerpc64__
	{"__environ","GLIBC_2.3",0,LSB_Core,8,0},
#endif
#if defined __s390__ && !defined __s390x__
	{"__environ","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __x86_64__
	{"__environ","GLIBC_2.2.5",0,LSB_Core,8,0},
#endif
#if defined __s390x__
	{"__environ","GLIBC_2.2",0,LSB_Core,8,0},
#endif
#if defined __i386__
	{"__errno_location","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__errno_location","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__errno_location","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__errno_location","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__errno_location","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__errno_location","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__errno_location","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"__fgets_chk","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__fpending","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__fpending","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__fpending","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__fpending","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__fpending","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__fpending","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__fpending","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"__fprintf_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__fwprintf_chk","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__fxstat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__fxstat","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__fxstat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__fxstat","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__fxstat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__fxstat","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__fxstat","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__fxstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__fxstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__fxstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__fxstat64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__fxstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__fxstat64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__fxstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"__fxstatat","GLIBC_2.4",0,LSB_Core,0,1},
	{"__fxstatat64","GLIBC_2.4",0,LSB_Core,0,1},
	{"__getcwd_chk","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__getpagesize","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__getpagesize","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__getpagesize","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__getpagesize","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__getpagesize","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__getpagesize","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__getpagesize","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__getpgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__getpgid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__getpgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__getpgid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__getpgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__getpgid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__getpgid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__h_errno_location","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__h_errno_location","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__h_errno_location","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__h_errno_location","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__h_errno_location","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__h_errno_location","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__h_errno_location","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__isinf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__isinf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__isinf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__isinf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__isinf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__isinf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__isinf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__isinff","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__isinff","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__isinff","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__isinff","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__isinff","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__isinff","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__isinff","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__isinfl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__isinfl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__isinfl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__isinfl","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__isinfl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__isinfl","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__isinfl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__isnan","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__isnan","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__isnan","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__isnan","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__isnan","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__isnan","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__isnan","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__isnanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__isnanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__isnanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__isnanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__isnanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__isnanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__isnanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__isnanl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__isnanl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__isnanl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__isnanl","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__isnanl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__isnanl","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__isnanl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__libc_current_sigrtmax","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__libc_current_sigrtmax","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__libc_current_sigrtmax","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__libc_current_sigrtmax","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__libc_current_sigrtmax","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__libc_current_sigrtmax","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__libc_current_sigrtmax","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__libc_current_sigrtmin","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__libc_current_sigrtmin","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__libc_current_sigrtmin","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__libc_current_sigrtmin","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__libc_current_sigrtmin","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__libc_current_sigrtmin","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__libc_current_sigrtmin","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__libc_start_main","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__libc_start_main","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__libc_start_main","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__libc_start_main","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__libc_start_main","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__libc_start_main","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__libc_start_main","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__lxstat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__lxstat","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__lxstat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__lxstat","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__lxstat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__lxstat","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__lxstat","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__lxstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__lxstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__lxstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__lxstat64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__lxstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__lxstat64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__lxstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"__memcpy_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__memmove_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__mempcpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"__mempcpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__mempcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__mempcpy","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__mempcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__mempcpy","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__mempcpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"__mempcpy_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__memset_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__printf_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__rawmemchr","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"__rawmemchr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__rawmemchr","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__rawmemchr","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__rawmemchr","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__rawmemchr","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__rawmemchr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"__read_chk","GLIBC_2.4",0,LSB_Core,0,1},
	{"__readlink_chk","GLIBC_2.4",0,LSB_Core,0,1},
	{"__realpath_chk","GLIBC_2.4",0,LSB_Core,0,1},
	{"__recv_chk","GLIBC_2.4",0,LSB_Core,0,1},
	{"__recvfrom_chk","GLIBC_2.4",0,LSB_Core,0,1},
	{"__register_atfork","GLIBC_2.3.2",0,LSB_Core,0,1},
#if defined __i386__
	{"__sigsetjmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__sigsetjmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__sigsetjmp","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__sigsetjmp","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__sigsetjmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__sigsetjmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__sigsetjmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"__snprintf_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__sprintf_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__stack_chk_fail","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__stpcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__stpcpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__stpcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__stpcpy","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__stpcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__stpcpy","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__stpcpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"__stpcpy_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__strcat_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__strcpy_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__strdup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__strdup","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__strdup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__strdup","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__strdup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__strdup","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__strdup","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"__strncat_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__strncpy_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__strtod_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"__strtod_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__strtod_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"__strtod_internal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__strtod_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"__strtod_internal","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__strtod_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__strtof_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__strtof_internal","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__strtof_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__strtof_internal","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__strtof_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__strtof_internal","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__strtof_internal","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__strtok_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__strtok_r","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__strtok_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__strtok_r","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__strtok_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__strtok_r","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__strtok_r","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__strtol_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__strtol_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__strtol_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__strtol_internal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__strtol_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__strtol_internal","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__strtol_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__strtold_internal","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __ia64__
	{"__strtold_internal","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__strtold_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"__strtold_internal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__strtold_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"__strtold_internal","GLIBC_2.2.5",0,LSB_Core,16,1},
#endif
#if defined __s390x__
	{"__strtold_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__strtoll_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"__strtoll_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__strtoll_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"__strtoll_internal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__strtoll_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"__strtoll_internal","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__strtoll_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__strtoul_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__strtoul_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__strtoul_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__strtoul_internal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__strtoul_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__strtoul_internal","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__strtoul_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__strtoull_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"__strtoull_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__strtoull_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"__strtoull_internal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__strtoull_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"__strtoull_internal","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__strtoull_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"__swprintf_chk","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__sysconf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__sysconf","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__sysconf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__sysconf","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__sysconf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__sysconf","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__sysconf","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"__syslog_chk","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__sysv_signal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__sysv_signal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__sysv_signal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__sysv_signal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__sysv_signal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__sysv_signal","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__sysv_signal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__timezone","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __ia64__
	{"__timezone","GLIBC_2.2",0,LSB_Core,8,0},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__timezone","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __powerpc64__
	{"__timezone","GLIBC_2.3",0,LSB_Core,8,0},
#endif
#if defined __s390__ && !defined __s390x__
	{"__timezone","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __x86_64__
	{"__timezone","GLIBC_2.2.5",0,LSB_Core,8,0},
#endif
#if defined __s390x__
	{"__timezone","GLIBC_2.2",0,LSB_Core,8,0},
#endif
#if defined __i386__
	{"__tzname","GLIBC_2.0",0,LSB_Core,8,0},
#endif
#if defined __ia64__
	{"__tzname","GLIBC_2.2",0,LSB_Core,16,0},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__tzname","GLIBC_2.0",0,LSB_Core,8,0},
#endif
#if defined __powerpc64__
	{"__tzname","GLIBC_2.3",0,LSB_Core,16,0},
#endif
#if defined __s390__ && !defined __s390x__
	{"__tzname","GLIBC_2.0",0,LSB_Core,8,0},
#endif
#if defined __x86_64__
	{"__tzname","GLIBC_2.2.5",0,LSB_Core,16,0},
#endif
#if defined __s390x__
	{"__tzname","GLIBC_2.2",0,LSB_Core,16,0},
#endif
	{"__vfprintf_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__vprintf_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__vsnprintf_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__vsprintf_chk","GLIBC_2.3.4",0,LSB_Core,0,1},
	{"__vsyslog_chk","GLIBC_2.4",0,LSB_Core,0,1},
	{"__wcscat_chk","GLIBC_2.4",0,LSB_Core,0,1},
	{"__wcscpy_chk","GLIBC_2.4",0,LSB_Core,0,1},
	{"__wcsncpy_chk","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__wcstod_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"__wcstod_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__wcstod_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"__wcstod_internal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__wcstod_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"__wcstod_internal","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__wcstod_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__wcstof_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__wcstof_internal","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__wcstof_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__wcstof_internal","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__wcstof_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__wcstof_internal","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__wcstof_internal","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__wcstol_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__wcstol_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__wcstol_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__wcstol_internal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__wcstol_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__wcstol_internal","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__wcstol_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__wcstold_internal","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __ia64__
	{"__wcstold_internal","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__wcstold_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"__wcstold_internal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__wcstold_internal","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"__wcstold_internal","GLIBC_2.2.5",0,LSB_Core,16,1},
#endif
#if defined __s390x__
	{"__wcstold_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__wcstoul_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__wcstoul_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__wcstoul_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__wcstoul_internal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__wcstoul_internal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__wcstoul_internal","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__wcstoul_internal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"__wctomb_chk","GLIBC_2.4",0,LSB_Core,0,1},
	{"__wmemmove_chk","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__xmknod","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__xmknod","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__xmknod","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__xmknod","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__xmknod","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__xmknod","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__xmknod","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"__xmknodat","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"__xpg_basename","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__xpg_basename","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__xpg_basename","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__xpg_basename","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__xpg_basename","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__xpg_basename","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"__xpg_basename","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"__xpg_sigpause","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__xpg_sigpause","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__xpg_sigpause","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__xpg_sigpause","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__xpg_sigpause","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__xpg_sigpause","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__xpg_sigpause","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__xpg_strerror_r","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__xpg_strerror_r","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__xpg_strerror_r","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__xpg_strerror_r","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__xpg_strerror_r","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__xpg_strerror_r","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__xpg_strerror_r","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__xstat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__xstat","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__xstat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__xstat","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__xstat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__xstat","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__xstat","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__xstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__xstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"__xstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"__xstat64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__xstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__xstat64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__xstat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_environ","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"_environ","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_environ","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"_environ","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_environ","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"_environ","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"_environ","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"_exit","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"_exit","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_exit","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"_exit","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_exit","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"_exit","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"_exit","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"_longjmp","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"_longjmp","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_longjmp","GLIBC_2.3.4",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"_longjmp","GLIBC_2.3.4",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_longjmp","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"_longjmp","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"_longjmp","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"_nl_msg_cat_cntr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"_nl_msg_cat_cntr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_nl_msg_cat_cntr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"_nl_msg_cat_cntr","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_nl_msg_cat_cntr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"_nl_msg_cat_cntr","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"_nl_msg_cat_cntr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_setjmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"_setjmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_setjmp","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"_setjmp","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_setjmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"_setjmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"_setjmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_sys_errlist","GLIBC_2.3",0,LSB_Core,0,0},
#endif
#if defined __ia64__
	{"_sys_errlist","GLIBC_2.3",0,LSB_Core,0,0},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_sys_errlist","GLIBC_2.3",0,LSB_Core,0,0},
#endif
#if defined __powerpc64__
	{"_sys_errlist","GLIBC_2.3",0,LSB_Core,0,0},
#endif
#if defined __s390__ && !defined __s390x__
	{"_sys_errlist","GLIBC_2.3",0,LSB_Core,0,0},
#endif
#if defined __x86_64__
	{"_sys_errlist","GLIBC_2.3",0,LSB_Core,0,0},
#endif
#if defined __s390x__
	{"_sys_errlist","GLIBC_2.3",0,LSB_Core,0,0},
#endif
#if defined __i386__
	{"_sys_siglist","GLIBC_2.3.3",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"_sys_siglist","GLIBC_2.3.3",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_sys_siglist","GLIBC_2.3.3",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"_sys_siglist","GLIBC_2.3.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_sys_siglist","GLIBC_2.3.3",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"_sys_siglist","GLIBC_2.3.3",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"_sys_siglist","GLIBC_2.3.3",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"_tolower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"_tolower","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_tolower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"_tolower","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_tolower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"_tolower","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"_tolower","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"_toupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"_toupper","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"_toupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"_toupper","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"_toupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"_toupper","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"_toupper","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"a64l","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"a64l","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"a64l","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"a64l","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"a64l","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"a64l","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"a64l","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"abort","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"abort","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"abort","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"abort","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"abort","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"abort","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"abort","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"abs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"abs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"abs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"abs","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"abs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"abs","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"abs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"accept","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"accept","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"accept","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"accept","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"accept","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"accept","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"accept","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"access","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"access","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"access","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"access","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"access","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"access","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"access","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"acct","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"acct","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"acct","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"acct","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"acct","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"acct","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"acct","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"adjtime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"adjtime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"adjtime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"adjtime","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"adjtime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"adjtime","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"adjtime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"alarm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"alarm","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"alarm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"alarm","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"alarm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"alarm","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"alarm","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"asctime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"asctime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"asctime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"asctime","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"asctime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"asctime","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"asctime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"asctime_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"asctime_r","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"asctime_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"asctime_r","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"asctime_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"asctime_r","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"asctime_r","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"asprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"asprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"asprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"asprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"asprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"asprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"asprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"atof","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"atof","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"atof","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"atof","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"atof","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"atof","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"atof","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"atoi","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"atoi","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"atoi","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"atoi","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"atoi","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"atoi","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"atoi","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"atol","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"atol","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"atol","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"atol","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"atol","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"atol","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"atol","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"atoll","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"atoll","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"atoll","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"atoll","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"atoll","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"atoll","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"atoll","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"authnone_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"authnone_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"authnone_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"authnone_create","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"authnone_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"authnone_create","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"authnone_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"basename","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"basename","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"basename","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"basename","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"basename","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"basename","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"basename","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"bcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"bcmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"bcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"bcmp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"bcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"bcmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"bcmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"bcopy","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"bcopy","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"bcopy","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"bcopy","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"bcopy","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"bcopy","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"bcopy","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"bind","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"bind","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"bind","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"bind","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"bind","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"bind","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"bind","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"bind_textdomain_codeset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"bind_textdomain_codeset","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"bind_textdomain_codeset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"bind_textdomain_codeset","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"bind_textdomain_codeset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"bind_textdomain_codeset","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"bind_textdomain_codeset","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"bindresvport","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"bindresvport","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"bindresvport","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"bindresvport","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"bindresvport","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"bindresvport","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"bindresvport","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"bindtextdomain","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"bindtextdomain","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"bindtextdomain","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"bindtextdomain","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"bindtextdomain","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"bindtextdomain","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"bindtextdomain","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"brk","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"brk","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"brk","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"brk","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"brk","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"brk","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"brk","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"bsd_signal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"bsd_signal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"bsd_signal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"bsd_signal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"bsd_signal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"bsd_signal","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"bsd_signal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"bsearch","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"bsearch","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"bsearch","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"bsearch","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"bsearch","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"bsearch","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"bsearch","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"btowc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"btowc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"btowc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"btowc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"btowc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"btowc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"btowc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"bzero","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"bzero","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"bzero","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"bzero","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"bzero","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"bzero","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"bzero","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"calloc","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"calloc","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"calloc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"calloc","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"calloc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"calloc","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"calloc","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"callrpc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"callrpc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"callrpc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"callrpc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"callrpc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"callrpc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"callrpc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"catclose","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"catclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"catclose","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"catclose","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"catclose","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"catclose","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"catclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"catgets","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"catgets","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"catgets","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"catgets","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"catgets","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"catgets","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"catgets","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"catopen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"catopen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"catopen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"catopen","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"catopen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"catopen","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"catopen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"cfgetispeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"cfgetispeed","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"cfgetispeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"cfgetispeed","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"cfgetispeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"cfgetispeed","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"cfgetispeed","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cfgetospeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"cfgetospeed","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"cfgetospeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"cfgetospeed","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"cfgetospeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"cfgetospeed","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"cfgetospeed","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cfmakeraw","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"cfmakeraw","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"cfmakeraw","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"cfmakeraw","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"cfmakeraw","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"cfmakeraw","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"cfmakeraw","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"cfsetispeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"cfsetispeed","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"cfsetispeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"cfsetispeed","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"cfsetispeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"cfsetispeed","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"cfsetispeed","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cfsetospeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"cfsetospeed","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"cfsetospeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"cfsetospeed","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"cfsetospeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"cfsetospeed","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"cfsetospeed","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cfsetspeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"cfsetspeed","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"cfsetspeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"cfsetspeed","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"cfsetspeed","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"cfsetspeed","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"cfsetspeed","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"chdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"chdir","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"chdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"chdir","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"chdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"chdir","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"chdir","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"chmod","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"chmod","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"chmod","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"chmod","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"chmod","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"chmod","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"chmod","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"chown","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"chown","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"chown","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"chown","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"chown","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"chown","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"chown","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"chroot","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"chroot","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"chroot","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"chroot","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"chroot","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"chroot","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"chroot","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"clearerr","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"clearerr","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clearerr","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"clearerr","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clearerr","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"clearerr","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"clearerr","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"clearerr_unlocked","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"clearerr_unlocked","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clearerr_unlocked","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"clearerr_unlocked","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clearerr_unlocked","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"clearerr_unlocked","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"clearerr_unlocked","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"clnt_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"clnt_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clnt_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"clnt_create","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clnt_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"clnt_create","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"clnt_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"clnt_pcreateerror","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"clnt_pcreateerror","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clnt_pcreateerror","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"clnt_pcreateerror","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clnt_pcreateerror","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"clnt_pcreateerror","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"clnt_pcreateerror","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"clnt_perrno","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"clnt_perrno","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clnt_perrno","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"clnt_perrno","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clnt_perrno","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"clnt_perrno","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"clnt_perrno","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"clnt_perror","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"clnt_perror","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clnt_perror","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"clnt_perror","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clnt_perror","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"clnt_perror","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"clnt_perror","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"clnt_spcreateerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"clnt_spcreateerror","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clnt_spcreateerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"clnt_spcreateerror","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clnt_spcreateerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"clnt_spcreateerror","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"clnt_spcreateerror","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"clnt_sperrno","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"clnt_sperrno","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clnt_sperrno","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"clnt_sperrno","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clnt_sperrno","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"clnt_sperrno","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"clnt_sperrno","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"clnt_sperror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"clnt_sperror","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clnt_sperror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"clnt_sperror","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clnt_sperror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"clnt_sperror","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"clnt_sperror","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"clntraw_create","",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"clntraw_create","",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clntraw_create","",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"clntraw_create","",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clntraw_create","",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"clntraw_create","",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"clntraw_create","",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"clnttcp_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"clnttcp_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clnttcp_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"clnttcp_create","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clnttcp_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"clnttcp_create","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"clnttcp_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"clntudp_bufcreate","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"clntudp_bufcreate","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clntudp_bufcreate","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"clntudp_bufcreate","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clntudp_bufcreate","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"clntudp_bufcreate","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"clntudp_bufcreate","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"clntudp_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"clntudp_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clntudp_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"clntudp_create","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clntudp_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"clntudp_create","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"clntudp_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"clock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"clock","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"clock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"clock","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"clock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"clock","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"clock","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"close","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"close","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"close","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"close","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"close","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"close","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"close","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"closedir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"closedir","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"closedir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"closedir","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"closedir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"closedir","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"closedir","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"closelog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"closelog","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"closelog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"closelog","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"closelog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"closelog","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"closelog","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"confstr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"confstr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"confstr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"confstr","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"confstr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"confstr","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"confstr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"connect","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"connect","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"connect","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"connect","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"connect","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"connect","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"connect","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"creat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"creat","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"creat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"creat","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"creat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"creat","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"creat","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"creat64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"creat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"creat64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"creat64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"creat64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"creat64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"creat64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ctermid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ctermid","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ctermid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ctermid","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ctermid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ctermid","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"ctermid","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ctime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ctime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ctime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ctime","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ctime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ctime","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"ctime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ctime_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ctime_r","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ctime_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ctime_r","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ctime_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ctime_r","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"ctime_r","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"cuserid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"cuserid","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"cuserid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"cuserid","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"cuserid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"cuserid","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"cuserid","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"daemon","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"daemon","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"daemon","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"daemon","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"daemon","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"daemon","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"daemon","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"daylight","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"daylight","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"daylight","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"daylight","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"daylight","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"daylight","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"daylight","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"dcgettext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dcgettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dcgettext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dcgettext","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dcgettext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"dcgettext","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"dcgettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"dcngettext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dcngettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dcngettext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dcngettext","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dcngettext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"dcngettext","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"dcngettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"dgettext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dgettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dgettext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dgettext","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dgettext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"dgettext","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"dgettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"difftime","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"difftime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"difftime","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"difftime","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"difftime","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"difftime","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"difftime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"dirfd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dirfd","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dirfd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dirfd","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dirfd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"dirfd","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"dirfd","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"dirname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dirname","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dirname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dirname","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dirname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"dirname","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"dirname","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"div","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"div","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"div","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"div","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"div","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"div","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"div","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"dngettext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dngettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dngettext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dngettext","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dngettext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"dngettext","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"dngettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"dprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dprintf","GLIBC_2.4",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"dprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"dprintf","GLIBC_2.4",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"drand48","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"drand48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"drand48","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"drand48","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"drand48","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"drand48","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"drand48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"drand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"drand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"drand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"drand48_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"drand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"drand48_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"drand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"dup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dup","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dup","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"dup","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"dup","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"dup2","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"dup2","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"dup2","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"dup2","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"dup2","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"dup2","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"dup2","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"duplocale","GLIBC_2.3",0,LSB_Core,0,1},
#if defined __i386__
	{"ecvt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ecvt","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ecvt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ecvt","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ecvt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ecvt","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"ecvt","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"endgrent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"endgrent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"endgrent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"endgrent","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"endgrent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"endgrent","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"endgrent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"endprotoent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"endprotoent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"endprotoent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"endprotoent","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"endprotoent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"endprotoent","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"endprotoent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"endpwent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"endpwent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"endpwent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"endpwent","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"endpwent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"endpwent","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"endpwent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"endservent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"endservent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"endservent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"endservent","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"endservent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"endservent","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"endservent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"endutent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"endutent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"endutent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"endutent","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"endutent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"endutent","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"endutent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"endutxent","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"endutxent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"endutxent","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"endutxent","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"endutxent","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"endutxent","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"endutxent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"environ","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"environ","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"environ","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"environ","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"environ","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"environ","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"environ","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"erand48","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"erand48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"erand48","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"erand48","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"erand48","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"erand48","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"erand48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"erand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"erand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"erand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"erand48_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"erand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"erand48_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"erand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"err","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"err","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"err","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"err","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"err","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"err","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"err","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"error","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"error","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"error","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"error","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"error","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"error","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"error","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"errx","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"errx","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"errx","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"errx","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"errx","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"errx","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"errx","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"execl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"execl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"execl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"execl","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"execl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"execl","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"execl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"execle","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"execle","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"execle","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"execle","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"execle","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"execle","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"execle","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"execlp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"execlp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"execlp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"execlp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"execlp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"execlp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"execlp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"execv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"execv","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"execv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"execv","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"execv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"execv","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"execv","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"execve","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"execve","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"execve","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"execve","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"execve","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"execve","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"execve","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"execvp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"execvp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"execvp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"execvp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"execvp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"execvp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"execvp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"exit","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"exit","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"exit","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"exit","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"exit","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"exit","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"exit","GLIBC_2.2",0,LSB_Core,1,1},
#endif
	{"faccessat","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"fchdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fchdir","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fchdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fchdir","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fchdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fchdir","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fchdir","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fchmod","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fchmod","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fchmod","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fchmod","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fchmod","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fchmod","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fchmod","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"fchmodat","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"fchown","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fchown","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fchown","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fchown","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fchown","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fchown","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fchown","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"fchownat","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"fclose","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fclose","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fclose","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fclose","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fclose","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fcntl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fcntl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fcntl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fcntl","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fcntl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fcntl","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fcntl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fcvt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fcvt","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fcvt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fcvt","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fcvt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fcvt","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"fcvt","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fdatasync","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fdatasync","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fdatasync","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fdatasync","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fdatasync","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fdatasync","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fdatasync","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fdopen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fdopen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fdopen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fdopen","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fdopen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fdopen","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"fdopen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"fdopendir","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"feof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"feof","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"feof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"feof","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"feof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"feof","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"feof","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"feof_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"feof_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"feof_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"feof_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"feof_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"feof_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"feof_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ferror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ferror","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ferror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ferror","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ferror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ferror","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ferror","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ferror_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ferror_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ferror_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ferror_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ferror_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ferror_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ferror_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fexecve","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fexecve","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fexecve","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fexecve","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fexecve","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fexecve","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fexecve","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fflush","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fflush","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fflush","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fflush","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fflush","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fflush","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fflush","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fflush_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fflush_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fflush_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fflush_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fflush_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fflush_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fflush_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ffs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ffs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ffs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ffs","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ffs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ffs","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ffs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgetc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fgetc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fgetc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fgetc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fgetc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fgetc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fgetc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgetc_unlocked","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fgetc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fgetc_unlocked","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fgetc_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fgetc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fgetc_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fgetc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgetpos","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fgetpos","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fgetpos","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fgetpos","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fgetpos","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fgetpos","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fgetpos","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgetpos64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fgetpos64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fgetpos64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fgetpos64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fgetpos64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fgetpos64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fgetpos64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgets","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fgets","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fgets","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fgets","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fgets","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fgets","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"fgets","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fgets_unlocked","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fgets_unlocked","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fgets_unlocked","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fgets_unlocked","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fgets_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fgets_unlocked","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"fgets_unlocked","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fgetwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fgetwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fgetwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fgetwc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fgetwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fgetwc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fgetwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgetwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fgetwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fgetwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fgetwc_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fgetwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fgetwc_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fgetwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fgetws","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"fgetws","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fgetws","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"fgetws","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fgetws","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"fgetws","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"fgetws","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"fgetws_unlocked","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"fgetws_unlocked","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fgetws_unlocked","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"fgetws_unlocked","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fgetws_unlocked","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"fgetws_unlocked","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"fgetws_unlocked","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"fileno","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fileno","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fileno","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fileno","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fileno","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fileno","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fileno","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fileno_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fileno_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fileno_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fileno_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fileno_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fileno_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fileno_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"flock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"flock","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"flock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"flock","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"flock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"flock","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"flock","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"flockfile","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"flockfile","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"flockfile","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"flockfile","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"flockfile","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"flockfile","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"flockfile","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"fmemopen","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fmemopen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fmemopen","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fmemopen","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fmemopen","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fmemopen","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"fmemopen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fmtmsg","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fmtmsg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fmtmsg","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fmtmsg","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fmtmsg","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fmtmsg","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fmtmsg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fnmatch","GLIBC_2.2.3",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fnmatch","GLIBC_2.2.3",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fnmatch","GLIBC_2.2.3",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fnmatch","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fnmatch","GLIBC_2.2.3",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fnmatch","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fnmatch","GLIBC_2.2.3",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fopen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fopen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fopen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fopen","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fopen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fopen","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"fopen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fopen64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fopen64","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fopen64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fopen64","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fopen64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fopen64","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"fopen64","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fork","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fork","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fork","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fork","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fork","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fork","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fork","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fpathconf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fpathconf","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fpathconf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fpathconf","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fpathconf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fpathconf","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"fpathconf","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fputc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fputc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fputc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fputc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fputc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fputc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fputc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fputc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fputc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fputc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fputc_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fputc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fputc_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fputc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fputs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fputs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fputs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fputs","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fputs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fputs","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fputs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fputs_unlocked","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fputs_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fputs_unlocked","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fputs_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fputs_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fputs_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fputs_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fputwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fputwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fputwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fputwc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fputwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fputwc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fputwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fputwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fputwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fputwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fputwc_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fputwc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fputwc_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fputwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fputws","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fputws","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fputws","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fputws","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fputws","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fputws","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fputws","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fputws_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fputws_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fputws_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fputws_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fputws_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fputws_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fputws_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fread","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fread","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fread","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fread","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fread","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fread","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"fread","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fread_unlocked","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fread_unlocked","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fread_unlocked","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fread_unlocked","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fread_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fread_unlocked","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"fread_unlocked","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"free","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"free","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"free","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"free","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"free","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"free","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"free","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"freeaddrinfo","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"freeaddrinfo","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"freeaddrinfo","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"freeaddrinfo","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"freeaddrinfo","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"freeaddrinfo","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"freeaddrinfo","GLIBC_2.2",0,LSB_Core,1,1},
#endif
	{"freelocale","GLIBC_2.3",0,LSB_Core,0,1},
#if defined __i386__
	{"freopen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"freopen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"freopen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"freopen","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"freopen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"freopen","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"freopen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"freopen64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"freopen64","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"freopen64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"freopen64","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"freopen64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"freopen64","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"freopen64","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fscanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fscanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fseek","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fseek","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fseek","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fseek","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fseek","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fseek","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fseek","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fseeko","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fseeko","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fseeko","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fseeko","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fseeko","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fseeko","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fseeko","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fseeko64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fseeko64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fseeko64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fseeko64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fseeko64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fseeko64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fseeko64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fsetpos","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fsetpos","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fsetpos","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fsetpos","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fsetpos","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fsetpos","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fsetpos","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fsetpos64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fsetpos64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fsetpos64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fsetpos64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fsetpos64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fsetpos64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fsetpos64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fstatfs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fstatfs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fstatfs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fstatfs","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fstatfs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fstatfs","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fstatfs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fstatfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fstatfs64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fstatfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fstatfs64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fstatfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fstatfs64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fstatfs64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fstatvfs","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fstatvfs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fstatvfs","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fstatvfs","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fstatvfs","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fstatvfs","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fstatvfs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fstatvfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fstatvfs64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fstatvfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fstatvfs64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fstatvfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fstatvfs64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fstatvfs64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fsync","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fsync","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fsync","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fsync","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fsync","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fsync","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fsync","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftell","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ftell","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ftell","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ftell","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ftell","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ftell","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"ftell","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ftello","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ftello","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ftello","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ftello","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ftello","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ftello","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"ftello","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ftello64","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"ftello64","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ftello64","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"ftello64","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ftello64","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"ftello64","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"ftello64","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ftime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ftime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ftime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ftime","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ftime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ftime","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ftime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftok","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ftok","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ftok","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ftok","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ftok","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ftok","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ftok","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftruncate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ftruncate","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ftruncate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ftruncate","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ftruncate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ftruncate","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ftruncate","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftruncate64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ftruncate64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ftruncate64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ftruncate64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ftruncate64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ftruncate64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ftruncate64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftrylockfile","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ftrylockfile","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ftrylockfile","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ftrylockfile","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ftrylockfile","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ftrylockfile","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ftrylockfile","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftw","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ftw","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ftw","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ftw","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ftw","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ftw","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ftw","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ftw64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ftw64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ftw64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ftw64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ftw64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ftw64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ftw64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"funlockfile","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"funlockfile","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"funlockfile","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"funlockfile","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"funlockfile","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"funlockfile","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"funlockfile","GLIBC_2.2",0,LSB_Core,1,1},
#endif
	{"futimesat","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"fwide","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fwide","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fwide","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fwide","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fwide","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fwide","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fwide","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fwprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fwprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fwrite","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fwrite","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fwrite","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fwrite","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fwrite","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fwrite","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"fwrite","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fwrite_unlocked","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fwrite_unlocked","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fwrite_unlocked","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fwrite_unlocked","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fwrite_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fwrite_unlocked","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"fwrite_unlocked","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"fwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"fwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"fwscanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"fwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"fwscanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"fwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gai_strerror","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"gai_strerror","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gai_strerror","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"gai_strerror","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gai_strerror","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"gai_strerror","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"gai_strerror","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"gcvt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"gcvt","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gcvt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"gcvt","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gcvt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"gcvt","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"gcvt","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"getaddrinfo","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getaddrinfo","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getaddrinfo","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getaddrinfo","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getaddrinfo","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getaddrinfo","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getaddrinfo","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getc_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getc_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getchar","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getchar","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getchar","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getchar","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getchar","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getchar_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getchar_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getchar_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getchar_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getchar_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getchar_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getchar_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getcontext","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getcontext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getcontext","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getcontext","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getcontext","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getcontext","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getcontext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getcwd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getcwd","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getcwd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getcwd","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getcwd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getcwd","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"getcwd","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"getdate","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getdate","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getdate","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getdate","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getdate","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getdate","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getdate","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getdate_err","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getdate_err","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getdate_err","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getdate_err","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getdate_err","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getdate_err","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getdate_err","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getdelim","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getdelim","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getdelim","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getdelim","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getdelim","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getdelim","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"getdelim","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"getdomainname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getdomainname","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getdomainname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getdomainname","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getdomainname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getdomainname","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getdomainname","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getdtablesize","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getdtablesize","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getdtablesize","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getdtablesize","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getdtablesize","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getdtablesize","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getdtablesize","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getegid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getegid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getegid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getegid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getegid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getegid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getegid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getenv","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getenv","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getenv","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"getenv","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"geteuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"geteuid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"geteuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"geteuid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"geteuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"geteuid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"geteuid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getgid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getgid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getgid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getgid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getgrent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getgrent","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getgrent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getgrent","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getgrent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getgrent","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getgrent","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getgrgid","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getgrgid","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getgrgid","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getgrgid","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getgrgid","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getgrgid","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getgrgid","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getgrgid_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getgrgid_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getgrgid_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getgrgid_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getgrgid_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getgrgid_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getgrgid_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getgrnam","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getgrnam","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getgrnam","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getgrnam","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getgrnam","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getgrnam","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getgrnam","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getgrnam_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getgrnam_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getgrnam_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getgrnam_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getgrnam_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getgrnam_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getgrnam_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getgrouplist","GLIBC_2.2.4",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getgrouplist","GLIBC_2.2.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getgrouplist","GLIBC_2.2.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getgrouplist","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getgrouplist","GLIBC_2.2.4",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getgrouplist","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getgrouplist","GLIBC_2.2.4",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getgroups","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getgroups","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getgroups","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getgroups","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getgroups","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getgroups","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getgroups","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gethostbyaddr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"gethostbyaddr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gethostbyaddr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"gethostbyaddr","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gethostbyaddr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"gethostbyaddr","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"gethostbyaddr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"gethostbyaddr_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"gethostbyaddr_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gethostbyaddr_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"gethostbyaddr_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gethostbyaddr_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"gethostbyaddr_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"gethostbyaddr_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gethostbyname","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"gethostbyname","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gethostbyname","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"gethostbyname","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gethostbyname","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"gethostbyname","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"gethostbyname","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"gethostbyname2","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"gethostbyname2","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gethostbyname2","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"gethostbyname2","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gethostbyname2","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"gethostbyname2","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"gethostbyname2","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"gethostbyname2_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"gethostbyname2_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gethostbyname2_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"gethostbyname2_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gethostbyname2_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"gethostbyname2_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"gethostbyname2_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gethostbyname_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"gethostbyname_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gethostbyname_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"gethostbyname_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gethostbyname_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"gethostbyname_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"gethostbyname_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gethostid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"gethostid","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gethostid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"gethostid","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gethostid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"gethostid","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"gethostid","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"gethostname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"gethostname","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gethostname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"gethostname","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gethostname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"gethostname","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"gethostname","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getitimer","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getitimer","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getitimer","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getitimer","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getitimer","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getitimer","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getitimer","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getline","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getline","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getline","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getline","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getline","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getline","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"getline","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"getloadavg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getloadavg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getloadavg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getloadavg","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getloadavg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getloadavg","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getloadavg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getlogin","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getlogin","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getlogin","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getlogin","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getlogin","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getlogin","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"getlogin","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"getlogin_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getlogin_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getlogin_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getlogin_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getlogin_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getlogin_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getlogin_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getnameinfo","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getnameinfo","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getnameinfo","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getnameinfo","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getnameinfo","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getnameinfo","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getnameinfo","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getopt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getopt","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getopt","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getopt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getopt_long","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getopt_long","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getopt_long","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getopt_long","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getopt_long","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getopt_long","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getopt_long","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getopt_long_only","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getopt_long_only","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getopt_long_only","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getopt_long_only","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getopt_long_only","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getopt_long_only","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getopt_long_only","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpagesize","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getpagesize","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getpagesize","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getpagesize","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getpagesize","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getpagesize","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getpagesize","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpeername","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getpeername","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getpeername","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getpeername","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getpeername","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getpeername","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getpeername","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getpgid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getpgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getpgid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getpgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getpgid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getpgid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getpgrp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getpgrp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getpgrp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getpgrp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getpid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getpid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getpid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getpid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getpid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getpid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getppid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getppid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getppid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getppid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getppid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getppid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getppid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpriority","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getpriority","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getpriority","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getpriority","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getpriority","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getpriority","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getpriority","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getprotobyname","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getprotobyname","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getprotobyname","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getprotobyname","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getprotobyname","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getprotobyname","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getprotobyname","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getprotobynumber","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getprotobynumber","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getprotobynumber","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getprotobynumber","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getprotobynumber","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getprotobynumber","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getprotobynumber","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getprotoent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getprotoent","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getprotoent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getprotoent","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getprotoent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getprotoent","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getprotoent","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getpwent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getpwent","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getpwent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getpwent","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getpwent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getpwent","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getpwent","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getpwnam","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getpwnam","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getpwnam","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getpwnam","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getpwnam","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getpwnam","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getpwnam","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getpwnam_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getpwnam_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getpwnam_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getpwnam_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getpwnam_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getpwnam_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getpwnam_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getpwuid","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getpwuid","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getpwuid","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getpwuid","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getpwuid","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getpwuid","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getpwuid","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getpwuid_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getpwuid_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getpwuid_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getpwuid_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getpwuid_r","GLIBC_2.1.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getpwuid_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getpwuid_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getrlimit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getrlimit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getrlimit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getrlimit","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getrlimit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getrlimit","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getrlimit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getrlimit64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getrlimit64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getrlimit64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getrlimit64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getrlimit64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getrlimit64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getrlimit64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getrusage","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getrusage","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getrusage","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getrusage","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getrusage","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getrusage","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getrusage","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getservbyname","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getservbyname","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getservbyname","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getservbyname","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getservbyname","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getservbyname","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getservbyname","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getservbyport","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getservbyport","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getservbyport","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getservbyport","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getservbyport","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getservbyport","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getservbyport","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getservent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getservent","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getservent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getservent","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getservent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getservent","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getservent","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getsid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getsid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getsid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getsid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getsid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getsid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getsid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getsockname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getsockname","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getsockname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getsockname","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getsockname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getsockname","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getsockname","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getsockopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getsockopt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getsockopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getsockopt","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getsockopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getsockopt","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getsockopt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getsubopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getsubopt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getsubopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getsubopt","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getsubopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getsubopt","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getsubopt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gettext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"gettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gettext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"gettext","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gettext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"gettext","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"gettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"gettimeofday","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"gettimeofday","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gettimeofday","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"gettimeofday","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gettimeofday","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"gettimeofday","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"gettimeofday","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getuid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getuid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getuid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getuid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getutent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"getutent","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getutent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"getutent","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getutent","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"getutent","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"getutent","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"getutent_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getutent_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getutent_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getutent_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getutent_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getutent_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getutent_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getutxent","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getutxent","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getutxent","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getutxent","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getutxent","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getutxent","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"getutxent","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"getutxid","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getutxid","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getutxid","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getutxid","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getutxid","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getutxid","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"getutxid","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"getutxline","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getutxline","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getutxline","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getutxline","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getutxline","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getutxline","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"getutxline","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"getw","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getw","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getw","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getw","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getw","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getw","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getw","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getwc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getwc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getwc_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getwc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getwc_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getwchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getwchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getwchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getwchar","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getwchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getwchar","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getwchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getwchar_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getwchar_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getwchar_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getwchar_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getwchar_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getwchar_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"getwchar_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"getwd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"getwd","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"getwd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"getwd","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"getwd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"getwd","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"getwd","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"glob","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"glob","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"glob","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"glob","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"glob","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"glob","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"glob","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"glob64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"glob64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"glob64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"glob64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"glob64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"glob64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"glob64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"globfree","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"globfree","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"globfree","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"globfree","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"globfree","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"globfree","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"globfree","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"globfree64","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"globfree64","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"globfree64","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"globfree64","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"globfree64","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"globfree64","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"globfree64","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"gmtime","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"gmtime","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gmtime","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"gmtime","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gmtime","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"gmtime","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"gmtime","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"gmtime_r","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"gmtime_r","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"gmtime_r","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"gmtime_r","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"gmtime_r","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"gmtime_r","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"gmtime_r","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"grantpt","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"grantpt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"grantpt","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"grantpt","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"grantpt","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"grantpt","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"grantpt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"hcreate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"hcreate","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"hcreate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"hcreate","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"hcreate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"hcreate","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"hcreate","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"hdestroy","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"hdestroy","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"hdestroy","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"hdestroy","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"hdestroy","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"hdestroy","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"hdestroy","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"hsearch","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"hsearch","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"hsearch","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"hsearch","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"hsearch","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"hsearch","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"hsearch","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"htonl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"htonl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"htonl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"htonl","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"htonl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"htonl","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"htonl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"htons","GLIBC_2.0",0,LSB_Core,2,1},
#endif
#if defined __ia64__
	{"htons","GLIBC_2.2",0,LSB_Core,2,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"htons","GLIBC_2.0",0,LSB_Core,2,1},
#endif
#if defined __powerpc64__
	{"htons","GLIBC_2.3",0,LSB_Core,2,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"htons","GLIBC_2.0",0,LSB_Core,2,1},
#endif
#if defined __x86_64__
	{"htons","GLIBC_2.2.5",0,LSB_Core,2,1},
#endif
#if defined __s390x__
	{"htons","GLIBC_2.2",0,LSB_Core,2,1},
#endif
#if defined __i386__
	{"iconv","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iconv","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iconv","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iconv","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iconv","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iconv","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"iconv","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"iconv_close","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iconv_close","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iconv_close","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iconv_close","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iconv_close","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iconv_close","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iconv_close","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iconv_open","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iconv_open","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iconv_open","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iconv_open","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iconv_open","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iconv_open","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"iconv_open","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"if_freenameindex","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"if_freenameindex","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"if_freenameindex","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"if_freenameindex","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"if_freenameindex","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"if_freenameindex","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"if_freenameindex","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"if_indextoname","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"if_indextoname","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"if_indextoname","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"if_indextoname","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"if_indextoname","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"if_indextoname","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"if_indextoname","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"if_nameindex","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"if_nameindex","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"if_nameindex","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"if_nameindex","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"if_nameindex","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"if_nameindex","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"if_nameindex","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"if_nametoindex","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"if_nametoindex","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"if_nametoindex","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"if_nametoindex","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"if_nametoindex","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"if_nametoindex","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"if_nametoindex","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"imaxabs","GLIBC_2.1.1",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"imaxabs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"imaxabs","GLIBC_2.1.1",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"imaxabs","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"imaxabs","GLIBC_2.1.1",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"imaxabs","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"imaxabs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"imaxdiv","GLIBC_2.1.1",0,LSB_Core,16,1},
#endif
#if defined __ia64__
	{"imaxdiv","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"imaxdiv","GLIBC_2.1.1",0,LSB_Core,16,1},
#endif
#if defined __powerpc64__
	{"imaxdiv","GLIBC_2.3",0,LSB_Core,16,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"imaxdiv","GLIBC_2.1.1",0,LSB_Core,16,1},
#endif
#if defined __x86_64__
	{"imaxdiv","GLIBC_2.2.5",0,LSB_Core,16,1},
#endif
#if defined __s390x__
	{"imaxdiv","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"in6addr_any","GLIBC_2.1",0,LSB_Core,0,0},
#endif
#if defined __ia64__
	{"in6addr_any","GLIBC_2.2",0,LSB_Core,0,0},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"in6addr_any","GLIBC_2.1",0,LSB_Core,0,0},
#endif
#if defined __powerpc64__
	{"in6addr_any","GLIBC_2.3",0,LSB_Core,0,0},
#endif
#if defined __s390__ && !defined __s390x__
	{"in6addr_any","GLIBC_2.1",0,LSB_Core,0,0},
#endif
#if defined __x86_64__
	{"in6addr_any","GLIBC_2.2.5",0,LSB_Core,0,0},
#endif
#if defined __s390x__
	{"in6addr_any","GLIBC_2.2",0,LSB_Core,0,0},
#endif
#if defined __i386__
	{"in6addr_loopback","GLIBC_2.1",0,LSB_Core,0,0},
#endif
#if defined __ia64__
	{"in6addr_loopback","GLIBC_2.2",0,LSB_Core,0,0},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"in6addr_loopback","GLIBC_2.1",0,LSB_Core,0,0},
#endif
#if defined __powerpc64__
	{"in6addr_loopback","GLIBC_2.3",0,LSB_Core,0,0},
#endif
#if defined __s390__ && !defined __s390x__
	{"in6addr_loopback","GLIBC_2.1",0,LSB_Core,0,0},
#endif
#if defined __x86_64__
	{"in6addr_loopback","GLIBC_2.2.5",0,LSB_Core,0,0},
#endif
#if defined __s390x__
	{"in6addr_loopback","GLIBC_2.2",0,LSB_Core,0,0},
#endif
#if defined __i386__
	{"index","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"index","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"index","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"index","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"index","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"index","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"index","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"inet_addr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"inet_addr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"inet_addr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"inet_addr","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"inet_addr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"inet_addr","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"inet_addr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"inet_aton","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"inet_aton","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"inet_aton","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"inet_aton","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"inet_aton","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"inet_aton","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"inet_aton","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"inet_ntoa","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"inet_ntoa","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"inet_ntoa","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"inet_ntoa","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"inet_ntoa","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"inet_ntoa","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"inet_ntoa","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"inet_ntop","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"inet_ntop","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"inet_ntop","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"inet_ntop","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"inet_ntop","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"inet_ntop","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"inet_ntop","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"inet_pton","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"inet_pton","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"inet_pton","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"inet_pton","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"inet_pton","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"inet_pton","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"inet_pton","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"initgroups","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"initgroups","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"initgroups","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"initgroups","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"initgroups","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"initgroups","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"initgroups","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"initstate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"initstate","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"initstate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"initstate","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"initstate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"initstate","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"initstate","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"initstate_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"initstate_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"initstate_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"initstate_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"initstate_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"initstate_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"initstate_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"inotify_add_watch","GLIBC_2.4",0,LSB_Core,0,1},
	{"inotify_init","GLIBC_2.4",0,LSB_Core,0,1},
	{"inotify_rm_watch","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"insque","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"insque","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"insque","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"insque","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"insque","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"insque","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"insque","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"ioctl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ioctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ioctl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ioctl","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ioctl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ioctl","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ioctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isalnum","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"isalnum","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"isalnum","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"isalnum","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"isalnum","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"isalnum","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"isalnum","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isalpha","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"isalpha","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"isalpha","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"isalpha","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"isalpha","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"isalpha","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"isalpha","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isascii","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"isascii","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"isascii","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"isascii","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"isascii","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"isascii","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"isascii","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isatty","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"isatty","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"isatty","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"isatty","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"isatty","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"isatty","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"isatty","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isblank","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"isblank","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"isblank","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"isblank","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"isblank","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"isblank","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"isblank","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iscntrl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iscntrl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iscntrl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iscntrl","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iscntrl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iscntrl","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iscntrl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"isdigit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"isdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"isdigit","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"isdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"isdigit","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"isdigit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isgraph","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"isgraph","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"isgraph","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"isgraph","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"isgraph","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"isgraph","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"isgraph","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"islower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"islower","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"islower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"islower","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"islower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"islower","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"islower","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isprint","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"isprint","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"isprint","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"isprint","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"isprint","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"isprint","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"isprint","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ispunct","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ispunct","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ispunct","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ispunct","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ispunct","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ispunct","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ispunct","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isspace","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"isspace","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"isspace","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"isspace","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"isspace","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"isspace","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"isspace","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"isupper","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"isupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"isupper","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"isupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"isupper","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"isupper","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswalnum","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswalnum","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswalnum","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswalnum","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswalnum","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswalnum","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswalnum","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswalpha","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswalpha","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswalpha","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswalpha","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswalpha","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswalpha","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswalpha","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswblank","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswblank","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswblank","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswblank","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswblank","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswblank","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswblank","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswcntrl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswcntrl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswcntrl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswcntrl","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswcntrl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswcntrl","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswcntrl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswctype","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswctype","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswctype","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswctype","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswctype","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswctype","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswctype","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswdigit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswdigit","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswdigit","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswdigit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswgraph","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswgraph","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswgraph","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswgraph","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswgraph","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswgraph","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswgraph","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswlower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswlower","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswlower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswlower","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswlower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswlower","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswlower","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswprint","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswprint","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswprint","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswprint","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswprint","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswprint","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswprint","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswpunct","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswpunct","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswpunct","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswpunct","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswpunct","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswpunct","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswpunct","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswspace","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswspace","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswspace","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswspace","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswspace","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswspace","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswspace","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswupper","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswupper","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswupper","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswupper","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"iswxdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"iswxdigit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"iswxdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"iswxdigit","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"iswxdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"iswxdigit","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"iswxdigit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"isxdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"isxdigit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"isxdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"isxdigit","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"isxdigit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"isxdigit","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"isxdigit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"jrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"jrand48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"jrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"jrand48","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"jrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"jrand48","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"jrand48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"jrand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"jrand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"jrand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"jrand48_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"jrand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"jrand48_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"jrand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"key_decryptsession","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"key_decryptsession","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"key_decryptsession","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"key_decryptsession","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"key_decryptsession","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"key_decryptsession","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"key_decryptsession","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"kill","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"kill","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"kill","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"kill","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"kill","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"kill","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"kill","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"killpg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"killpg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"killpg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"killpg","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"killpg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"killpg","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"killpg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"l64a","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"l64a","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"l64a","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"l64a","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"l64a","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"l64a","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"l64a","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"labs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"labs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"labs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"labs","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"labs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"labs","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"labs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"lchown","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"lchown","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"lchown","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"lchown","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"lchown","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"lchown","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"lchown","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lcong48","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"lcong48","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"lcong48","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"lcong48","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"lcong48","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"lcong48","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"lcong48","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"lcong48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"lcong48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"lcong48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"lcong48_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"lcong48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"lcong48_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"lcong48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ldiv","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"ldiv","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ldiv","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"ldiv","GLIBC_2.3",0,LSB_Core,16,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ldiv","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"ldiv","GLIBC_2.2.5",0,LSB_Core,16,1},
#endif
#if defined __s390x__
	{"ldiv","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"lfind","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"lfind","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"lfind","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"lfind","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"lfind","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"lfind","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"lfind","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"link","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"link","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"link","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"link","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"link","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"link","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"link","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"linkat","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"listen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"listen","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"listen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"listen","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"listen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"listen","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"listen","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"llabs","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"llabs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"llabs","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"llabs","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"llabs","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"llabs","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"llabs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"lldiv","GLIBC_2.0",0,LSB_Core,16,1},
#endif
#if defined __ia64__
	{"lldiv","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"lldiv","GLIBC_2.0",0,LSB_Core,16,1},
#endif
#if defined __powerpc64__
	{"lldiv","GLIBC_2.3",0,LSB_Core,16,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"lldiv","GLIBC_2.0",0,LSB_Core,16,1},
#endif
#if defined __x86_64__
	{"lldiv","GLIBC_2.2.5",0,LSB_Core,16,1},
#endif
#if defined __s390x__
	{"lldiv","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"localeconv","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"localeconv","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"localeconv","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"localeconv","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"localeconv","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"localeconv","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"localeconv","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"localtime","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"localtime","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"localtime","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"localtime","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"localtime","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"localtime","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"localtime","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"localtime_r","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"localtime_r","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"localtime_r","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"localtime_r","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"localtime_r","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"localtime_r","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"localtime_r","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"lockf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"lockf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"lockf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"lockf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"lockf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"lockf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"lockf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lockf64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"lockf64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"lockf64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"lockf64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"lockf64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"lockf64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"lockf64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"longjmp","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"longjmp","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"longjmp","GLIBC_2.3.4",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"longjmp","GLIBC_2.3.4",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"longjmp","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"longjmp","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"longjmp","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"lrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"lrand48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"lrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"lrand48","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"lrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"lrand48","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"lrand48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"lrand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"lrand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"lrand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"lrand48_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"lrand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"lrand48_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"lrand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lsearch","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"lsearch","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"lsearch","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"lsearch","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"lsearch","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"lsearch","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"lsearch","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"lseek","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"lseek","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"lseek","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"lseek","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"lseek","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"lseek","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"lseek","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"makecontext","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"makecontext","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"makecontext","GLIBC_2.3.4",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"makecontext","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"makecontext","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"makecontext","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"makecontext","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"malloc","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"malloc","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"malloc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"malloc","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"malloc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"malloc","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"malloc","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mblen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mblen","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mblen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mblen","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mblen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mblen","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"mblen","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mbrlen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mbrlen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mbrlen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mbrlen","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mbrlen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mbrlen","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"mbrlen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mbrtowc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mbrtowc","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mbrtowc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mbrtowc","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mbrtowc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mbrtowc","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"mbrtowc","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mbsinit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mbsinit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mbsinit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mbsinit","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mbsinit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mbsinit","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"mbsinit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mbsnrtowcs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mbsnrtowcs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mbsnrtowcs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mbsnrtowcs","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mbsnrtowcs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mbsnrtowcs","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"mbsnrtowcs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mbsrtowcs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mbsrtowcs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mbsrtowcs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mbsrtowcs","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mbsrtowcs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mbsrtowcs","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"mbsrtowcs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mbstowcs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mbstowcs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mbstowcs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mbstowcs","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mbstowcs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mbstowcs","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"mbstowcs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mbtowc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mbtowc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mbtowc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mbtowc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mbtowc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mbtowc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"mbtowc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"memccpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"memccpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"memccpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"memccpy","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"memccpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"memccpy","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"memccpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"memchr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"memchr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"memchr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"memchr","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"memchr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"memchr","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"memchr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"memcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"memcmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"memcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"memcmp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"memcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"memcmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"memcmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"memcpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"memcpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"memcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"memcpy","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"memcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"memcpy","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"memcpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"memmem","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"memmem","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"memmem","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"memmem","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"memmem","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"memmem","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"memmem","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"memmove","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"memmove","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"memmove","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"memmove","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"memmove","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"memmove","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"memmove","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"memrchr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"memrchr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"memrchr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"memrchr","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"memrchr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"memrchr","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"memrchr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"memset","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"memset","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"memset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"memset","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"memset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"memset","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"memset","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mkdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mkdir","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mkdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mkdir","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mkdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mkdir","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"mkdir","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"mkdirat","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"mkdtemp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mkdtemp","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mkdtemp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mkdtemp","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mkdtemp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mkdtemp","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"mkdtemp","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mkfifo","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mkfifo","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mkfifo","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mkfifo","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mkfifo","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mkfifo","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"mkfifo","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"mkfifoat","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"mkstemp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mkstemp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mkstemp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mkstemp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mkstemp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mkstemp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"mkstemp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mkstemp64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mkstemp64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mkstemp64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mkstemp64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mkstemp64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mkstemp64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"mkstemp64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mktemp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mktemp","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mktemp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mktemp","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mktemp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mktemp","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"mktemp","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mktime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mktime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mktime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mktime","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mktime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mktime","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"mktime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mlock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mlock","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mlock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mlock","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mlock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mlock","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"mlock","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mlockall","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mlockall","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mlockall","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mlockall","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mlockall","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mlockall","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"mlockall","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mmap","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"mmap","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mmap","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mmap","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mmap","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mmap","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"mmap","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mmap64","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"mmap64","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mmap64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mmap64","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mmap64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mmap64","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"mmap64","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mprotect","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mprotect","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mprotect","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mprotect","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mprotect","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mprotect","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"mprotect","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mrand48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mrand48","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mrand48","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"mrand48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"mrand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"mrand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mrand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mrand48_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mrand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mrand48_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"mrand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"mremap","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"mremap","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"mremap","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"mremap","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"mremap","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"mremap","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"mremap","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"msgctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"msgctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"msgctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"msgctl","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"msgctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"msgctl","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"msgctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"msgget","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"msgget","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"msgget","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"msgget","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"msgget","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"msgget","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"msgget","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"msgrcv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"msgrcv","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"msgrcv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"msgrcv","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"msgrcv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"msgrcv","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"msgrcv","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"msgsnd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"msgsnd","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"msgsnd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"msgsnd","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"msgsnd","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"msgsnd","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"msgsnd","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"msync","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"msync","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"msync","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"msync","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"msync","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"msync","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"msync","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"munlock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"munlock","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"munlock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"munlock","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"munlock","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"munlock","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"munlock","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"munlockall","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"munlockall","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"munlockall","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"munlockall","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"munlockall","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"munlockall","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"munlockall","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"munmap","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"munmap","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"munmap","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"munmap","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"munmap","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"munmap","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"munmap","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"nanosleep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"nanosleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"nanosleep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"nanosleep","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"nanosleep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"nanosleep","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"nanosleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"newlocale","GLIBC_2.3",0,LSB_Core,0,1},
#if defined __i386__
	{"nftw","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"nftw","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"nftw","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"nftw","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"nftw","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"nftw","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"nftw","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"nftw64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"nftw64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"nftw64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"nftw64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"nftw64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"nftw64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"nftw64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ngettext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ngettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ngettext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ngettext","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ngettext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ngettext","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"ngettext","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"nice","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"nice","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"nice","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"nice","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"nice","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"nice","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"nice","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"nl_langinfo","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"nl_langinfo","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"nl_langinfo","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"nl_langinfo","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"nl_langinfo","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"nl_langinfo","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"nl_langinfo","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"nrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"nrand48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"nrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"nrand48","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"nrand48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"nrand48","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"nrand48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"nrand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"nrand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"nrand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"nrand48_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"nrand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"nrand48_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"nrand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ntohl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ntohl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ntohl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ntohl","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ntohl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ntohl","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ntohl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ntohs","GLIBC_2.0",0,LSB_Core,2,1},
#endif
#if defined __ia64__
	{"ntohs","GLIBC_2.2",0,LSB_Core,2,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ntohs","GLIBC_2.0",0,LSB_Core,2,1},
#endif
#if defined __powerpc64__
	{"ntohs","GLIBC_2.3",0,LSB_Core,2,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ntohs","GLIBC_2.0",0,LSB_Core,2,1},
#endif
#if defined __x86_64__
	{"ntohs","GLIBC_2.2.5",0,LSB_Core,2,1},
#endif
#if defined __s390x__
	{"ntohs","GLIBC_2.2",0,LSB_Core,2,1},
#endif
#if defined __i386__
	{"open","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"open","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"open","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"open","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"open","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"open","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"open","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"open_memstream","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"open_memstream","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"open_memstream","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"open_memstream","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"open_memstream","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"open_memstream","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"open_memstream","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"open_wmemstream","GLIBC_2.4",0,LSB_Core,0,1},
	{"openat","GLIBC_2.4",0,LSB_Core,0,1},
	{"openat64","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"opendir","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"opendir","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"opendir","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"opendir","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"opendir","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"opendir","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"opendir","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"openlog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"openlog","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"openlog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"openlog","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"openlog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"openlog","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"openlog","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"optarg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"optarg","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"optarg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"optarg","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"optarg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"optarg","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"optarg","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"opterr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"opterr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"opterr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"opterr","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"opterr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"opterr","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"opterr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"optind","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"optind","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"optind","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"optind","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"optind","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"optind","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"optind","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"optopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"optopt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"optopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"optopt","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"optopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"optopt","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"optopt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"pathconf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"pathconf","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"pathconf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"pathconf","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"pathconf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"pathconf","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"pathconf","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"pause","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"pause","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"pause","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"pause","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"pause","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"pause","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"pause","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"pclose","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"pclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"pclose","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"pclose","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"pclose","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"pclose","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"pclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"perror","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"perror","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"perror","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"perror","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"perror","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"perror","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"perror","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"pipe","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"pipe","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"pipe","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"pipe","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"pipe","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"pipe","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"pipe","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"pmap_getport","GLIBC_2.0",0,LSB_Core,2,1},
#endif
#if defined __ia64__
	{"pmap_getport","GLIBC_2.2",0,LSB_Core,2,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"pmap_getport","GLIBC_2.0",0,LSB_Core,2,1},
#endif
#if defined __powerpc64__
	{"pmap_getport","GLIBC_2.3",0,LSB_Core,2,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"pmap_getport","GLIBC_2.0",0,LSB_Core,2,1},
#endif
#if defined __x86_64__
	{"pmap_getport","GLIBC_2.2.5",0,LSB_Core,2,1},
#endif
#if defined __s390x__
	{"pmap_getport","GLIBC_2.2",0,LSB_Core,2,1},
#endif
#if defined __i386__
	{"pmap_set","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"pmap_set","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"pmap_set","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"pmap_set","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"pmap_set","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"pmap_set","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"pmap_set","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"pmap_unset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"pmap_unset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"pmap_unset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"pmap_unset","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"pmap_unset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"pmap_unset","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"pmap_unset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"poll","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"poll","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"poll","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"poll","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"poll","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"poll","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"poll","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"popen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"popen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"popen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"popen","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"popen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"popen","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"popen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"posix_fadvise","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_fadvise","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_fadvise","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_fadvise","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_fadvise","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_fadvise","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_fadvise","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_fadvise64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_fadvise64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_fadvise64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_fadvise64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_fadvise64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_fadvise64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_fadvise64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_fallocate","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_fallocate","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_fallocate","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_fallocate","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_fallocate","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_fallocate","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_fallocate","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_fallocate64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_fallocate64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_fallocate64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_fallocate64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_fallocate64","GLIBC_2.3.3",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_fallocate64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_fallocate64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_madvise","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_madvise","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_madvise","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_madvise","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_madvise","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_madvise","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_madvise","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_memalign","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_memalign","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_memalign","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_memalign","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_memalign","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_memalign","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_memalign","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_openpt","GLIBC_2.2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_openpt","GLIBC_2.2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_openpt","GLIBC_2.2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_openpt","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_openpt","GLIBC_2.2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_openpt","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_openpt","GLIBC_2.2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawn","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawn","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawn","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawn","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawn","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawn","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawn","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawn_file_actions_addclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawn_file_actions_addclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawn_file_actions_addclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawn_file_actions_addclose","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawn_file_actions_addclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawn_file_actions_addclose","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawn_file_actions_addclose","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawn_file_actions_adddup2","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawn_file_actions_adddup2","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawn_file_actions_adddup2","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawn_file_actions_adddup2","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawn_file_actions_adddup2","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawn_file_actions_adddup2","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawn_file_actions_adddup2","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawn_file_actions_addopen","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawn_file_actions_addopen","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawn_file_actions_addopen","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawn_file_actions_addopen","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawn_file_actions_addopen","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawn_file_actions_addopen","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawn_file_actions_addopen","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawn_file_actions_destroy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawn_file_actions_destroy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawn_file_actions_destroy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawn_file_actions_destroy","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawn_file_actions_destroy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawn_file_actions_destroy","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawn_file_actions_destroy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawn_file_actions_init","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawn_file_actions_init","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawn_file_actions_init","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawn_file_actions_init","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawn_file_actions_init","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawn_file_actions_init","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawn_file_actions_init","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_destroy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_destroy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_destroy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_destroy","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_destroy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_destroy","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_destroy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_getflags","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_getflags","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_getflags","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_getflags","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_getflags","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_getflags","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_getflags","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_getpgroup","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_getpgroup","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_getpgroup","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_getpgroup","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_getpgroup","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_getpgroup","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_getpgroup","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_getschedparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_getschedparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_getschedparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_getschedparam","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_getschedparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_getschedparam","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_getschedparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_getschedpolicy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_getschedpolicy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_getschedpolicy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_getschedpolicy","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_getschedpolicy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_getschedpolicy","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_getschedpolicy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_getsigdefault","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_getsigdefault","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_getsigdefault","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_getsigdefault","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_getsigdefault","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_getsigdefault","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_getsigdefault","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_getsigmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_getsigmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_getsigmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_getsigmask","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_getsigmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_getsigmask","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_getsigmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_init","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_init","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_init","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_init","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_init","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_init","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_init","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_setflags","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_setflags","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_setflags","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_setflags","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_setflags","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_setflags","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_setflags","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_setpgroup","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_setpgroup","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_setpgroup","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_setpgroup","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_setpgroup","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_setpgroup","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_setpgroup","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_setschedparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_setschedparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_setschedparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_setschedparam","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_setschedparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_setschedparam","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_setschedparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_setschedpolicy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_setschedpolicy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_setschedpolicy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_setschedpolicy","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_setschedpolicy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_setschedpolicy","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_setschedpolicy","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_setsigdefault","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_setsigdefault","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_setsigdefault","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_setsigdefault","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_setsigdefault","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_setsigdefault","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_setsigdefault","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnattr_setsigmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnattr_setsigmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnattr_setsigmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnattr_setsigmask","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnattr_setsigmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnattr_setsigmask","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnattr_setsigmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"posix_spawnp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"posix_spawnp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"posix_spawnp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"posix_spawnp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"posix_spawnp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"posix_spawnp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"posix_spawnp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"printf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"printf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"printf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"printf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"printf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"printf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"printf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"pselect","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"pselect","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"pselect","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"pselect","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"pselect","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"pselect","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"pselect","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"psignal","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"psignal","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"psignal","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"psignal","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"psignal","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"psignal","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"psignal","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"ptsname","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ptsname","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ptsname","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ptsname","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ptsname","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ptsname","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"ptsname","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"putc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"putc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"putc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"putc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"putc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"putc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"putc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"putc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"putc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"putc_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"putc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"putc_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"putc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putchar","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"putchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"putchar","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"putchar","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"putchar","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"putchar","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"putchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putchar_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"putchar_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"putchar_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"putchar_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"putchar_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"putchar_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"putchar_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"putenv","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"putenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"putenv","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"putenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"putenv","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"putenv","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"puts","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"puts","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"puts","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"puts","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"puts","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"puts","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"puts","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"pututxline","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"pututxline","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"pututxline","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"pututxline","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"pututxline","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"pututxline","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"pututxline","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"putw","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"putw","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"putw","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"putw","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"putw","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"putw","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"putw","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"putwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"putwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"putwc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"putwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"putwc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"putwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"putwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"putwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"putwc_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"putwc_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"putwc_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"putwc_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putwchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"putwchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"putwchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"putwchar","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"putwchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"putwchar","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"putwchar","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"putwchar_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"putwchar_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"putwchar_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"putwchar_unlocked","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"putwchar_unlocked","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"putwchar_unlocked","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"putwchar_unlocked","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"qsort","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"qsort","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"qsort","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"qsort","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"qsort","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"qsort","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"qsort","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"raise","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"raise","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"raise","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"raise","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"raise","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"raise","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"raise","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"rand","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"rand","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"rand","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"rand","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"rand","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"rand","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"rand","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"rand_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"rand_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"rand_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"rand_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"rand_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"rand_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"rand_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"random","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"random","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"random","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"random","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"random","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"random","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"random","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"random_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"random_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"random_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"random_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"random_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"random_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"random_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"read","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"read","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"read","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"read","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"read","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"read","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"read","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"readdir","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"readdir","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"readdir","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"readdir","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"readdir","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"readdir","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"readdir","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"readdir64","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"readdir64","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"readdir64","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"readdir64","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"readdir64","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"readdir64","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"readdir64","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"readdir64_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"readdir64_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"readdir64_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"readdir64_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"readdir64_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"readdir64_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"readdir64_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"readdir_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"readdir_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"readdir_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"readdir_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"readdir_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"readdir_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"readdir_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"readlink","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"readlink","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"readlink","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"readlink","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"readlink","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"readlink","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"readlink","GLIBC_2.2",0,LSB_Core,8,1},
#endif
	{"readlinkat","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"readv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"readv","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"readv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"readv","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"readv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"readv","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"readv","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"realloc","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"realloc","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"realloc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"realloc","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"realloc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"realloc","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"realloc","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"realpath","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"realpath","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"realpath","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"realpath","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"realpath","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"realpath","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"realpath","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"recv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"recv","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"recv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"recv","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"recv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"recv","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"recv","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"recvfrom","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"recvfrom","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"recvfrom","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"recvfrom","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"recvfrom","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"recvfrom","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"recvfrom","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"recvmsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"recvmsg","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"recvmsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"recvmsg","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"recvmsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"recvmsg","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"recvmsg","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"regcomp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"regcomp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"regcomp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"regcomp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"regcomp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"regcomp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"regcomp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"regerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"regerror","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"regerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"regerror","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"regerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"regerror","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"regerror","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"regexec","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"regexec","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"regexec","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"regexec","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"regexec","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"regexec","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"regexec","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"regfree","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"regfree","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"regfree","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"regfree","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"regfree","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"regfree","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"regfree","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"remove","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"remove","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"remove","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"remove","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"remove","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"remove","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"remove","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"remque","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"remque","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"remque","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"remque","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"remque","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"remque","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"remque","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"rename","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"rename","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"rename","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"rename","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"rename","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"rename","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"rename","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"renameat","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"rewind","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"rewind","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"rewind","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"rewind","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"rewind","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"rewind","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"rewind","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"rewinddir","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"rewinddir","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"rewinddir","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"rewinddir","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"rewinddir","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"rewinddir","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"rewinddir","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"rindex","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"rindex","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"rindex","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"rindex","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"rindex","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"rindex","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"rindex","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"rmdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"rmdir","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"rmdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"rmdir","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"rmdir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"rmdir","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"rmdir","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sbrk","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"sbrk","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sbrk","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sbrk","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sbrk","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sbrk","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"sbrk","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"scanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"scanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"scanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"scanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"scanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"scanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"scanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_get_priority_max","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sched_get_priority_max","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sched_get_priority_max","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sched_get_priority_max","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sched_get_priority_max","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sched_get_priority_max","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sched_get_priority_max","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_get_priority_min","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sched_get_priority_min","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sched_get_priority_min","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sched_get_priority_min","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sched_get_priority_min","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sched_get_priority_min","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sched_get_priority_min","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"sched_getaffinity","GLIBC_2.3.4",0,LSB_Core,0,1},
#if defined __i386__
	{"sched_getparam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sched_getparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sched_getparam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sched_getparam","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sched_getparam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sched_getparam","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sched_getparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_getscheduler","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sched_getscheduler","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sched_getscheduler","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sched_getscheduler","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sched_getscheduler","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sched_getscheduler","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sched_getscheduler","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_rr_get_interval","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sched_rr_get_interval","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sched_rr_get_interval","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sched_rr_get_interval","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sched_rr_get_interval","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sched_rr_get_interval","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sched_rr_get_interval","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"sched_setaffinity","GLIBC_2.3.4",0,LSB_Core,0,1},
#if defined __i386__
	{"sched_setparam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sched_setparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sched_setparam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sched_setparam","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sched_setparam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sched_setparam","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sched_setparam","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_setscheduler","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sched_setscheduler","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sched_setscheduler","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sched_setscheduler","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sched_setscheduler","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sched_setscheduler","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sched_setscheduler","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sched_yield","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sched_yield","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sched_yield","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sched_yield","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sched_yield","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sched_yield","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sched_yield","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"seed48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"seed48","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"seed48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"seed48","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"seed48","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"seed48","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"seed48","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"seed48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"seed48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"seed48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"seed48_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"seed48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"seed48_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"seed48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"seekdir","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"seekdir","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"seekdir","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"seekdir","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"seekdir","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"seekdir","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"seekdir","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"select","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"select","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"select","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"select","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"select","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"select","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"select","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"semctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"semctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"semctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"semctl","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"semctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"semctl","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"semctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"semget","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"semget","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"semget","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"semget","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"semget","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"semget","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"semget","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"semop","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"semop","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"semop","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"semop","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"semop","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"semop","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"semop","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"send","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"send","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"send","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"send","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"send","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"send","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"send","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"sendmsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sendmsg","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sendmsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sendmsg","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sendmsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sendmsg","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"sendmsg","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"sendto","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sendto","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sendto","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sendto","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sendto","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sendto","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"sendto","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"setbuf","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"setbuf","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setbuf","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"setbuf","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setbuf","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"setbuf","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"setbuf","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setbuffer","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"setbuffer","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setbuffer","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"setbuffer","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setbuffer","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"setbuffer","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"setbuffer","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setcontext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setcontext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setcontext","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setcontext","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setcontext","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setcontext","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setcontext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setegid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setegid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setegid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setegid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setegid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setegid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setegid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setenv","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setenv","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setenv","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setenv","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"seteuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"seteuid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"seteuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"seteuid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"seteuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"seteuid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"seteuid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setgid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setgid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setgid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setgid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setgrent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"setgrent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setgrent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"setgrent","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setgrent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"setgrent","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"setgrent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setgroups","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setgroups","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setgroups","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setgroups","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setgroups","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setgroups","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setgroups","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sethostname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sethostname","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sethostname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sethostname","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sethostname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sethostname","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sethostname","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setitimer","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setitimer","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setitimer","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setitimer","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setitimer","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setitimer","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setitimer","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setlocale","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setlocale","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setlocale","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setlocale","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setlocale","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setlocale","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"setlocale","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"setlogmask","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setlogmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setlogmask","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setlogmask","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setlogmask","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setlogmask","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setlogmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setpgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setpgid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setpgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setpgid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setpgid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setpgid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setpgid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setpgrp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setpgrp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setpgrp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setpgrp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setpriority","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setpriority","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setpriority","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setpriority","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setpriority","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setpriority","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setpriority","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setprotoent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"setprotoent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setprotoent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"setprotoent","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setprotoent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"setprotoent","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"setprotoent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setpwent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"setpwent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setpwent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"setpwent","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setpwent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"setpwent","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"setpwent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setregid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setregid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setregid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setregid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setregid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setregid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setregid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setreuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setreuid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setreuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setreuid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setreuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setreuid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setreuid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setrlimit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setrlimit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setrlimit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setrlimit","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setrlimit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setrlimit","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setrlimit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setrlimit64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setrlimit64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setrlimit64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setrlimit64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setrlimit64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setrlimit64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setrlimit64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setservent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"setservent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setservent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"setservent","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setservent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"setservent","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"setservent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setsid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setsid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setsid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setsid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setsid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setsid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setsid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setsockopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setsockopt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setsockopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setsockopt","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setsockopt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setsockopt","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setsockopt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setstate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setstate","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setstate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setstate","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setstate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setstate","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"setstate","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"setstate_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setstate_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setstate_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setstate_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setstate_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setstate_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setstate_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setuid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setuid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setuid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setuid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setuid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"setutent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"setutent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setutent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"setutent","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setutent","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"setutent","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"setutent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setutxent","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"setutxent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setutxent","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"setutxent","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setutxent","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"setutxent","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"setutxent","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"setvbuf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"setvbuf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"setvbuf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"setvbuf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"setvbuf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"setvbuf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"setvbuf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"shmat","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"shmat","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"shmat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"shmat","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"shmat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"shmat","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"shmat","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"shmctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"shmctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"shmctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"shmctl","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"shmctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"shmctl","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"shmctl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"shmdt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"shmdt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"shmdt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"shmdt","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"shmdt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"shmdt","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"shmdt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"shmget","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"shmget","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"shmget","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"shmget","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"shmget","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"shmget","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"shmget","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"shutdown","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"shutdown","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"shutdown","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"shutdown","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"shutdown","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"shutdown","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"shutdown","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigaction","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigaction","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigaction","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigaction","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigaction","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigaction","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigaction","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigaddset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigaddset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigaddset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigaddset","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigaddset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigaddset","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigaddset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigaltstack","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigaltstack","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigaltstack","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigaltstack","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigaltstack","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigaltstack","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigaltstack","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigandset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigandset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigandset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigandset","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigandset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigandset","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigandset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigdelset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigdelset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigdelset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigdelset","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigdelset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigdelset","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigdelset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigemptyset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigemptyset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigemptyset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigemptyset","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigemptyset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigemptyset","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigemptyset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigfillset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigfillset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigfillset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigfillset","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigfillset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigfillset","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigfillset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sighold","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sighold","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sighold","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sighold","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sighold","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sighold","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sighold","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigignore","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigignore","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigignore","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigignore","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigignore","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigignore","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigignore","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"siginterrupt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"siginterrupt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"siginterrupt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"siginterrupt","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"siginterrupt","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"siginterrupt","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"siginterrupt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigisemptyset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigisemptyset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigisemptyset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigisemptyset","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigisemptyset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigisemptyset","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigisemptyset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigismember","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigismember","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigismember","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigismember","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigismember","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigismember","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigismember","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"siglongjmp","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"siglongjmp","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"siglongjmp","GLIBC_2.3.4",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"siglongjmp","GLIBC_2.3.4",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"siglongjmp","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"siglongjmp","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"siglongjmp","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"signal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"signal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"signal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"signal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"signal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"signal","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"signal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"sigorset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigorset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigorset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigorset","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigorset","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigorset","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigorset","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigpause","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigpause","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigpause","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigpause","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigpause","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigpause","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigpause","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigpending","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigpending","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigpending","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigpending","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigpending","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigpending","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigpending","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigprocmask","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigprocmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigprocmask","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigprocmask","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigprocmask","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigprocmask","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigprocmask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigqueue","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigqueue","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigqueue","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigqueue","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigqueue","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigqueue","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigqueue","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigrelse","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigrelse","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigrelse","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigrelse","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigrelse","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigrelse","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigrelse","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigreturn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigreturn","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigreturn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigreturn","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigreturn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigreturn","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigreturn","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigset","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigset","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigset","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigset","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigset","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigset","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"sigset","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"sigsuspend","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigsuspend","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigsuspend","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigsuspend","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigsuspend","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigsuspend","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigsuspend","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigtimedwait","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigtimedwait","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigtimedwait","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigtimedwait","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigtimedwait","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigtimedwait","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigtimedwait","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigwait","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigwait","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigwait","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigwait","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigwait","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigwait","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigwait","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sigwaitinfo","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sigwaitinfo","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sigwaitinfo","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sigwaitinfo","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sigwaitinfo","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sigwaitinfo","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sigwaitinfo","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sleep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sleep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sleep","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sleep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sleep","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"snprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"snprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"snprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"snprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"snprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"snprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"snprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sockatmark","GLIBC_2.2.4",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sockatmark","GLIBC_2.2.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sockatmark","GLIBC_2.2.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sockatmark","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sockatmark","GLIBC_2.2.4",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sockatmark","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sockatmark","GLIBC_2.2.4",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"socket","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"socket","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"socket","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"socket","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"socket","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"socket","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"socket","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"socketpair","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"socketpair","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"socketpair","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"socketpair","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"socketpair","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"socketpair","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"socketpair","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"srand","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"srand","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"srand","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"srand","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"srand","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"srand","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"srand","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"srand48","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"srand48","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"srand48","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"srand48","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"srand48","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"srand48","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"srand48","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"srand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"srand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"srand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"srand48_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"srand48_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"srand48_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"srand48_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"srandom","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"srandom","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"srandom","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"srandom","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"srandom","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"srandom","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"srandom","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"srandom_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"srandom_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"srandom_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"srandom_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"srandom_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"srandom_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"srandom_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sscanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sscanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"sscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"statfs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"statfs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"statfs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"statfs","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"statfs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"statfs","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"statfs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"statfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"statfs64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"statfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"statfs64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"statfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"statfs64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"statfs64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"statvfs","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"statvfs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"statvfs","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"statvfs","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"statvfs","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"statvfs","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"statvfs","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"statvfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"statvfs64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"statvfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"statvfs64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"statvfs64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"statvfs64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"statvfs64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"stderr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"stderr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"stderr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"stderr","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"stderr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"stderr","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"stderr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"stdin","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"stdin","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"stdin","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"stdin","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"stdin","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"stdin","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"stdin","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"stdout","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"stdout","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"stdout","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"stdout","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"stdout","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"stdout","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"stdout","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"stime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"stime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"stime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"stime","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"stime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"stime","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"stime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"stpcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"stpcpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"stpcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"stpcpy","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"stpcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"stpcpy","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"stpcpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"stpncpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"stpncpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"stpncpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"stpncpy","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"stpncpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"stpncpy","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"stpncpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strcasecmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strcasecmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strcasecmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strcasecmp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strcasecmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strcasecmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"strcasecmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strcasestr","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strcasestr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strcasestr","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strcasestr","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strcasestr","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strcasestr","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strcasestr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strcat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strcat","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strcat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strcat","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strcat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strcat","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strcat","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strchr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strchr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strchr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strchr","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strchr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strchr","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strchr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strcmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strcmp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strcmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"strcmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strcoll","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strcoll","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strcoll","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strcoll","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strcoll","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strcoll","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"strcoll","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strcpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strcpy","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strcpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strcpy","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strcpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strcspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strcspn","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strcspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strcspn","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strcspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strcspn","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strcspn","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strdup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strdup","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strdup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strdup","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strdup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strdup","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strdup","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strerror","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strerror","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strerror","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strerror","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strerror","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strerror_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strerror_r","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strerror_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strerror_r","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strerror_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strerror_r","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strerror_r","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strfmon","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strfmon","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strfmon","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strfmon","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strfmon","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strfmon","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strfmon","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strftime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strftime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strftime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strftime","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strftime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strftime","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strftime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strlen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strlen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strlen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strlen","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strlen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strlen","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strlen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strncasecmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strncasecmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strncasecmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strncasecmp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strncasecmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strncasecmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"strncasecmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strncat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strncat","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strncat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strncat","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strncat","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strncat","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strncat","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strncmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strncmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strncmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strncmp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strncmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strncmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"strncmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strncpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strncpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strncpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strncpy","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strncpy","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strncpy","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strncpy","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strndup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strndup","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strndup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strndup","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strndup","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strndup","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strndup","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strnlen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strnlen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strnlen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strnlen","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strnlen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strnlen","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strnlen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strpbrk","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strpbrk","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strpbrk","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strpbrk","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strpbrk","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strpbrk","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strpbrk","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strptime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strptime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strptime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strptime","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strptime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strptime","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strptime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strrchr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strrchr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strrchr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strrchr","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strrchr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strrchr","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strrchr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strsep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strsep","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strsep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strsep","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strsep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strsep","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strsep","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strsignal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strsignal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strsignal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strsignal","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strsignal","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strsignal","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strsignal","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strspn","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strspn","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strspn","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strspn","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strstr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strstr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strstr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strstr","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strstr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strstr","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strstr","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtod","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"strtod","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtod","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"strtod","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtod","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"strtod","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strtod","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strtof","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strtof","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strtof","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"strtof","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"strtoimax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"strtoimax","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtoimax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"strtoimax","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtoimax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"strtoimax","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strtoimax","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtok","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strtok","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtok","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strtok","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtok","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strtok","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strtok","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtok_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strtok_r","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtok_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strtok_r","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtok_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strtok_r","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strtok_r","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtol","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strtol","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtol","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strtol","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtol","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strtol","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strtol","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtold","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __ia64__
	{"strtold","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtold","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"strtold","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtold","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"strtold","GLIBC_2.2.5",0,LSB_Core,16,1},
#endif
#if defined __s390x__
	{"strtold","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtoll","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"strtoll","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtoll","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"strtoll","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtoll","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"strtoll","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strtoll","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtoq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"strtoq","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtoq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"strtoq","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtoq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"strtoq","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strtoq","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtoul","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strtoul","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtoul","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strtoul","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtoul","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strtoul","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strtoul","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtoull","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"strtoull","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtoull","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"strtoull","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtoull","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"strtoull","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strtoull","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtoumax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"strtoumax","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtoumax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"strtoumax","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtoumax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"strtoumax","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strtoumax","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strtouq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"strtouq","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strtouq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"strtouq","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strtouq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"strtouq","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strtouq","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"strxfrm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"strxfrm","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"strxfrm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"strxfrm","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"strxfrm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"strxfrm","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"strxfrm","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"svc_getreqset","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"svc_getreqset","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svc_getreqset","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"svc_getreqset","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svc_getreqset","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"svc_getreqset","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"svc_getreqset","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svc_register","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"svc_register","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svc_register","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"svc_register","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svc_register","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"svc_register","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"svc_register","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"svc_run","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"svc_run","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svc_run","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"svc_run","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svc_run","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"svc_run","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"svc_run","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svc_sendreply","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"svc_sendreply","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svc_sendreply","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"svc_sendreply","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svc_sendreply","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"svc_sendreply","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"svc_sendreply","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"svcerr_auth","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"svcerr_auth","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svcerr_auth","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"svcerr_auth","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svcerr_auth","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"svcerr_auth","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"svcerr_auth","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcerr_decode","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"svcerr_decode","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svcerr_decode","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"svcerr_decode","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svcerr_decode","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"svcerr_decode","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"svcerr_decode","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcerr_noproc","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"svcerr_noproc","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svcerr_noproc","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"svcerr_noproc","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svcerr_noproc","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"svcerr_noproc","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"svcerr_noproc","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcerr_noprog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"svcerr_noprog","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svcerr_noprog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"svcerr_noprog","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svcerr_noprog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"svcerr_noprog","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"svcerr_noprog","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcerr_progvers","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"svcerr_progvers","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svcerr_progvers","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"svcerr_progvers","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svcerr_progvers","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"svcerr_progvers","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"svcerr_progvers","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcerr_systemerr","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"svcerr_systemerr","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svcerr_systemerr","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"svcerr_systemerr","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svcerr_systemerr","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"svcerr_systemerr","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"svcerr_systemerr","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcerr_weakauth","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"svcerr_weakauth","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svcerr_weakauth","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"svcerr_weakauth","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svcerr_weakauth","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"svcerr_weakauth","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"svcerr_weakauth","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"svcfd_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"svcfd_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svcfd_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"svcfd_create","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svcfd_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"svcfd_create","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"svcfd_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"svcraw_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"svcraw_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svcraw_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"svcraw_create","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svcraw_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"svcraw_create","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"svcraw_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"svctcp_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"svctcp_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svctcp_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"svctcp_create","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svctcp_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"svctcp_create","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"svctcp_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"svcudp_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"svcudp_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"svcudp_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"svcudp_create","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"svcudp_create","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"svcudp_create","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"svcudp_create","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"swab","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"swab","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"swab","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"swab","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"swab","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"swab","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"swab","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"swapcontext","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"swapcontext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"swapcontext","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"swapcontext","GLIBC_2.3.4",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"swapcontext","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"swapcontext","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"swapcontext","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"swprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"swprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"swprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"swprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"swprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"swprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"swprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"swscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"swscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"swscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"swscanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"swscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"swscanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"swscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"symlink","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"symlink","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"symlink","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"symlink","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"symlink","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"symlink","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"symlink","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"symlinkat","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"sync","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"sync","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sync","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"sync","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sync","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"sync","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"sync","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"sysconf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"sysconf","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"sysconf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"sysconf","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"sysconf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"sysconf","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"sysconf","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"syslog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"syslog","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"syslog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"syslog","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"syslog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"syslog","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"syslog","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"system","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"system","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"system","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"system","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"system","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"system","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"system","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcdrain","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tcdrain","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tcdrain","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tcdrain","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tcdrain","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tcdrain","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"tcdrain","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcflow","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tcflow","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tcflow","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tcflow","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tcflow","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tcflow","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"tcflow","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcflush","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tcflush","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tcflush","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tcflush","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tcflush","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tcflush","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"tcflush","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcgetattr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tcgetattr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tcgetattr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tcgetattr","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tcgetattr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tcgetattr","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"tcgetattr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcgetpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tcgetpgrp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tcgetpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tcgetpgrp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tcgetpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tcgetpgrp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"tcgetpgrp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcgetsid","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tcgetsid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tcgetsid","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tcgetsid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tcgetsid","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tcgetsid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"tcgetsid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcsendbreak","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tcsendbreak","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tcsendbreak","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tcsendbreak","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tcsendbreak","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tcsendbreak","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"tcsendbreak","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcsetattr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tcsetattr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tcsetattr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tcsetattr","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tcsetattr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tcsetattr","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"tcsetattr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tcsetpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tcsetpgrp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tcsetpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tcsetpgrp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tcsetpgrp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tcsetpgrp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"tcsetpgrp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tdelete","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"tdelete","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tdelete","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tdelete","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tdelete","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tdelete","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"tdelete","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"telldir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"telldir","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"telldir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"telldir","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"telldir","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"telldir","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"telldir","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"tempnam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tempnam","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tempnam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tempnam","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tempnam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tempnam","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"tempnam","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"textdomain","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"textdomain","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"textdomain","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"textdomain","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"textdomain","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"textdomain","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"textdomain","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"tfind","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"tfind","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tfind","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tfind","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tfind","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tfind","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"tfind","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"time","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"time","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"time","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"time","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"time","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"time","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"time","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"times","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"times","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"times","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"times","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"times","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"times","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"times","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"timezone","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"timezone","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"timezone","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"timezone","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"timezone","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"timezone","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"timezone","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"tmpfile","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tmpfile","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tmpfile","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tmpfile","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tmpfile","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tmpfile","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"tmpfile","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"tmpfile64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tmpfile64","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tmpfile64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tmpfile64","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tmpfile64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tmpfile64","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"tmpfile64","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"tmpnam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tmpnam","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tmpnam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tmpnam","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tmpnam","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tmpnam","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"tmpnam","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"toascii","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"toascii","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"toascii","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"toascii","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"toascii","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"toascii","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"toascii","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tolower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"tolower","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tolower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tolower","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tolower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tolower","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"tolower","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"toupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"toupper","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"toupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"toupper","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"toupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"toupper","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"toupper","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"towctrans","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"towctrans","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"towctrans","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"towctrans","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"towctrans","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"towctrans","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"towctrans","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"towlower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"towlower","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"towlower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"towlower","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"towlower","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"towlower","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"towlower","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"towupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"towupper","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"towupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"towupper","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"towupper","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"towupper","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"towupper","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"truncate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"truncate","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"truncate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"truncate","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"truncate","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"truncate","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"truncate","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"truncate64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"truncate64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"truncate64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"truncate64","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"truncate64","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"truncate64","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"truncate64","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tsearch","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"tsearch","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tsearch","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"tsearch","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tsearch","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"tsearch","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"tsearch","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ttyname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ttyname","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ttyname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ttyname","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ttyname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ttyname","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"ttyname","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ttyname_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ttyname_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ttyname_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ttyname_r","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ttyname_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ttyname_r","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ttyname_r","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"twalk","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"twalk","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"twalk","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"twalk","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"twalk","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"twalk","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"twalk","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"tzname","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"tzname","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tzname","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"tzname","GLIBC_2.3",0,LSB_Core,16,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tzname","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"tzname","GLIBC_2.2.5",0,LSB_Core,16,1},
#endif
#if defined __s390x__
	{"tzname","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"tzset","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"tzset","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"tzset","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"tzset","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"tzset","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"tzset","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"tzset","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"ualarm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ualarm","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ualarm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ualarm","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ualarm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ualarm","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ualarm","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ulimit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ulimit","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ulimit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ulimit","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ulimit","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ulimit","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"ulimit","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"umask","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"umask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"umask","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"umask","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"umask","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"umask","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"umask","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"uname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"uname","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"uname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"uname","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"uname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"uname","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"uname","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ungetc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ungetc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ungetc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ungetc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ungetc","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ungetc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ungetc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ungetwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"ungetwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"ungetwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"ungetwc","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"ungetwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"ungetwc","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"ungetwc","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"unlink","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"unlink","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"unlink","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"unlink","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"unlink","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"unlink","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"unlink","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"unlinkat","GLIBC_2.4",0,LSB_Core,0,1},
#if defined __i386__
	{"unlockpt","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"unlockpt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"unlockpt","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"unlockpt","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"unlockpt","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"unlockpt","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"unlockpt","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"unsetenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"unsetenv","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"unsetenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"unsetenv","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"unsetenv","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"unsetenv","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"unsetenv","GLIBC_2.2",0,LSB_Core,4,1},
#endif
	{"uselocale","GLIBC_2.3",0,LSB_Core,0,1},
#if defined __i386__
	{"usleep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"usleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"usleep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"usleep","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"usleep","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"usleep","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"usleep","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"utime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"utime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"utime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"utime","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"utime","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"utime","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"utime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"utimes","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"utimes","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"utimes","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"utimes","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"utimes","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"utimes","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"utimes","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"utmpname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"utmpname","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"utmpname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"utmpname","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"utmpname","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"utmpname","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"utmpname","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vasprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vasprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vasprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vasprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vasprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vasprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vasprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vdprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vdprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vdprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vdprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vdprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vdprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vdprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"verrx","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"verrx","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"verrx","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"verrx","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"verrx","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"verrx","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"verrx","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"vfork","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vfork","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vfork","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vfork","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vfork","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vfork","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vfork","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vfprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vfprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vfprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vfprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vfprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vfprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vfprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vfscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vfscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vfscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vfscanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vfscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vfscanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vfscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vfwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vfwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vfwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vfwprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vfwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vfwprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vfwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vfwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vfwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vfwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vfwscanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vfwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vfwscanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vfwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vscanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vscanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vsnprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vsnprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vsnprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vsnprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vsnprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vsnprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vsnprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vsprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vsprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vsprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vsprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vsprintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vsprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vsprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vsscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vsscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vsscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vsscanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vsscanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vsscanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vsscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vswprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vswprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vswprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vswprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vswprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vswprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vswprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vswscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vswscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vswscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vswscanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vswscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vswscanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vswscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vsyslog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"vsyslog","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vsyslog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"vsyslog","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vsyslog","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"vsyslog","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"vsyslog","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"vwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vwprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vwprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vwprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"vwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"vwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"vwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"vwscanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"vwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"vwscanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"vwscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wait","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wait","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wait","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wait","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wait","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wait","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wait","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wait4","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wait4","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wait4","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wait4","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wait4","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wait4","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wait4","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"waitid","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"waitid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"waitid","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"waitid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"waitid","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"waitid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"waitid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"waitpid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"waitpid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"waitpid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"waitpid","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"waitpid","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"waitpid","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"waitpid","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"warn","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"warn","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"warn","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"warn","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"warn","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"warn","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"warn","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"warnx","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"warnx","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"warnx","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"warnx","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"warnx","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"warnx","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"warnx","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"wcpcpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcpcpy","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcpcpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcpcpy","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcpcpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcpcpy","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcpcpy","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcpncpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcpncpy","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcpncpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcpncpy","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcpncpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcpncpy","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcpncpy","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcrtomb","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcrtomb","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcrtomb","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcrtomb","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcrtomb","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcrtomb","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcrtomb","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcscasecmp","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcscasecmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcscasecmp","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcscasecmp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcscasecmp","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcscasecmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wcscasecmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcscat","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcscat","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcscat","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcscat","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcscat","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcscat","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcscat","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcschr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcschr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcschr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcschr","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcschr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcschr","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcschr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcscmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcscmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcscmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcscmp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcscmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcscmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wcscmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcscoll","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcscoll","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcscoll","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcscoll","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcscoll","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcscoll","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wcscoll","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcscpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcscpy","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcscpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcscpy","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcscpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcscpy","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcscpy","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcscspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcscspn","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcscspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcscspn","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcscspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcscspn","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcscspn","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcsdup","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcsdup","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsdup","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcsdup","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsdup","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcsdup","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcsdup","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcsftime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcsftime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsftime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcsftime","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsftime","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcsftime","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcsftime","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcslen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcslen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcslen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcslen","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcslen","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcslen","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcslen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcsncasecmp","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcsncasecmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsncasecmp","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcsncasecmp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsncasecmp","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcsncasecmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wcsncasecmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcsncat","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcsncat","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsncat","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcsncat","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsncat","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcsncat","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcsncat","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcsncmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcsncmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsncmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcsncmp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsncmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcsncmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wcsncmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcsncpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcsncpy","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsncpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcsncpy","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsncpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcsncpy","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcsncpy","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcsnlen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcsnlen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsnlen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcsnlen","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsnlen","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcsnlen","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcsnlen","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcsnrtombs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcsnrtombs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsnrtombs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcsnrtombs","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsnrtombs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcsnrtombs","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcsnrtombs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcspbrk","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcspbrk","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcspbrk","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcspbrk","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcspbrk","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcspbrk","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcspbrk","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcsrchr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcsrchr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsrchr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcsrchr","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsrchr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcsrchr","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcsrchr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcsrtombs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcsrtombs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsrtombs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcsrtombs","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsrtombs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcsrtombs","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcsrtombs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcsspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcsspn","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcsspn","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsspn","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcsspn","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcsspn","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcsstr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcsstr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsstr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcsstr","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsstr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcsstr","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcsstr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcstod","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"wcstod","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstod","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"wcstod","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstod","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"wcstod","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcstod","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcstof","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcstof","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcstof","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wcstof","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcstoimax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"wcstoimax","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstoimax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"wcstoimax","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstoimax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"wcstoimax","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcstoimax","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstok","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcstok","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstok","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcstok","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstok","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcstok","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcstok","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcstol","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcstol","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstol","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcstol","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstol","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcstol","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcstol","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstold","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __ia64__
	{"wcstold","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstold","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"wcstold","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstold","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"wcstold","GLIBC_2.2.5",0,LSB_Core,16,1},
#endif
#if defined __s390x__
	{"wcstold","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstoll","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"wcstoll","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstoll","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"wcstoll","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstoll","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"wcstoll","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcstoll","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstombs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcstombs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstombs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcstombs","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstombs","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcstombs","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcstombs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstoq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"wcstoq","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstoq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"wcstoq","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstoq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"wcstoq","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcstoq","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstoul","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcstoul","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstoul","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcstoul","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstoul","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcstoul","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcstoul","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstoull","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"wcstoull","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstoull","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"wcstoull","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstoull","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"wcstoull","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcstoull","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstoumax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"wcstoumax","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstoumax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"wcstoumax","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstoumax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"wcstoumax","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcstoumax","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcstouq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"wcstouq","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcstouq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc64__
	{"wcstouq","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcstouq","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __x86_64__
	{"wcstouq","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcstouq","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcswcs","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wcswcs","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcswcs","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wcswcs","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcswcs","GLIBC_2.1",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wcswcs","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wcswcs","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wcswidth","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcswidth","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcswidth","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcswidth","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcswidth","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcswidth","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wcswidth","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wcsxfrm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcsxfrm","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcsxfrm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcsxfrm","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcsxfrm","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcsxfrm","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wcsxfrm","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wctob","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wctob","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wctob","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wctob","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wctob","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wctob","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wctob","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wctomb","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wctomb","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wctomb","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wctomb","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wctomb","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wctomb","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wctomb","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wctrans","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wctrans","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wctrans","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wctrans","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wctrans","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wctrans","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wctrans","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wctype","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wctype","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wctype","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wctype","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wctype","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wctype","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"wctype","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wcwidth","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wcwidth","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wcwidth","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wcwidth","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wcwidth","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wcwidth","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wcwidth","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wmemchr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wmemchr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wmemchr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wmemchr","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wmemchr","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wmemchr","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wmemchr","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wmemcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wmemcmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wmemcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wmemcmp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wmemcmp","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wmemcmp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wmemcmp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wmemcpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wmemcpy","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wmemcpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wmemcpy","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wmemcpy","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wmemcpy","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wmemcpy","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wmemmove","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wmemmove","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wmemmove","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wmemmove","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wmemmove","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wmemmove","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wmemmove","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wmemset","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __ia64__
	{"wmemset","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wmemset","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __powerpc64__
	{"wmemset","GLIBC_2.3",0,LSB_Core,0,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wmemset","GLIBC_2.0",0,LSB_Core,0,1},
#endif
#if defined __x86_64__
	{"wmemset","GLIBC_2.2.5",0,LSB_Core,0,1},
#endif
#if defined __s390x__
	{"wmemset","GLIBC_2.2",0,LSB_Core,0,1},
#endif
#if defined __i386__
	{"wordexp","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wordexp","GLIBC_2.2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wordexp","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wordexp","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wordexp","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wordexp","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wordexp","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"wordfree","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"wordfree","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wordfree","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"wordfree","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wordfree","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"wordfree","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"wordfree","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"wprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wprintf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wprintf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wprintf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"write","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"write","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"write","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"write","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"write","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"write","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"write","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"writev","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"writev","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"writev","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"writev","GLIBC_2.3",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"writev","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"writev","GLIBC_2.2.5",0,LSB_Core,8,1},
#endif
#if defined __s390x__
	{"writev","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"wscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"wscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"wscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"wscanf","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"wscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"wscanf","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"wscanf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_accepted_reply","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_accepted_reply","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_accepted_reply","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_accepted_reply","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_accepted_reply","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_accepted_reply","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_accepted_reply","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_array","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_array","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_array","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_array","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_array","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_array","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_array","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_bool","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_bool","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_bool","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_bool","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_bool","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_bool","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_bool","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_bytes","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_bytes","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_bytes","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_bytes","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_bytes","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_bytes","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_bytes","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_callhdr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_callhdr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_callhdr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_callhdr","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_callhdr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_callhdr","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_callhdr","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_callmsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_callmsg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_callmsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_callmsg","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_callmsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_callmsg","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_callmsg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_char","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_char","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_char","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_char","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_char","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_char","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_char","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_double","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_double","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_double","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_double","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_double","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_double","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_double","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_enum","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_enum","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_enum","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_enum","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_enum","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_enum","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_enum","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_float","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_float","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_float","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_float","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_float","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_float","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_float","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_free","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"xdr_free","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_free","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"xdr_free","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_free","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"xdr_free","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"xdr_free","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"xdr_int","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_int","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_int","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_int","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_int","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_int","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_int","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_long","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_long","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_long","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_long","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_long","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_long","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_long","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_opaque","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_opaque","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_opaque","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_opaque","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_opaque","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_opaque","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_opaque","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_opaque_auth","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_opaque_auth","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_opaque_auth","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_opaque_auth","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_opaque_auth","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_opaque_auth","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_opaque_auth","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_pointer","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_pointer","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_pointer","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_pointer","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_pointer","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_pointer","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_pointer","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_reference","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_reference","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_reference","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_reference","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_reference","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_reference","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_reference","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_rejected_reply","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_rejected_reply","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_rejected_reply","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_rejected_reply","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_rejected_reply","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_rejected_reply","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_rejected_reply","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_replymsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_replymsg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_replymsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_replymsg","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_replymsg","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_replymsg","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_replymsg","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_short","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_short","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_short","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_short","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_short","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_short","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_short","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_string","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_string","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_string","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_string","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_string","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_string","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_string","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_u_char","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_u_char","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_u_char","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_u_char","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_u_char","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_u_char","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_u_char","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_u_int","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_u_int","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_u_int","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_u_int","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_u_int","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_u_int","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_u_int","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_u_long","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_u_long","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_u_long","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_u_long","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_u_long","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_u_long","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_u_long","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_u_short","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_u_short","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_u_short","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_u_short","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_u_short","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_u_short","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_u_short","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_union","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_union","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_union","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_union","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_union","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_union","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_union","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_vector","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_vector","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_vector","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_vector","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_vector","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_vector","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_vector","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_void","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_void","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_void","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_void","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_void","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_void","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_void","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdr_wrapstring","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdr_wrapstring","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdr_wrapstring","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdr_wrapstring","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdr_wrapstring","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdr_wrapstring","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdr_wrapstring","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdrmem_create","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"xdrmem_create","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdrmem_create","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"xdrmem_create","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdrmem_create","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"xdrmem_create","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"xdrmem_create","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"xdrrec_create","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"xdrrec_create","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdrrec_create","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"xdrrec_create","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdrrec_create","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"xdrrec_create","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"xdrrec_create","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"xdrrec_endofrecord","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdrrec_endofrecord","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdrrec_endofrecord","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdrrec_endofrecord","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdrrec_endofrecord","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdrrec_endofrecord","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdrrec_endofrecord","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdrrec_eof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdrrec_eof","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdrrec_eof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdrrec_eof","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdrrec_eof","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdrrec_eof","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdrrec_eof","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdrrec_skiprecord","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"xdrrec_skiprecord","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdrrec_skiprecord","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __powerpc64__
	{"xdrrec_skiprecord","GLIBC_2.3",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdrrec_skiprecord","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"xdrrec_skiprecord","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"xdrrec_skiprecord","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"xdrstdio_create","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __ia64__
	{"xdrstdio_create","GLIBC_2.2",0,LSB_Core,1,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"xdrstdio_create","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __powerpc64__
	{"xdrstdio_create","GLIBC_2.3",0,LSB_Core,1,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"xdrstdio_create","GLIBC_2.0",0,LSB_Core,1,1},
#endif
#if defined __x86_64__
	{"xdrstdio_create","GLIBC_2.2.5",0,LSB_Core,1,1},
#endif
#if defined __s390x__
	{"xdrstdio_create","GLIBC_2.2",0,LSB_Core,1,1},
#endif
	{0,0}};

struct classinfo *libc_so_6_1_classinfo[] = {

	NULL	};
