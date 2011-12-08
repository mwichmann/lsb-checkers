/*
 * Test of QtGui/qlcdnumber
 */
#include "hdrchk.h"
#include "QtGui/qlcdnumber.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qlcdnumber();
#else
int QtGui_qlcdnumber();
#endif
}


#ifdef TET_TEST
void QtGui_qlcdnumber()
{
#else
int QtGui_qlcdnumber()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qlcdnumber types\n");
#define TYPE QLCDNumber
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qlcdnumber types\n\n",pcnt,cnt);
return cnt;
#endif

}
