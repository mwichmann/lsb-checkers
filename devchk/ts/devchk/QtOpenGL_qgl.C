/*
 * Test of QtOpenGL/qgl
 */
#include "hdrchk.h"
#include "QtOpenGL/qgl.h"


extern "C" {
#ifdef TET_TEST
void QtOpenGL_qgl();
#else
int QtOpenGL_qgl();
#endif
}


#ifdef TET_TEST
void QtOpenGL_qgl()
{
#else
int QtOpenGL_qgl()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtOpenGL/qgl types\n");
#define TYPE _Z296QFlagsIN3QGL12FormatOptionEE
#undef TYPE

#define TYPE QGLFormat
#undef TYPE

#define TYPE QGLContext
#undef TYPE

#define TYPE QGLWidget
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtOpenGL/qgl types\n\n",pcnt,cnt);
return cnt;
#endif

}
