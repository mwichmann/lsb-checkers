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
CheckTypeSize(__jmp_buf,56, 9089, 1)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9089,0);
Msg("Find size of __jmp_buf (9089)\n");
#endif

#ifdef __ia64__
CheckTypeSize(jmp_buf,1, 6962, 3)
#elif __i386__
CheckTypeSize(jmp_buf,156, 6962, 2)
#elif 1
CheckTypeSize(jmp_buf,188, 6962, 1)
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
#elif __s390__
CheckTypeSize(sigjmp_buf,188, 6963, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6963,0);
Msg("Find size of sigjmp_buf (6963)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct __jmp_buf_tag,156, 6961, 2)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,2,34039)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,24,2,34040)
CheckOffset(struct __jmp_buf_tag,__saved_mask,28,2,34041)
#elif __ia64__
CheckTypeSize(struct __jmp_buf_tag,704, 6961, 3)
Msg("Missing member data for __jmp_buf_tag on IA64\n");
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,3,34039)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,0,3,34040)
CheckOffset(struct __jmp_buf_tag,__saved_mask,0,3,34041)
#elif __powerpc__
CheckTypeSize(struct __jmp_buf_tag,364, 6961, 6)
Msg("Missing member data for __jmp_buf_tag on PPC32\n");
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,6,34039)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,0,6,34040)
CheckOffset(struct __jmp_buf_tag,__saved_mask,0,6,34041)
#elif __s390__
CheckTypeSize(struct __jmp_buf_tag,188, 6961, 10)
Msg("Missing member data for __jmp_buf_tag on S390\n");
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,10,34039)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,0,10,34040)
CheckOffset(struct __jmp_buf_tag,__saved_mask,0,10,34041)
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
