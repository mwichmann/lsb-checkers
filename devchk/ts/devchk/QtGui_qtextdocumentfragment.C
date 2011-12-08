/*
 * Test of QtGui/qtextdocumentfragment
 */
#include "hdrchk.h"
#include "QtGui/qtextdocumentfragment.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtextdocumentfragment();
#else
int QtGui_qtextdocumentfragment();
#endif
}


#ifdef TET_TEST
void QtGui_qtextdocumentfragment()
{
#else
int QtGui_qtextdocumentfragment()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtextdocumentfragment types\n");
#define TYPE QTextDocumentFragment
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtextdocumentfragment types\n\n",pcnt,cnt);
return cnt;
#endif

}
