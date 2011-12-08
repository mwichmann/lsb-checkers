/*
 * Test of QtGui/qcommonstyle
 */
#include "hdrchk.h"
#include "QtGui/qcommonstyle.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qcommonstyle();
#else
int QtGui_qcommonstyle();
#endif
}


#ifdef TET_TEST
void QtGui_qcommonstyle()
{
#else
int QtGui_qcommonstyle()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qcommonstyle types\n");
#define TYPE QCommonStyle
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qcommonstyle types\n\n",pcnt,cnt);
return cnt;
#endif

}
