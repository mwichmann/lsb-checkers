/*
 * Test of QtGui/qsplashscreen
 */
#include "hdrchk.h"
#include "QtGui/qsplashscreen.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qsplashscreen();
#else
int QtGui_qsplashscreen();
#endif
}


#ifdef TET_TEST
void QtGui_qsplashscreen()
{
#else
int QtGui_qsplashscreen()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qsplashscreen types\n");
#define TYPE QSplashScreen
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qsplashscreen types\n\n",pcnt,cnt);
return cnt;
#endif

}
