#include <stdio.h>
#include <stdarg.h>

Msg( char *f, ...)
{
va_list args;
va_start(args,f);
vfprintf(stderr, f, args);
va_end(args);
}

int tcnt=0;

main()
{
tcnt+=GL_gl_h();
tcnt+=GL_glx_h();
tcnt+=X11_ICE_ICElib_h();
tcnt+=X11_ICE_ICEutil_h();
tcnt+=X11_SM_SMlib_h();
tcnt+=X11_X_h();
tcnt+=X11_Xcms_h();
tcnt+=X11_Xlib_h();
tcnt+=X11_Xutil_h();
tcnt+=aio_h();
tcnt+=ctype_h();
tcnt+=curses_h();
tcnt+=dirent_h();
tcnt+=ftw_h();
tcnt+=glob_h();
tcnt+=grp_h();
tcnt+=iconv_h();
tcnt+=inttypes_h();
tcnt+=langinfo_h();
tcnt+=locale_h();
tcnt+=malloc_h();
tcnt+=math_h();
tcnt+=nl_types_h();
tcnt+=pthread_h();
tcnt+=pwd_h();
tcnt+=regex_h();
tcnt+=search_h();
tcnt+=semaphore_h();
tcnt+=setjmp_h();
tcnt+=signal_h();
tcnt+=stdio_h();
tcnt+=stdlib_h();
tcnt+=sys_msg_h();
tcnt+=sys_sem_h();
tcnt+=sys_socket_h();
tcnt+=sys_times_h();
tcnt+=sys_types_h();
tcnt+=sys_utsname_h();
tcnt+=sys_wait_h();
tcnt+=time_h();
tcnt+=ulimit_h();
tcnt+=utime_h();
tcnt+=wchar_h();
tcnt+=wctype_h();
tcnt+=wordexp_h();
printf("Total Tests: %d\n", tcnt );
}
