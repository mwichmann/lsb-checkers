/*
 * Test of QtGui/qcursor
 */
#include "hdrchk.h"
#include "QtGui/qcursor.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qcursor();
#else
int QtGui_qcursor();
#endif
}


#ifdef TET_TEST
void QtGui_qcursor()
{
#else
int QtGui_qcursor()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qcursor types\n");
#define TYPE QCursor
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qcursor types\n\n",pcnt,cnt);
return cnt;
#endif

}
