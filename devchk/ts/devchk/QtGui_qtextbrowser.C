/*
 * Test of QtGui/qtextbrowser
 */
#include "hdrchk.h"
#include "QtGui/qtextbrowser.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtextbrowser();
#else
int QtGui_qtextbrowser();
#endif
}


#ifdef TET_TEST
void QtGui_qtextbrowser()
{
#else
int QtGui_qtextbrowser()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtextbrowser types\n");
#define TYPE QTextBrowser
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtextbrowser types\n\n",pcnt,cnt);
return cnt;
#endif

}
