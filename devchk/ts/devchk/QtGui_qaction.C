/*
 * Test of QtGui/qaction
 */
#include "hdrchk.h"
#include "QtGui/qaction.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qaction();
#else
int QtGui_qaction();
#endif
}


#ifdef TET_TEST
void QtGui_qaction()
{
#else
int QtGui_qaction()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qaction types\n");
#define TYPE QAction
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qaction types\n\n",pcnt,cnt);
return cnt;
#endif

}
