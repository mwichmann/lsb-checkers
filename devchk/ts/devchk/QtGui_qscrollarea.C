/*
 * Test of QtGui/qscrollarea
 */
#include "hdrchk.h"
#include "QtGui/qscrollarea.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qscrollarea();
#else
int QtGui_qscrollarea();
#endif
}


#ifdef TET_TEST
void QtGui_qscrollarea()
{
#else
int QtGui_qscrollarea()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qscrollarea types\n");
#define TYPE QScrollArea
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qscrollarea types\n\n",pcnt,cnt);
return cnt;
#endif

}
