/*
 * Test of QtGui/qclipboard
 */
#include "hdrchk.h"
#include "QtGui/qclipboard.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qclipboard();
#else
int QtGui_qclipboard();
#endif
}


#ifdef TET_TEST
void QtGui_qclipboard()
{
#else
int QtGui_qclipboard()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qclipboard types\n");
#define TYPE QClipboard
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qclipboard types\n\n",pcnt,cnt);
return cnt;
#endif

}
