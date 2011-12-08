/*
 * Test of QtGui/qtreeview
 */
#include "hdrchk.h"
#include "QtGui/qtreeview.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtreeview();
#else
int QtGui_qtreeview();
#endif
}


#ifdef TET_TEST
void QtGui_qtreeview()
{
#else
int QtGui_qtreeview()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtreeview types\n");
#define TYPE QTreeView
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtreeview types\n\n",pcnt,cnt);
return cnt;
#endif

}
