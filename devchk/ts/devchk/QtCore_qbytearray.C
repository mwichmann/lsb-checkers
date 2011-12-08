/*
 * Test of QtCore/qbytearray
 */
#include "hdrchk.h"
#include "QtCore/qbytearray.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qbytearray();
#else
int QtCore_qbytearray();
#endif
}


#ifdef TET_TEST
void QtCore_qbytearray()
{
#else
int QtCore_qbytearray()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qbytearray types\n");
#define TYPE QByteArray
#undef TYPE

#define TYPE QByteRef
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qbytearray types\n\n",pcnt,cnt);
return cnt;
#endif

}
