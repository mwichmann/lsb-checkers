/*
 * Test of QtGui/qimageiohandler
 */
#include "hdrchk.h"
#include "QtGui/qimageiohandler.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qimageiohandler();
#else
int QtGui_qimageiohandler();
#endif
}


#ifdef TET_TEST
void QtGui_qimageiohandler()
{
#else
int QtGui_qimageiohandler()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qimageiohandler types\n");
#define TYPE QImageIOHandler
#undef TYPE

#define TYPE QImageIOPlugin
#undef TYPE

#define TYPE _Z396QFlagsIN14QImageIOPlugin10CapabilityEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qimageiohandler types\n\n",pcnt,cnt);
return cnt;
#endif

}
