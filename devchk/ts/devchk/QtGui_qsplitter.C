/*
 * Test of QtGui/qsplitter
 */
#include "hdrchk.h"
#include "QtGui/qsplitter.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qsplitter();
#else
int QtGui_qsplitter();
#endif
}


#ifdef TET_TEST
void QtGui_qsplitter()
{
#else
int QtGui_qsplitter()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qsplitter types\n");
#define TYPE QSplitter
#undef TYPE

#define TYPE QSplitterHandle
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qsplitter types\n\n",pcnt,cnt);
return cnt;
#endif

}
