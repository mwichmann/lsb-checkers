/*
 * Test of QtCore/qbitarray
 */
#include "hdrchk.h"
#include "QtCore/qbitarray.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qbitarray();
#else
int QtCore_qbitarray();
#endif
}


#ifdef TET_TEST
void QtCore_qbitarray()
{
#else
int QtCore_qbitarray()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qbitarray types\n");
#define TYPE QBitArray
#undef TYPE

#define TYPE QBitRef
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qbitarray types\n\n",pcnt,cnt);
return cnt;
#endif

}
