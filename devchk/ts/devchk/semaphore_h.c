/*
 * Test of semaphore.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in semaphore.h\n");
#endif

printf("Checking data structures in semaphore.h\n");
#if defined __powerpc64__
#ifdef __SIZEOF_SEM_T
	CompareConstant(__SIZEOF_SEM_T,32,15598,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_SEM_T\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef __SIZEOF_SEM_T
	CompareConstant(__SIZEOF_SEM_T,16,15598,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_SEM_T\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef __SIZEOF_SEM_T
	CompareConstant(__SIZEOF_SEM_T,32,15598,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_SEM_T\n");
cnt++;
#endif

#elif defined __i386__
#ifdef __SIZEOF_SEM_T
	CompareConstant(__SIZEOF_SEM_T,16,15598,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_SEM_T\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef __SIZEOF_SEM_T
	CompareConstant(__SIZEOF_SEM_T,32,15598,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_SEM_T\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef __SIZEOF_SEM_T
	CompareConstant(__SIZEOF_SEM_T,32,15598,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_SEM_T\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef __SIZEOF_SEM_T
	CompareConstant(__SIZEOF_SEM_T,16,15598,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_SEM_T\n");
cnt++;
#endif

#else
Msg( "No definition for __SIZEOF_SEM_T (15598, int) in db for this architecture\n");
#ifdef __SIZEOF_SEM_T
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,15598,%d,'""4.0""',NULL);\n", architecture, __SIZEOF_SEM_T);
#endif
#endif
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

#if defined __s390x__
CheckTypeSize(sem_t,32, 6960, 12, 4.0, NULL, 32358, NULL)
#elif defined __x86_64__
CheckTypeSize(sem_t,32, 6960, 11, 4.0, NULL, 32358, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(sem_t,16, 6960, 10, 4.0, NULL, 32358, NULL)
#elif defined __powerpc64__
CheckTypeSize(sem_t,32, 6960, 9, 4.0, NULL, 32358, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(sem_t,16, 6960, 6, 4.0, NULL, 32358, NULL)
#elif defined __ia64__
CheckTypeSize(sem_t,32, 6960, 3, 4.0, NULL, 32358, NULL)
#elif defined __i386__
CheckTypeSize(sem_t,16, 6960, 2, 4.0, NULL, 32358, NULL)
#else
Msg("Find size of sem_t (6960)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,32358, NULL);\n",architecture,6960,0);
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
