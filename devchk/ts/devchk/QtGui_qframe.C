/*
 * Test of QtGui/qframe
 */
#include "hdrchk.h"
#include "QtGui/qframe.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qframe();
#else
int QtGui_qframe();
#endif
}


#ifdef TET_TEST
void QtGui_qframe()
{
#else
int QtGui_qframe()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qframe types\n");
#define TYPE QFrame
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qframe types\n\n",pcnt,cnt);
return cnt;
#endif

}
