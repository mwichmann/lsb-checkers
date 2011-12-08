/*
 * Test of QtCore/qmetaobject
 */
#include "hdrchk.h"
#include "QtCore/qmetaobject.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qmetaobject();
#else
int QtCore_qmetaobject();
#endif
}


#ifdef TET_TEST
void QtCore_qmetaobject()
{
#else
int QtCore_qmetaobject()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qmetaobject types\n");
#define TYPE QMetaMethod
#undef TYPE

#define TYPE QMetaEnum
#undef TYPE

#define TYPE QMetaProperty
#undef TYPE

#define TYPE QMetaClassInfo
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qmetaobject types\n\n",pcnt,cnt);
return cnt;
#endif

}
