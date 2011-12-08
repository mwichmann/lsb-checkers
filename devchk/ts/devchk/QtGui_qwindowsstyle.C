/*
 * Test of QtGui/qwindowsstyle
 */
#include "hdrchk.h"
#include "QtGui/qwindowsstyle.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qwindowsstyle();
#else
int QtGui_qwindowsstyle();
#endif
}


#ifdef TET_TEST
void QtGui_qwindowsstyle()
{
#else
int QtGui_qwindowsstyle()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qwindowsstyle types\n");
#define TYPE QWindowsStyle
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qwindowsstyle types\n\n",pcnt,cnt);
return cnt;
#endif

}
