/*
 * Test of QtGui/qfont
 */
#include "hdrchk.h"
#include "QtGui/qfont.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qfont();
#else
int QtGui_qfont();
#endif
}


#ifdef TET_TEST
void QtGui_qfont()
{
#else
int QtGui_qfont()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qfont types\n");
#define TYPE QFont
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qfont types\n\n",pcnt,cnt);
return cnt;
#endif

}
