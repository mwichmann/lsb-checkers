/*
 * Test of QtGui/qworkspace
 */
#include "hdrchk.h"
#include "QtGui/qworkspace.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qworkspace();
#else
int QtGui_qworkspace();
#endif
}


#ifdef TET_TEST
void QtGui_qworkspace()
{
#else
int QtGui_qworkspace()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qworkspace types\n");
#define TYPE QWorkspace
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qworkspace types\n\n",pcnt,cnt);
return cnt;
#endif

}
