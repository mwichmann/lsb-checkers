/*
 * Test of QtGui/qerrormessage
 */
#include "hdrchk.h"
#include "QtGui/qerrormessage.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qerrormessage();
#else
int QtGui_qerrormessage();
#endif
}


#ifdef TET_TEST
void QtGui_qerrormessage()
{
#else
int QtGui_qerrormessage()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qerrormessage types\n");
#define TYPE QErrorMessage
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qerrormessage types\n\n",pcnt,cnt);
return cnt;
#endif

}
