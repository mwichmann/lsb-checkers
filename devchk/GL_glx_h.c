/*
 * Test of GL/glx.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "GL/glx.h"



int GL_glx_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(GLXContextID,4,6439)
#elif __ia64__
CheckTypeSize(GLXContextID,8,6439)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6439,0);
#endif
#ifdef __i386__
CheckTypeSize(GLXPixmap,4,6440)
#elif __ia64__
CheckTypeSize(GLXPixmap,8,6440)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6440,0);
#endif
#ifdef __i386__
CheckTypeSize(GLXDrawable,4,6441)
#elif __ia64__
CheckTypeSize(GLXDrawable,8,6441)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6441,0);
#endif
#ifdef __i386__
CheckTypeSize(GLXPbuffer,4,6442)
#elif __ia64__
CheckTypeSize(GLXPbuffer,8,6442)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6442,0);
#endif
#ifdef __i386__
CheckTypeSize(GLXWindow,4,6443)
#elif __ia64__
CheckTypeSize(GLXWindow,8,6443)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6443,0);
#endif
#ifdef __i386__
CheckTypeSize(GLXContext,4,6445)
#elif __ia64__
CheckTypeSize(GLXContext,8,6445)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6445,0);
#endif
#ifdef __i386__
CheckTypeSize(GLXFBConfig,4,6446)
#elif __ia64__
CheckTypeSize(GLXFBConfig,8,6446)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6446,0);
#endif
printf("%d tests in GL/glx.h\n",cnt);
return cnt;
}
