/*
 * Test of QtCore/qbuffer
 */
#include "hdrchk.h"
#include "QtCore/qbuffer.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qbuffer();
#else
int QtCore_qbuffer();
#endif
}


#ifdef TET_TEST
void QtCore_qbuffer()
{
#else
int QtCore_qbuffer()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qbuffer types\n");
#define TYPE QBuffer
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qbuffer types\n\n",pcnt,cnt);
return cnt;
#endif

}
