/*
 * Test of GL/gl.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "GL/gl.h"



int GL_gl_h()
{
int cnt=0;
CheckTypeSize(GLbyte,0)
CheckTypeSize(GLshort,0)
CheckTypeSize(GLint,0)
CheckTypeSize(GLubyte,0)
CheckTypeSize(GLushort,0)
CheckTypeSize(GLuint,0)
CheckTypeSize(GLsizei,0)
CheckTypeSize(GLfloat,0)
CheckTypeSize(GLclampf,0)
CheckTypeSize(GLdouble,0)
CheckTypeSize(GLclampd,0)
CheckTypeSize(GLbitfield,0)
CheckTypeSize(GLboolean,0)
CheckTypeSize(GLenum,0)
printf("%d tests in GL/gl.h\n",cnt);
return cnt;
}
