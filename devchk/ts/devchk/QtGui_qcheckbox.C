/*
 * Test of QtGui/qcheckbox
 */
#include "hdrchk.h"
#include "QtGui/qcheckbox.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qcheckbox();
#else
int QtGui_qcheckbox();
#endif
}


#ifdef TET_TEST
void QtGui_qcheckbox()
{
#else
int QtGui_qcheckbox()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qcheckbox types\n");
#define TYPE QCheckBox
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qcheckbox types\n\n",pcnt,cnt);
return cnt;
#endif

}
