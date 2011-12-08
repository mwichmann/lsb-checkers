/*
 * Test of QtCore/qfileinfo
 */
#include "hdrchk.h"
#include "QtCore/qfileinfo.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qfileinfo();
#else
int QtCore_qfileinfo();
#endif
}


#ifdef TET_TEST
void QtCore_qfileinfo()
{
#else
int QtCore_qfileinfo()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qfileinfo types\n");
#define TYPE QFileInfo
#undef TYPE

#define TYPE _Z336QFlagsIN9QFileInfo10PermissionEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qfileinfo types\n\n",pcnt,cnt);
return cnt;
#endif

}
