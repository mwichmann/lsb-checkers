/*
 * Test of QtGui/qcolor
 */
#include "hdrchk.h"
#include "QtGui/qcolor.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qcolor();
#else
int QtGui_qcolor();
#endif
}


#ifdef TET_TEST
void QtGui_qcolor()
{
#else
int QtGui_qcolor()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qcolor types\n");
#define TYPE QColor
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qcolor types\n\n",pcnt,cnt);
return cnt;
#endif

}
