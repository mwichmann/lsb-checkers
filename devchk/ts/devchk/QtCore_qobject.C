/*
 * Test of QtCore/qobject
 */
#include "hdrchk.h"
#include "QtCore/qobject.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qobject();
#else
int QtCore_qobject();
#endif
}


#ifdef TET_TEST
void QtCore_qobject()
{
#else
int QtCore_qobject()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qobject types\n");
#define TYPE QObjectData
#undef TYPE

#define TYPE QObject
#undef TYPE

#define TYPE QObjectUserData
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qobject types\n\n",pcnt,cnt);
return cnt;
#endif

}
