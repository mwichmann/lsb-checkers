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
CheckTypeSize(GLXContext,4)
#elif __ia64__
CheckTypeSize(GLXContext,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8164,0);
#endif

#ifdef __i386__
CheckTypeSize(GLXFBConfig,4)
#elif __ia64__
CheckTypeSize(GLXFBConfig,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8165,0);
#endif

#ifdef __i386__
CheckTypeSize(GLXContextID,4)
#elif __ia64__
CheckTypeSize(GLXContextID,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8717,0);
#endif

#ifdef __i386__
CheckTypeSize(GLXPixmap,4)
#elif __ia64__
CheckTypeSize(GLXPixmap,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8718,0);
#endif

#ifdef __i386__
CheckTypeSize(GLXDrawable,4)
#elif __ia64__
CheckTypeSize(GLXDrawable,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8719,0);
#endif

#ifdef __i386__
CheckTypeSize(GLXPbuffer,4)
#elif __ia64__
CheckTypeSize(GLXPbuffer,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8720,0);
#endif

#ifdef __i386__
CheckTypeSize(GLXWindow,4)
#elif __ia64__
CheckTypeSize(GLXWindow,8)
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
