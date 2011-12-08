/*
 * Test of QtCore/qnamespace
 */
#include "hdrchk.h"
#include "QtCore/qnamespace.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qnamespace();
#else
int QtCore_qnamespace();
#endif
}


#ifdef TET_TEST
void QtCore_qnamespace()
{
#else
int QtCore_qnamespace()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qnamespace types\n");
#define TYPE _Z276QFlagsIN2Qt11MouseButtonEE
#undef TYPE

#define TYPE _Z276QFlagsIN2Qt11OrientationEE
#undef TYPE

#define TYPE _Z296QFlagsIN2Qt13AlignmentFlagEE
#undef TYPE

#define TYPE _Z266QFlagsIN2Qt10WindowTypeEE
#undef TYPE

#define TYPE _Z276QFlagsIN2Qt11WindowStateEE
#undef TYPE

#define TYPE _Z236QFlagsIN2Qt8ItemFlagEE
#undef TYPE

#define TYPE QInternal
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qnamespace types\n\n",pcnt,cnt);
return cnt;
#endif

}
