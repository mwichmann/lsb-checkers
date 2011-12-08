/*
 * Test of QtOpenGL/qglpixelbuffer
 */
#include "hdrchk.h"
#include "QtOpenGL/qglpixelbuffer.h"


extern "C" {
#ifdef TET_TEST
void QtOpenGL_qglpixelbuffer();
#else
int QtOpenGL_qglpixelbuffer();
#endif
}


#ifdef TET_TEST
void QtOpenGL_qglpixelbuffer()
{
#else
int QtOpenGL_qglpixelbuffer()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtOpenGL/qglpixelbuffer types\n");
#define TYPE QGLPixelBuffer
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtOpenGL/qglpixelbuffer types\n\n",pcnt,cnt);
return cnt;
#endif

}
