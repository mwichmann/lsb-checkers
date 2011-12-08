/*
 * Test of QtGui/qabstractscrollarea
 */
#include "hdrchk.h"
#include "QtGui/qabstractscrollarea.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qabstractscrollarea();
#else
int QtGui_qabstractscrollarea();
#endif
}


#ifdef TET_TEST
void QtGui_qabstractscrollarea()
{
#else
int QtGui_qabstractscrollarea()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qabstractscrollarea types\n");
#define TYPE QAbstractScrollArea
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qabstractscrollarea types\n\n",pcnt,cnt);
return cnt;
#endif

}
