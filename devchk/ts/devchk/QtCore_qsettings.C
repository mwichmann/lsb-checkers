/*
 * Test of QtCore/qsettings
 */
#include "hdrchk.h"
#include "QtCore/qsettings.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qsettings();
#else
int QtCore_qsettings();
#endif
}


#ifdef TET_TEST
void QtCore_qsettings()
{
#else
int QtCore_qsettings()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qsettings types\n");
#define TYPE QSettings
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qsettings types\n\n",pcnt,cnt);
return cnt;
#endif

}
