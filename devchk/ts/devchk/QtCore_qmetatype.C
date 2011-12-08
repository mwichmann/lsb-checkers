/*
 * Test of QtCore/qmetatype
 */
#include "hdrchk.h"
#include "QtCore/qmetatype.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qmetatype();
#else
int QtCore_qmetatype();
#endif
}


#ifdef TET_TEST
void QtCore_qmetatype()
{
#else
int QtCore_qmetatype()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qmetatype types\n");
#define TYPE QMetaType
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qmetatype types\n\n",pcnt,cnt);
return cnt;
#endif

}
