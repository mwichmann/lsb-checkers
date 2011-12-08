/*
 * Test of QtGui/qscrollbar
 */
#include "hdrchk.h"
#include "QtGui/qscrollbar.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qscrollbar();
#else
int QtGui_qscrollbar();
#endif
}


#ifdef TET_TEST
void QtGui_qscrollbar()
{
#else
int QtGui_qscrollbar()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qscrollbar types\n");
#define TYPE QScrollBar
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qscrollbar types\n\n",pcnt,cnt);
return cnt;
#endif

}
