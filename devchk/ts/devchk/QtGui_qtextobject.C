/*
 * Test of QtGui/qtextobject
 */
#include "hdrchk.h"
#include "QtGui/qtextobject.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtextobject();
#else
int QtGui_qtextobject();
#endif
}


#ifdef TET_TEST
void QtGui_qtextobject()
{
#else
int QtGui_qtextobject()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtextobject types\n");
#define TYPE QTextObject
#undef TYPE

#define TYPE QTextBlockGroup
#undef TYPE

#define TYPE QTextFrameLayoutData
#undef TYPE

#define TYPE QTextFrame
#undef TYPE

#define TYPE QTextFrame::iterator
#undef TYPE

#define TYPE QTextBlockUserData
#undef TYPE

#define TYPE QTextBlock
#undef TYPE

#define TYPE QTextBlock::iterator
#undef TYPE

#define TYPE QTextFragment
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtextobject types\n\n",pcnt,cnt);
return cnt;
#endif

}
