/*
 * Test of GL/gl.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "GL/gl.h"



int GL_gl_h()
{
int cnt=0;
CheckTypeSize(GLfloat,4)
CheckTypeSize(GLsizei,4)
CheckTypeSize(GLuint,4)
CheckTypeSize(GLushort,2)
CheckTypeSize(GLubyte,1)
CheckTypeSize(GLint,4)
CheckTypeSize(GLshort,2)
CheckTypeSize(GLbyte,1)
CheckTypeSize(GLbitfield,4)
CheckTypeSize(GLboolean,1)
CheckTypeSize(GLenum,4)
CheckTypeSize(GLclampf,4)
CheckTypeSize(GLdouble,8)
CheckTypeSize(GLclampd,8)
printf("%d tests in GL/gl.h\n",cnt);
return cnt;
}
