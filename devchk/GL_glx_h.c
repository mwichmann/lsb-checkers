/*
 * Test of GL/glx.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "GL/glx.h"



int GL_glx_h()
{
int cnt=0;
CheckTypeSize(GLXFBConfig,4)
CheckTypeSize(GLXContext,4)
CheckTypeSize(GLXWindow,4)
CheckTypeSize(GLXPbuffer,4)
CheckTypeSize(GLXDrawable,4)
CheckTypeSize(GLXPixmap,4)
CheckTypeSize(GLXContextID,4)
printf("%d tests in GL/glx.h\n",cnt);
return cnt;
}
