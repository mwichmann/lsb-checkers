/*
 * Test of QtGui/qfontinfo
 */
#include "hdrchk.h"
#include "QtGui/qfontinfo.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qfontinfo();
#else
int QtGui_qfontinfo();
#endif
}


#ifdef TET_TEST
void QtGui_qfontinfo()
{
#else
int QtGui_qfontinfo()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qfontinfo types\n");
#define TYPE QFontInfo
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qfontinfo types\n\n",pcnt,cnt);
return cnt;
#endif

}
