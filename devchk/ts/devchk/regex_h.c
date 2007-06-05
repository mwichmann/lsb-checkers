/*
 * Test of regex.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in regex.h\n");
#endif

printf("Checking data structures in regex.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef REG_EXTENDED
	CompareConstant(REG_EXTENDED,1,1593,architecture)
#else
Msg( "Error: Constant not found: REG_EXTENDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_ICASE
	CompareConstant(REG_ICASE,(REG_EXTENDED<<1),1594,architecture)
#else
Msg( "Error: Constant not found: REG_ICASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NEWLINE
	CompareConstant(REG_NEWLINE,(REG_ICASE<<1),1595,architecture)
#else
Msg( "Error: Constant not found: REG_NEWLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NOSUB
	CompareConstant(REG_NOSUB,(REG_NEWLINE<<1),1596,architecture)
#else
Msg( "Error: Constant not found: REG_NOSUB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NOTBOL
	CompareConstant(REG_NOTBOL,1,1597,architecture)
#else
Msg( "Error: Constant not found: REG_NOTBOL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NOTEOL
	CompareConstant(REG_NOTEOL,(1<<1),1598,architecture)
#else
Msg( "Error: Constant not found: REG_NOTEOL\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(reg_syntax_t,4, 6941, 2)
#elif __ia64__
CheckTypeSize(reg_syntax_t,8, 6941, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(reg_syntax_t,4, 6941, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(reg_syntax_t,4, 6941, 10)
#elif __powerpc64__
CheckTypeSize(reg_syntax_t,8, 6941, 9)
#elif __s390x__
CheckTypeSize(reg_syntax_t,8, 6941, 12)
#elif __x86_64__
CheckTypeSize(reg_syntax_t,8, 6941, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6941,0);
Msg("Find size of reg_syntax_t (6941)\n");
#endif

#if 1
CheckTypeSize(reg_errcode_t,4, 9073, 1)
#endif

#if __i386__
CheckTypeSize(regex_t,32, 6945, 2)
#elif __ia64__
CheckTypeSize(regex_t,64, 6945, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(regex_t,32, 6945, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(regex_t,32, 6945, 10)
#elif __powerpc64__
CheckTypeSize(regex_t,64, 6945, 9)
#elif __s390x__
CheckTypeSize(regex_t,64, 6945, 12)
#elif __x86_64__
CheckTypeSize(regex_t,64, 6945, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6945,0);
Msg("Find size of regex_t (6945)\n");
#endif

#if __i386__
CheckTypeSize(regoff_t,4, 6946, 2)
#elif __ia64__
CheckTypeSize(regoff_t,4, 6946, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(regoff_t,4, 6946, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(regoff_t,4, 6946, 10)
#elif __powerpc64__
CheckTypeSize(regoff_t,4, 6946, 9)
#elif __s390x__
CheckTypeSize(regoff_t,4, 6946, 12)
#elif __x86_64__
CheckTypeSize(regoff_t,4, 6946, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6946,0);
Msg("Find size of regoff_t (6946)\n");
#endif

#if __i386__
CheckTypeSize(regmatch_t,8, 6949, 2)
#elif __ia64__
CheckTypeSize(regmatch_t,8, 6949, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(regmatch_t,8, 6949, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(regmatch_t,8, 6949, 10)
#elif __powerpc64__
CheckTypeSize(regmatch_t,8, 6949, 9)
#elif __s390x__
CheckTypeSize(regmatch_t,8, 6949, 12)
#elif __x86_64__
CheckTypeSize(regmatch_t,8, 6949, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6949,0);
Msg("Find size of regmatch_t (6949)\n");
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
