/*
 * Test of QtGui/qtextdocument
 */
#include "hdrchk.h"
#include "QtGui/qtextdocument.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtextdocument();
#else
int QtGui_qtextdocument();
#endif
}


#ifdef TET_TEST
void QtGui_qtextdocument()
{
#else
int QtGui_qtextdocument()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtextdocument types\n");
#define TYPE QAbstractUndoItem
#undef TYPE

#define TYPE QTextDocument
#undef TYPE

#define TYPE _Z356QFlagsIN13QTextDocument8FindFlagEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtextdocument types\n\n",pcnt,cnt);
return cnt;
#endif

}
