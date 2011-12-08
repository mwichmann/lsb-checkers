/*
 * Test of QtGui/qicon
 */
#include "hdrchk.h"
#include "QtGui/qicon.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qicon();
#else
int QtGui_qicon();
#endif
}


#ifdef TET_TEST
void QtGui_qicon()
{
#else
int QtGui_qicon()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qicon types\n");
#define TYPE QIcon
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qicon types\n\n",pcnt,cnt);
return cnt;
#endif

}
