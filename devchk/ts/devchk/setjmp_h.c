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

#if _LSB_DEFAULT_ARCH
/* No test for sigsetjmp(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for setjmp(env) */
#endif

#if __i386__
CheckArrayTypeSize(__jmp_buf,4,6, 9089, 2)
#endif

#if __ia64__
CheckArrayTypeSize(__jmp_buf,8,70, 10409, 3)
#endif

#if __powerpc__ && !__powerpc64__
CheckArrayTypeSize(__jmp_buf,4,58, 10410, 6)
#endif

#if __s390__
CheckArrayTypeSize(__jmp_buf,4,14, 10411, 10)
#elif __powerpc__ && !__powerpc64__
CheckArrayTypeSize(__jmp_buf,4,58, 10411, 6)
#elif __powerpc64__
CheckArrayTypeSize(__jmp_buf,4,80, 10411, 9)
#elif __i386__
CheckArrayTypeSize(__jmp_buf,4,0, 10411, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10411,0);
Msg("Find size of __jmp_buf (10411)\n");
#endif

#if __ia64__
CheckArrayTypeSize(jmp_buf,1,704, 6962, 3)
#elif __i386__
CheckArrayTypeSize(jmp_buf,1,156, 6962, 2)
#elif __powerpc__ && !__powerpc64__
CheckArrayTypeSize(jmp_buf,1,188, 6962, 6)
#elif __powerpc64__
CheckArrayTypeSize(jmp_buf,1,456, 6962, 9)
#elif 1
CheckArrayTypeSize(jmp_buf,1,1, 6962, 1)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6962,0);
Msg("Find size of jmp_buf (6962)\n");
#endif

#if __i386__
CheckTypeSize(sigjmp_buf,156, 6963, 2)
#elif __ia64__
CheckTypeSize(sigjmp_buf,704, 6963, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sigjmp_buf,364, 6963, 6)
#elif __s390__
CheckTypeSize(sigjmp_buf,188, 6963, 10)
#elif __powerpc64__
CheckTypeSize(sigjmp_buf,456, 6963, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6963,0);
Msg("Find size of sigjmp_buf (6963)\n");
#endif

#if __i386__
CheckTypeSize(struct __jmp_buf_tag,156, 6961, 2)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,24,2,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,2,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,2,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,24,2,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,2,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,28,2,34041)
#elif 1
CheckTypeSize(struct __jmp_buf_tag,1, 6961, 1)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,1,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,560,1,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,1,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,568,1,34041)
#elif __ia64__
CheckTypeSize(struct __jmp_buf_tag,704, 6961, 3)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,24,3,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,3,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,0,3,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,560,3,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,0,3,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,568,3,34041)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct __jmp_buf_tag,364, 6961, 6)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,24,6,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,6,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,0,6,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,232,6,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,0,6,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,236,6,34041)
#elif __s390__
CheckTypeSize(struct __jmp_buf_tag,188, 6961, 10)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,56,10,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,10,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,0,10,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,56,10,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,0,10,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,60,10,34041)
#elif __powerpc64__
CheckTypeSize(struct __jmp_buf_tag,456, 6961, 9)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,0,9,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,320,9,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,0,9,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,328,9,34041)
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
