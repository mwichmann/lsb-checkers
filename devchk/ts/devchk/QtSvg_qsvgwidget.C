/*
 * Test of QtSvg/qsvgwidget
 */
#include "hdrchk.h"
#include "QtSvg/qsvgwidget.h"


extern "C" {
#ifdef TET_TEST
void QtSvg_qsvgwidget();
#else
int QtSvg_qsvgwidget();
#endif
}


#ifdef TET_TEST
void QtSvg_qsvgwidget()
{
#else
int QtSvg_qsvgwidget()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSvg/qsvgwidget types\n");
#define TYPE QSvgWidget
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSvg/qsvgwidget types\n\n",pcnt,cnt);
return cnt;
#endif

}
