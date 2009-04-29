/*
 * Test of regex.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "regex.h"



#ifdef TET_TEST
void regex_h()
{
#else
int regex_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in regex.h\n");
#endif

printf("Checking data structures in regex.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef RE_DUP_MAX
	CompareConstant(RE_DUP_MAX,(0x7fff),1592,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: RE_DUP_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_EXTENDED
	CompareConstant(REG_EXTENDED,1,1593,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: REG_EXTENDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_ICASE
	CompareConstant(REG_ICASE,(REG_EXTENDED<<1),1594,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: REG_ICASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NEWLINE
	CompareConstant(REG_NEWLINE,(REG_ICASE<<1),1595,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: REG_NEWLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NOSUB
	CompareConstant(REG_NOSUB,(REG_NEWLINE<<1),1596,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: REG_NOSUB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NOTBOL
	CompareConstant(REG_NOTBOL,1,1597,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: REG_NOTBOL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NOTEOL
	CompareConstant(REG_NOTEOL,(1<<1),1598,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: REG_NOTEOL\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(reg_syntax_t,8, 6941, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(reg_syntax_t,8, 6941, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(reg_syntax_t,4, 6941, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(reg_syntax_t,8, 6941, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(reg_syntax_t,4, 6941, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(reg_syntax_t,8, 6941, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(reg_syntax_t,4, 6941, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of reg_syntax_t (6941)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,6941,0);
#endif

#if 1
CheckTypeSize(reg_errcode_t,4, 9073, 1, 2.1, NULL, 9072, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct re_pattern_buffer,64, 6944, 12, , NULL, 0, NULL)
CheckMemberSize(struct re_pattern_buffer,allocated,8,12,30067)
CheckOffset(struct re_pattern_buffer,allocated,8,12,30067)
CheckMemberSize(struct re_pattern_buffer,used,8,12,30068)
CheckOffset(struct re_pattern_buffer,used,16,12,30068)
CheckMemberSize(struct re_pattern_buffer,syntax,8,12,30069)
CheckOffset(struct re_pattern_buffer,syntax,24,12,30069)
CheckMemberSize(struct re_pattern_buffer,fastmap,8,12,30070)
CheckOffset(struct re_pattern_buffer,fastmap,32,12,30070)
CheckMemberSize(struct re_pattern_buffer,translate,8,12,30071)
CheckOffset(struct re_pattern_buffer,translate,40,12,30071)
CheckMemberSize(struct re_pattern_buffer,re_nsub,8,12,30072)
CheckOffset(struct re_pattern_buffer,re_nsub,48,12,30072)
#elif defined __x86_64__
CheckTypeSize(struct re_pattern_buffer,64, 6944, 11, , NULL, 0, NULL)
CheckMemberSize(struct re_pattern_buffer,allocated,8,11,30067)
CheckOffset(struct re_pattern_buffer,allocated,8,11,30067)
CheckMemberSize(struct re_pattern_buffer,used,8,11,30068)
CheckOffset(struct re_pattern_buffer,used,16,11,30068)
CheckMemberSize(struct re_pattern_buffer,syntax,8,11,30069)
CheckOffset(struct re_pattern_buffer,syntax,24,11,30069)
CheckMemberSize(struct re_pattern_buffer,fastmap,8,11,30070)
CheckOffset(struct re_pattern_buffer,fastmap,32,11,30070)
CheckMemberSize(struct re_pattern_buffer,translate,8,11,30071)
CheckOffset(struct re_pattern_buffer,translate,40,11,30071)
CheckMemberSize(struct re_pattern_buffer,re_nsub,8,11,30072)
CheckOffset(struct re_pattern_buffer,re_nsub,48,11,30072)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct re_pattern_buffer,32, 6944, 10, , NULL, 0, NULL)
CheckMemberSize(struct re_pattern_buffer,allocated,4,10,30067)
CheckOffset(struct re_pattern_buffer,allocated,4,10,30067)
CheckMemberSize(struct re_pattern_buffer,used,4,10,30068)
CheckOffset(struct re_pattern_buffer,used,8,10,30068)
CheckMemberSize(struct re_pattern_buffer,syntax,4,10,30069)
CheckOffset(struct re_pattern_buffer,syntax,12,10,30069)
CheckMemberSize(struct re_pattern_buffer,fastmap,4,10,30070)
CheckOffset(struct re_pattern_buffer,fastmap,16,10,30070)
CheckMemberSize(struct re_pattern_buffer,translate,4,10,30071)
CheckOffset(struct re_pattern_buffer,translate,20,10,30071)
CheckMemberSize(struct re_pattern_buffer,re_nsub,4,10,30072)
CheckOffset(struct re_pattern_buffer,re_nsub,24,10,30072)
#elif defined __powerpc64__
CheckTypeSize(struct re_pattern_buffer,64, 6944, 9, , NULL, 0, NULL)
CheckMemberSize(struct re_pattern_buffer,allocated,8,9,30067)
CheckOffset(struct re_pattern_buffer,allocated,8,9,30067)
CheckMemberSize(struct re_pattern_buffer,used,8,9,30068)
CheckOffset(struct re_pattern_buffer,used,16,9,30068)
CheckMemberSize(struct re_pattern_buffer,syntax,8,9,30069)
CheckOffset(struct re_pattern_buffer,syntax,24,9,30069)
CheckMemberSize(struct re_pattern_buffer,fastmap,8,9,30070)
CheckOffset(struct re_pattern_buffer,fastmap,32,9,30070)
CheckMemberSize(struct re_pattern_buffer,translate,8,9,30071)
CheckOffset(struct re_pattern_buffer,translate,40,9,30071)
CheckMemberSize(struct re_pattern_buffer,re_nsub,8,9,30072)
CheckOffset(struct re_pattern_buffer,re_nsub,48,9,30072)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct re_pattern_buffer,32, 6944, 6, , NULL, 0, NULL)
CheckMemberSize(struct re_pattern_buffer,allocated,4,6,30067)
CheckOffset(struct re_pattern_buffer,allocated,4,6,30067)
CheckMemberSize(struct re_pattern_buffer,used,4,6,30068)
CheckOffset(struct re_pattern_buffer,used,8,6,30068)
CheckMemberSize(struct re_pattern_buffer,syntax,4,6,30069)
CheckOffset(struct re_pattern_buffer,syntax,12,6,30069)
CheckMemberSize(struct re_pattern_buffer,fastmap,4,6,30070)
CheckOffset(struct re_pattern_buffer,fastmap,16,6,30070)
CheckMemberSize(struct re_pattern_buffer,translate,4,6,30071)
CheckOffset(struct re_pattern_buffer,translate,20,6,30071)
CheckMemberSize(struct re_pattern_buffer,re_nsub,4,6,30072)
CheckOffset(struct re_pattern_buffer,re_nsub,24,6,30072)
#elif defined __ia64__
CheckTypeSize(struct re_pattern_buffer,64, 6944, 3, , NULL, 0, NULL)
CheckMemberSize(struct re_pattern_buffer,allocated,8,3,30067)
CheckOffset(struct re_pattern_buffer,allocated,8,3,30067)
CheckMemberSize(struct re_pattern_buffer,used,8,3,30068)
CheckOffset(struct re_pattern_buffer,used,16,3,30068)
CheckMemberSize(struct re_pattern_buffer,syntax,8,3,30069)
CheckOffset(struct re_pattern_buffer,syntax,24,3,30069)
CheckMemberSize(struct re_pattern_buffer,fastmap,8,3,30070)
CheckOffset(struct re_pattern_buffer,fastmap,32,3,30070)
CheckMemberSize(struct re_pattern_buffer,translate,8,3,30071)
CheckOffset(struct re_pattern_buffer,translate,40,3,30071)
CheckMemberSize(struct re_pattern_buffer,re_nsub,8,3,30072)
CheckOffset(struct re_pattern_buffer,re_nsub,48,3,30072)
#elif defined __i386__
CheckTypeSize(struct re_pattern_buffer,32, 6944, 2, , NULL, 0, NULL)
CheckMemberSize(struct re_pattern_buffer,buffer,4,2,30066)
CheckOffset(struct re_pattern_buffer,buffer,0,2,30066)
CheckMemberSize(struct re_pattern_buffer,allocated,4,2,30067)
CheckOffset(struct re_pattern_buffer,allocated,4,2,30067)
CheckMemberSize(struct re_pattern_buffer,used,4,2,30068)
CheckOffset(struct re_pattern_buffer,used,8,2,30068)
CheckMemberSize(struct re_pattern_buffer,syntax,4,2,30069)
CheckOffset(struct re_pattern_buffer,syntax,12,2,30069)
CheckMemberSize(struct re_pattern_buffer,fastmap,4,2,30070)
CheckOffset(struct re_pattern_buffer,fastmap,16,2,30070)
CheckMemberSize(struct re_pattern_buffer,translate,4,2,30071)
CheckOffset(struct re_pattern_buffer,translate,20,2,30071)
CheckMemberSize(struct re_pattern_buffer,re_nsub,4,2,30072)
CheckOffset(struct re_pattern_buffer,re_nsub,24,2,30072)
#elif 1
CheckTypeSize(struct re_pattern_buffer,0, 6944, 1, , NULL, 0, NULL)
CheckBitField(struct re_pattern_buffer,can_be_null,1,1,30073)
CheckBitField(struct re_pattern_buffer,regs_allocated,2,1,30074)
CheckBitField(struct re_pattern_buffer,fastmap_accurate,1,1,30075)
CheckBitField(struct re_pattern_buffer,no_sub,1,1,30076)
CheckBitField(struct re_pattern_buffer,not_bol,1,1,30077)
CheckBitField(struct re_pattern_buffer,not_eol,1,1,30078)
CheckBitField(struct re_pattern_buffer,newline_anchor,1,1,30079)
#endif

#if defined __s390x__
CheckTypeSize(regex_t,64, 6945, 12, 1.3, NULL, 6944, NULL)
#elif defined __x86_64__
CheckTypeSize(regex_t,64, 6945, 11, 2.0, NULL, 6944, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(regex_t,32, 6945, 10, 1.3, NULL, 6944, NULL)
#elif defined __powerpc64__
CheckTypeSize(regex_t,64, 6945, 9, 2.0, NULL, 6944, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(regex_t,32, 6945, 6, 1.2, NULL, 6944, NULL)
#elif defined __ia64__
CheckTypeSize(regex_t,64, 6945, 3, 1.3, NULL, 6944, NULL)
#elif defined __i386__
CheckTypeSize(regex_t,32, 6945, 2, 1.2, NULL, 6944, NULL)
#else
Msg("Find size of regex_t (6945)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,6944,NULL);\n",architecture,6945,0);
#endif

#if defined __s390x__
CheckTypeSize(regoff_t,4, 6946, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(regoff_t,4, 6946, 11, 2.0, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(regoff_t,4, 6946, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(regoff_t,4, 6946, 9, 2.0, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(regoff_t,4, 6946, 6, 1.2, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(regoff_t,4, 6946, 3, 1.3, NULL, 6, NULL)
#elif defined __i386__
CheckTypeSize(regoff_t,4, 6946, 2, 1.2, NULL, 6, NULL)
#else
Msg("Find size of regoff_t (6946)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,6,NULL);\n",architecture,6946,0);
#endif

#if defined __s390x__
CheckTypeSize(regmatch_t,8, 6949, 12, 1.3, NULL, 6948, NULL)
#elif defined __x86_64__
CheckTypeSize(regmatch_t,8, 6949, 11, 2.0, NULL, 6948, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(regmatch_t,8, 6949, 10, 1.3, NULL, 6948, NULL)
#elif defined __powerpc64__
CheckTypeSize(regmatch_t,8, 6949, 9, 2.0, NULL, 6948, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(regmatch_t,8, 6949, 6, 1.2, NULL, 6948, NULL)
#elif defined __ia64__
CheckTypeSize(regmatch_t,8, 6949, 3, 1.3, NULL, 6948, NULL)
#elif defined __i386__
CheckTypeSize(regmatch_t,8, 6949, 2, 1.0, NULL, 6948, NULL)
#else
Msg("Find size of regmatch_t (6949)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,6948, NULL);\n",architecture,6949,0);
#endif

extern int regcomp_db(regex_t *, const char *, int);
CheckInterfacedef(regcomp,regcomp_db);
extern size_t regerror_db(int, const regex_t *, char *, size_t);
CheckInterfacedef(regerror,regerror_db);
extern int regexec_db(const regex_t *, const char *, size_t, regmatch_t[], int);
CheckInterfacedef(regexec,regexec_db);
extern void regfree_db(regex_t *);
CheckInterfacedef(regfree,regfree_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in regex.h\n\n",pcnt,cnt);
return cnt;
#endif

}
