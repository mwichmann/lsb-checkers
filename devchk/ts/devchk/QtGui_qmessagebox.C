/*
 * Test of QtGui/qmessagebox
 */
#include "hdrchk.h"
#include "QtGui/qmessagebox.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qmessagebox();
#else
int QtGui_qmessagebox();
#endif
}


#ifdef TET_TEST
void QtGui_qmessagebox()
{
#else
int QtGui_qmessagebox()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qmessagebox types\n");
#define TYPE QMessageBox
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qmessagebox types\n\n",pcnt,cnt);
return cnt;
#endif

}
