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
tcnt+=assert_h();
tcnt+=cpio_h();
tcnt+=ctype_h();
tcnt+=elf_h();
tcnt+=errno_h();
tcnt+=fcntl_h();
tcnt+=float_h();
tcnt+=fnmatch_h();
tcnt+=ftw_h();
tcnt+=glob_h();
tcnt+=langinfo_h();
tcnt+=limits_h();
tcnt+=locale_h();
tcnt+=math_h();
tcnt+=nl_types_h();
tcnt+=signal_h();
tcnt+=sys_ipc_h();
tcnt+=sys_mman_h();
tcnt+=sys_msg_h();
tcnt+=sys_resource_h();
tcnt+=sys_sem_h();
tcnt+=sys_shm_h();
tcnt+=sys_wait_h();
tcnt+=tar_h();
tcnt+=termios_h();
tcnt+=time_h();
tcnt+=ulimit_h();
tcnt+=wchar_h();
printf("Total Tests: %d\n", tcnt );
}
