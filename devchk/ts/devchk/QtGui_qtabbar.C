/*
 * Test of QtGui/qtabbar
 */
#include "hdrchk.h"
#include "QtGui/qtabbar.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtabbar();
#else
int QtGui_qtabbar();
#endif
}


#ifdef TET_TEST
void QtGui_qtabbar()
{
#else
int QtGui_qtabbar()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtabbar types\n");
#define TYPE QTabBar
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtabbar types\n\n",pcnt,cnt);
return cnt;
#endif

}
