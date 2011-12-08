/*
 * Test of QtCore/qlibraryinfo
 */
#include "hdrchk.h"
#include "QtCore/qlibraryinfo.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qlibraryinfo();
#else
int QtCore_qlibraryinfo();
#endif
}


#ifdef TET_TEST
void QtCore_qlibraryinfo()
{
#else
int QtCore_qlibraryinfo()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qlibraryinfo types\n");
#define TYPE QLibraryInfo
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qlibraryinfo types\n\n",pcnt,cnt);
return cnt;
#endif

}
