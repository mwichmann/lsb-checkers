/*
 * Test of setjmp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in setjmp.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for setjmp(env) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for sigsetjmp(a,b) */
#endif

#ifdef __i386__
CheckTypeSize(__jmp_buf,24, 9089, 2)
#elif __ia64__
CheckTypeSize(__jmp_buf,24, 9089, 3)
#elif 1
CheckTypeSize(__jmp_buf,6, 9089, 1)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9089,0);
Msg("Find size of __jmp_buf (9089)\n");
#endif

#ifdef __ia64__
CheckTypeSize(jmp_buf,1, 6962, 3)
#elif __i386__
CheckTypeSize(jmp_buf,156, 6962, 2)
#elif 1
CheckTypeSize(jmp_buf,1, 6962, 1)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6962,0);
Msg("Find size of jmp_buf (6962)\n");
#endif

#ifdef __i386__
CheckTypeSize(sigjmp_buf,156, 6963, 2)
#elif __ia64__
CheckTypeSize(sigjmp_buf,704, 6963, 3)
#elif __powerpc__
CheckTypeSize(sigjmp_buf,364, 6963, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6963,0);
Msg("Find size of sigjmp_buf (6963)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct __jmp_buf_tag,156, 6961, 2)
#elif __ia64__
CheckTypeSize(struct __jmp_buf_tag,704, 6961, 3)
#elif __powerpc__
CheckTypeSize(struct __jmp_buf_tag,364, 6961, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6961,0);
Msg("Find size of __jmp_buf_tag (6961)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in setjmp.h\n",cnt);
return cnt;
#endif

}
