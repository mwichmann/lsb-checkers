/*
 * Test of QtCore/qglobal
 */
#include "hdrchk.h"
#include "QtCore/qglobal.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qglobal();
#else
int QtCore_qglobal();
#endif
}


#ifdef TET_TEST
void QtCore_qglobal()
{
#else
int QtCore_qglobal()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qglobal types\n");
#define TYPE QSysInfo
#undef TYPE

#define TYPE QBool
#undef TYPE

#define TYPE QFlag
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qglobal types\n\n",pcnt,cnt);
return cnt;
#endif

}
