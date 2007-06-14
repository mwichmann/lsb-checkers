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
CheckTypeSize(__jmp_buf,24, 9089, 2, 2.0, NULL, 10520, NULL)
#elif __ia64__
CheckTypeSize(__jmp_buf,560, 9089, 3, 2.0, NULL, 10522, '(aligned (16))')
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(__jmp_buf,448, 9089, 6, 2.0, NULL, 11027, '(aligned (16))')
#elif __s390__ && !__s390x__
CheckTypeSize(__jmp_buf,56, 9089, 10, 2.0, NULL, 10524, NULL)
#elif __powerpc64__
CheckTypeSize(__jmp_buf,512, 9089, 9, 2.0, NULL, 11026, '(aligned (16))')
#elif __x86_64__
CheckTypeSize(__jmp_buf,64, 9089, 11, 2.0, NULL, 10771, NULL)
#elif __s390x__
CheckTypeSize(__jmp_buf,144, 9089, 12, 2.0, NULL, 10947, NULL)
#endif

#if __ia64__
CheckTypeSize(jmp_buf,704, 6962, 3, 1.3, NULL, 10231, NULL)
#elif __i386__
CheckTypeSize(jmp_buf,156, 6962, 2, 1.2, NULL, 10231, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jmp_buf,592, 6962, 6, 1.2, NULL, 10231, NULL)
#elif __powerpc64__
CheckTypeSize(jmp_buf,656, 6962, 9, 2.0, NULL, 10231, NULL)
#elif __s390x__
CheckTypeSize(jmp_buf,280, 6962, 12, 1.3, NULL, 10231, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(jmp_buf,188, 6962, 10, 1.3, NULL, 10231, NULL)
#elif __x86_64__
CheckTypeSize(jmp_buf,200, 6962, 11, 2.0, NULL, 10231, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10231,NULL);\n",architecture,6962,0);
Msg("Find size of jmp_buf (6962)\n");
#endif

#if __i386__
CheckTypeSize(sigjmp_buf,156, 6963, 2, 1.0, NULL, 6962, NULL)
#elif __ia64__
CheckTypeSize(sigjmp_buf,704, 6963, 3, 1.3, NULL, 6962, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sigjmp_buf,592, 6963, 6, 1.2, NULL, 6962, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(sigjmp_buf,188, 6963, 10, 1.3, NULL, 6962, NULL)
#elif __powerpc64__
CheckTypeSize(sigjmp_buf,656, 6963, 9, 2.0, NULL, 6962, NULL)
#elif __s390x__
CheckTypeSize(sigjmp_buf,280, 6963, 12, 1.3, NULL, 6962, NULL)
#elif __x86_64__
CheckTypeSize(sigjmp_buf,200, 6963, 11, 2.0, NULL, 6962, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6962,NULL);\n",architecture,6963,0);
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
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,6961,0);
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
