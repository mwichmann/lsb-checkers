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
/* No test for setjmp(env) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for sigsetjmp(a,b) */
#endif

#if __i386__
CheckTypeSize(__jmp_buf,24, 9089, 2)
#endif

#if __ia64__
CheckTypeSize(__jmp_buf,560, 10409, 3)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(__jmp_buf,232, 10410, 6)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(__jmp_buf,56, 10411, 10)
#endif

#if __powerpc64__
CheckTypeSize(__jmp_buf,320, 10504, 9)
#endif

#if __ia64__
CheckTypeSize(jmp_buf,704, 6962, 3)
#elif __i386__
CheckTypeSize(jmp_buf,156, 6962, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jmp_buf,364, 6962, 6)
#elif __powerpc64__
CheckTypeSize(jmp_buf,456, 6962, 9)
#elif __not_def__
CheckTypeSize(jmp_buf,1, 6962, 8)
#elif __s390x__
CheckTypeSize(jmp_buf,280, 6962, 12)
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
#elif __s390__ && !__s390x__
CheckTypeSize(sigjmp_buf,188, 6963, 10)
#elif __powerpc64__
CheckTypeSize(sigjmp_buf,456, 6963, 9)
#elif __s390x__
CheckTypeSize(sigjmp_buf,280, 6963, 12)
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
#elif __ia64__
CheckTypeSize(struct __jmp_buf_tag,704, 6961, 3)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,560,3,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,3,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,3,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,560,3,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,3,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,568,3,34041)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct __jmp_buf_tag,364, 6961, 6)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,232,6,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,6,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,6,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,232,6,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,6,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,236,6,34041)
#elif __s390__ && !__s390x__
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
#elif __not_def__
CheckTypeSize(struct __jmp_buf_tag,280, 6961, 8)
Msg("Missing member data for __jmp_buf_tag on None\n");
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,8,34039)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,0,8,34040)
CheckOffset(struct __jmp_buf_tag,__saved_mask,0,8,34041)
#elif __s390x__
CheckTypeSize(struct __jmp_buf_tag,280, 6961, 12)
Msg("Missing member data for __jmp_buf_tag on S390X\n");
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,12,34039)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,0,12,34040)
CheckOffset(struct __jmp_buf_tag,__saved_mask,0,12,34041)
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
