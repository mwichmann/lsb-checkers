/*
 * Test of QtGui/qabstracttextdocumentlayout
 */
#include "hdrchk.h"
#include "QtGui/qabstracttextdocumentlayout.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qabstracttextdocumentlayout();
#else
int QtGui_qabstracttextdocumentlayout();
#endif
}


#ifdef TET_TEST
void QtGui_qabstracttextdocumentlayout()
{
#else
int QtGui_qabstracttextdocumentlayout()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qabstracttextdocumentlayout types\n");
#define TYPE QAbstractTextDocumentLayout
#undef TYPE

#define TYPE QTextObjectInterface
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qabstracttextdocumentlayout types\n\n",pcnt,cnt);
return cnt;
#endif

}
