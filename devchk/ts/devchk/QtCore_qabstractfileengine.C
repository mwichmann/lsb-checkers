/*
 * Test of QtCore/qabstractfileengine
 */
#include "hdrchk.h"
#include "QtCore/qabstractfileengine.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qabstractfileengine();
#else
int QtCore_qabstractfileengine();
#endif
}


#ifdef TET_TEST
void QtCore_qabstractfileengine()
{
#else
int QtCore_qabstractfileengine()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qabstractfileengine types\n");
#define TYPE QAbstractFileEngine
#undef TYPE

#define TYPE _Z416QFlagsIN19QAbstractFileEngine8FileFlagEE
#undef TYPE

#define TYPE QAbstractFileEngine::ExtensionOption
#undef TYPE

#define TYPE QAbstractFileEngine::ExtensionReturn
#undef TYPE

#define TYPE QAbstractFileEngineHandler
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qabstractfileengine types\n\n",pcnt,cnt);
return cnt;
#endif

}
