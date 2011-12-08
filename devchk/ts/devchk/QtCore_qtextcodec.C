/*
 * Test of QtCore/qtextcodec
 */
#include "hdrchk.h"
#include "QtCore/qtextcodec.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qtextcodec();
#else
int QtCore_qtextcodec();
#endif
}


#ifdef TET_TEST
void QtCore_qtextcodec()
{
#else
int QtCore_qtextcodec()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qtextcodec types\n");
#define TYPE QTextCodec
#undef TYPE

#define TYPE _Z396QFlagsIN10QTextCodec14ConversionFlagEE
#undef TYPE

#define TYPE QTextEncoder
#undef TYPE

#define TYPE QTextDecoder
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qtextcodec types\n\n",pcnt,cnt);
return cnt;
#endif

}
