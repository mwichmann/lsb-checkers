/*
 * Test of QtGui/qpagesetupdialog
 */
#include "hdrchk.h"
#include "QtGui/qpagesetupdialog.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qpagesetupdialog();
#else
int QtGui_qpagesetupdialog();
#endif
}


#ifdef TET_TEST
void QtGui_qpagesetupdialog()
{
#else
int QtGui_qpagesetupdialog()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qpagesetupdialog types\n");
#define TYPE QPageSetupDialog
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qpagesetupdialog types\n\n",pcnt,cnt);
return cnt;
#endif

}
