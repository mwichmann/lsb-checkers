/*
 * Test of QtGui/qfontmetrics
 */
#include "hdrchk.h"
#include "QtGui/qfontmetrics.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qfontmetrics();
#else
int QtGui_qfontmetrics();
#endif
}


#ifdef TET_TEST
void QtGui_qfontmetrics()
{
#else
int QtGui_qfontmetrics()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qfontmetrics types\n");
#define TYPE QFontMetrics
#undef TYPE

#define TYPE QFontMetricsF
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qfontmetrics types\n\n",pcnt,cnt);
return cnt;
#endif

}
