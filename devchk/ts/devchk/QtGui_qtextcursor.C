/*
 * Test of QtGui/qtextcursor
 */
#include "hdrchk.h"
#include "QtGui/qtextcursor.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtextcursor();
#else
int QtGui_qtextcursor();
#endif
}


#ifdef TET_TEST
void QtGui_qtextcursor()
{
#else
int QtGui_qtextcursor()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtextcursor types\n");
#define TYPE QTextCursor
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtextcursor types\n\n",pcnt,cnt);
return cnt;
#endif

}
