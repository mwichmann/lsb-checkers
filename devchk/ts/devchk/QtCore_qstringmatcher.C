/*
 * Test of QtCore/qstringmatcher
 */
#include "hdrchk.h"
#include "QtCore/qstringmatcher.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qstringmatcher();
#else
int QtCore_qstringmatcher();
#endif
}


#ifdef TET_TEST
void QtCore_qstringmatcher()
{
#else
int QtCore_qstringmatcher()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qstringmatcher types\n");
#define TYPE QStringMatcher
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qstringmatcher types\n\n",pcnt,cnt);
return cnt;
#endif

}
