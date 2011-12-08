/*
 * Test of QtCore/qfile
 */
#include "hdrchk.h"
#include "QtCore/qfile.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qfile();
#else
int QtCore_qfile();
#endif
}


#ifdef TET_TEST
void QtCore_qfile()
{
#else
int QtCore_qfile()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qfile types\n");
#define TYPE QFile
#undef TYPE

#define TYPE _Z296QFlagsIN5QFile10PermissionEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qfile types\n\n",pcnt,cnt);
return cnt;
#endif

}
