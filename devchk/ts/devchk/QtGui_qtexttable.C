/*
 * Test of QtGui/qtexttable
 */
#include "hdrchk.h"
#include "QtGui/qtexttable.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtexttable();
#else
int QtGui_qtexttable();
#endif
}


#ifdef TET_TEST
void QtGui_qtexttable()
{
#else
int QtGui_qtexttable()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtexttable types\n");
#define TYPE QTextTableCell
#undef TYPE

#define TYPE QTextTable
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtexttable types\n\n",pcnt,cnt);
return cnt;
#endif

}
