/*
 * Test of QtGui/qmenudata
 */
#include "hdrchk.h"
#include "QtGui/qmenudata.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qmenudata();
#else
int QtGui_qmenudata();
#endif
}


#ifdef TET_TEST
void QtGui_qmenudata()
{
#else
int QtGui_qmenudata()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qmenudata types\n");
#define TYPE QMenuItem
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qmenudata types\n\n",pcnt,cnt);
return cnt;
#endif

}
