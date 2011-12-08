/*
 * Test of QtCore/qregexp
 */
#include "hdrchk.h"
#include "QtCore/qregexp.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qregexp();
#else
int QtCore_qregexp();
#endif
}


#ifdef TET_TEST
void QtCore_qregexp()
{
#else
int QtCore_qregexp()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qregexp types\n");
#define TYPE QRegExp
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qregexp types\n\n",pcnt,cnt);
return cnt;
#endif

}
