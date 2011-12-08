/*
 * Test of QtGui/qtextformat
 */
#include "hdrchk.h"
#include "QtGui/qtextformat.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtextformat();
#else
int QtGui_qtextformat();
#endif
}


#ifdef TET_TEST
void QtGui_qtextformat()
{
#else
int QtGui_qtextformat()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtextformat types\n");
#define TYPE QTextLength
#undef TYPE

#define TYPE QTextFormat
#undef TYPE

#define TYPE QTextCharFormat
#undef TYPE

#define TYPE QTextBlockFormat
#undef TYPE

#define TYPE QTextListFormat
#undef TYPE

#define TYPE QTextImageFormat
#undef TYPE

#define TYPE QTextFrameFormat
#undef TYPE

#define TYPE QTextTableFormat
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtextformat types\n\n",pcnt,cnt);
return cnt;
#endif

}
