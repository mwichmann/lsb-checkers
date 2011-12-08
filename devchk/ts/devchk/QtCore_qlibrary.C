/*
 * Test of QtCore/qlibrary
 */
#include "hdrchk.h"
#include "QtCore/qlibrary.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qlibrary();
#else
int QtCore_qlibrary();
#endif
}


#ifdef TET_TEST
void QtCore_qlibrary()
{
#else
int QtCore_qlibrary()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qlibrary types\n");
#define TYPE QLibrary
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qlibrary types\n\n",pcnt,cnt);
return cnt;
#endif

}
