/*
 * Test of QtGui/qmotifstyle
 */
#include "hdrchk.h"
#include "QtGui/qmotifstyle.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qmotifstyle();
#else
int QtGui_qmotifstyle();
#endif
}


#ifdef TET_TEST
void QtGui_qmotifstyle()
{
#else
int QtGui_qmotifstyle()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qmotifstyle types\n");
#define TYPE QMotifStyle
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qmotifstyle types\n\n",pcnt,cnt);
return cnt;
#endif

}
