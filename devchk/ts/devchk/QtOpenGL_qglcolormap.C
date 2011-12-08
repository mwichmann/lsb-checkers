/*
 * Test of QtOpenGL/qglcolormap
 */
#include "hdrchk.h"
#include "QtOpenGL/qglcolormap.h"


extern "C" {
#ifdef TET_TEST
void QtOpenGL_qglcolormap();
#else
int QtOpenGL_qglcolormap();
#endif
}


#ifdef TET_TEST
void QtOpenGL_qglcolormap()
{
#else
int QtOpenGL_qglcolormap()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtOpenGL/qglcolormap types\n");
#define TYPE QGLColormap
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtOpenGL/qglcolormap types\n\n",pcnt,cnt);
return cnt;
#endif

}
