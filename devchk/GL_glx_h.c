/*
 * Test of GL/glx.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <X11/Xlib.h>
#include "GL/glx.h"



int GL_glx_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(GLXContext,4,8164)
#elif __ia64__
CheckTypeSize(GLXContext,8,8164)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8164,0);
#endif
#ifdef __i386__
CheckTypeSize(GLXFBConfig,4,8165)
#elif __ia64__
CheckTypeSize(GLXFBConfig,8,8165)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8165,0);
#endif
#ifdef __i386__
CheckTypeSize(GLXContextID,4,8717)
#elif __ia64__
CheckTypeSize(GLXContextID,8,8717)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8717,0);
#endif
#ifdef __i386__
CheckTypeSize(GLXPixmap,4,8718)
#elif __ia64__
CheckTypeSize(GLXPixmap,8,8718)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8718,0);
#endif
#ifdef __i386__
CheckTypeSize(GLXDrawable,4,8719)
#elif __ia64__
CheckTypeSize(GLXDrawable,8,8719)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8719,0);
#endif
#ifdef __i386__
CheckTypeSize(GLXPbuffer,4,8720)
#elif __ia64__
CheckTypeSize(GLXPbuffer,8,8720)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8720,0);
#endif
#ifdef __i386__
CheckTypeSize(GLXWindow,4,8721)
#elif __ia64__
CheckTypeSize(GLXWindow,8,8721)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8721,0);
#endif
printf("%d tests in GL/glx.h\n",cnt);
return cnt;
}
