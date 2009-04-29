/*
 * Test of glob.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "glob.h"



#ifdef TET_TEST
void glob_h()
{
#else
int glob_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in glob.h\n");
#endif

printf("Checking data structures in glob.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef GLOB_ERR
	CompareConstant(GLOB_ERR,(1<<0),853,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_MARK
	CompareConstant(GLOB_MARK,(1<<1),854,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_MARK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_NOSORT
	CompareConstant(GLOB_NOSORT,(1<<2),855,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_NOSORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_DOOFFS
	CompareConstant(GLOB_DOOFFS,(1<<3),856,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_DOOFFS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_NOCHECK
	CompareConstant(GLOB_NOCHECK,(1<<4),857,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_NOCHECK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_APPEND
	CompareConstant(GLOB_APPEND,(1<<5),858,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_APPEND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_NOESCAPE
	CompareConstant(GLOB_NOESCAPE,(1<<6),859,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_NOESCAPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_PERIOD
	CompareConstant(GLOB_PERIOD,(1<<7),860,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_PERIOD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_MAGCHAR
	CompareConstant(GLOB_MAGCHAR,(1<<8),861,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_MAGCHAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_ALTDIRFUNC
	CompareConstant(GLOB_ALTDIRFUNC,(1<<9),862,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_ALTDIRFUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_BRACE
	CompareConstant(GLOB_BRACE,(1<<10),863,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_BRACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_NOMAGIC
	CompareConstant(GLOB_NOMAGIC,(1<<11),864,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_NOMAGIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_TILDE
	CompareConstant(GLOB_TILDE,(1<<12),865,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_TILDE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_ONLYDIR
	CompareConstant(GLOB_ONLYDIR,(1<<13),866,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_ONLYDIR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_TILDE_CHECK
	CompareConstant(GLOB_TILDE_CHECK,(1<<14),867,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_TILDE_CHECK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_NOSPACE
	CompareConstant(GLOB_NOSPACE,1,869,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_NOSPACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_ABORTED
	CompareConstant(GLOB_ABORTED,2,870,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_ABORTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_NOMATCH
	CompareConstant(GLOB_NOMATCH,3,871,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_NOMATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLOB_NOSYS
	CompareConstant(GLOB_NOSYS,4,872,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: GLOB_NOSYS\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(glob_t,72, 9005, 12, 1.3, NULL, 8999, NULL)
#elif defined __x86_64__
CheckTypeSize(glob_t,72, 9005, 11, 2.0, NULL, 8999, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(glob_t,36, 9005, 10, 1.3, NULL, 8999, NULL)
#elif defined __powerpc64__
CheckTypeSize(glob_t,72, 9005, 9, 2.0, NULL, 8999, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(glob_t,36, 9005, 6, 1.2, NULL, 8999, NULL)
#elif defined __ia64__
CheckTypeSize(glob_t,72, 9005, 3, 1.3, NULL, 8999, NULL)
#elif defined __i386__
CheckTypeSize(glob_t,36, 9005, 2, 1.2, NULL, 8999, NULL)
#else
Msg("Find size of glob_t (9005)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8999,NULL);\n",architecture,9005,0);
#endif

#if defined __s390x__
CheckTypeSize(glob64_t,72, 9007, 12, 1.3, NULL, 9006, NULL)
#elif defined __x86_64__
CheckTypeSize(glob64_t,72, 9007, 11, 2.0, NULL, 9006, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(glob64_t,36, 9007, 10, 1.3, NULL, 9006, NULL)
#elif defined __powerpc64__
CheckTypeSize(glob64_t,72, 9007, 9, 2.0, NULL, 9006, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(glob64_t,36, 9007, 6, 1.2, NULL, 9006, NULL)
#elif defined __ia64__
CheckTypeSize(glob64_t,72, 9007, 3, 1.3, NULL, 9006, NULL)
#elif defined __i386__
CheckTypeSize(glob64_t,36, 9007, 2, 1.2, NULL, 9006, NULL)
#else
Msg("Find size of glob64_t (9007)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9006, NULL);\n",architecture,9007,0);
#endif

extern int glob_db(const char *, int, int(*fptr0)(const char *,int)
, glob_t *);
CheckInterfacedef(glob,glob_db);
extern int glob64_db(const char *, int, int(*fptr1)(const char *,int)
, glob64_t *);
CheckInterfacedef(glob64,glob64_db);
extern void globfree_db(glob_t *);
CheckInterfacedef(globfree,globfree_db);
extern void globfree64_db(glob64_t *);
CheckInterfacedef(globfree64,globfree64_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in glob.h\n\n",pcnt,cnt);
return cnt;
#endif

}
