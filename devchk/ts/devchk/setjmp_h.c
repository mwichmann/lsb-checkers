/*
 * Test of setjmp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <signal.h>
#include "setjmp.h"



#ifdef TET_TEST
void setjmp_h()
{
#else
int setjmp_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in setjmp.h\n");
#endif

printf("Checking data structures in setjmp.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for setjmp(env) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for sigsetjmp(a,b) */
#endif

#if __i386__
CheckTypeSize(__jmp_buf,24, 9089, 2)
#elif __ia64__
CheckTypeSize(__jmp_buf,560, 9089, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(__jmp_buf,448, 9089, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(__jmp_buf,56, 9089, 10)
#elif __powerpc64__
CheckTypeSize(__jmp_buf,512, 9089, 9)
#elif __x86_64__
CheckTypeSize(__jmp_buf,64, 9089, 11)
#elif __s390x__
CheckTypeSize(__jmp_buf,144, 9089, 12)
#endif

#if __ia64__
CheckTypeSize(jmp_buf,704, 6962, 3)
#elif __i386__
CheckTypeSize(jmp_buf,156, 6962, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jmp_buf,592, 6962, 6)
#elif __powerpc64__
CheckTypeSize(jmp_buf,656, 6962, 9)
#elif __s390x__
CheckTypeSize(jmp_buf,280, 6962, 12)
#elif __s390__ && !__s390x__
CheckTypeSize(jmp_buf,188, 6962, 10)
#elif __x86_64__
CheckTypeSize(jmp_buf,200, 6962, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6962,0);
Msg("Find size of jmp_buf (6962)\n");
#endif

#if __i386__
CheckTypeSize(sigjmp_buf,156, 6963, 2)
#elif __ia64__
CheckTypeSize(sigjmp_buf,704, 6963, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sigjmp_buf,592, 6963, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(sigjmp_buf,188, 6963, 10)
#elif __powerpc64__
CheckTypeSize(sigjmp_buf,656, 6963, 9)
#elif __s390x__
CheckTypeSize(sigjmp_buf,280, 6963, 12)
#elif __x86_64__
CheckTypeSize(sigjmp_buf,200, 6963, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6963,0);
Msg("Find size of sigjmp_buf (6963)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6961,0);
Msg("Find size of __jmp_buf_tag (6961)\n");
#endif

extern int __sigsetjmp_db(jmp_buf, int);
CheckInterfacedef(__sigsetjmp,__sigsetjmp_db);
extern void longjmp_db(jmp_buf, int);
CheckInterfacedef(longjmp,longjmp_db);
extern void siglongjmp_db(sigjmp_buf, int);
CheckInterfacedef(siglongjmp,siglongjmp_db);
extern void _longjmp_db(jmp_buf, int);
CheckInterfacedef(_longjmp,_longjmp_db);
extern int _setjmp_db(jmp_buf);
CheckInterfacedef(_setjmp,_setjmp_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in setjmp.h\n\n",pcnt,cnt);
return cnt;
#endif

}
