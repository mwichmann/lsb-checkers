/*
 * Test of QtGui/qshortcut
 */
#include "hdrchk.h"
#include "QtGui/qshortcut.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qshortcut();
#else
int QtGui_qshortcut();
#endif
}


#ifdef TET_TEST
void QtGui_qshortcut()
{
#else
int QtGui_qshortcut()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qshortcut types\n");
#define TYPE QShortcut
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qshortcut types\n\n",pcnt,cnt);
return cnt;
#endif

}
