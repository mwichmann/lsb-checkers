/*
 * Test of semaphore.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "semaphore.h"



#ifdef TET_TEST
void semaphore_h()
{
#else
int semaphore_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in semaphore.h\n");
#endif

printf("Checking data structures in semaphore.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SEM_FAILED
	CompareConstant(SEM_FAILED,((sem_t*)0),1624,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SEM_FAILED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEM_VALUE_MAX
	CompareConstant(SEM_VALUE_MAX,((int)((~0u)>>1)),1625,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SEM_VALUE_MAX\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(sem_t,16, 6960, 2, 1.2, NULL, 6958, NULL)
#elif __ia64__
CheckTypeSize(sem_t,32, 6960, 3, 1.3, NULL, 6958, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sem_t,16, 6960, 6, 1.2, NULL, 6958, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(sem_t,16, 6960, 10, 1.3, NULL, 6958, NULL)
#elif __powerpc64__
CheckTypeSize(sem_t,32, 6960, 9, 2.0, NULL, 6958, NULL)
#elif __s390x__
CheckTypeSize(sem_t,32, 6960, 12, 1.3, NULL, 6958, NULL)
#elif __x86_64__
CheckTypeSize(sem_t,32, 6960, 11, 2.0, NULL, 6958, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6958, NULL);\n",architecture,6960,0);
Msg("Find size of sem_t (6960)\n");
#endif

extern int sem_close_db(sem_t *);
CheckInterfacedef(sem_close,sem_close_db);
extern int sem_destroy_db(sem_t *);
CheckInterfacedef(sem_destroy,sem_destroy_db);
extern int sem_getvalue_db(sem_t *, int *);
CheckInterfacedef(sem_getvalue,sem_getvalue_db);
extern int sem_init_db(sem_t *, int, unsigned int);
CheckInterfacedef(sem_init,sem_init_db);
extern sem_t * sem_open_db(const char *, int, ...);
CheckInterfacedef(sem_open,sem_open_db);
extern int sem_post_db(sem_t *);
CheckInterfacedef(sem_post,sem_post_db);
extern int sem_trywait_db(sem_t *);
CheckInterfacedef(sem_trywait,sem_trywait_db);
extern int sem_unlink_db(const char *);
CheckInterfacedef(sem_unlink,sem_unlink_db);
extern int sem_wait_db(sem_t *);
CheckInterfacedef(sem_wait,sem_wait_db);
extern int sem_timedwait_db(sem_t *, const struct timespec *);
CheckInterfacedef(sem_timedwait,sem_timedwait_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in semaphore.h\n\n",pcnt,cnt);
return cnt;
#endif

}
