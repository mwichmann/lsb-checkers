/*
 * Test of GL/glx.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include "GL/glx.h"



#ifdef TET_TEST
void GL_glx_h()
{
#else
int GL_glx_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in GL/glx.h\n");
#endif

#if __i386__
CheckTypeSize(GLXContext,4, 8164, 2)
#elif __ia64__
CheckTypeSize(GLXContext,8, 8164, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GLXContext,4, 8164, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(GLXContext,4, 8164, 10)
#elif __powerpc64__
CheckTypeSize(GLXContext,8, 8164, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8164,0);
Msg("Find size of GLXContext (8164)\n");
#endif

#if __i386__
CheckTypeSize(GLXFBConfig,4, 8165, 2)
#elif __ia64__
CheckTypeSize(GLXFBConfig,8, 8165, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GLXFBConfig,4, 8165, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(GLXFBConfig,4, 8165, 10)
#elif __powerpc64__
CheckTypeSize(GLXFBConfig,8, 8165, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8165,0);
Msg("Find size of GLXFBConfig (8165)\n");
#endif

#if __i386__
CheckTypeSize(GLXContextID,4, 8717, 2)
#elif __ia64__
CheckTypeSize(GLXContextID,8, 8717, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GLXContextID,4, 8717, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(GLXContextID,4, 8717, 10)
#elif __powerpc64__
CheckTypeSize(GLXContextID,8, 8717, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8717,0);
Msg("Find size of GLXContextID (8717)\n");
#endif

#if __i386__
CheckTypeSize(GLXPixmap,4, 8718, 2)
#elif __ia64__
CheckTypeSize(GLXPixmap,8, 8718, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GLXPixmap,4, 8718, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(GLXPixmap,4, 8718, 10)
#elif __powerpc64__
CheckTypeSize(GLXPixmap,8, 8718, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8718,0);
Msg("Find size of GLXPixmap (8718)\n");
#endif

#if __i386__
CheckTypeSize(GLXDrawable,4, 8719, 2)
#elif __ia64__
CheckTypeSize(GLXDrawable,8, 8719, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GLXDrawable,4, 8719, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(GLXDrawable,4, 8719, 10)
#elif __powerpc64__
CheckTypeSize(GLXDrawable,8, 8719, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8719,0);
Msg("Find size of GLXDrawable (8719)\n");
#endif

#if __i386__
CheckTypeSize(GLXPbuffer,4, 8720, 2)
#elif __ia64__
CheckTypeSize(GLXPbuffer,8, 8720, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GLXPbuffer,4, 8720, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(GLXPbuffer,4, 8720, 10)
#elif __powerpc64__
CheckTypeSize(GLXPbuffer,8, 8720, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8720,0);
Msg("Find size of GLXPbuffer (8720)\n");
#endif

#if __i386__
CheckTypeSize(GLXWindow,4, 8721, 2)
#elif __ia64__
CheckTypeSize(GLXWindow,8, 8721, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GLXWindow,4, 8721, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(GLXWindow,4, 8721, 10)
#elif __powerpc64__
CheckTypeSize(GLXWindow,8, 8721, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8721,0);
Msg("Find size of GLXWindow (8721)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in GL/glx.h\n",cnt);
return cnt;
#endif

}
