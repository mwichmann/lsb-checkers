/*
 * Test of spawn.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "spawn.h"



#ifdef TET_TEST
void spawn_h()
{
#else
int spawn_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in spawn.h\n");
#endif

printf("Checking data structures in spawn.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef POSIX_SPAWN_RESETIDS
	CompareConstant(POSIX_SPAWN_RESETIDS,0x01,9495,architecture)
#else
Msg( "Error: Constant not found: POSIX_SPAWN_RESETIDS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_SPAWN_SETPGROUP
	CompareConstant(POSIX_SPAWN_SETPGROUP,0x02,9496,architecture)
#else
Msg( "Error: Constant not found: POSIX_SPAWN_SETPGROUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_SPAWN_SETSIGDEF
	CompareConstant(POSIX_SPAWN_SETSIGDEF,0x04,9497,architecture)
#else
Msg( "Error: Constant not found: POSIX_SPAWN_SETSIGDEF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_SPAWN_SETSIGMASK
	CompareConstant(POSIX_SPAWN_SETSIGMASK,0x08,9498,architecture)
#else
Msg( "Error: Constant not found: POSIX_SPAWN_SETSIGMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_SPAWN_SETSCHEDPARAM
	CompareConstant(POSIX_SPAWN_SETSCHEDPARAM,0x10,9499,architecture)
#else
Msg( "Error: Constant not found: POSIX_SPAWN_SETSCHEDPARAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_SPAWN_SETSCHEDULER
	CompareConstant(POSIX_SPAWN_SETSCHEDULER,0x20,9500,architecture)
#else
Msg( "Error: Constant not found: POSIX_SPAWN_SETSCHEDULER\n");
cnt++;
#endif

#endif

#if __ia64__
CheckTypeSize(posix_spawn_file_actions_t,80, 16588, 3);
#elif __i386__
CheckTypeSize(posix_spawn_file_actions_t,76, 16588, 2);
#elif 1
CheckTypeSize(posix_spawn_file_actions_t,0, 16588, 1);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(posix_spawn_file_actions_t,76, 16588, 6);
#elif __powerpc64__
CheckTypeSize(posix_spawn_file_actions_t,80, 16588, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(posix_spawn_file_actions_t,76, 16588, 10);
#elif __x86_64__
CheckTypeSize(posix_spawn_file_actions_t,80, 16588, 11);
#elif __s390x__
CheckTypeSize(posix_spawn_file_actions_t,80, 16588, 12);
#endif

#if 1
CheckTypeSize(posix_spawnattr_t,336, 16591, 1);
#endif

extern int posix_spawn_db(pid_t, const char *, posix_spawn_file_actions_t *const , posix_spawnattr_t *const , char *const [], char *const []);
CheckInterfacedef(posix_spawn,posix_spawn_db);
extern int posix_spawn_file_actions_addclose_db(posix_spawn_file_actions_t *, int);
CheckInterfacedef(posix_spawn_file_actions_addclose,posix_spawn_file_actions_addclose_db);
extern int posix_spawn_file_actions_adddup2_db(posix_spawn_file_actions_t *, int, int);
CheckInterfacedef(posix_spawn_file_actions_adddup2,posix_spawn_file_actions_adddup2_db);
extern int posix_spawn_file_actions_addopen_db(posix_spawn_file_actions_t *, int, const char *, int, mode_t);
CheckInterfacedef(posix_spawn_file_actions_addopen,posix_spawn_file_actions_addopen_db);
extern int posix_spawn_file_actions_destroy_db(posix_spawn_file_actions_t *);
CheckInterfacedef(posix_spawn_file_actions_destroy,posix_spawn_file_actions_destroy_db);
extern int posix_spawn_file_actions_init_db(posix_spawn_file_actions_t *);
CheckInterfacedef(posix_spawn_file_actions_init,posix_spawn_file_actions_init_db);
extern int posix_spawnattr_destroy_db(posix_spawnattr_t *);
CheckInterfacedef(posix_spawnattr_destroy,posix_spawnattr_destroy_db);
extern int posix_spawnattr_getflags_db(posix_spawnattr_t *const , short int *);
CheckInterfacedef(posix_spawnattr_getflags,posix_spawnattr_getflags_db);
extern int posix_spawnattr_getpgroup_db(posix_spawnattr_t *const , pid_t);
CheckInterfacedef(posix_spawnattr_getpgroup,posix_spawnattr_getpgroup_db);
extern int posix_spawnattr_getschedparam_db(posix_spawnattr_t *const , struct sched_param * *);
CheckInterfacedef(posix_spawnattr_getschedparam,posix_spawnattr_getschedparam_db);
extern int posix_spawnattr_getschedpolicy_db(posix_spawnattr_t *const , int *);
CheckInterfacedef(posix_spawnattr_getschedpolicy,posix_spawnattr_getschedpolicy_db);
extern int posix_spawnattr_getsigdefault_db(posix_spawnattr_t *, sigset_t *);
CheckInterfacedef(posix_spawnattr_getsigdefault,posix_spawnattr_getsigdefault_db);
extern int posix_spawnattr_getsigmask_db(posix_spawnattr_t *const , sigset_t *);
CheckInterfacedef(posix_spawnattr_getsigmask,posix_spawnattr_getsigmask_db);
extern int posix_spawnattr_init_db(posix_spawnattr_t *, int);
CheckInterfacedef(posix_spawnattr_init,posix_spawnattr_init_db);
extern int posix_spawnattr_setflags_db(posix_spawnattr_t *);
CheckInterfacedef(posix_spawnattr_setflags,posix_spawnattr_setflags_db);
extern int posix_spawnattr_setpgroup_db(posix_spawnattr_t *, short int);
CheckInterfacedef(posix_spawnattr_setpgroup,posix_spawnattr_setpgroup_db);
extern int posix_spawnattr_setschedparam_db(posix_spawnattr_t *, pid_t);
CheckInterfacedef(posix_spawnattr_setschedparam,posix_spawnattr_setschedparam_db);
extern int posix_spawnattr_setschedpolicy_db(posix_spawnattr_t *, struct sched_param * *const );
CheckInterfacedef(posix_spawnattr_setschedpolicy,posix_spawnattr_setschedpolicy_db);
extern int posix_spawnattr_setsigdefault_db(posix_spawnattr_t *, sigset_t *);
CheckInterfacedef(posix_spawnattr_setsigdefault,posix_spawnattr_setsigdefault_db);
extern int posix_spawnattr_setsigmask_db(posix_spawnattr_t *, struct random_data);
CheckInterfacedef(posix_spawnattr_setsigmask,posix_spawnattr_setsigmask_db);
extern int posix_spawnp_db(pid_t, const char *, posix_spawn_file_actions_t *const , posix_spawnattr_t *const , char *const [], char *);
CheckInterfacedef(posix_spawnp,posix_spawnp_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in spawn.h\n\n",pcnt,cnt);
return cnt;
#endif

}
