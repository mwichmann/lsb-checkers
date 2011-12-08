/*
 * Test of QtGui/qtextlist
 */
#include "hdrchk.h"
#include "QtGui/qtextlist.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtextlist();
#else
int QtGui_qtextlist();
#endif
}


#ifdef TET_TEST
void QtGui_qtextlist()
{
#else
int QtGui_qtextlist()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtextlist types\n");
#define TYPE QTextList
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtextlist types\n\n",pcnt,cnt);
return cnt;
#endif

}
