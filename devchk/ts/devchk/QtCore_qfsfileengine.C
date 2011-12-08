/*
 * Test of QtCore/qfsfileengine
 */
#include "hdrchk.h"
#include "QtCore/qfsfileengine.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qfsfileengine();
#else
int QtCore_qfsfileengine();
#endif
}


#ifdef TET_TEST
void QtCore_qfsfileengine()
{
#else
int QtCore_qfsfileengine()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qfsfileengine types\n");
#define TYPE QFSFileEngine
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qfsfileengine types\n\n",pcnt,cnt);
return cnt;
#endif

}
