/*
 * Test of QtGui/qslider
 */
#include "hdrchk.h"
#include "QtGui/qslider.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qslider();
#else
int QtGui_qslider();
#endif
}


#ifdef TET_TEST
void QtGui_qslider()
{
#else
int QtGui_qslider()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qslider types\n");
#define TYPE QSlider
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qslider types\n\n",pcnt,cnt);
return cnt;
#endif

}
