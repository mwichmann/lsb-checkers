/*
 * Test of GL/glext.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <GL/gl.h>#include "GL/glext.h"



#ifdef TET_TEST
void GL_glext_h()
{
#else
int GL_glext_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in GL/glext.h\n");
#endif

printf("Checking data structures in GL/glext.h\n");
#if 1
CheckTypeSize(GLhandleARB,0, 31668, 1, 1.0, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(GLintptr,0, 31669, 1, 1.0, NULL, 8, NULL)
#endif

#if 1
CheckTypeSize(GLchar,0, 31674, 1, 1.0, NULL, 2, NULL)
#endif

#if 1
CheckTypeSize(GLcharARB,0, 31678, 1, 1.0, NULL, 2, NULL)
#endif

#if 1
CheckTypeSize(GLsizeiptr,0, 31682, 1, 1.0, NULL, 9027, NULL)
#endif

#if 1
CheckTypeSize(GLsizeiptrARB,0, 31683, 1, 1.0, NULL, 9027, NULL)
#endif

#if 1
CheckTypeSize(GLintptrARB,0, 31685, 1, 1.0, NULL, 8, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in GL/glext.h\n\n",pcnt,cnt);
return cnt;
#endif

}
