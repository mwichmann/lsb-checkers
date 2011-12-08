/*
 * Test of QtGui/qboxlayout
 */
#include "hdrchk.h"
#include "QtGui/qboxlayout.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qboxlayout();
#else
int QtGui_qboxlayout();
#endif
}


#ifdef TET_TEST
void QtGui_qboxlayout()
{
#else
int QtGui_qboxlayout()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qboxlayout types\n");
#define TYPE QBoxLayout
#undef TYPE

#define TYPE QHBoxLayout
#undef TYPE

#define TYPE QVBoxLayout
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qboxlayout types\n\n",pcnt,cnt);
return cnt;
#endif

}
