/*
 * Test of QtCore/qlocale
 */
#include "hdrchk.h"
#include "QtCore/qlocale.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qlocale();
#else
int QtCore_qlocale();
#endif
}


#ifdef TET_TEST
void QtCore_qlocale()
{
#else
int QtCore_qlocale()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qlocale types\n");
#define TYPE QLocale
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qlocale types\n\n",pcnt,cnt);
return cnt;
#endif

}
