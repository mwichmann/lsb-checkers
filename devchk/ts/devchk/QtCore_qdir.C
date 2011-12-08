/*
 * Test of QtCore/qdir
 */
#include "hdrchk.h"
#include "QtCore/qdir.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qdir();
#else
int QtCore_qdir();
#endif
}


#ifdef TET_TEST
void QtCore_qdir()
{
#else
int QtCore_qdir()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qdir types\n");
#define TYPE QDir
#undef TYPE

#define TYPE _Z236QFlagsIN4QDir6FilterEE
#undef TYPE

#define TYPE _Z256QFlagsIN4QDir8SortFlagEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qdir types\n\n",pcnt,cnt);
return cnt;
#endif

}
