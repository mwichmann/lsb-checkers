/*
 * Test of setjmp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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

#if defined __s390x__
CheckTypeSize(__jmp_buf,144, 9089, 12, 2.0, NULL, 10947, NULL)
#elif defined __x86_64__
CheckTypeSize(__jmp_buf,64, 9089, 11, 2.0, NULL, 10771, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__jmp_buf,56, 9089, 10, 2.0, NULL, 10524, NULL)
#elif defined __powerpc64__
CheckTypeSize(__jmp_buf,512, 9089, 9, 2.0, NULL, 11026, '(aligned (16))')
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__jmp_buf,448, 9089, 6, 2.0, NULL, 11027, '(aligned (16))')
#elif defined __ia64__
CheckTypeSize(__jmp_buf,560, 9089, 3, 2.0, NULL, 10522, '(aligned (16))')
#elif defined __i386__
CheckTypeSize(__jmp_buf,24, 9089, 2, 2.0, NULL, 10520, NULL)
#endif

#if defined __s390x__
CheckTypeSize(jmp_buf,280, 6962, 12, 1.3, NULL, 10231, NULL)
#elif defined __x86_64__
CheckTypeSize(jmp_buf,200, 6962, 11, 2.0, NULL, 10231, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(jmp_buf,188, 6962, 10, 1.3, NULL, 10231, NULL)
#elif defined __powerpc64__
CheckTypeSize(jmp_buf,656, 6962, 9, 2.0, NULL, 10231, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(jmp_buf,592, 6962, 6, 1.2, NULL, 10231, NULL)
#elif defined __ia64__
CheckTypeSize(jmp_buf,704, 6962, 3, 1.3, NULL, 10231, NULL)
#elif defined __i386__
CheckTypeSize(jmp_buf,156, 6962, 2, 1.2, NULL, 10231, NULL)
#else
Msg("Find size of jmp_buf (6962)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,10231,NULL);\n",architecture,6962,0);
#endif

#if defined __s390x__
CheckTypeSize(sigjmp_buf,280, 6963, 12, 1.3, NULL, 6962, NULL)
#elif defined __x86_64__
CheckTypeSize(sigjmp_buf,200, 6963, 11, 2.0, NULL, 6962, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(sigjmp_buf,188, 6963, 10, 1.3, NULL, 6962, NULL)
#elif defined __powerpc64__
CheckTypeSize(sigjmp_buf,656, 6963, 9, 2.0, NULL, 6962, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(sigjmp_buf,592, 6963, 6, 1.2, NULL, 6962, NULL)
#elif defined __ia64__
CheckTypeSize(sigjmp_buf,704, 6963, 3, 1.3, NULL, 6962, NULL)
#elif defined __i386__
CheckTypeSize(sigjmp_buf,156, 6963, 2, 1.0, NULL, 6962, NULL)
#else
Msg("Find size of sigjmp_buf (6963)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,6962,NULL);\n",architecture,6963,0);
#endif

#if defined __s390x__
CheckTypeSize(struct __jmp_buf_tag,280, 6961, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,144,12,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,12,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,12,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,144,12,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,12,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,152,12,34041)
#elif defined __x86_64__
CheckTypeSize(struct __jmp_buf_tag,200, 6961, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,64,11,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,11,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,11,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,64,11,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,11,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,72,11,34041)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct __jmp_buf_tag,188, 6961, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,56,10,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,10,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,10,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,56,10,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,10,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,60,10,34041)
#elif defined __powerpc64__
CheckTypeSize(struct __jmp_buf_tag,656, 6961, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,512,9,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,9,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,9,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,512,9,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,9,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,520,9,34041)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct __jmp_buf_tag,592, 6961, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,448,6,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,6,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,6,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,448,6,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,6,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,452,6,34041)
#elif defined __ia64__
CheckTypeSize(struct __jmp_buf_tag,704, 6961, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,560,3,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,3,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,3,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,560,3,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,3,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,568,3,34041)
#elif defined __i386__
CheckTypeSize(struct __jmp_buf_tag,156, 6961, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct __jmp_buf_tag,__jmpbuf,24,2,34039)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0,2,34039)
CheckMemberSize(struct __jmp_buf_tag,__mask_was_saved,4,2,34040)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,24,2,34040)
CheckMemberSize(struct __jmp_buf_tag,__saved_mask,128,2,34041)
CheckOffset(struct __jmp_buf_tag,__saved_mask,28,2,34041)
#else
Msg("Find size of __jmp_buf_tag (6961)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,6961,0);
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
