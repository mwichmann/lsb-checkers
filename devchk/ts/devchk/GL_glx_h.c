/*
 * Test of GL/glx.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef __i386__
CheckTypeSize(GLXContext,4, 8164, 2)
#elif __ia64__
CheckTypeSize(GLXContext,8, 8164, 3)
#elif __powerpc__
CheckTypeSize(GLXContext,4, 8164, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8164,0);
#endif

#ifdef __i386__
CheckTypeSize(GLXFBConfig,4, 8165, 2)
#elif __ia64__
CheckTypeSize(GLXFBConfig,8, 8165, 3)
#elif __powerpc__
CheckTypeSize(GLXFBConfig,4, 8165, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8165,0);
#endif

#ifdef __i386__
CheckTypeSize(GLXContextID,4, 8717, 2)
#elif __ia64__
CheckTypeSize(GLXContextID,8, 8717, 3)
#elif __powerpc__
CheckTypeSize(GLXContextID,4, 8717, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8717,0);
#endif

#ifdef __i386__
CheckTypeSize(GLXPixmap,4, 8718, 2)
#elif __ia64__
CheckTypeSize(GLXPixmap,8, 8718, 3)
#elif __powerpc__
CheckTypeSize(GLXPixmap,4, 8718, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8718,0);
#endif

#ifdef __i386__
CheckTypeSize(GLXDrawable,4, 8719, 2)
#elif __ia64__
CheckTypeSize(GLXDrawable,8, 8719, 3)
#elif __powerpc__
CheckTypeSize(GLXDrawable,4, 8719, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8719,0);
#endif

#ifdef __i386__
CheckTypeSize(GLXPbuffer,4, 8720, 2)
#elif __ia64__
CheckTypeSize(GLXPbuffer,8, 8720, 3)
#elif __powerpc__
CheckTypeSize(GLXPbuffer,4, 8720, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8720,0);
#endif

#ifdef __i386__
CheckTypeSize(GLXWindow,4, 8721, 2)
#elif __ia64__
CheckTypeSize(GLXWindow,8, 8721, 3)
#elif __powerpc__
CheckTypeSize(GLXWindow,4, 8721, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8721,0);
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
