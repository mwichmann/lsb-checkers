/*
 * Test of QtCore/qsize
 */
#include "hdrchk.h"
#include "QtCore/qsize.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qsize();
#else
int QtCore_qsize();
#endif
}


#ifdef TET_TEST
void QtCore_qsize()
{
#else
int QtCore_qsize()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qsize types\n");
#define TYPE QSize
#undef TYPE

#define TYPE QSizeF
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qsize types\n\n",pcnt,cnt);
return cnt;
#endif

}
