/*
 * Test of sys/shm.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/shm.h"



#ifdef TET_TEST
void sys_shm_h()
{
#else
int sys_shm_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/shm.h\n");
#endif

printf("Checking data structures in sys/shm.h\n");
#if defined __powerpc64__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(__getpagesize()),1681,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(__getpagesize()),1681,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(1024*1024),1681,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#elif defined __i386__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(__getpagesize()),1681,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(__getpagesize()),1681,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(__getpagesize()),1681,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(__getpagesize()),1681,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#else
Msg( "No definition for SHMLBA (1681, int) in db\n");
#ifdef SHMLBA
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1681,%d,'""1.3""',NULL);\n", architecture, SHMLBA);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef SHM_R
	CompareConstant(SHM_R,0400,3467,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: SHM_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHM_W
	CompareConstant(SHM_W,0200,3468,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: SHM_W\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHM_RDONLY
	CompareConstant(SHM_RDONLY,010000,3469,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SHM_RDONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHM_RND
	CompareConstant(SHM_RND,020000,3470,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SHM_RND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHM_REMAP
	CompareConstant(SHM_REMAP,040000,3471,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: SHM_REMAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHM_LOCK
	CompareConstant(SHM_LOCK,11,3472,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: SHM_LOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHM_UNLOCK
	CompareConstant(SHM_UNLOCK,12,3473,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: SHM_UNLOCK\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(shmatt_t,4, 10212, 2, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(shmatt_t,4, 10212, 6, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(shmatt_t,4, 10212, 10, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(shmatt_t,8, 10212, 9, 2.0, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(shmatt_t,8, 10212, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(shmatt_t,8, 10212, 11, 2.0, NULL, 9, NULL)
#endif

#if defined __i386__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __ia64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#endif

#if !defined__ia64__   /* XXX hand-edit */
extern int __getpagesize_db(void);
CheckInterfacedef(__getpagesize,__getpagesize_db);
#endif
extern void * shmat_db(int, const void *, int);
CheckInterfacedef(shmat,shmat_db);
extern int shmctl_db(int, int, struct shmid_ds *);
CheckInterfacedef(shmctl,shmctl_db);
extern int shmdt_db(const void *);
CheckInterfacedef(shmdt,shmdt_db);
extern int shmget_db(key_t, size_t, int);
CheckInterfacedef(shmget,shmget_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/shm.h\n\n",pcnt,cnt);
return cnt;
#endif

}
