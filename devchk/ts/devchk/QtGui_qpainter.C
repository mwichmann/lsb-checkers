/*
 * Test of QtGui/qpainter
 */
#include "hdrchk.h"
#include "QtGui/qpainter.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qpainter();
#else
int QtGui_qpainter();
#endif
}


#ifdef TET_TEST
void QtGui_qpainter()
{
#else
int QtGui_qpainter()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qpainter types\n");
#define TYPE QPainter
#undef TYPE

#define TYPE _Z326QFlagsIN8QPainter10RenderHintEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qpainter types\n\n",pcnt,cnt);
return cnt;
#endif

}
