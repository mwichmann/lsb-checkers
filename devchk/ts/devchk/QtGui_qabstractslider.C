/*
 * Test of QtGui/qabstractslider
 */
#include "hdrchk.h"
#include "QtGui/qabstractslider.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qabstractslider();
#else
int QtGui_qabstractslider();
#endif
}


#ifdef TET_TEST
void QtGui_qabstractslider()
{
#else
int QtGui_qabstractslider()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qabstractslider types\n");
#define TYPE QAbstractSlider
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qabstractslider types\n\n",pcnt,cnt);
return cnt;
#endif

}
