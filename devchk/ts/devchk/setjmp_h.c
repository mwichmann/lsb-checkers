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
CheckTypeSize(__jmp_buf,24, 9089, 2);
#endif

#if __ia64__
CheckTypeSize(__jmp_buf,560, 10409, 3);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(__jmp_buf,448, 10410, 6);
#endif

#if __s390__ && !__s390x__
CheckTypeSize(__jmp_buf,56, 10411, 10);
#endif

#if __powerpc64__
CheckTypeSize(__jmp_buf,512, 10504, 9);
#endif

#if __x86_64__
CheckTypeSize(__jmp_buf,64, 10772, 11);
#endif

#if __s390x__
CheckTypeSize(__jmp_buf,144, 10864, 12);
#endif

#if __ia64__
CheckTypeSize(jmp_buf,704, 6962, 3);
#elif __i386__
CheckTypeSize(jmp_buf,156, 6962, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(jmp_buf,592, 6962, 6);
#elif __powerpc64__
CheckTypeSize(jmp_buf,656, 6962, 9);
#elif __s390x__
CheckTypeSize(jmp_buf,280, 6962, 12);
#elif __s390__ && !__s390x__
CheckTypeSize(jmp_buf,188, 6962, 10);
#elif __x86_64__
CheckTypeSize(jmp_buf,200, 6962, 11);
#elif 1
CheckTypeSize(jmp_buf,0, 6962, 1);
#endif

#if __i386__
CheckTypeSize(sigjmp_buf,156, 6963, 2);
#elif __ia64__
CheckTypeSize(sigjmp_buf,704, 6963, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sigjmp_buf,592, 6963, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(sigjmp_buf,188, 6963, 10);
#elif __powerpc64__
CheckTypeSize(sigjmp_buf,656, 6963, 9);
#elif __s390x__
CheckTypeSize(sigjmp_buf,280, 6963, 12);
#elif __x86_64__
CheckTypeSize(sigjmp_buf,200, 6963, 11);
#elif 1
CheckTypeSize(sigjmp_buf,0, 6963, 1);
#endif

#if __i386__
CheckTypeSize(struct __jmp_buf_tag,156, 6961, 2);
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,24,2,34039);
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,2,34039);
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,2,34040);
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,24,2,34040);
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,2,34041);
CheckOffset(struct __jmp_buf_tag,__saved_mask,28,2,34041);
#elif __ia64__
CheckTypeSize(struct __jmp_buf_tag,704, 6961, 3);
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,560,3,34039);
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,3,34039);
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,3,34040);
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,560,3,34040);
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,3,34041);
CheckOffset(struct __jmp_buf_tag,__saved_mask,568,3,34041);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct __jmp_buf_tag,592, 6961, 6);
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,448,6,34039);
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,6,34039);
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,6,34040);
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,448,6,34040);
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,6,34041);
CheckOffset(struct __jmp_buf_tag,__saved_mask,452,6,34041);
#elif __s390__ && !__s390x__
CheckTypeSize(struct __jmp_buf_tag,188, 6961, 10);
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,56,10,34039);
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,10,34039);
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,10,34040);
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,56,10,34040);
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,10,34041);
CheckOffset(struct __jmp_buf_tag,__saved_mask,60,10,34041);
#elif __powerpc64__
CheckTypeSize(struct __jmp_buf_tag,656, 6961, 9);
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,512,9,34039);
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,9,34039);
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,9,34040);
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,512,9,34040);
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,9,34041);
CheckOffset(struct __jmp_buf_tag,__saved_mask,520,9,34041);
#elif __s390x__
CheckTypeSize(struct __jmp_buf_tag,280, 6961, 12);
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,144,12,34039);
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,12,34039);
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,12,34040);
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,144,12,34040);
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,12,34041);
CheckOffset(struct __jmp_buf_tag,__saved_mask,152,12,34041);
#elif __x86_64__
CheckTypeSize(struct __jmp_buf_tag,200, 6961, 11);
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,64,11,34039);
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,11,34039);
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,11,34040);
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,64,11,34040);
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,11,34041);
CheckOffset(struct __jmp_buf_tag,__saved_mask,72,11,34041);
#elif 1
CheckTypeSize(struct __jmp_buf_tag,0, 6961, 1);
Msg("Missing member data for __jmp_buf_tag on All\n");
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,1,34039);
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,0,1,34040);
CheckOffset(struct __jmp_buf_tag,__saved_mask,0,1,34041);
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
