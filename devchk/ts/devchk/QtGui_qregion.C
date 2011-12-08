/*
 * Test of QtGui/qregion
 */
#include "hdrchk.h"
#include "QtGui/qregion.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qregion();
#else
int QtGui_qregion();
#endif
}


#ifdef TET_TEST
void QtGui_qregion()
{
#else
int QtGui_qregion()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qregion types\n");
#define TYPE QRegion
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qregion types\n\n",pcnt,cnt);
return cnt;
#endif

}
