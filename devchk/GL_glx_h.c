/*
 * Test of GL/glx.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "GL/glx.h"



int GL_glx_h()
{
int cnt=0;
CheckTypeSize(GLXFBConfig,0)
CheckTypeSize(GLXContext,0)
CheckTypeSize(GLXWindow,0)
CheckTypeSize(GLXPbuffer,0)
CheckTypeSize(GLXDrawable,0)
CheckTypeSize(GLXPixmap,0)
CheckTypeSize(GLXContextID,0)
printf("%d tests in GL/glx.h\n",cnt);
return cnt;
}
