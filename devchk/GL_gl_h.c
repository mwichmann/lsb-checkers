/*
 * Test of GL/gl.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "GL/gl.h"



int GL_gl_h()
{
int cnt=0;
CheckTypeSize(GLvoid,1)
CheckTypeSize(GLbyte,1)
CheckTypeSize(GLshort,2)
CheckTypeSize(GLint,4)
CheckTypeSize(GLubyte,1)
CheckTypeSize(GLushort,2)
CheckTypeSize(GLuint,4)
CheckTypeSize(GLsizei,4)
CheckTypeSize(GLfloat,4)
CheckTypeSize(GLclampf,4)
CheckTypeSize(GLdouble,8)
CheckTypeSize(GLclampd,8)
CheckTypeSize(GLbitfield,4)
CheckTypeSize(GLboolean,1)
CheckTypeSize(GLenum,4)
printf("%d tests in GL/gl.h\n",cnt);
return cnt;
}
