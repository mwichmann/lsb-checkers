/*
 * Test of QtGui/qsyntaxhighlighter
 */
#include "hdrchk.h"
#include "QtGui/qsyntaxhighlighter.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qsyntaxhighlighter();
#else
int QtGui_qsyntaxhighlighter();
#endif
}


#ifdef TET_TEST
void QtGui_qsyntaxhighlighter()
{
#else
int QtGui_qsyntaxhighlighter()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qsyntaxhighlighter types\n");
#define TYPE QSyntaxHighlighter
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qsyntaxhighlighter types\n\n",pcnt,cnt);
return cnt;
#endif

}
