/*
 * Test of QtGui/qstylepainter
 */
#include "hdrchk.h"
#include "QtGui/qstylepainter.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qstylepainter();
#else
int QtGui_qstylepainter();
#endif
}


#ifdef TET_TEST
void QtGui_qstylepainter()
{
#else
int QtGui_qstylepainter()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qstylepainter types\n");
#define TYPE QStylePainter
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qstylepainter types\n\n",pcnt,cnt);
return cnt;
#endif

}
