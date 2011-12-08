/*
 * Test of QtGui/qabstractpagesetupdialog
 */
#include "hdrchk.h"
#include "QtGui/qabstractpagesetupdialog.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qabstractpagesetupdialog();
#else
int QtGui_qabstractpagesetupdialog();
#endif
}


#ifdef TET_TEST
void QtGui_qabstractpagesetupdialog()
{
#else
int QtGui_qabstractpagesetupdialog()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qabstractpagesetupdialog types\n");
#define TYPE QAbstractPageSetupDialog
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qabstractpagesetupdialog types\n\n",pcnt,cnt);
return cnt;
#endif

}
