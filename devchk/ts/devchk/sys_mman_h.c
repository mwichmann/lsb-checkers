/*
 * Test of sys/mman.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "sys/mman.h"



#ifdef TET_TEST
void sys_mman_h()
{
#else
int sys_mman_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/mman.h\n");
#endif

printf("Checking data structures in sys/mman.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef POSIX_MADV_NORMAL
	CompareConstant(POSIX_MADV_NORMAL,0,15583,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_MADV_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_MADV_RANDOM
	CompareConstant(POSIX_MADV_RANDOM,1,15584,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_MADV_RANDOM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_MADV_SEQUENTIAL
	CompareConstant(POSIX_MADV_SEQUENTIAL,2,15585,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_MADV_SEQUENTIAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_MADV_WILLNEED
	CompareConstant(POSIX_MADV_WILLNEED,3,15586,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_MADV_WILLNEED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_MADV_DONTNEED
	CompareConstant(POSIX_MADV_DONTNEED,4,15587,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_MADV_DONTNEED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAP_FAILED
	CompareConstant(MAP_FAILED,((void*)-1),1747,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MAP_FAILED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MREMAP_MAYMOVE
	CompareConstant(MREMAP_MAYMOVE,1,3501,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MREMAP_MAYMOVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MREMAP_FIXED
	CompareConstant(MREMAP_FIXED,2,3502,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MREMAP_FIXED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PROT_READ
	CompareConstant(PROT_READ,0x1,3503,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PROT_READ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PROT_WRITE
	CompareConstant(PROT_WRITE,0x2,3504,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PROT_WRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PROT_EXEC
	CompareConstant(PROT_EXEC,0x4,3505,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PROT_EXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PROT_NONE
	CompareConstant(PROT_NONE,0x0,3506,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PROT_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAP_SHARED
	CompareConstant(MAP_SHARED,0x01,3507,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: MAP_SHARED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAP_PRIVATE
	CompareConstant(MAP_PRIVATE,0x02,3508,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: MAP_PRIVATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAP_FIXED
	CompareConstant(MAP_FIXED,0x10,3509,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MAP_FIXED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAP_ANONYMOUS
	CompareConstant(MAP_ANONYMOUS,0x20,3510,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MAP_ANONYMOUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MS_ASYNC
	CompareConstant(MS_ASYNC,1,3516,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MS_ASYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MS_INVALIDATE
	CompareConstant(MS_INVALIDATE,2,3517,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MS_INVALIDATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MS_SYNC
	CompareConstant(MS_SYNC,4,3518,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MS_SYNC\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,8192,3519,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,8192,3519,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,1,3519,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#elif defined __i386__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,1,3519,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,1,3519,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,1,3519,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,1,3519,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#else
Msg( "No definition for MCL_CURRENT (3519, int) in db\n");
#ifdef MCL_CURRENT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3519,%d,'""1.3""',NULL);\n", architecture, MCL_CURRENT);
#endif
#endif
#if defined __powerpc64__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,16384,3520,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,16384,3520,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,2,3520,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,2,3520,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,2,3520,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,2,3520,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,2,3520,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#else
Msg( "No definition for MCL_FUTURE (3520, int) in db\n");
#ifdef MCL_FUTURE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3520,%d,'""1.3""',NULL);\n", architecture, MCL_FUTURE);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef MAP_ANON
	CompareConstant(MAP_ANON,MAP_ANONYMOUS,3526,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MAP_ANON\n");
cnt++;
#endif

#endif

extern void * mremap_db(void *, size_t, size_t, int, ...);
CheckInterfacedef(mremap,mremap_db);
extern int posix_madvise_db(void *, size_t, int);
CheckInterfacedef(posix_madvise,posix_madvise_db);
extern int msync_db(void *, size_t, int);
CheckInterfacedef(msync,msync_db);
extern int mlock_db(const void *, size_t);
CheckInterfacedef(mlock,mlock_db);
extern int mlockall_db(int);
CheckInterfacedef(mlockall,mlockall_db);
extern void * mmap_db(void *, size_t, int, int, int, off_t);
CheckInterfacedef(mmap,mmap_db);
extern int mprotect_db(void *, size_t, int);
CheckInterfacedef(mprotect,mprotect_db);
extern int munlock_db(const void *, size_t);
CheckInterfacedef(munlock,munlock_db);
extern int munlockall_db(void);
CheckInterfacedef(munlockall,munlockall_db);
extern int munmap_db(void *, size_t);
CheckInterfacedef(munmap,munmap_db);
extern void * mmap64_db(void *, size_t, int, int, int, off64_t);
CheckInterfacedef(mmap64,mmap64_db);
extern int shm_open_db(const char *, int, mode_t);
CheckInterfacedef(shm_open,shm_open_db);
extern int shm_unlink_db(const char *);
CheckInterfacedef(shm_unlink,shm_unlink_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/mman.h\n\n",pcnt,cnt);
return cnt;
#endif

}
