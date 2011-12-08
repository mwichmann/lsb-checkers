/*
 * Test of QtGui/qmovie
 */
#include "hdrchk.h"
#include "QtGui/qmovie.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qmovie();
#else
int QtGui_qmovie();
#endif
}


#ifdef TET_TEST
void QtGui_qmovie()
{
#else
int QtGui_qmovie()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qmovie types\n");
#define TYPE QMovie
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qmovie types\n\n",pcnt,cnt);
return cnt;
#endif

}
