/*
 * Test of QtGui/qheaderview
 */
#include "hdrchk.h"
#include "QtGui/qheaderview.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qheaderview();
#else
int QtGui_qheaderview();
#endif
}


#ifdef TET_TEST
void QtGui_qheaderview()
{
#else
int QtGui_qheaderview()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qheaderview types\n");
#define TYPE QHeaderView
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qheaderview types\n\n",pcnt,cnt);
return cnt;
#endif

}
