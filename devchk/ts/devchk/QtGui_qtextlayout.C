/*
 * Test of QtGui/qtextlayout
 */
#include "hdrchk.h"
#include "QtGui/qtextlayout.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtextlayout();
#else
int QtGui_qtextlayout();
#endif
}


#ifdef TET_TEST
void QtGui_qtextlayout()
{
#else
int QtGui_qtextlayout()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtextlayout types\n");
#define TYPE QTextInlineObject
#undef TYPE

#define TYPE QTextLayout
#undef TYPE

#define TYPE QTextLine
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtextlayout types\n\n",pcnt,cnt);
return cnt;
#endif

}
