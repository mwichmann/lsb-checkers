/*
 * Test of QtGui/qtextedit
 */
#include "hdrchk.h"
#include "QtGui/qtextedit.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtextedit();
#else
int QtGui_qtextedit();
#endif
}


#ifdef TET_TEST
void QtGui_qtextedit()
{
#else
int QtGui_qtextedit()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtextedit types\n");
#define TYPE QTextEdit
#undef TYPE

#define TYPE _Z416QFlagsIN9QTextEdit18AutoFormattingFlagEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtextedit types\n\n",pcnt,cnt);
return cnt;
#endif

}
