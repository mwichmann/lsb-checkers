/*
 * Test of qsize
 */
#include "hdrchk.h"
#include "qsize.h"


extern "C" {
#ifdef TET_TEST
void qsize();
#else
int qsize();
#endif
}


#ifdef TET_TEST
void qsize()
{
#else
int qsize()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking qsize types\n");
#define TYPE QSize
Msg("Arch-specific values for QSize (20322) seem to be equal\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'4.0',NULL,0,NULL);\n",1,20322,0);
#if defined __i386__
CheckTypeSize(TYPE, 8, 20322, 2, '4.0', NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TYPE, 8, 20322, 3, '4.0', NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TYPE, 8, 20322, 6, '4.0', NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TYPE, 8, 20322, 9, '4.0', NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TYPE, 8, 20322, 10, '4.0', NULL, 0, NULL)
#elif defined __x86_64__
CheckTypeSize(TYPE, 8, 20322, 11, '4.0', NULL, 0, NULL)
#elif defined __s390x__
CheckTypeSize(TYPE, 8, 20322, 12, '4.0', NULL, 0, NULL)
#else
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'4.0',NULL,0,NULL);\n",architecture,20322,?);
#endif
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in qsize types\n\n",pcnt,cnt);
return cnt;
#endif

}
