/*
 * Test of QtGui/qimage
 */
#include "hdrchk.h"
#include "QtGui/qimage.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qimage();
#else
int QtGui_qimage();
#endif
}


#ifdef TET_TEST
void QtGui_qimage()
{
#else
int QtGui_qimage()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qimage types\n");
#define TYPE QImageTextKeyLang
#undef TYPE

#define TYPE QImage
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qimage types\n\n",pcnt,cnt);
return cnt;
#endif

}
