/*
 * Test of QtCore/qobjectdefs
 */
#include "hdrchk.h"
#include "QtCore/qobjectdefs.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qobjectdefs();
#else
int QtCore_qobjectdefs();
#endif
}


#ifdef TET_TEST
void QtCore_qobjectdefs()
{
#else
int QtCore_qobjectdefs()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qobjectdefs types\n");
#define TYPE QGenericArgument
#undef TYPE

#define TYPE QGenericReturnArgument
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qobjectdefs types\n\n",pcnt,cnt);
return cnt;
#endif

}
