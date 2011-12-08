/*
 * Test of QtGui/qbuttongroup
 */
#include "hdrchk.h"
#include "QtGui/qbuttongroup.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qbuttongroup();
#else
int QtGui_qbuttongroup();
#endif
}


#ifdef TET_TEST
void QtGui_qbuttongroup()
{
#else
int QtGui_qbuttongroup()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qbuttongroup types\n");
#define TYPE QButtonGroup
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qbuttongroup types\n\n",pcnt,cnt);
return cnt;
#endif

}
