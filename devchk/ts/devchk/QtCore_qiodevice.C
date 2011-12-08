/*
 * Test of QtCore/qiodevice
 */
#include "hdrchk.h"
#include "QtCore/qiodevice.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qiodevice();
#else
int QtCore_qiodevice();
#endif
}


#ifdef TET_TEST
void QtCore_qiodevice()
{
#else
int QtCore_qiodevice()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qiodevice types\n");
#define TYPE QIODevice
#undef TYPE

#define TYPE _Z356QFlagsIN9QIODevice12OpenModeFlagEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qiodevice types\n\n",pcnt,cnt);
return cnt;
#endif

}
