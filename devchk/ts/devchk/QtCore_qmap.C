/*
 * Test of QtCore/qmap
 */
#include "hdrchk.h"
#include "QtCore/qmap.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qmap();
#else
int QtCore_qmap();
#endif
}


#ifdef TET_TEST
void QtCore_qmap()
{
#else
int QtCore_qmap()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qmap types\n");
#define TYPE QMap<int, QVariant>
#undef TYPE

#define TYPE QMap<QString, QVariant>
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qmap types\n\n",pcnt,cnt);
return cnt;
#endif

}
