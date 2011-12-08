/*
 * Test of QtCore/qmimedata
 */
#include "hdrchk.h"
#include "QtCore/qmimedata.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qmimedata();
#else
int QtCore_qmimedata();
#endif
}


#ifdef TET_TEST
void QtCore_qmimedata()
{
#else
int QtCore_qmimedata()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qmimedata types\n");
#define TYPE QMimeData
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qmimedata types\n\n",pcnt,cnt);
return cnt;
#endif

}
