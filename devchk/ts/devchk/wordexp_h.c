/*
 * Test of wordexp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "wordexp.h"



#ifdef TET_TEST
void wordexp_h()
{
#else
int wordexp_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in wordexp.h\n");
#endif

printf("Checking data structures in wordexp.h\n");
#if __i386__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,1,30221);
CheckEnum("WRDE_APPEND",WRDE_APPEND,2,30222);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,4,30223);
CheckEnum("WRDE_REUSE",WRDE_REUSE,8,30224);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,16,30225);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,32,30226);
#elif __ia64__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,1,30221);
CheckEnum("WRDE_APPEND",WRDE_APPEND,2,30222);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,4,30223);
CheckEnum("WRDE_REUSE",WRDE_REUSE,8,30224);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,16,30225);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,32,30226);
#elif __powerpc__ && !__powerpc64__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,1,30221);
CheckEnum("WRDE_APPEND",WRDE_APPEND,2,30222);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,4,30223);
CheckEnum("WRDE_REUSE",WRDE_REUSE,8,30224);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,16,30225);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,32,30226);
#elif __s390__ && !__s390x__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,1,30221);
CheckEnum("WRDE_APPEND",WRDE_APPEND,2,30222);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,4,30223);
CheckEnum("WRDE_REUSE",WRDE_REUSE,8,30224);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,16,30225);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,32,30226);
#elif __powerpc64__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,1,30221);
CheckEnum("WRDE_APPEND",WRDE_APPEND,2,30222);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,4,30223);
CheckEnum("WRDE_REUSE",WRDE_REUSE,8,30224);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,16,30225);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,32,30226);
#elif __s390x__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,1,30221);
CheckEnum("WRDE_APPEND",WRDE_APPEND,2,30222);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,4,30223);
CheckEnum("WRDE_REUSE",WRDE_REUSE,8,30224);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,16,30225);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,32,30226);
#elif __x86_64__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,1,30221);
CheckEnum("WRDE_APPEND",WRDE_APPEND,2,30222);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,4,30223);
CheckEnum("WRDE_REUSE",WRDE_REUSE,8,30224);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,16,30225);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,32,30226);
#elif 1
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,1,30221);
CheckEnum("WRDE_APPEND",WRDE_APPEND,2,30222);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,4,30223);
CheckEnum("WRDE_REUSE",WRDE_REUSE,8,30224);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,16,30225);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,32,30226);
#endif

#if __i386__
CheckTypeSize(wordexp_t,12, 7029, 2);
#elif __ia64__
CheckTypeSize(wordexp_t,24, 7029, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(wordexp_t,12, 7029, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(wordexp_t,12, 7029, 10);
#elif __powerpc64__
CheckTypeSize(wordexp_t,24, 7029, 9);
#elif __s390x__
CheckTypeSize(wordexp_t,24, 7029, 12);
#elif __x86_64__
CheckTypeSize(wordexp_t,24, 7029, 11);
#elif 1
CheckTypeSize(wordexp_t,0, 7029, 1);
#endif

#if __i386__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,-1,30231);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,1,30232);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,2,30233);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,3,30234);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,4,30235);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,5,30236);
#elif __ia64__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,-1,30231);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,1,30232);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,2,30233);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,3,30234);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,4,30235);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,5,30236);
#elif __powerpc__ && !__powerpc64__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,-1,30231);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,1,30232);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,2,30233);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,3,30234);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,4,30235);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,5,30236);
#elif __s390__ && !__s390x__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,-1,30231);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,1,30232);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,2,30233);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,3,30234);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,4,30235);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,5,30236);
#elif __powerpc64__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,-1,30231);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,1,30232);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,2,30233);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,3,30234);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,4,30235);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,5,30236);
#elif __s390x__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,-1,30231);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,1,30232);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,2,30233);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,3,30234);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,4,30235);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,5,30236);
#elif __x86_64__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,-1,30231);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,1,30232);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,2,30233);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,3,30234);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,4,30235);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,5,30236);
#elif 1
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,-1,30231);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,1,30232);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,2,30233);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,3,30234);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,4,30235);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,5,30236);
#endif

extern int wordexp_db(const char *, wordexp_t *, int);
CheckInterfacedef(wordexp,wordexp_db);
extern void wordfree_db(wordexp_t *);
CheckInterfacedef(wordfree,wordfree_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in wordexp.h\n\n",pcnt,cnt);
return cnt;
#endif

}
