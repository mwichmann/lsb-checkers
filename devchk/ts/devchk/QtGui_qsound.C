/*
 * Test of QtGui/qsound
 */
#include "hdrchk.h"
#include "QtGui/qsound.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qsound();
#else
int QtGui_qsound();
#endif
}


#ifdef TET_TEST
void QtGui_qsound()
{
#else
int QtGui_qsound()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qsound types\n");
#define TYPE QSound
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qsound types\n\n",pcnt,cnt);
return cnt;
#endif

}
