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
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,0);
CheckEnum("WRDE_APPEND",WRDE_APPEND,(0) + 1);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,((0) + 1) + 1);
CheckEnum("WRDE_REUSE",WRDE_REUSE,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("__WRDE_FLAGS",__WRDE_FLAGS,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __ia64__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,0);
CheckEnum("WRDE_APPEND",WRDE_APPEND,(0) + 1);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,((0) + 1) + 1);
CheckEnum("WRDE_REUSE",WRDE_REUSE,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("__WRDE_FLAGS",__WRDE_FLAGS,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __powerpc__ && !__powerpc64__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,0);
CheckEnum("WRDE_APPEND",WRDE_APPEND,(0) + 1);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,((0) + 1) + 1);
CheckEnum("WRDE_REUSE",WRDE_REUSE,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("__WRDE_FLAGS",__WRDE_FLAGS,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __s390__ && !__s390x__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,0);
CheckEnum("WRDE_APPEND",WRDE_APPEND,(0) + 1);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,((0) + 1) + 1);
CheckEnum("WRDE_REUSE",WRDE_REUSE,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("__WRDE_FLAGS",__WRDE_FLAGS,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __powerpc64__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,0);
CheckEnum("WRDE_APPEND",WRDE_APPEND,(0) + 1);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,((0) + 1) + 1);
CheckEnum("WRDE_REUSE",WRDE_REUSE,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("__WRDE_FLAGS",__WRDE_FLAGS,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __s390x__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,0);
CheckEnum("WRDE_APPEND",WRDE_APPEND,(0) + 1);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,((0) + 1) + 1);
CheckEnum("WRDE_REUSE",WRDE_REUSE,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("__WRDE_FLAGS",__WRDE_FLAGS,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __x86_64__
CheckEnum("WRDE_DOOFFS",WRDE_DOOFFS,0);
CheckEnum("WRDE_APPEND",WRDE_APPEND,(0) + 1);
CheckEnum("WRDE_NOCMD",WRDE_NOCMD,((0) + 1) + 1);
CheckEnum("WRDE_REUSE",WRDE_REUSE,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_SHOWERR",WRDE_SHOWERR,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_UNDEF",WRDE_UNDEF,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("__WRDE_FLAGS",__WRDE_FLAGS,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9200,0);
Msg("Find size of anon-wordexp.h-7 (9200)\n");
#endif

#if __i386__
CheckTypeSize(wordexp_t,12, 7029, 2)
#elif __ia64__
CheckTypeSize(wordexp_t,24, 7029, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(wordexp_t,12, 7029, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(wordexp_t,12, 7029, 10)
#elif __powerpc64__
CheckTypeSize(wordexp_t,24, 7029, 9)
#elif __s390x__
CheckTypeSize(wordexp_t,24, 7029, 12)
#elif __x86_64__
CheckTypeSize(wordexp_t,24, 7029, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7029,0);
Msg("Find size of wordexp_t (7029)\n");
#endif

#if __i386__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,0);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,(0) + 1);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,((0) + 1) + 1);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,(((((0) + 1) + 1) + 1) + 1) + 1);
#elif __ia64__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,0);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,(0) + 1);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,((0) + 1) + 1);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,(((((0) + 1) + 1) + 1) + 1) + 1);
#elif __powerpc__ && !__powerpc64__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,0);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,(0) + 1);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,((0) + 1) + 1);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,(((((0) + 1) + 1) + 1) + 1) + 1);
#elif __s390__ && !__s390x__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,0);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,(0) + 1);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,((0) + 1) + 1);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,(((((0) + 1) + 1) + 1) + 1) + 1);
#elif __powerpc64__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,0);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,(0) + 1);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,((0) + 1) + 1);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,(((((0) + 1) + 1) + 1) + 1) + 1);
#elif __s390x__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,0);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,(0) + 1);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,((0) + 1) + 1);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,(((((0) + 1) + 1) + 1) + 1) + 1);
#elif __x86_64__
CheckEnum("WRDE_NOSYS",WRDE_NOSYS,0);
CheckEnum("WRDE_NOSPACE",WRDE_NOSPACE,(0) + 1);
CheckEnum("WRDE_BADCHAR",WRDE_BADCHAR,((0) + 1) + 1);
CheckEnum("WRDE_BADVAL",WRDE_BADVAL,(((0) + 1) + 1) + 1);
CheckEnum("WRDE_CMDSUB",WRDE_CMDSUB,((((0) + 1) + 1) + 1) + 1);
CheckEnum("WRDE_SYNTAX",WRDE_SYNTAX,(((((0) + 1) + 1) + 1) + 1) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9201,0);
Msg("Find size of anon-wordexp.h-45 (9201)\n");
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
