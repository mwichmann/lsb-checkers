/*
 * Test of QtGui/qactiongroup
 */
#include "hdrchk.h"
#include "QtGui/qactiongroup.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qactiongroup();
#else
int QtGui_qactiongroup();
#endif
}


#ifdef TET_TEST
void QtGui_qactiongroup()
{
#else
int QtGui_qactiongroup()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qactiongroup types\n");
#define TYPE QActionGroup
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qactiongroup types\n\n",pcnt,cnt);
return cnt;
#endif

}
