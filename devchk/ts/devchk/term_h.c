/*
 * Test of term.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1

struct term {
	};
#include "term.h"



#ifdef TET_TEST
void term_h()
{
#else
int term_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in term.h\n");
#endif

#if __i386__
CheckTypeSize(struct term,168, 10850, 2)
Msg("Missing member data for term on IA32\n");
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10850,0);
Msg("Find size of term (10850)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(TERMINAL,0, 10846, 6)
#elif __i386__
CheckTypeSize(TERMINAL,168, 10846, 2)
#elif __s390__ && !__s390x__
CheckTypeSize(TERMINAL,0, 10846, 10)
#elif __s390x__
CheckTypeSize(TERMINAL,0, 10846, 12)
#elif __ia64__
CheckTypeSize(TERMINAL,200, 10846, 3)
#elif __powerpc64__
CheckTypeSize(TERMINAL,0, 10846, 9)
#elif __x86_64__
CheckTypeSize(TERMINAL,200, 10846, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10846,0);
Msg("Find size of TERMINAL (10846)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in term.h\n",cnt);
return cnt;
#endif

}
