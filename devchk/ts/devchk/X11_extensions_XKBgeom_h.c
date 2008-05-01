/*
 * Test of X11/extensions/XKBgeom.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/extensions/XKBgeom.h"



#ifdef TET_TEST
void X11_extensions_XKBgeom_h()
{
#else
int X11_extensions_XKBgeom_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XKBgeom.h\n");
#endif

printf("Checking data structures in X11/extensions/XKBgeom.h\n");
#if defined __x86_64__
CheckTypeSize(struct _XkbProperty,16, 9407, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbProperty,value,8,11,30547)
CheckOffset(struct _XkbProperty,value,8,11,30547)
#elif defined __s390x__
CheckTypeSize(struct _XkbProperty,16, 9407, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbProperty,value,8,12,30547)
CheckOffset(struct _XkbProperty,value,8,12,30547)
#elif defined __ia64__
CheckTypeSize(struct _XkbProperty,16, 9407, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbProperty,value,8,3,30547)
CheckOffset(struct _XkbProperty,value,8,3,30547)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbProperty,16, 9407, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbProperty,value,8,9,30547)
CheckOffset(struct _XkbProperty,value,8,9,30547)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbProperty,8, 9407, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbProperty,value,4,10,30547)
CheckOffset(struct _XkbProperty,value,4,10,30547)
#elif defined __i386__
CheckTypeSize(struct _XkbProperty,8, 9407, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbProperty,value,4,2,30547)
CheckOffset(struct _XkbProperty,value,4,2,30547)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbProperty,8, 9407, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbProperty,value,4,6,30547)
CheckOffset(struct _XkbProperty,value,4,6,30547)
#else
Msg("Find size of _XkbProperty (9407)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9407,0);
#endif

#if defined __x86_64__
CheckTypeSize(XkbPropertyRec,16, 9408, 11, 1.2, NULL, 9407, NULL)
#elif defined __s390x__
CheckTypeSize(XkbPropertyRec,16, 9408, 12, 1.2, NULL, 9407, NULL)
#elif defined __ia64__
CheckTypeSize(XkbPropertyRec,16, 9408, 3, 1.2, NULL, 9407, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbPropertyRec,16, 9408, 9, 1.2, NULL, 9407, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbPropertyRec,8, 9408, 10, 1.2, NULL, 9407, NULL)
#elif defined __i386__
CheckTypeSize(XkbPropertyRec,8, 9408, 2, 1.2, NULL, 9407, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbPropertyRec,8, 9408, 6, 1.2, NULL, 9407, NULL)
#else
Msg("Find size of XkbPropertyRec (9408)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9407,NULL);\n",architecture,9408,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbPropertyPtr,4, 9410, 10, 1.2, NULL, 9409, NULL)
#elif defined __i386__
CheckTypeSize(XkbPropertyPtr,4, 9410, 2, 1.2, NULL, 9409, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbPropertyPtr,4, 9410, 6, 1.2, NULL, 9409, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbPropertyPtr,8, 9410, 11, 1.2, NULL, 9409, NULL)
#elif defined __s390x__
CheckTypeSize(XkbPropertyPtr,8, 9410, 12, 1.2, NULL, 9409, NULL)
#elif defined __ia64__
CheckTypeSize(XkbPropertyPtr,8, 9410, 3, 1.2, NULL, 9409, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbPropertyPtr,8, 9410, 9, 1.2, NULL, 9409, NULL)
#else
Msg("Find size of XkbPropertyPtr (9410)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9409,NULL);\n",architecture,9410,0);
#endif

#if defined __x86_64__
CheckTypeSize(struct _XkbColor,16, 9411, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbColor,spec,8,11,30551)
CheckOffset(struct _XkbColor,spec,8,11,30551)
#elif defined __s390x__
CheckTypeSize(struct _XkbColor,16, 9411, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbColor,spec,8,12,30551)
CheckOffset(struct _XkbColor,spec,8,12,30551)
#elif defined __ia64__
CheckTypeSize(struct _XkbColor,16, 9411, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbColor,spec,8,3,30551)
CheckOffset(struct _XkbColor,spec,8,3,30551)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbColor,16, 9411, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbColor,spec,8,9,30551)
CheckOffset(struct _XkbColor,spec,8,9,30551)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbColor,8, 9411, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbColor,spec,4,10,30551)
CheckOffset(struct _XkbColor,spec,4,10,30551)
#elif defined __i386__
CheckTypeSize(struct _XkbColor,8, 9411, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbColor,spec,4,2,30551)
CheckOffset(struct _XkbColor,spec,4,2,30551)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbColor,8, 9411, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbColor,spec,4,6,30551)
CheckOffset(struct _XkbColor,spec,4,6,30551)
#else
Msg("Find size of _XkbColor (9411)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9411,0);
#endif

#if defined __x86_64__
CheckTypeSize(XkbColorRec,16, 9412, 11, 1.2, NULL, 9411, NULL)
#elif defined __s390x__
CheckTypeSize(XkbColorRec,16, 9412, 12, 1.2, NULL, 9411, NULL)
#elif defined __ia64__
CheckTypeSize(XkbColorRec,16, 9412, 3, 1.2, NULL, 9411, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbColorRec,16, 9412, 9, 1.2, NULL, 9411, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbColorRec,8, 9412, 10, 1.2, NULL, 9411, NULL)
#elif defined __i386__
CheckTypeSize(XkbColorRec,8, 9412, 2, 1.2, NULL, 9411, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbColorRec,8, 9412, 6, 1.2, NULL, 9411, NULL)
#else
Msg("Find size of XkbColorRec (9412)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9411,NULL);\n",architecture,9412,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbColorPtr,4, 9414, 10, 1.2, NULL, 9413, NULL)
#elif defined __i386__
CheckTypeSize(XkbColorPtr,4, 9414, 2, 1.2, NULL, 9413, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbColorPtr,4, 9414, 6, 1.2, NULL, 9413, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbColorPtr,8, 9414, 11, 1.2, NULL, 9413, NULL)
#elif defined __s390x__
CheckTypeSize(XkbColorPtr,8, 9414, 12, 1.2, NULL, 9413, NULL)
#elif defined __ia64__
CheckTypeSize(XkbColorPtr,8, 9414, 3, 1.2, NULL, 9413, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbColorPtr,8, 9414, 9, 1.2, NULL, 9413, NULL)
#else
Msg("Find size of XkbColorPtr (9414)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9413,NULL);\n",architecture,9414,0);
#endif

#if 1
CheckTypeSize(struct _XkbPoint,4, 9415, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbPoint,y,2,1,30555)
CheckOffset(struct _XkbPoint,y,2,1,30555)
#endif

#if 1
CheckTypeSize(XkbPointRec,4, 9416, 1, 1.2, NULL, 9415, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbPointPtr,4, 9418, 10, 1.2, NULL, 9417, NULL)
#elif defined __i386__
CheckTypeSize(XkbPointPtr,4, 9418, 2, 1.2, NULL, 9417, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbPointPtr,4, 9418, 6, 1.2, NULL, 9417, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbPointPtr,8, 9418, 11, 1.2, NULL, 9417, NULL)
#elif defined __s390x__
CheckTypeSize(XkbPointPtr,8, 9418, 12, 1.2, NULL, 9417, NULL)
#elif defined __ia64__
CheckTypeSize(XkbPointPtr,8, 9418, 3, 1.2, NULL, 9417, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbPointPtr,8, 9418, 9, 1.2, NULL, 9417, NULL)
#else
Msg("Find size of XkbPointPtr (9418)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9417,NULL);\n",architecture,9418,0);
#endif

#if 1
CheckTypeSize(struct _XkbBounds,8, 9419, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbBounds,y1,2,1,30561)
CheckOffset(struct _XkbBounds,y1,2,1,30561)
CheckMemberSize(struct _XkbBounds,x2,2,1,30562)
CheckOffset(struct _XkbBounds,x2,4,1,30562)
CheckMemberSize(struct _XkbBounds,y2,2,1,30563)
CheckOffset(struct _XkbBounds,y2,6,1,30563)
#endif

#if 1
CheckTypeSize(XkbBoundsRec,8, 9420, 1, 1.2, NULL, 9419, NULL)
#endif

#if defined __i386__
CheckTypeSize(XkbBoundsPtr,4, 9422, 2, 1.2, NULL, 9421, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbBoundsPtr,4, 9422, 10, 1.2, NULL, 9421, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbBoundsPtr,8, 9422, 11, 1.2, NULL, 9421, NULL)
#elif defined __s390x__
CheckTypeSize(XkbBoundsPtr,8, 9422, 12, 1.2, NULL, 9421, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbBoundsPtr,4, 9422, 6, 1.2, NULL, 9421, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbBoundsPtr,8, 9422, 9, 1.2, NULL, 9421, NULL)
#elif defined __ia64__
CheckTypeSize(XkbBoundsPtr,8, 9422, 3, 1.2, NULL, 9421, NULL)
#else
Msg("Find size of XkbBoundsPtr (9422)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9421,NULL);\n",architecture,9422,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbOutline,12, 9423, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOutline,points,4,10,30571)
CheckOffset(struct _XkbOutline,points,8,10,30571)
#elif defined __i386__
CheckTypeSize(struct _XkbOutline,12, 9423, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOutline,points,4,2,30571)
CheckOffset(struct _XkbOutline,points,8,2,30571)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbOutline,12, 9423, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOutline,points,4,6,30571)
CheckOffset(struct _XkbOutline,points,8,6,30571)
#elif defined __x86_64__
CheckTypeSize(struct _XkbOutline,16, 9423, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOutline,points,8,11,30571)
CheckOffset(struct _XkbOutline,points,8,11,30571)
#elif defined __s390x__
CheckTypeSize(struct _XkbOutline,16, 9423, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOutline,points,8,12,30571)
CheckOffset(struct _XkbOutline,points,8,12,30571)
#elif defined __ia64__
CheckTypeSize(struct _XkbOutline,16, 9423, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOutline,points,8,3,30571)
CheckOffset(struct _XkbOutline,points,8,3,30571)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbOutline,16, 9423, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOutline,points,8,9,30571)
CheckOffset(struct _XkbOutline,points,8,9,30571)
#else
Msg("Find size of _XkbOutline (9423)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9423,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbOutlineRec,12, 9424, 10, 1.2, NULL, 9423, NULL)
#elif defined __i386__
CheckTypeSize(XkbOutlineRec,12, 9424, 2, 1.2, NULL, 9423, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbOutlineRec,12, 9424, 6, 1.2, NULL, 9423, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbOutlineRec,16, 9424, 11, 1.2, NULL, 9423, NULL)
#elif defined __s390x__
CheckTypeSize(XkbOutlineRec,16, 9424, 12, 1.2, NULL, 9423, NULL)
#elif defined __ia64__
CheckTypeSize(XkbOutlineRec,16, 9424, 3, 1.2, NULL, 9423, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbOutlineRec,16, 9424, 9, 1.2, NULL, 9423, NULL)
#else
Msg("Find size of XkbOutlineRec (9424)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9423,NULL);\n",architecture,9424,0);
#endif

#if defined __i386__
CheckTypeSize(XkbOutlinePtr,4, 9426, 2, 1.2, NULL, 9425, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbOutlinePtr,4, 9426, 10, 1.2, NULL, 9425, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbOutlinePtr,8, 9426, 11, 1.2, NULL, 9425, NULL)
#elif defined __s390x__
CheckTypeSize(XkbOutlinePtr,8, 9426, 12, 1.2, NULL, 9425, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbOutlinePtr,4, 9426, 6, 1.2, NULL, 9425, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbOutlinePtr,8, 9426, 9, 1.2, NULL, 9425, NULL)
#elif defined __ia64__
CheckTypeSize(XkbOutlinePtr,8, 9426, 3, 1.2, NULL, 9425, NULL)
#else
Msg("Find size of XkbOutlinePtr (9426)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9425,NULL);\n",architecture,9426,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbShape,28, 9427, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShape,num_outlines,2,10,30580)
CheckOffset(struct _XkbShape,num_outlines,4,10,30580)
CheckMemberSize(struct _XkbShape,sz_outlines,2,10,30581)
CheckOffset(struct _XkbShape,sz_outlines,6,10,30581)
CheckMemberSize(struct _XkbShape,outlines,4,10,30582)
CheckOffset(struct _XkbShape,outlines,8,10,30582)
CheckMemberSize(struct _XkbShape,approx,4,10,30583)
CheckOffset(struct _XkbShape,approx,12,10,30583)
CheckMemberSize(struct _XkbShape,primary,4,10,30584)
CheckOffset(struct _XkbShape,primary,16,10,30584)
CheckMemberSize(struct _XkbShape,bounds,8,10,30585)
CheckOffset(struct _XkbShape,bounds,20,10,30585)
#elif defined __i386__
CheckTypeSize(struct _XkbShape,28, 9427, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShape,num_outlines,2,2,30580)
CheckOffset(struct _XkbShape,num_outlines,4,2,30580)
CheckMemberSize(struct _XkbShape,sz_outlines,2,2,30581)
CheckOffset(struct _XkbShape,sz_outlines,6,2,30581)
CheckMemberSize(struct _XkbShape,outlines,4,2,30582)
CheckOffset(struct _XkbShape,outlines,8,2,30582)
CheckMemberSize(struct _XkbShape,approx,4,2,30583)
CheckOffset(struct _XkbShape,approx,12,2,30583)
CheckMemberSize(struct _XkbShape,primary,4,2,30584)
CheckOffset(struct _XkbShape,primary,16,2,30584)
CheckMemberSize(struct _XkbShape,bounds,8,2,30585)
CheckOffset(struct _XkbShape,bounds,20,2,30585)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbShape,28, 9427, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShape,num_outlines,2,6,30580)
CheckOffset(struct _XkbShape,num_outlines,4,6,30580)
CheckMemberSize(struct _XkbShape,sz_outlines,2,6,30581)
CheckOffset(struct _XkbShape,sz_outlines,6,6,30581)
CheckMemberSize(struct _XkbShape,outlines,4,6,30582)
CheckOffset(struct _XkbShape,outlines,8,6,30582)
CheckMemberSize(struct _XkbShape,approx,4,6,30583)
CheckOffset(struct _XkbShape,approx,12,6,30583)
CheckMemberSize(struct _XkbShape,primary,4,6,30584)
CheckOffset(struct _XkbShape,primary,16,6,30584)
CheckMemberSize(struct _XkbShape,bounds,8,6,30585)
CheckOffset(struct _XkbShape,bounds,20,6,30585)
#elif defined __x86_64__
CheckTypeSize(struct _XkbShape,48, 9427, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShape,num_outlines,2,11,30580)
CheckOffset(struct _XkbShape,num_outlines,8,11,30580)
CheckMemberSize(struct _XkbShape,sz_outlines,2,11,30581)
CheckOffset(struct _XkbShape,sz_outlines,10,11,30581)
CheckMemberSize(struct _XkbShape,outlines,8,11,30582)
CheckOffset(struct _XkbShape,outlines,16,11,30582)
CheckMemberSize(struct _XkbShape,approx,8,11,30583)
CheckOffset(struct _XkbShape,approx,24,11,30583)
CheckMemberSize(struct _XkbShape,primary,8,11,30584)
CheckOffset(struct _XkbShape,primary,32,11,30584)
CheckMemberSize(struct _XkbShape,bounds,8,11,30585)
CheckOffset(struct _XkbShape,bounds,40,11,30585)
#elif defined __s390x__
CheckTypeSize(struct _XkbShape,48, 9427, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShape,num_outlines,2,12,30580)
CheckOffset(struct _XkbShape,num_outlines,8,12,30580)
CheckMemberSize(struct _XkbShape,sz_outlines,2,12,30581)
CheckOffset(struct _XkbShape,sz_outlines,10,12,30581)
CheckMemberSize(struct _XkbShape,outlines,8,12,30582)
CheckOffset(struct _XkbShape,outlines,16,12,30582)
CheckMemberSize(struct _XkbShape,approx,8,12,30583)
CheckOffset(struct _XkbShape,approx,24,12,30583)
CheckMemberSize(struct _XkbShape,primary,8,12,30584)
CheckOffset(struct _XkbShape,primary,32,12,30584)
CheckMemberSize(struct _XkbShape,bounds,8,12,30585)
CheckOffset(struct _XkbShape,bounds,40,12,30585)
#elif defined __ia64__
CheckTypeSize(struct _XkbShape,48, 9427, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShape,num_outlines,2,3,30580)
CheckOffset(struct _XkbShape,num_outlines,8,3,30580)
CheckMemberSize(struct _XkbShape,sz_outlines,2,3,30581)
CheckOffset(struct _XkbShape,sz_outlines,10,3,30581)
CheckMemberSize(struct _XkbShape,outlines,8,3,30582)
CheckOffset(struct _XkbShape,outlines,16,3,30582)
CheckMemberSize(struct _XkbShape,approx,8,3,30583)
CheckOffset(struct _XkbShape,approx,24,3,30583)
CheckMemberSize(struct _XkbShape,primary,8,3,30584)
CheckOffset(struct _XkbShape,primary,32,3,30584)
CheckMemberSize(struct _XkbShape,bounds,8,3,30585)
CheckOffset(struct _XkbShape,bounds,40,3,30585)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbShape,48, 9427, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShape,num_outlines,2,9,30580)
CheckOffset(struct _XkbShape,num_outlines,8,9,30580)
CheckMemberSize(struct _XkbShape,sz_outlines,2,9,30581)
CheckOffset(struct _XkbShape,sz_outlines,10,9,30581)
CheckMemberSize(struct _XkbShape,outlines,8,9,30582)
CheckOffset(struct _XkbShape,outlines,16,9,30582)
CheckMemberSize(struct _XkbShape,approx,8,9,30583)
CheckOffset(struct _XkbShape,approx,24,9,30583)
CheckMemberSize(struct _XkbShape,primary,8,9,30584)
CheckOffset(struct _XkbShape,primary,32,9,30584)
CheckMemberSize(struct _XkbShape,bounds,8,9,30585)
CheckOffset(struct _XkbShape,bounds,40,9,30585)
#else
Msg("Find size of _XkbShape (9427)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9427,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbShapeRec,28, 9428, 10, 1.2, NULL, 9427, NULL)
#elif defined __i386__
CheckTypeSize(XkbShapeRec,28, 9428, 2, 1.2, NULL, 9427, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbShapeRec,28, 9428, 6, 1.2, NULL, 9427, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbShapeRec,48, 9428, 11, 1.2, NULL, 9427, NULL)
#elif defined __s390x__
CheckTypeSize(XkbShapeRec,48, 9428, 12, 1.2, NULL, 9427, NULL)
#elif defined __ia64__
CheckTypeSize(XkbShapeRec,48, 9428, 3, 1.2, NULL, 9427, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbShapeRec,48, 9428, 9, 1.2, NULL, 9427, NULL)
#else
Msg("Find size of XkbShapeRec (9428)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9427,NULL);\n",architecture,9428,0);
#endif

#if defined __i386__
CheckTypeSize(XkbShapePtr,4, 9430, 2, 1.2, NULL, 9429, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbShapePtr,4, 9430, 10, 1.2, NULL, 9429, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbShapePtr,8, 9430, 11, 1.2, NULL, 9429, NULL)
#elif defined __s390x__
CheckTypeSize(XkbShapePtr,8, 9430, 12, 1.2, NULL, 9429, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbShapePtr,4, 9430, 6, 1.2, NULL, 9429, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbShapePtr,8, 9430, 9, 1.2, NULL, 9429, NULL)
#elif defined __ia64__
CheckTypeSize(XkbShapePtr,8, 9430, 3, 1.2, NULL, 9429, NULL)
#else
Msg("Find size of XkbShapePtr (9430)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9429,NULL);\n",architecture,9430,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbShapeDoodad,16, 9431, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShapeDoodad,type,1,10,30595)
CheckOffset(struct _XkbShapeDoodad,type,4,10,30595)
CheckMemberSize(struct _XkbShapeDoodad,priority,1,10,30596)
CheckOffset(struct _XkbShapeDoodad,priority,5,10,30596)
CheckMemberSize(struct _XkbShapeDoodad,top,2,10,30597)
CheckOffset(struct _XkbShapeDoodad,top,6,10,30597)
CheckMemberSize(struct _XkbShapeDoodad,left,2,10,30598)
CheckOffset(struct _XkbShapeDoodad,left,8,10,30598)
CheckMemberSize(struct _XkbShapeDoodad,angle,2,10,30599)
CheckOffset(struct _XkbShapeDoodad,angle,10,10,30599)
CheckMemberSize(struct _XkbShapeDoodad,color_ndx,2,10,30600)
CheckOffset(struct _XkbShapeDoodad,color_ndx,12,10,30600)
CheckMemberSize(struct _XkbShapeDoodad,shape_ndx,2,10,30601)
CheckOffset(struct _XkbShapeDoodad,shape_ndx,14,10,30601)
#elif defined __i386__
CheckTypeSize(struct _XkbShapeDoodad,16, 9431, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShapeDoodad,type,1,2,30595)
CheckOffset(struct _XkbShapeDoodad,type,4,2,30595)
CheckMemberSize(struct _XkbShapeDoodad,priority,1,2,30596)
CheckOffset(struct _XkbShapeDoodad,priority,5,2,30596)
CheckMemberSize(struct _XkbShapeDoodad,top,2,2,30597)
CheckOffset(struct _XkbShapeDoodad,top,6,2,30597)
CheckMemberSize(struct _XkbShapeDoodad,left,2,2,30598)
CheckOffset(struct _XkbShapeDoodad,left,8,2,30598)
CheckMemberSize(struct _XkbShapeDoodad,angle,2,2,30599)
CheckOffset(struct _XkbShapeDoodad,angle,10,2,30599)
CheckMemberSize(struct _XkbShapeDoodad,color_ndx,2,2,30600)
CheckOffset(struct _XkbShapeDoodad,color_ndx,12,2,30600)
CheckMemberSize(struct _XkbShapeDoodad,shape_ndx,2,2,30601)
CheckOffset(struct _XkbShapeDoodad,shape_ndx,14,2,30601)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbShapeDoodad,16, 9431, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShapeDoodad,type,1,6,30595)
CheckOffset(struct _XkbShapeDoodad,type,4,6,30595)
CheckMemberSize(struct _XkbShapeDoodad,priority,1,6,30596)
CheckOffset(struct _XkbShapeDoodad,priority,5,6,30596)
CheckMemberSize(struct _XkbShapeDoodad,top,2,6,30597)
CheckOffset(struct _XkbShapeDoodad,top,6,6,30597)
CheckMemberSize(struct _XkbShapeDoodad,left,2,6,30598)
CheckOffset(struct _XkbShapeDoodad,left,8,6,30598)
CheckMemberSize(struct _XkbShapeDoodad,angle,2,6,30599)
CheckOffset(struct _XkbShapeDoodad,angle,10,6,30599)
CheckMemberSize(struct _XkbShapeDoodad,color_ndx,2,6,30600)
CheckOffset(struct _XkbShapeDoodad,color_ndx,12,6,30600)
CheckMemberSize(struct _XkbShapeDoodad,shape_ndx,2,6,30601)
CheckOffset(struct _XkbShapeDoodad,shape_ndx,14,6,30601)
#elif defined __x86_64__
CheckTypeSize(struct _XkbShapeDoodad,24, 9431, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShapeDoodad,type,1,11,30595)
CheckOffset(struct _XkbShapeDoodad,type,8,11,30595)
CheckMemberSize(struct _XkbShapeDoodad,priority,1,11,30596)
CheckOffset(struct _XkbShapeDoodad,priority,9,11,30596)
CheckMemberSize(struct _XkbShapeDoodad,top,2,11,30597)
CheckOffset(struct _XkbShapeDoodad,top,10,11,30597)
CheckMemberSize(struct _XkbShapeDoodad,left,2,11,30598)
CheckOffset(struct _XkbShapeDoodad,left,12,11,30598)
CheckMemberSize(struct _XkbShapeDoodad,angle,2,11,30599)
CheckOffset(struct _XkbShapeDoodad,angle,14,11,30599)
CheckMemberSize(struct _XkbShapeDoodad,color_ndx,2,11,30600)
CheckOffset(struct _XkbShapeDoodad,color_ndx,16,11,30600)
CheckMemberSize(struct _XkbShapeDoodad,shape_ndx,2,11,30601)
CheckOffset(struct _XkbShapeDoodad,shape_ndx,18,11,30601)
#elif defined __s390x__
CheckTypeSize(struct _XkbShapeDoodad,24, 9431, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShapeDoodad,type,1,12,30595)
CheckOffset(struct _XkbShapeDoodad,type,8,12,30595)
CheckMemberSize(struct _XkbShapeDoodad,priority,1,12,30596)
CheckOffset(struct _XkbShapeDoodad,priority,9,12,30596)
CheckMemberSize(struct _XkbShapeDoodad,top,2,12,30597)
CheckOffset(struct _XkbShapeDoodad,top,10,12,30597)
CheckMemberSize(struct _XkbShapeDoodad,left,2,12,30598)
CheckOffset(struct _XkbShapeDoodad,left,12,12,30598)
CheckMemberSize(struct _XkbShapeDoodad,angle,2,12,30599)
CheckOffset(struct _XkbShapeDoodad,angle,14,12,30599)
CheckMemberSize(struct _XkbShapeDoodad,color_ndx,2,12,30600)
CheckOffset(struct _XkbShapeDoodad,color_ndx,16,12,30600)
CheckMemberSize(struct _XkbShapeDoodad,shape_ndx,2,12,30601)
CheckOffset(struct _XkbShapeDoodad,shape_ndx,18,12,30601)
#elif defined __ia64__
CheckTypeSize(struct _XkbShapeDoodad,24, 9431, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShapeDoodad,type,1,3,30595)
CheckOffset(struct _XkbShapeDoodad,type,8,3,30595)
CheckMemberSize(struct _XkbShapeDoodad,priority,1,3,30596)
CheckOffset(struct _XkbShapeDoodad,priority,9,3,30596)
CheckMemberSize(struct _XkbShapeDoodad,top,2,3,30597)
CheckOffset(struct _XkbShapeDoodad,top,10,3,30597)
CheckMemberSize(struct _XkbShapeDoodad,left,2,3,30598)
CheckOffset(struct _XkbShapeDoodad,left,12,3,30598)
CheckMemberSize(struct _XkbShapeDoodad,angle,2,3,30599)
CheckOffset(struct _XkbShapeDoodad,angle,14,3,30599)
CheckMemberSize(struct _XkbShapeDoodad,color_ndx,2,3,30600)
CheckOffset(struct _XkbShapeDoodad,color_ndx,16,3,30600)
CheckMemberSize(struct _XkbShapeDoodad,shape_ndx,2,3,30601)
CheckOffset(struct _XkbShapeDoodad,shape_ndx,18,3,30601)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbShapeDoodad,24, 9431, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbShapeDoodad,type,1,9,30595)
CheckOffset(struct _XkbShapeDoodad,type,8,9,30595)
CheckMemberSize(struct _XkbShapeDoodad,priority,1,9,30596)
CheckOffset(struct _XkbShapeDoodad,priority,9,9,30596)
CheckMemberSize(struct _XkbShapeDoodad,top,2,9,30597)
CheckOffset(struct _XkbShapeDoodad,top,10,9,30597)
CheckMemberSize(struct _XkbShapeDoodad,left,2,9,30598)
CheckOffset(struct _XkbShapeDoodad,left,12,9,30598)
CheckMemberSize(struct _XkbShapeDoodad,angle,2,9,30599)
CheckOffset(struct _XkbShapeDoodad,angle,14,9,30599)
CheckMemberSize(struct _XkbShapeDoodad,color_ndx,2,9,30600)
CheckOffset(struct _XkbShapeDoodad,color_ndx,16,9,30600)
CheckMemberSize(struct _XkbShapeDoodad,shape_ndx,2,9,30601)
CheckOffset(struct _XkbShapeDoodad,shape_ndx,18,9,30601)
#else
Msg("Find size of _XkbShapeDoodad (9431)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9431,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbShapeDoodadRec,16, 9432, 10, 1.2, NULL, 9431, NULL)
#elif defined __i386__
CheckTypeSize(XkbShapeDoodadRec,16, 9432, 2, 1.2, NULL, 9431, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbShapeDoodadRec,16, 9432, 6, 1.2, NULL, 9431, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbShapeDoodadRec,24, 9432, 11, 1.2, NULL, 9431, NULL)
#elif defined __s390x__
CheckTypeSize(XkbShapeDoodadRec,24, 9432, 12, 1.2, NULL, 9431, NULL)
#elif defined __ia64__
CheckTypeSize(XkbShapeDoodadRec,24, 9432, 3, 1.2, NULL, 9431, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbShapeDoodadRec,24, 9432, 9, 1.2, NULL, 9431, NULL)
#else
Msg("Find size of XkbShapeDoodadRec (9432)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9431,NULL);\n",architecture,9432,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbShapeDoodadPtr,4, 9434, 10, 1.2, NULL, 9433, NULL)
#elif defined __i386__
CheckTypeSize(XkbShapeDoodadPtr,4, 9434, 2, 1.2, NULL, 9433, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbShapeDoodadPtr,4, 9434, 6, 1.2, NULL, 9433, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbShapeDoodadPtr,8, 9434, 11, 1.2, NULL, 9433, NULL)
#elif defined __s390x__
CheckTypeSize(XkbShapeDoodadPtr,8, 9434, 12, 1.2, NULL, 9433, NULL)
#elif defined __ia64__
CheckTypeSize(XkbShapeDoodadPtr,8, 9434, 3, 1.2, NULL, 9433, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbShapeDoodadPtr,8, 9434, 9, 1.2, NULL, 9433, NULL)
#else
Msg("Find size of XkbShapeDoodadPtr (9434)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9433,NULL);\n",architecture,9434,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbTextDoodad,28, 9435, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbTextDoodad,type,1,10,30614)
CheckOffset(struct _XkbTextDoodad,type,4,10,30614)
CheckMemberSize(struct _XkbTextDoodad,priority,1,10,30615)
CheckOffset(struct _XkbTextDoodad,priority,5,10,30615)
CheckMemberSize(struct _XkbTextDoodad,top,2,10,30616)
CheckOffset(struct _XkbTextDoodad,top,6,10,30616)
CheckMemberSize(struct _XkbTextDoodad,left,2,10,30617)
CheckOffset(struct _XkbTextDoodad,left,8,10,30617)
CheckMemberSize(struct _XkbTextDoodad,angle,2,10,30618)
CheckOffset(struct _XkbTextDoodad,angle,10,10,30618)
CheckMemberSize(struct _XkbTextDoodad,width,2,10,30619)
CheckOffset(struct _XkbTextDoodad,width,12,10,30619)
CheckMemberSize(struct _XkbTextDoodad,height,2,10,30620)
CheckOffset(struct _XkbTextDoodad,height,14,10,30620)
CheckMemberSize(struct _XkbTextDoodad,color_ndx,2,10,30621)
CheckOffset(struct _XkbTextDoodad,color_ndx,16,10,30621)
CheckMemberSize(struct _XkbTextDoodad,text,4,10,30622)
CheckOffset(struct _XkbTextDoodad,text,20,10,30622)
CheckMemberSize(struct _XkbTextDoodad,font,4,10,30623)
CheckOffset(struct _XkbTextDoodad,font,24,10,30623)
#elif defined __i386__
CheckTypeSize(struct _XkbTextDoodad,28, 9435, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbTextDoodad,type,1,2,30614)
CheckOffset(struct _XkbTextDoodad,type,4,2,30614)
CheckMemberSize(struct _XkbTextDoodad,priority,1,2,30615)
CheckOffset(struct _XkbTextDoodad,priority,5,2,30615)
CheckMemberSize(struct _XkbTextDoodad,top,2,2,30616)
CheckOffset(struct _XkbTextDoodad,top,6,2,30616)
CheckMemberSize(struct _XkbTextDoodad,left,2,2,30617)
CheckOffset(struct _XkbTextDoodad,left,8,2,30617)
CheckMemberSize(struct _XkbTextDoodad,angle,2,2,30618)
CheckOffset(struct _XkbTextDoodad,angle,10,2,30618)
CheckMemberSize(struct _XkbTextDoodad,width,2,2,30619)
CheckOffset(struct _XkbTextDoodad,width,12,2,30619)
CheckMemberSize(struct _XkbTextDoodad,height,2,2,30620)
CheckOffset(struct _XkbTextDoodad,height,14,2,30620)
CheckMemberSize(struct _XkbTextDoodad,color_ndx,2,2,30621)
CheckOffset(struct _XkbTextDoodad,color_ndx,16,2,30621)
CheckMemberSize(struct _XkbTextDoodad,text,4,2,30622)
CheckOffset(struct _XkbTextDoodad,text,20,2,30622)
CheckMemberSize(struct _XkbTextDoodad,font,4,2,30623)
CheckOffset(struct _XkbTextDoodad,font,24,2,30623)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbTextDoodad,28, 9435, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbTextDoodad,type,1,6,30614)
CheckOffset(struct _XkbTextDoodad,type,4,6,30614)
CheckMemberSize(struct _XkbTextDoodad,priority,1,6,30615)
CheckOffset(struct _XkbTextDoodad,priority,5,6,30615)
CheckMemberSize(struct _XkbTextDoodad,top,2,6,30616)
CheckOffset(struct _XkbTextDoodad,top,6,6,30616)
CheckMemberSize(struct _XkbTextDoodad,left,2,6,30617)
CheckOffset(struct _XkbTextDoodad,left,8,6,30617)
CheckMemberSize(struct _XkbTextDoodad,angle,2,6,30618)
CheckOffset(struct _XkbTextDoodad,angle,10,6,30618)
CheckMemberSize(struct _XkbTextDoodad,width,2,6,30619)
CheckOffset(struct _XkbTextDoodad,width,12,6,30619)
CheckMemberSize(struct _XkbTextDoodad,height,2,6,30620)
CheckOffset(struct _XkbTextDoodad,height,14,6,30620)
CheckMemberSize(struct _XkbTextDoodad,color_ndx,2,6,30621)
CheckOffset(struct _XkbTextDoodad,color_ndx,16,6,30621)
CheckMemberSize(struct _XkbTextDoodad,text,4,6,30622)
CheckOffset(struct _XkbTextDoodad,text,20,6,30622)
CheckMemberSize(struct _XkbTextDoodad,font,4,6,30623)
CheckOffset(struct _XkbTextDoodad,font,24,6,30623)
#elif defined __x86_64__
CheckTypeSize(struct _XkbTextDoodad,40, 9435, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbTextDoodad,type,1,11,30614)
CheckOffset(struct _XkbTextDoodad,type,8,11,30614)
CheckMemberSize(struct _XkbTextDoodad,priority,1,11,30615)
CheckOffset(struct _XkbTextDoodad,priority,9,11,30615)
CheckMemberSize(struct _XkbTextDoodad,top,2,11,30616)
CheckOffset(struct _XkbTextDoodad,top,10,11,30616)
CheckMemberSize(struct _XkbTextDoodad,left,2,11,30617)
CheckOffset(struct _XkbTextDoodad,left,12,11,30617)
CheckMemberSize(struct _XkbTextDoodad,angle,2,11,30618)
CheckOffset(struct _XkbTextDoodad,angle,14,11,30618)
CheckMemberSize(struct _XkbTextDoodad,width,2,11,30619)
CheckOffset(struct _XkbTextDoodad,width,16,11,30619)
CheckMemberSize(struct _XkbTextDoodad,height,2,11,30620)
CheckOffset(struct _XkbTextDoodad,height,18,11,30620)
CheckMemberSize(struct _XkbTextDoodad,color_ndx,2,11,30621)
CheckOffset(struct _XkbTextDoodad,color_ndx,20,11,30621)
CheckMemberSize(struct _XkbTextDoodad,text,8,11,30622)
CheckOffset(struct _XkbTextDoodad,text,24,11,30622)
CheckMemberSize(struct _XkbTextDoodad,font,8,11,30623)
CheckOffset(struct _XkbTextDoodad,font,32,11,30623)
#elif defined __s390x__
CheckTypeSize(struct _XkbTextDoodad,40, 9435, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbTextDoodad,type,1,12,30614)
CheckOffset(struct _XkbTextDoodad,type,8,12,30614)
CheckMemberSize(struct _XkbTextDoodad,priority,1,12,30615)
CheckOffset(struct _XkbTextDoodad,priority,9,12,30615)
CheckMemberSize(struct _XkbTextDoodad,top,2,12,30616)
CheckOffset(struct _XkbTextDoodad,top,10,12,30616)
CheckMemberSize(struct _XkbTextDoodad,left,2,12,30617)
CheckOffset(struct _XkbTextDoodad,left,12,12,30617)
CheckMemberSize(struct _XkbTextDoodad,angle,2,12,30618)
CheckOffset(struct _XkbTextDoodad,angle,14,12,30618)
CheckMemberSize(struct _XkbTextDoodad,width,2,12,30619)
CheckOffset(struct _XkbTextDoodad,width,16,12,30619)
CheckMemberSize(struct _XkbTextDoodad,height,2,12,30620)
CheckOffset(struct _XkbTextDoodad,height,18,12,30620)
CheckMemberSize(struct _XkbTextDoodad,color_ndx,2,12,30621)
CheckOffset(struct _XkbTextDoodad,color_ndx,20,12,30621)
CheckMemberSize(struct _XkbTextDoodad,text,8,12,30622)
CheckOffset(struct _XkbTextDoodad,text,24,12,30622)
CheckMemberSize(struct _XkbTextDoodad,font,8,12,30623)
CheckOffset(struct _XkbTextDoodad,font,32,12,30623)
#elif defined __ia64__
CheckTypeSize(struct _XkbTextDoodad,40, 9435, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbTextDoodad,type,1,3,30614)
CheckOffset(struct _XkbTextDoodad,type,8,3,30614)
CheckMemberSize(struct _XkbTextDoodad,priority,1,3,30615)
CheckOffset(struct _XkbTextDoodad,priority,9,3,30615)
CheckMemberSize(struct _XkbTextDoodad,top,2,3,30616)
CheckOffset(struct _XkbTextDoodad,top,10,3,30616)
CheckMemberSize(struct _XkbTextDoodad,left,2,3,30617)
CheckOffset(struct _XkbTextDoodad,left,12,3,30617)
CheckMemberSize(struct _XkbTextDoodad,angle,2,3,30618)
CheckOffset(struct _XkbTextDoodad,angle,14,3,30618)
CheckMemberSize(struct _XkbTextDoodad,width,2,3,30619)
CheckOffset(struct _XkbTextDoodad,width,16,3,30619)
CheckMemberSize(struct _XkbTextDoodad,height,2,3,30620)
CheckOffset(struct _XkbTextDoodad,height,18,3,30620)
CheckMemberSize(struct _XkbTextDoodad,color_ndx,2,3,30621)
CheckOffset(struct _XkbTextDoodad,color_ndx,20,3,30621)
CheckMemberSize(struct _XkbTextDoodad,text,8,3,30622)
CheckOffset(struct _XkbTextDoodad,text,24,3,30622)
CheckMemberSize(struct _XkbTextDoodad,font,8,3,30623)
CheckOffset(struct _XkbTextDoodad,font,32,3,30623)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbTextDoodad,40, 9435, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbTextDoodad,type,1,9,30614)
CheckOffset(struct _XkbTextDoodad,type,8,9,30614)
CheckMemberSize(struct _XkbTextDoodad,priority,1,9,30615)
CheckOffset(struct _XkbTextDoodad,priority,9,9,30615)
CheckMemberSize(struct _XkbTextDoodad,top,2,9,30616)
CheckOffset(struct _XkbTextDoodad,top,10,9,30616)
CheckMemberSize(struct _XkbTextDoodad,left,2,9,30617)
CheckOffset(struct _XkbTextDoodad,left,12,9,30617)
CheckMemberSize(struct _XkbTextDoodad,angle,2,9,30618)
CheckOffset(struct _XkbTextDoodad,angle,14,9,30618)
CheckMemberSize(struct _XkbTextDoodad,width,2,9,30619)
CheckOffset(struct _XkbTextDoodad,width,16,9,30619)
CheckMemberSize(struct _XkbTextDoodad,height,2,9,30620)
CheckOffset(struct _XkbTextDoodad,height,18,9,30620)
CheckMemberSize(struct _XkbTextDoodad,color_ndx,2,9,30621)
CheckOffset(struct _XkbTextDoodad,color_ndx,20,9,30621)
CheckMemberSize(struct _XkbTextDoodad,text,8,9,30622)
CheckOffset(struct _XkbTextDoodad,text,24,9,30622)
CheckMemberSize(struct _XkbTextDoodad,font,8,9,30623)
CheckOffset(struct _XkbTextDoodad,font,32,9,30623)
#else
Msg("Find size of _XkbTextDoodad (9435)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9435,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbTextDoodadRec,28, 9436, 10, 1.2, NULL, 9435, NULL)
#elif defined __i386__
CheckTypeSize(XkbTextDoodadRec,28, 9436, 2, 1.2, NULL, 9435, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbTextDoodadRec,28, 9436, 6, 1.2, NULL, 9435, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbTextDoodadRec,40, 9436, 11, 1.2, NULL, 9435, NULL)
#elif defined __s390x__
CheckTypeSize(XkbTextDoodadRec,40, 9436, 12, 1.2, NULL, 9435, NULL)
#elif defined __ia64__
CheckTypeSize(XkbTextDoodadRec,40, 9436, 3, 1.2, NULL, 9435, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbTextDoodadRec,40, 9436, 9, 1.2, NULL, 9435, NULL)
#else
Msg("Find size of XkbTextDoodadRec (9436)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9435,NULL);\n",architecture,9436,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbTextDoodadPtr,4, 9438, 10, 1.2, NULL, 9437, NULL)
#elif defined __i386__
CheckTypeSize(XkbTextDoodadPtr,4, 9438, 2, 1.2, NULL, 9437, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbTextDoodadPtr,4, 9438, 6, 1.2, NULL, 9437, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbTextDoodadPtr,8, 9438, 11, 1.2, NULL, 9437, NULL)
#elif defined __s390x__
CheckTypeSize(XkbTextDoodadPtr,8, 9438, 12, 1.2, NULL, 9437, NULL)
#elif defined __ia64__
CheckTypeSize(XkbTextDoodadPtr,8, 9438, 3, 1.2, NULL, 9437, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbTextDoodadPtr,8, 9438, 9, 1.2, NULL, 9437, NULL)
#else
Msg("Find size of XkbTextDoodadPtr (9438)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9437,NULL);\n",architecture,9438,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbIndicatorDoodad,20, 9439, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorDoodad,type,1,10,30634)
CheckOffset(struct _XkbIndicatorDoodad,type,4,10,30634)
CheckMemberSize(struct _XkbIndicatorDoodad,priority,1,10,30635)
CheckOffset(struct _XkbIndicatorDoodad,priority,5,10,30635)
CheckMemberSize(struct _XkbIndicatorDoodad,top,2,10,30636)
CheckOffset(struct _XkbIndicatorDoodad,top,6,10,30636)
CheckMemberSize(struct _XkbIndicatorDoodad,left,2,10,30637)
CheckOffset(struct _XkbIndicatorDoodad,left,8,10,30637)
CheckMemberSize(struct _XkbIndicatorDoodad,angle,2,10,30638)
CheckOffset(struct _XkbIndicatorDoodad,angle,10,10,30638)
CheckMemberSize(struct _XkbIndicatorDoodad,shape_ndx,2,10,30639)
CheckOffset(struct _XkbIndicatorDoodad,shape_ndx,12,10,30639)
CheckMemberSize(struct _XkbIndicatorDoodad,on_color_ndx,2,10,30640)
CheckOffset(struct _XkbIndicatorDoodad,on_color_ndx,14,10,30640)
CheckMemberSize(struct _XkbIndicatorDoodad,off_color_ndx,2,10,30641)
CheckOffset(struct _XkbIndicatorDoodad,off_color_ndx,16,10,30641)
#elif defined __i386__
CheckTypeSize(struct _XkbIndicatorDoodad,20, 9439, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorDoodad,type,1,2,30634)
CheckOffset(struct _XkbIndicatorDoodad,type,4,2,30634)
CheckMemberSize(struct _XkbIndicatorDoodad,priority,1,2,30635)
CheckOffset(struct _XkbIndicatorDoodad,priority,5,2,30635)
CheckMemberSize(struct _XkbIndicatorDoodad,top,2,2,30636)
CheckOffset(struct _XkbIndicatorDoodad,top,6,2,30636)
CheckMemberSize(struct _XkbIndicatorDoodad,left,2,2,30637)
CheckOffset(struct _XkbIndicatorDoodad,left,8,2,30637)
CheckMemberSize(struct _XkbIndicatorDoodad,angle,2,2,30638)
CheckOffset(struct _XkbIndicatorDoodad,angle,10,2,30638)
CheckMemberSize(struct _XkbIndicatorDoodad,shape_ndx,2,2,30639)
CheckOffset(struct _XkbIndicatorDoodad,shape_ndx,12,2,30639)
CheckMemberSize(struct _XkbIndicatorDoodad,on_color_ndx,2,2,30640)
CheckOffset(struct _XkbIndicatorDoodad,on_color_ndx,14,2,30640)
CheckMemberSize(struct _XkbIndicatorDoodad,off_color_ndx,2,2,30641)
CheckOffset(struct _XkbIndicatorDoodad,off_color_ndx,16,2,30641)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbIndicatorDoodad,20, 9439, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorDoodad,type,1,6,30634)
CheckOffset(struct _XkbIndicatorDoodad,type,4,6,30634)
CheckMemberSize(struct _XkbIndicatorDoodad,priority,1,6,30635)
CheckOffset(struct _XkbIndicatorDoodad,priority,5,6,30635)
CheckMemberSize(struct _XkbIndicatorDoodad,top,2,6,30636)
CheckOffset(struct _XkbIndicatorDoodad,top,6,6,30636)
CheckMemberSize(struct _XkbIndicatorDoodad,left,2,6,30637)
CheckOffset(struct _XkbIndicatorDoodad,left,8,6,30637)
CheckMemberSize(struct _XkbIndicatorDoodad,angle,2,6,30638)
CheckOffset(struct _XkbIndicatorDoodad,angle,10,6,30638)
CheckMemberSize(struct _XkbIndicatorDoodad,shape_ndx,2,6,30639)
CheckOffset(struct _XkbIndicatorDoodad,shape_ndx,12,6,30639)
CheckMemberSize(struct _XkbIndicatorDoodad,on_color_ndx,2,6,30640)
CheckOffset(struct _XkbIndicatorDoodad,on_color_ndx,14,6,30640)
CheckMemberSize(struct _XkbIndicatorDoodad,off_color_ndx,2,6,30641)
CheckOffset(struct _XkbIndicatorDoodad,off_color_ndx,16,6,30641)
#elif defined __x86_64__
CheckTypeSize(struct _XkbIndicatorDoodad,24, 9439, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorDoodad,type,1,11,30634)
CheckOffset(struct _XkbIndicatorDoodad,type,8,11,30634)
CheckMemberSize(struct _XkbIndicatorDoodad,priority,1,11,30635)
CheckOffset(struct _XkbIndicatorDoodad,priority,9,11,30635)
CheckMemberSize(struct _XkbIndicatorDoodad,top,2,11,30636)
CheckOffset(struct _XkbIndicatorDoodad,top,10,11,30636)
CheckMemberSize(struct _XkbIndicatorDoodad,left,2,11,30637)
CheckOffset(struct _XkbIndicatorDoodad,left,12,11,30637)
CheckMemberSize(struct _XkbIndicatorDoodad,angle,2,11,30638)
CheckOffset(struct _XkbIndicatorDoodad,angle,14,11,30638)
CheckMemberSize(struct _XkbIndicatorDoodad,shape_ndx,2,11,30639)
CheckOffset(struct _XkbIndicatorDoodad,shape_ndx,16,11,30639)
CheckMemberSize(struct _XkbIndicatorDoodad,on_color_ndx,2,11,30640)
CheckOffset(struct _XkbIndicatorDoodad,on_color_ndx,18,11,30640)
CheckMemberSize(struct _XkbIndicatorDoodad,off_color_ndx,2,11,30641)
CheckOffset(struct _XkbIndicatorDoodad,off_color_ndx,20,11,30641)
#elif defined __s390x__
CheckTypeSize(struct _XkbIndicatorDoodad,24, 9439, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorDoodad,type,1,12,30634)
CheckOffset(struct _XkbIndicatorDoodad,type,8,12,30634)
CheckMemberSize(struct _XkbIndicatorDoodad,priority,1,12,30635)
CheckOffset(struct _XkbIndicatorDoodad,priority,9,12,30635)
CheckMemberSize(struct _XkbIndicatorDoodad,top,2,12,30636)
CheckOffset(struct _XkbIndicatorDoodad,top,10,12,30636)
CheckMemberSize(struct _XkbIndicatorDoodad,left,2,12,30637)
CheckOffset(struct _XkbIndicatorDoodad,left,12,12,30637)
CheckMemberSize(struct _XkbIndicatorDoodad,angle,2,12,30638)
CheckOffset(struct _XkbIndicatorDoodad,angle,14,12,30638)
CheckMemberSize(struct _XkbIndicatorDoodad,shape_ndx,2,12,30639)
CheckOffset(struct _XkbIndicatorDoodad,shape_ndx,16,12,30639)
CheckMemberSize(struct _XkbIndicatorDoodad,on_color_ndx,2,12,30640)
CheckOffset(struct _XkbIndicatorDoodad,on_color_ndx,18,12,30640)
CheckMemberSize(struct _XkbIndicatorDoodad,off_color_ndx,2,12,30641)
CheckOffset(struct _XkbIndicatorDoodad,off_color_ndx,20,12,30641)
#elif defined __ia64__
CheckTypeSize(struct _XkbIndicatorDoodad,24, 9439, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorDoodad,type,1,3,30634)
CheckOffset(struct _XkbIndicatorDoodad,type,8,3,30634)
CheckMemberSize(struct _XkbIndicatorDoodad,priority,1,3,30635)
CheckOffset(struct _XkbIndicatorDoodad,priority,9,3,30635)
CheckMemberSize(struct _XkbIndicatorDoodad,top,2,3,30636)
CheckOffset(struct _XkbIndicatorDoodad,top,10,3,30636)
CheckMemberSize(struct _XkbIndicatorDoodad,left,2,3,30637)
CheckOffset(struct _XkbIndicatorDoodad,left,12,3,30637)
CheckMemberSize(struct _XkbIndicatorDoodad,angle,2,3,30638)
CheckOffset(struct _XkbIndicatorDoodad,angle,14,3,30638)
CheckMemberSize(struct _XkbIndicatorDoodad,shape_ndx,2,3,30639)
CheckOffset(struct _XkbIndicatorDoodad,shape_ndx,16,3,30639)
CheckMemberSize(struct _XkbIndicatorDoodad,on_color_ndx,2,3,30640)
CheckOffset(struct _XkbIndicatorDoodad,on_color_ndx,18,3,30640)
CheckMemberSize(struct _XkbIndicatorDoodad,off_color_ndx,2,3,30641)
CheckOffset(struct _XkbIndicatorDoodad,off_color_ndx,20,3,30641)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbIndicatorDoodad,24, 9439, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorDoodad,type,1,9,30634)
CheckOffset(struct _XkbIndicatorDoodad,type,8,9,30634)
CheckMemberSize(struct _XkbIndicatorDoodad,priority,1,9,30635)
CheckOffset(struct _XkbIndicatorDoodad,priority,9,9,30635)
CheckMemberSize(struct _XkbIndicatorDoodad,top,2,9,30636)
CheckOffset(struct _XkbIndicatorDoodad,top,10,9,30636)
CheckMemberSize(struct _XkbIndicatorDoodad,left,2,9,30637)
CheckOffset(struct _XkbIndicatorDoodad,left,12,9,30637)
CheckMemberSize(struct _XkbIndicatorDoodad,angle,2,9,30638)
CheckOffset(struct _XkbIndicatorDoodad,angle,14,9,30638)
CheckMemberSize(struct _XkbIndicatorDoodad,shape_ndx,2,9,30639)
CheckOffset(struct _XkbIndicatorDoodad,shape_ndx,16,9,30639)
CheckMemberSize(struct _XkbIndicatorDoodad,on_color_ndx,2,9,30640)
CheckOffset(struct _XkbIndicatorDoodad,on_color_ndx,18,9,30640)
CheckMemberSize(struct _XkbIndicatorDoodad,off_color_ndx,2,9,30641)
CheckOffset(struct _XkbIndicatorDoodad,off_color_ndx,20,9,30641)
#else
Msg("Find size of _XkbIndicatorDoodad (9439)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9439,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbIndicatorDoodadRec,20, 9440, 10, 1.2, NULL, 9439, NULL)
#elif defined __i386__
CheckTypeSize(XkbIndicatorDoodadRec,20, 9440, 2, 1.2, NULL, 9439, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbIndicatorDoodadRec,20, 9440, 6, 1.2, NULL, 9439, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbIndicatorDoodadRec,24, 9440, 11, 1.2, NULL, 9439, NULL)
#elif defined __s390x__
CheckTypeSize(XkbIndicatorDoodadRec,24, 9440, 12, 1.2, NULL, 9439, NULL)
#elif defined __ia64__
CheckTypeSize(XkbIndicatorDoodadRec,24, 9440, 3, 1.2, NULL, 9439, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbIndicatorDoodadRec,24, 9440, 9, 1.2, NULL, 9439, NULL)
#else
Msg("Find size of XkbIndicatorDoodadRec (9440)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9439,NULL);\n",architecture,9440,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbIndicatorDoodadPtr,4, 9442, 10, 1.2, NULL, 9441, NULL)
#elif defined __i386__
CheckTypeSize(XkbIndicatorDoodadPtr,4, 9442, 2, 1.2, NULL, 9441, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbIndicatorDoodadPtr,4, 9442, 6, 1.2, NULL, 9441, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbIndicatorDoodadPtr,8, 9442, 11, 1.2, NULL, 9441, NULL)
#elif defined __s390x__
CheckTypeSize(XkbIndicatorDoodadPtr,8, 9442, 12, 1.2, NULL, 9441, NULL)
#elif defined __ia64__
CheckTypeSize(XkbIndicatorDoodadPtr,8, 9442, 3, 1.2, NULL, 9441, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbIndicatorDoodadPtr,8, 9442, 9, 1.2, NULL, 9441, NULL)
#else
Msg("Find size of XkbIndicatorDoodadPtr (9442)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9441,NULL);\n",architecture,9442,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbLogoDoodad,20, 9443, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbLogoDoodad,type,1,10,30652)
CheckOffset(struct _XkbLogoDoodad,type,4,10,30652)
CheckMemberSize(struct _XkbLogoDoodad,priority,1,10,30653)
CheckOffset(struct _XkbLogoDoodad,priority,5,10,30653)
CheckMemberSize(struct _XkbLogoDoodad,top,2,10,30654)
CheckOffset(struct _XkbLogoDoodad,top,6,10,30654)
CheckMemberSize(struct _XkbLogoDoodad,left,2,10,30655)
CheckOffset(struct _XkbLogoDoodad,left,8,10,30655)
CheckMemberSize(struct _XkbLogoDoodad,angle,2,10,30656)
CheckOffset(struct _XkbLogoDoodad,angle,10,10,30656)
CheckMemberSize(struct _XkbLogoDoodad,color_ndx,2,10,30657)
CheckOffset(struct _XkbLogoDoodad,color_ndx,12,10,30657)
CheckMemberSize(struct _XkbLogoDoodad,shape_ndx,2,10,30658)
CheckOffset(struct _XkbLogoDoodad,shape_ndx,14,10,30658)
CheckMemberSize(struct _XkbLogoDoodad,logo_name,4,10,30659)
CheckOffset(struct _XkbLogoDoodad,logo_name,16,10,30659)
#elif defined __i386__
CheckTypeSize(struct _XkbLogoDoodad,20, 9443, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbLogoDoodad,type,1,2,30652)
CheckOffset(struct _XkbLogoDoodad,type,4,2,30652)
CheckMemberSize(struct _XkbLogoDoodad,priority,1,2,30653)
CheckOffset(struct _XkbLogoDoodad,priority,5,2,30653)
CheckMemberSize(struct _XkbLogoDoodad,top,2,2,30654)
CheckOffset(struct _XkbLogoDoodad,top,6,2,30654)
CheckMemberSize(struct _XkbLogoDoodad,left,2,2,30655)
CheckOffset(struct _XkbLogoDoodad,left,8,2,30655)
CheckMemberSize(struct _XkbLogoDoodad,angle,2,2,30656)
CheckOffset(struct _XkbLogoDoodad,angle,10,2,30656)
CheckMemberSize(struct _XkbLogoDoodad,color_ndx,2,2,30657)
CheckOffset(struct _XkbLogoDoodad,color_ndx,12,2,30657)
CheckMemberSize(struct _XkbLogoDoodad,shape_ndx,2,2,30658)
CheckOffset(struct _XkbLogoDoodad,shape_ndx,14,2,30658)
CheckMemberSize(struct _XkbLogoDoodad,logo_name,4,2,30659)
CheckOffset(struct _XkbLogoDoodad,logo_name,16,2,30659)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbLogoDoodad,20, 9443, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbLogoDoodad,type,1,6,30652)
CheckOffset(struct _XkbLogoDoodad,type,4,6,30652)
CheckMemberSize(struct _XkbLogoDoodad,priority,1,6,30653)
CheckOffset(struct _XkbLogoDoodad,priority,5,6,30653)
CheckMemberSize(struct _XkbLogoDoodad,top,2,6,30654)
CheckOffset(struct _XkbLogoDoodad,top,6,6,30654)
CheckMemberSize(struct _XkbLogoDoodad,left,2,6,30655)
CheckOffset(struct _XkbLogoDoodad,left,8,6,30655)
CheckMemberSize(struct _XkbLogoDoodad,angle,2,6,30656)
CheckOffset(struct _XkbLogoDoodad,angle,10,6,30656)
CheckMemberSize(struct _XkbLogoDoodad,color_ndx,2,6,30657)
CheckOffset(struct _XkbLogoDoodad,color_ndx,12,6,30657)
CheckMemberSize(struct _XkbLogoDoodad,shape_ndx,2,6,30658)
CheckOffset(struct _XkbLogoDoodad,shape_ndx,14,6,30658)
CheckMemberSize(struct _XkbLogoDoodad,logo_name,4,6,30659)
CheckOffset(struct _XkbLogoDoodad,logo_name,16,6,30659)
#elif defined __x86_64__
CheckTypeSize(struct _XkbLogoDoodad,32, 9443, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbLogoDoodad,type,1,11,30652)
CheckOffset(struct _XkbLogoDoodad,type,8,11,30652)
CheckMemberSize(struct _XkbLogoDoodad,priority,1,11,30653)
CheckOffset(struct _XkbLogoDoodad,priority,9,11,30653)
CheckMemberSize(struct _XkbLogoDoodad,top,2,11,30654)
CheckOffset(struct _XkbLogoDoodad,top,10,11,30654)
CheckMemberSize(struct _XkbLogoDoodad,left,2,11,30655)
CheckOffset(struct _XkbLogoDoodad,left,12,11,30655)
CheckMemberSize(struct _XkbLogoDoodad,angle,2,11,30656)
CheckOffset(struct _XkbLogoDoodad,angle,14,11,30656)
CheckMemberSize(struct _XkbLogoDoodad,color_ndx,2,11,30657)
CheckOffset(struct _XkbLogoDoodad,color_ndx,16,11,30657)
CheckMemberSize(struct _XkbLogoDoodad,shape_ndx,2,11,30658)
CheckOffset(struct _XkbLogoDoodad,shape_ndx,18,11,30658)
CheckMemberSize(struct _XkbLogoDoodad,logo_name,8,11,30659)
CheckOffset(struct _XkbLogoDoodad,logo_name,24,11,30659)
#elif defined __s390x__
CheckTypeSize(struct _XkbLogoDoodad,32, 9443, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbLogoDoodad,type,1,12,30652)
CheckOffset(struct _XkbLogoDoodad,type,8,12,30652)
CheckMemberSize(struct _XkbLogoDoodad,priority,1,12,30653)
CheckOffset(struct _XkbLogoDoodad,priority,9,12,30653)
CheckMemberSize(struct _XkbLogoDoodad,top,2,12,30654)
CheckOffset(struct _XkbLogoDoodad,top,10,12,30654)
CheckMemberSize(struct _XkbLogoDoodad,left,2,12,30655)
CheckOffset(struct _XkbLogoDoodad,left,12,12,30655)
CheckMemberSize(struct _XkbLogoDoodad,angle,2,12,30656)
CheckOffset(struct _XkbLogoDoodad,angle,14,12,30656)
CheckMemberSize(struct _XkbLogoDoodad,color_ndx,2,12,30657)
CheckOffset(struct _XkbLogoDoodad,color_ndx,16,12,30657)
CheckMemberSize(struct _XkbLogoDoodad,shape_ndx,2,12,30658)
CheckOffset(struct _XkbLogoDoodad,shape_ndx,18,12,30658)
CheckMemberSize(struct _XkbLogoDoodad,logo_name,8,12,30659)
CheckOffset(struct _XkbLogoDoodad,logo_name,24,12,30659)
#elif defined __ia64__
CheckTypeSize(struct _XkbLogoDoodad,32, 9443, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbLogoDoodad,type,1,3,30652)
CheckOffset(struct _XkbLogoDoodad,type,8,3,30652)
CheckMemberSize(struct _XkbLogoDoodad,priority,1,3,30653)
CheckOffset(struct _XkbLogoDoodad,priority,9,3,30653)
CheckMemberSize(struct _XkbLogoDoodad,top,2,3,30654)
CheckOffset(struct _XkbLogoDoodad,top,10,3,30654)
CheckMemberSize(struct _XkbLogoDoodad,left,2,3,30655)
CheckOffset(struct _XkbLogoDoodad,left,12,3,30655)
CheckMemberSize(struct _XkbLogoDoodad,angle,2,3,30656)
CheckOffset(struct _XkbLogoDoodad,angle,14,3,30656)
CheckMemberSize(struct _XkbLogoDoodad,color_ndx,2,3,30657)
CheckOffset(struct _XkbLogoDoodad,color_ndx,16,3,30657)
CheckMemberSize(struct _XkbLogoDoodad,shape_ndx,2,3,30658)
CheckOffset(struct _XkbLogoDoodad,shape_ndx,18,3,30658)
CheckMemberSize(struct _XkbLogoDoodad,logo_name,8,3,30659)
CheckOffset(struct _XkbLogoDoodad,logo_name,24,3,30659)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbLogoDoodad,32, 9443, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbLogoDoodad,type,1,9,30652)
CheckOffset(struct _XkbLogoDoodad,type,8,9,30652)
CheckMemberSize(struct _XkbLogoDoodad,priority,1,9,30653)
CheckOffset(struct _XkbLogoDoodad,priority,9,9,30653)
CheckMemberSize(struct _XkbLogoDoodad,top,2,9,30654)
CheckOffset(struct _XkbLogoDoodad,top,10,9,30654)
CheckMemberSize(struct _XkbLogoDoodad,left,2,9,30655)
CheckOffset(struct _XkbLogoDoodad,left,12,9,30655)
CheckMemberSize(struct _XkbLogoDoodad,angle,2,9,30656)
CheckOffset(struct _XkbLogoDoodad,angle,14,9,30656)
CheckMemberSize(struct _XkbLogoDoodad,color_ndx,2,9,30657)
CheckOffset(struct _XkbLogoDoodad,color_ndx,16,9,30657)
CheckMemberSize(struct _XkbLogoDoodad,shape_ndx,2,9,30658)
CheckOffset(struct _XkbLogoDoodad,shape_ndx,18,9,30658)
CheckMemberSize(struct _XkbLogoDoodad,logo_name,8,9,30659)
CheckOffset(struct _XkbLogoDoodad,logo_name,24,9,30659)
#else
Msg("Find size of _XkbLogoDoodad (9443)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9443,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbLogoDoodadRec,20, 9444, 10, 1.2, NULL, 9443, NULL)
#elif defined __i386__
CheckTypeSize(XkbLogoDoodadRec,20, 9444, 2, 1.2, NULL, 9443, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbLogoDoodadRec,20, 9444, 6, 1.2, NULL, 9443, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbLogoDoodadRec,32, 9444, 11, 1.2, NULL, 9443, NULL)
#elif defined __s390x__
CheckTypeSize(XkbLogoDoodadRec,32, 9444, 12, 1.2, NULL, 9443, NULL)
#elif defined __ia64__
CheckTypeSize(XkbLogoDoodadRec,32, 9444, 3, 1.2, NULL, 9443, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbLogoDoodadRec,32, 9444, 9, 1.2, NULL, 9443, NULL)
#else
Msg("Find size of XkbLogoDoodadRec (9444)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9443,NULL);\n",architecture,9444,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbLogoDoodadPtr,4, 9446, 10, 1.2, NULL, 9445, NULL)
#elif defined __i386__
CheckTypeSize(XkbLogoDoodadPtr,4, 9446, 2, 1.2, NULL, 9445, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbLogoDoodadPtr,4, 9446, 6, 1.2, NULL, 9445, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbLogoDoodadPtr,8, 9446, 11, 1.2, NULL, 9445, NULL)
#elif defined __s390x__
CheckTypeSize(XkbLogoDoodadPtr,8, 9446, 12, 1.2, NULL, 9445, NULL)
#elif defined __ia64__
CheckTypeSize(XkbLogoDoodadPtr,8, 9446, 3, 1.2, NULL, 9445, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbLogoDoodadPtr,8, 9446, 9, 1.2, NULL, 9445, NULL)
#else
Msg("Find size of XkbLogoDoodadPtr (9446)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9445,NULL);\n",architecture,9446,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbAnyDoodad,12, 9447, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyDoodad,type,1,10,30667)
CheckOffset(struct _XkbAnyDoodad,type,4,10,30667)
CheckMemberSize(struct _XkbAnyDoodad,priority,1,10,30668)
CheckOffset(struct _XkbAnyDoodad,priority,5,10,30668)
CheckMemberSize(struct _XkbAnyDoodad,top,2,10,30669)
CheckOffset(struct _XkbAnyDoodad,top,6,10,30669)
CheckMemberSize(struct _XkbAnyDoodad,left,2,10,30670)
CheckOffset(struct _XkbAnyDoodad,left,8,10,30670)
CheckMemberSize(struct _XkbAnyDoodad,angle,2,10,30671)
CheckOffset(struct _XkbAnyDoodad,angle,10,10,30671)
#elif defined __i386__
CheckTypeSize(struct _XkbAnyDoodad,12, 9447, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyDoodad,type,1,2,30667)
CheckOffset(struct _XkbAnyDoodad,type,4,2,30667)
CheckMemberSize(struct _XkbAnyDoodad,priority,1,2,30668)
CheckOffset(struct _XkbAnyDoodad,priority,5,2,30668)
CheckMemberSize(struct _XkbAnyDoodad,top,2,2,30669)
CheckOffset(struct _XkbAnyDoodad,top,6,2,30669)
CheckMemberSize(struct _XkbAnyDoodad,left,2,2,30670)
CheckOffset(struct _XkbAnyDoodad,left,8,2,30670)
CheckMemberSize(struct _XkbAnyDoodad,angle,2,2,30671)
CheckOffset(struct _XkbAnyDoodad,angle,10,2,30671)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbAnyDoodad,12, 9447, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyDoodad,type,1,6,30667)
CheckOffset(struct _XkbAnyDoodad,type,4,6,30667)
CheckMemberSize(struct _XkbAnyDoodad,priority,1,6,30668)
CheckOffset(struct _XkbAnyDoodad,priority,5,6,30668)
CheckMemberSize(struct _XkbAnyDoodad,top,2,6,30669)
CheckOffset(struct _XkbAnyDoodad,top,6,6,30669)
CheckMemberSize(struct _XkbAnyDoodad,left,2,6,30670)
CheckOffset(struct _XkbAnyDoodad,left,8,6,30670)
CheckMemberSize(struct _XkbAnyDoodad,angle,2,6,30671)
CheckOffset(struct _XkbAnyDoodad,angle,10,6,30671)
#elif defined __x86_64__
CheckTypeSize(struct _XkbAnyDoodad,16, 9447, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyDoodad,type,1,11,30667)
CheckOffset(struct _XkbAnyDoodad,type,8,11,30667)
CheckMemberSize(struct _XkbAnyDoodad,priority,1,11,30668)
CheckOffset(struct _XkbAnyDoodad,priority,9,11,30668)
CheckMemberSize(struct _XkbAnyDoodad,top,2,11,30669)
CheckOffset(struct _XkbAnyDoodad,top,10,11,30669)
CheckMemberSize(struct _XkbAnyDoodad,left,2,11,30670)
CheckOffset(struct _XkbAnyDoodad,left,12,11,30670)
CheckMemberSize(struct _XkbAnyDoodad,angle,2,11,30671)
CheckOffset(struct _XkbAnyDoodad,angle,14,11,30671)
#elif defined __s390x__
CheckTypeSize(struct _XkbAnyDoodad,16, 9447, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyDoodad,type,1,12,30667)
CheckOffset(struct _XkbAnyDoodad,type,8,12,30667)
CheckMemberSize(struct _XkbAnyDoodad,priority,1,12,30668)
CheckOffset(struct _XkbAnyDoodad,priority,9,12,30668)
CheckMemberSize(struct _XkbAnyDoodad,top,2,12,30669)
CheckOffset(struct _XkbAnyDoodad,top,10,12,30669)
CheckMemberSize(struct _XkbAnyDoodad,left,2,12,30670)
CheckOffset(struct _XkbAnyDoodad,left,12,12,30670)
CheckMemberSize(struct _XkbAnyDoodad,angle,2,12,30671)
CheckOffset(struct _XkbAnyDoodad,angle,14,12,30671)
#elif defined __ia64__
CheckTypeSize(struct _XkbAnyDoodad,16, 9447, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyDoodad,type,1,3,30667)
CheckOffset(struct _XkbAnyDoodad,type,8,3,30667)
CheckMemberSize(struct _XkbAnyDoodad,priority,1,3,30668)
CheckOffset(struct _XkbAnyDoodad,priority,9,3,30668)
CheckMemberSize(struct _XkbAnyDoodad,top,2,3,30669)
CheckOffset(struct _XkbAnyDoodad,top,10,3,30669)
CheckMemberSize(struct _XkbAnyDoodad,left,2,3,30670)
CheckOffset(struct _XkbAnyDoodad,left,12,3,30670)
CheckMemberSize(struct _XkbAnyDoodad,angle,2,3,30671)
CheckOffset(struct _XkbAnyDoodad,angle,14,3,30671)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbAnyDoodad,16, 9447, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyDoodad,type,1,9,30667)
CheckOffset(struct _XkbAnyDoodad,type,8,9,30667)
CheckMemberSize(struct _XkbAnyDoodad,priority,1,9,30668)
CheckOffset(struct _XkbAnyDoodad,priority,9,9,30668)
CheckMemberSize(struct _XkbAnyDoodad,top,2,9,30669)
CheckOffset(struct _XkbAnyDoodad,top,10,9,30669)
CheckMemberSize(struct _XkbAnyDoodad,left,2,9,30670)
CheckOffset(struct _XkbAnyDoodad,left,12,9,30670)
CheckMemberSize(struct _XkbAnyDoodad,angle,2,9,30671)
CheckOffset(struct _XkbAnyDoodad,angle,14,9,30671)
#else
Msg("Find size of _XkbAnyDoodad (9447)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9447,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbAnyDoodadRec,12, 9448, 10, 1.2, NULL, 9447, NULL)
#elif defined __i386__
CheckTypeSize(XkbAnyDoodadRec,12, 9448, 2, 1.2, NULL, 9447, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbAnyDoodadRec,12, 9448, 6, 1.2, NULL, 9447, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbAnyDoodadRec,16, 9448, 11, 1.2, NULL, 9447, NULL)
#elif defined __s390x__
CheckTypeSize(XkbAnyDoodadRec,16, 9448, 12, 1.2, NULL, 9447, NULL)
#elif defined __ia64__
CheckTypeSize(XkbAnyDoodadRec,16, 9448, 3, 1.2, NULL, 9447, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbAnyDoodadRec,16, 9448, 9, 1.2, NULL, 9447, NULL)
#else
Msg("Find size of XkbAnyDoodadRec (9448)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9447,NULL);\n",architecture,9448,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbAnyDoodadPtr,4, 9450, 10, 1.2, NULL, 9449, NULL)
#elif defined __i386__
CheckTypeSize(XkbAnyDoodadPtr,4, 9450, 2, 1.2, NULL, 9449, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbAnyDoodadPtr,4, 9450, 6, 1.2, NULL, 9449, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbAnyDoodadPtr,8, 9450, 11, 1.2, NULL, 9449, NULL)
#elif defined __s390x__
CheckTypeSize(XkbAnyDoodadPtr,8, 9450, 12, 1.2, NULL, 9449, NULL)
#elif defined __ia64__
CheckTypeSize(XkbAnyDoodadPtr,8, 9450, 3, 1.2, NULL, 9449, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbAnyDoodadPtr,8, 9450, 9, 1.2, NULL, 9449, NULL)
#else
Msg("Find size of XkbAnyDoodadPtr (9450)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9449,NULL);\n",architecture,9450,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(union _XkbDoodad,28, 9451, 10, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbDoodad on S390\n");
CheckOffset(union _XkbDoodad,any,0,10,30677)
CheckOffset(union _XkbDoodad,shape,0,10,30678)
CheckOffset(union _XkbDoodad,text,0,10,30679)
CheckOffset(union _XkbDoodad,indicator,0,10,30680)
CheckOffset(union _XkbDoodad,logo,0,10,30681)
#elif defined __i386__
CheckTypeSize(union _XkbDoodad,28, 9451, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbDoodad on IA32\n");
CheckOffset(union _XkbDoodad,any,0,2,30677)
CheckOffset(union _XkbDoodad,shape,0,2,30678)
CheckOffset(union _XkbDoodad,text,0,2,30679)
CheckOffset(union _XkbDoodad,indicator,0,2,30680)
CheckOffset(union _XkbDoodad,logo,0,2,30681)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(union _XkbDoodad,28, 9451, 6, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbDoodad on PPC32\n");
CheckOffset(union _XkbDoodad,any,0,6,30677)
CheckOffset(union _XkbDoodad,shape,0,6,30678)
CheckOffset(union _XkbDoodad,text,0,6,30679)
CheckOffset(union _XkbDoodad,indicator,0,6,30680)
CheckOffset(union _XkbDoodad,logo,0,6,30681)
#elif defined __x86_64__
CheckTypeSize(union _XkbDoodad,40, 9451, 11, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbDoodad on x86-64\n");
CheckOffset(union _XkbDoodad,any,0,11,30677)
CheckOffset(union _XkbDoodad,shape,0,11,30678)
CheckOffset(union _XkbDoodad,text,0,11,30679)
CheckOffset(union _XkbDoodad,indicator,0,11,30680)
CheckOffset(union _XkbDoodad,logo,0,11,30681)
#elif defined __s390x__
CheckTypeSize(union _XkbDoodad,40, 9451, 12, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbDoodad on S390X\n");
CheckOffset(union _XkbDoodad,any,0,12,30677)
CheckOffset(union _XkbDoodad,shape,0,12,30678)
CheckOffset(union _XkbDoodad,text,0,12,30679)
CheckOffset(union _XkbDoodad,indicator,0,12,30680)
CheckOffset(union _XkbDoodad,logo,0,12,30681)
#elif defined __ia64__
CheckTypeSize(union _XkbDoodad,40, 9451, 3, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbDoodad on IA64\n");
CheckOffset(union _XkbDoodad,any,0,3,30677)
CheckOffset(union _XkbDoodad,shape,0,3,30678)
CheckOffset(union _XkbDoodad,text,0,3,30679)
CheckOffset(union _XkbDoodad,indicator,0,3,30680)
CheckOffset(union _XkbDoodad,logo,0,3,30681)
#elif defined __powerpc64__
CheckTypeSize(union _XkbDoodad,40, 9451, 9, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbDoodad on PPC64\n");
CheckOffset(union _XkbDoodad,any,0,9,30677)
CheckOffset(union _XkbDoodad,shape,0,9,30678)
CheckOffset(union _XkbDoodad,text,0,9,30679)
CheckOffset(union _XkbDoodad,indicator,0,9,30680)
CheckOffset(union _XkbDoodad,logo,0,9,30681)
#else
Msg("Find size of _XkbDoodad (9451)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9451,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbDoodadRec,28, 9452, 10, 1.2, NULL, 9451, NULL)
#elif defined __i386__
CheckTypeSize(XkbDoodadRec,28, 9452, 2, 1.2, NULL, 9451, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbDoodadRec,28, 9452, 6, 1.2, NULL, 9451, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbDoodadRec,40, 9452, 11, 1.2, NULL, 9451, NULL)
#elif defined __s390x__
CheckTypeSize(XkbDoodadRec,40, 9452, 12, 1.2, NULL, 9451, NULL)
#elif defined __ia64__
CheckTypeSize(XkbDoodadRec,40, 9452, 3, 1.2, NULL, 9451, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbDoodadRec,40, 9452, 9, 1.2, NULL, 9451, NULL)
#else
Msg("Find size of XkbDoodadRec (9452)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9451,NULL);\n",architecture,9452,0);
#endif

#if defined __i386__
CheckTypeSize(XkbDoodadPtr,4, 9454, 2, 1.2, NULL, 9453, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbDoodadPtr,4, 9454, 10, 1.2, NULL, 9453, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbDoodadPtr,8, 9454, 11, 1.2, NULL, 9453, NULL)
#elif defined __s390x__
CheckTypeSize(XkbDoodadPtr,8, 9454, 12, 1.2, NULL, 9453, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbDoodadPtr,4, 9454, 6, 1.2, NULL, 9453, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbDoodadPtr,8, 9454, 9, 1.2, NULL, 9453, NULL)
#elif defined __ia64__
CheckTypeSize(XkbDoodadPtr,8, 9454, 3, 1.2, NULL, 9453, NULL)
#else
Msg("Find size of XkbDoodadPtr (9454)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9453,NULL);\n",architecture,9454,0);
#endif

#if 1
CheckTypeSize(struct _XkbKey,8, 9455, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbKey,gap,2,1,30687)
CheckOffset(struct _XkbKey,gap,4,1,30687)
CheckMemberSize(struct _XkbKey,shape_ndx,1,1,30688)
CheckOffset(struct _XkbKey,shape_ndx,6,1,30688)
CheckMemberSize(struct _XkbKey,color_ndx,1,1,30689)
CheckOffset(struct _XkbKey,color_ndx,7,1,30689)
#endif

#if 1
CheckTypeSize(XkbKeyRec,8, 9457, 1, 1.2, NULL, 9455, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbKeyPtr,4, 9459, 10, 1.2, NULL, 9458, NULL)
#elif defined __i386__
CheckTypeSize(XkbKeyPtr,4, 9459, 2, 1.2, NULL, 9458, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbKeyPtr,4, 9459, 6, 1.2, NULL, 9458, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbKeyPtr,8, 9459, 11, 1.2, NULL, 9458, NULL)
#elif defined __s390x__
CheckTypeSize(XkbKeyPtr,8, 9459, 12, 1.2, NULL, 9458, NULL)
#elif defined __ia64__
CheckTypeSize(XkbKeyPtr,8, 9459, 3, 1.2, NULL, 9458, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbKeyPtr,8, 9459, 9, 1.2, NULL, 9458, NULL)
#else
Msg("Find size of XkbKeyPtr (9459)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9458,NULL);\n",architecture,9459,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbRow,24, 9460, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbRow,keys,4,10,30702)
CheckOffset(struct _XkbRow,keys,12,10,30702)
CheckMemberSize(struct _XkbRow,bounds,8,10,30703)
CheckOffset(struct _XkbRow,bounds,16,10,30703)
#elif defined __i386__
CheckTypeSize(struct _XkbRow,24, 9460, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbRow,keys,4,2,30702)
CheckOffset(struct _XkbRow,keys,12,2,30702)
CheckMemberSize(struct _XkbRow,bounds,8,2,30703)
CheckOffset(struct _XkbRow,bounds,16,2,30703)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbRow,24, 9460, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbRow,keys,4,6,30702)
CheckOffset(struct _XkbRow,keys,12,6,30702)
CheckMemberSize(struct _XkbRow,bounds,8,6,30703)
CheckOffset(struct _XkbRow,bounds,16,6,30703)
#elif defined __x86_64__
CheckTypeSize(struct _XkbRow,32, 9460, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbRow,keys,8,11,30702)
CheckOffset(struct _XkbRow,keys,16,11,30702)
CheckMemberSize(struct _XkbRow,bounds,8,11,30703)
CheckOffset(struct _XkbRow,bounds,24,11,30703)
#elif defined __s390x__
CheckTypeSize(struct _XkbRow,32, 9460, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbRow,keys,8,12,30702)
CheckOffset(struct _XkbRow,keys,16,12,30702)
CheckMemberSize(struct _XkbRow,bounds,8,12,30703)
CheckOffset(struct _XkbRow,bounds,24,12,30703)
#elif defined __ia64__
CheckTypeSize(struct _XkbRow,32, 9460, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbRow,keys,8,3,30702)
CheckOffset(struct _XkbRow,keys,16,3,30702)
CheckMemberSize(struct _XkbRow,bounds,8,3,30703)
CheckOffset(struct _XkbRow,bounds,24,3,30703)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbRow,32, 9460, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbRow,keys,8,9,30702)
CheckOffset(struct _XkbRow,keys,16,9,30702)
CheckMemberSize(struct _XkbRow,bounds,8,9,30703)
CheckOffset(struct _XkbRow,bounds,24,9,30703)
#else
Msg("Find size of _XkbRow (9460)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9460,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbRowRec,24, 9461, 10, 1.2, NULL, 9460, NULL)
#elif defined __i386__
CheckTypeSize(XkbRowRec,24, 9461, 2, 1.2, NULL, 9460, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbRowRec,24, 9461, 6, 1.2, NULL, 9460, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbRowRec,32, 9461, 11, 1.2, NULL, 9460, NULL)
#elif defined __s390x__
CheckTypeSize(XkbRowRec,32, 9461, 12, 1.2, NULL, 9460, NULL)
#elif defined __ia64__
CheckTypeSize(XkbRowRec,32, 9461, 3, 1.2, NULL, 9460, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbRowRec,32, 9461, 9, 1.2, NULL, 9460, NULL)
#else
Msg("Find size of XkbRowRec (9461)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9460,NULL);\n",architecture,9461,0);
#endif

#if defined __i386__
CheckTypeSize(XkbRowPtr,4, 9463, 2, 1.2, NULL, 9462, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbRowPtr,4, 9463, 10, 1.2, NULL, 9462, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbRowPtr,8, 9463, 11, 1.2, NULL, 9462, NULL)
#elif defined __s390x__
CheckTypeSize(XkbRowPtr,8, 9463, 12, 1.2, NULL, 9462, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbRowPtr,4, 9463, 6, 1.2, NULL, 9462, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbRowPtr,8, 9463, 9, 1.2, NULL, 9462, NULL)
#elif defined __ia64__
CheckTypeSize(XkbRowPtr,8, 9463, 3, 1.2, NULL, 9462, NULL)
#else
Msg("Find size of XkbRowPtr (9463)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9462,NULL);\n",architecture,9463,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbSection,48, 9464, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbSection,priority,1,10,30722)
CheckOffset(struct _XkbSection,priority,4,10,30722)
CheckMemberSize(struct _XkbSection,top,2,10,30723)
CheckOffset(struct _XkbSection,top,6,10,30723)
CheckMemberSize(struct _XkbSection,left,2,10,30724)
CheckOffset(struct _XkbSection,left,8,10,30724)
CheckMemberSize(struct _XkbSection,width,2,10,30725)
CheckOffset(struct _XkbSection,width,10,10,30725)
CheckMemberSize(struct _XkbSection,height,2,10,30726)
CheckOffset(struct _XkbSection,height,12,10,30726)
CheckMemberSize(struct _XkbSection,angle,2,10,30727)
CheckOffset(struct _XkbSection,angle,14,10,30727)
CheckMemberSize(struct _XkbSection,num_rows,2,10,30728)
CheckOffset(struct _XkbSection,num_rows,16,10,30728)
CheckMemberSize(struct _XkbSection,num_doodads,2,10,30729)
CheckOffset(struct _XkbSection,num_doodads,18,10,30729)
CheckMemberSize(struct _XkbSection,num_overlays,2,10,30730)
CheckOffset(struct _XkbSection,num_overlays,20,10,30730)
CheckMemberSize(struct _XkbSection,sz_rows,2,10,30731)
CheckOffset(struct _XkbSection,sz_rows,22,10,30731)
CheckMemberSize(struct _XkbSection,sz_doodads,2,10,30732)
CheckOffset(struct _XkbSection,sz_doodads,24,10,30732)
CheckMemberSize(struct _XkbSection,sz_overlays,2,10,30733)
CheckOffset(struct _XkbSection,sz_overlays,26,10,30733)
CheckMemberSize(struct _XkbSection,rows,4,10,30734)
CheckOffset(struct _XkbSection,rows,28,10,30734)
CheckMemberSize(struct _XkbSection,doodads,4,10,30735)
CheckOffset(struct _XkbSection,doodads,32,10,30735)
CheckMemberSize(struct _XkbSection,bounds,8,10,30736)
CheckOffset(struct _XkbSection,bounds,36,10,30736)
CheckMemberSize(struct _XkbSection,overlays,4,10,30737)
CheckOffset(struct _XkbSection,overlays,44,10,30737)
#elif defined __i386__
CheckTypeSize(struct _XkbSection,48, 9464, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbSection,priority,1,2,30722)
CheckOffset(struct _XkbSection,priority,4,2,30722)
CheckMemberSize(struct _XkbSection,top,2,2,30723)
CheckOffset(struct _XkbSection,top,6,2,30723)
CheckMemberSize(struct _XkbSection,left,2,2,30724)
CheckOffset(struct _XkbSection,left,8,2,30724)
CheckMemberSize(struct _XkbSection,width,2,2,30725)
CheckOffset(struct _XkbSection,width,10,2,30725)
CheckMemberSize(struct _XkbSection,height,2,2,30726)
CheckOffset(struct _XkbSection,height,12,2,30726)
CheckMemberSize(struct _XkbSection,angle,2,2,30727)
CheckOffset(struct _XkbSection,angle,14,2,30727)
CheckMemberSize(struct _XkbSection,num_rows,2,2,30728)
CheckOffset(struct _XkbSection,num_rows,16,2,30728)
CheckMemberSize(struct _XkbSection,num_doodads,2,2,30729)
CheckOffset(struct _XkbSection,num_doodads,18,2,30729)
CheckMemberSize(struct _XkbSection,num_overlays,2,2,30730)
CheckOffset(struct _XkbSection,num_overlays,20,2,30730)
CheckMemberSize(struct _XkbSection,sz_rows,2,2,30731)
CheckOffset(struct _XkbSection,sz_rows,22,2,30731)
CheckMemberSize(struct _XkbSection,sz_doodads,2,2,30732)
CheckOffset(struct _XkbSection,sz_doodads,24,2,30732)
CheckMemberSize(struct _XkbSection,sz_overlays,2,2,30733)
CheckOffset(struct _XkbSection,sz_overlays,26,2,30733)
CheckMemberSize(struct _XkbSection,rows,4,2,30734)
CheckOffset(struct _XkbSection,rows,28,2,30734)
CheckMemberSize(struct _XkbSection,doodads,4,2,30735)
CheckOffset(struct _XkbSection,doodads,32,2,30735)
CheckMemberSize(struct _XkbSection,bounds,8,2,30736)
CheckOffset(struct _XkbSection,bounds,36,2,30736)
CheckMemberSize(struct _XkbSection,overlays,4,2,30737)
CheckOffset(struct _XkbSection,overlays,44,2,30737)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbSection,48, 9464, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbSection,priority,1,6,30722)
CheckOffset(struct _XkbSection,priority,4,6,30722)
CheckMemberSize(struct _XkbSection,top,2,6,30723)
CheckOffset(struct _XkbSection,top,6,6,30723)
CheckMemberSize(struct _XkbSection,left,2,6,30724)
CheckOffset(struct _XkbSection,left,8,6,30724)
CheckMemberSize(struct _XkbSection,width,2,6,30725)
CheckOffset(struct _XkbSection,width,10,6,30725)
CheckMemberSize(struct _XkbSection,height,2,6,30726)
CheckOffset(struct _XkbSection,height,12,6,30726)
CheckMemberSize(struct _XkbSection,angle,2,6,30727)
CheckOffset(struct _XkbSection,angle,14,6,30727)
CheckMemberSize(struct _XkbSection,num_rows,2,6,30728)
CheckOffset(struct _XkbSection,num_rows,16,6,30728)
CheckMemberSize(struct _XkbSection,num_doodads,2,6,30729)
CheckOffset(struct _XkbSection,num_doodads,18,6,30729)
CheckMemberSize(struct _XkbSection,num_overlays,2,6,30730)
CheckOffset(struct _XkbSection,num_overlays,20,6,30730)
CheckMemberSize(struct _XkbSection,sz_rows,2,6,30731)
CheckOffset(struct _XkbSection,sz_rows,22,6,30731)
CheckMemberSize(struct _XkbSection,sz_doodads,2,6,30732)
CheckOffset(struct _XkbSection,sz_doodads,24,6,30732)
CheckMemberSize(struct _XkbSection,sz_overlays,2,6,30733)
CheckOffset(struct _XkbSection,sz_overlays,26,6,30733)
CheckMemberSize(struct _XkbSection,rows,4,6,30734)
CheckOffset(struct _XkbSection,rows,28,6,30734)
CheckMemberSize(struct _XkbSection,doodads,4,6,30735)
CheckOffset(struct _XkbSection,doodads,32,6,30735)
CheckMemberSize(struct _XkbSection,bounds,8,6,30736)
CheckOffset(struct _XkbSection,bounds,36,6,30736)
CheckMemberSize(struct _XkbSection,overlays,4,6,30737)
CheckOffset(struct _XkbSection,overlays,44,6,30737)
#elif defined __x86_64__
CheckTypeSize(struct _XkbSection,64, 9464, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbSection,priority,1,11,30722)
CheckOffset(struct _XkbSection,priority,8,11,30722)
CheckMemberSize(struct _XkbSection,top,2,11,30723)
CheckOffset(struct _XkbSection,top,10,11,30723)
CheckMemberSize(struct _XkbSection,left,2,11,30724)
CheckOffset(struct _XkbSection,left,12,11,30724)
CheckMemberSize(struct _XkbSection,width,2,11,30725)
CheckOffset(struct _XkbSection,width,14,11,30725)
CheckMemberSize(struct _XkbSection,height,2,11,30726)
CheckOffset(struct _XkbSection,height,16,11,30726)
CheckMemberSize(struct _XkbSection,angle,2,11,30727)
CheckOffset(struct _XkbSection,angle,18,11,30727)
CheckMemberSize(struct _XkbSection,num_rows,2,11,30728)
CheckOffset(struct _XkbSection,num_rows,20,11,30728)
CheckMemberSize(struct _XkbSection,num_doodads,2,11,30729)
CheckOffset(struct _XkbSection,num_doodads,22,11,30729)
CheckMemberSize(struct _XkbSection,num_overlays,2,11,30730)
CheckOffset(struct _XkbSection,num_overlays,24,11,30730)
CheckMemberSize(struct _XkbSection,sz_rows,2,11,30731)
CheckOffset(struct _XkbSection,sz_rows,26,11,30731)
CheckMemberSize(struct _XkbSection,sz_doodads,2,11,30732)
CheckOffset(struct _XkbSection,sz_doodads,28,11,30732)
CheckMemberSize(struct _XkbSection,sz_overlays,2,11,30733)
CheckOffset(struct _XkbSection,sz_overlays,30,11,30733)
CheckMemberSize(struct _XkbSection,rows,8,11,30734)
CheckOffset(struct _XkbSection,rows,32,11,30734)
CheckMemberSize(struct _XkbSection,doodads,8,11,30735)
CheckOffset(struct _XkbSection,doodads,40,11,30735)
CheckMemberSize(struct _XkbSection,bounds,8,11,30736)
CheckOffset(struct _XkbSection,bounds,48,11,30736)
CheckMemberSize(struct _XkbSection,overlays,8,11,30737)
CheckOffset(struct _XkbSection,overlays,56,11,30737)
#elif defined __s390x__
CheckTypeSize(struct _XkbSection,64, 9464, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbSection,priority,1,12,30722)
CheckOffset(struct _XkbSection,priority,8,12,30722)
CheckMemberSize(struct _XkbSection,top,2,12,30723)
CheckOffset(struct _XkbSection,top,10,12,30723)
CheckMemberSize(struct _XkbSection,left,2,12,30724)
CheckOffset(struct _XkbSection,left,12,12,30724)
CheckMemberSize(struct _XkbSection,width,2,12,30725)
CheckOffset(struct _XkbSection,width,14,12,30725)
CheckMemberSize(struct _XkbSection,height,2,12,30726)
CheckOffset(struct _XkbSection,height,16,12,30726)
CheckMemberSize(struct _XkbSection,angle,2,12,30727)
CheckOffset(struct _XkbSection,angle,18,12,30727)
CheckMemberSize(struct _XkbSection,num_rows,2,12,30728)
CheckOffset(struct _XkbSection,num_rows,20,12,30728)
CheckMemberSize(struct _XkbSection,num_doodads,2,12,30729)
CheckOffset(struct _XkbSection,num_doodads,22,12,30729)
CheckMemberSize(struct _XkbSection,num_overlays,2,12,30730)
CheckOffset(struct _XkbSection,num_overlays,24,12,30730)
CheckMemberSize(struct _XkbSection,sz_rows,2,12,30731)
CheckOffset(struct _XkbSection,sz_rows,26,12,30731)
CheckMemberSize(struct _XkbSection,sz_doodads,2,12,30732)
CheckOffset(struct _XkbSection,sz_doodads,28,12,30732)
CheckMemberSize(struct _XkbSection,sz_overlays,2,12,30733)
CheckOffset(struct _XkbSection,sz_overlays,30,12,30733)
CheckMemberSize(struct _XkbSection,rows,8,12,30734)
CheckOffset(struct _XkbSection,rows,32,12,30734)
CheckMemberSize(struct _XkbSection,doodads,8,12,30735)
CheckOffset(struct _XkbSection,doodads,40,12,30735)
CheckMemberSize(struct _XkbSection,bounds,8,12,30736)
CheckOffset(struct _XkbSection,bounds,48,12,30736)
CheckMemberSize(struct _XkbSection,overlays,8,12,30737)
CheckOffset(struct _XkbSection,overlays,56,12,30737)
#elif defined __ia64__
CheckTypeSize(struct _XkbSection,64, 9464, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbSection,priority,1,3,30722)
CheckOffset(struct _XkbSection,priority,8,3,30722)
CheckMemberSize(struct _XkbSection,top,2,3,30723)
CheckOffset(struct _XkbSection,top,10,3,30723)
CheckMemberSize(struct _XkbSection,left,2,3,30724)
CheckOffset(struct _XkbSection,left,12,3,30724)
CheckMemberSize(struct _XkbSection,width,2,3,30725)
CheckOffset(struct _XkbSection,width,14,3,30725)
CheckMemberSize(struct _XkbSection,height,2,3,30726)
CheckOffset(struct _XkbSection,height,16,3,30726)
CheckMemberSize(struct _XkbSection,angle,2,3,30727)
CheckOffset(struct _XkbSection,angle,18,3,30727)
CheckMemberSize(struct _XkbSection,num_rows,2,3,30728)
CheckOffset(struct _XkbSection,num_rows,20,3,30728)
CheckMemberSize(struct _XkbSection,num_doodads,2,3,30729)
CheckOffset(struct _XkbSection,num_doodads,22,3,30729)
CheckMemberSize(struct _XkbSection,num_overlays,2,3,30730)
CheckOffset(struct _XkbSection,num_overlays,24,3,30730)
CheckMemberSize(struct _XkbSection,sz_rows,2,3,30731)
CheckOffset(struct _XkbSection,sz_rows,26,3,30731)
CheckMemberSize(struct _XkbSection,sz_doodads,2,3,30732)
CheckOffset(struct _XkbSection,sz_doodads,28,3,30732)
CheckMemberSize(struct _XkbSection,sz_overlays,2,3,30733)
CheckOffset(struct _XkbSection,sz_overlays,30,3,30733)
CheckMemberSize(struct _XkbSection,rows,8,3,30734)
CheckOffset(struct _XkbSection,rows,32,3,30734)
CheckMemberSize(struct _XkbSection,doodads,8,3,30735)
CheckOffset(struct _XkbSection,doodads,40,3,30735)
CheckMemberSize(struct _XkbSection,bounds,8,3,30736)
CheckOffset(struct _XkbSection,bounds,48,3,30736)
CheckMemberSize(struct _XkbSection,overlays,8,3,30737)
CheckOffset(struct _XkbSection,overlays,56,3,30737)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbSection,64, 9464, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbSection,priority,1,9,30722)
CheckOffset(struct _XkbSection,priority,8,9,30722)
CheckMemberSize(struct _XkbSection,top,2,9,30723)
CheckOffset(struct _XkbSection,top,10,9,30723)
CheckMemberSize(struct _XkbSection,left,2,9,30724)
CheckOffset(struct _XkbSection,left,12,9,30724)
CheckMemberSize(struct _XkbSection,width,2,9,30725)
CheckOffset(struct _XkbSection,width,14,9,30725)
CheckMemberSize(struct _XkbSection,height,2,9,30726)
CheckOffset(struct _XkbSection,height,16,9,30726)
CheckMemberSize(struct _XkbSection,angle,2,9,30727)
CheckOffset(struct _XkbSection,angle,18,9,30727)
CheckMemberSize(struct _XkbSection,num_rows,2,9,30728)
CheckOffset(struct _XkbSection,num_rows,20,9,30728)
CheckMemberSize(struct _XkbSection,num_doodads,2,9,30729)
CheckOffset(struct _XkbSection,num_doodads,22,9,30729)
CheckMemberSize(struct _XkbSection,num_overlays,2,9,30730)
CheckOffset(struct _XkbSection,num_overlays,24,9,30730)
CheckMemberSize(struct _XkbSection,sz_rows,2,9,30731)
CheckOffset(struct _XkbSection,sz_rows,26,9,30731)
CheckMemberSize(struct _XkbSection,sz_doodads,2,9,30732)
CheckOffset(struct _XkbSection,sz_doodads,28,9,30732)
CheckMemberSize(struct _XkbSection,sz_overlays,2,9,30733)
CheckOffset(struct _XkbSection,sz_overlays,30,9,30733)
CheckMemberSize(struct _XkbSection,rows,8,9,30734)
CheckOffset(struct _XkbSection,rows,32,9,30734)
CheckMemberSize(struct _XkbSection,doodads,8,9,30735)
CheckOffset(struct _XkbSection,doodads,40,9,30735)
CheckMemberSize(struct _XkbSection,bounds,8,9,30736)
CheckOffset(struct _XkbSection,bounds,48,9,30736)
CheckMemberSize(struct _XkbSection,overlays,8,9,30737)
CheckOffset(struct _XkbSection,overlays,56,9,30737)
#else
Msg("Find size of _XkbSection (9464)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9464,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbOverlay,20, 9465, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlay,section_under,4,10,30757)
CheckOffset(struct _XkbOverlay,section_under,4,10,30757)
CheckMemberSize(struct _XkbOverlay,num_rows,2,10,30758)
CheckOffset(struct _XkbOverlay,num_rows,8,10,30758)
CheckMemberSize(struct _XkbOverlay,sz_rows,2,10,30759)
CheckOffset(struct _XkbOverlay,sz_rows,10,10,30759)
CheckMemberSize(struct _XkbOverlay,rows,4,10,30760)
CheckOffset(struct _XkbOverlay,rows,12,10,30760)
CheckMemberSize(struct _XkbOverlay,bounds,4,10,30761)
CheckOffset(struct _XkbOverlay,bounds,16,10,30761)
#elif defined __i386__
CheckTypeSize(struct _XkbOverlay,20, 9465, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlay,section_under,4,2,30757)
CheckOffset(struct _XkbOverlay,section_under,4,2,30757)
CheckMemberSize(struct _XkbOverlay,num_rows,2,2,30758)
CheckOffset(struct _XkbOverlay,num_rows,8,2,30758)
CheckMemberSize(struct _XkbOverlay,sz_rows,2,2,30759)
CheckOffset(struct _XkbOverlay,sz_rows,10,2,30759)
CheckMemberSize(struct _XkbOverlay,rows,4,2,30760)
CheckOffset(struct _XkbOverlay,rows,12,2,30760)
CheckMemberSize(struct _XkbOverlay,bounds,4,2,30761)
CheckOffset(struct _XkbOverlay,bounds,16,2,30761)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbOverlay,20, 9465, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlay,section_under,4,6,30757)
CheckOffset(struct _XkbOverlay,section_under,4,6,30757)
CheckMemberSize(struct _XkbOverlay,num_rows,2,6,30758)
CheckOffset(struct _XkbOverlay,num_rows,8,6,30758)
CheckMemberSize(struct _XkbOverlay,sz_rows,2,6,30759)
CheckOffset(struct _XkbOverlay,sz_rows,10,6,30759)
CheckMemberSize(struct _XkbOverlay,rows,4,6,30760)
CheckOffset(struct _XkbOverlay,rows,12,6,30760)
CheckMemberSize(struct _XkbOverlay,bounds,4,6,30761)
CheckOffset(struct _XkbOverlay,bounds,16,6,30761)
#elif defined __x86_64__
CheckTypeSize(struct _XkbOverlay,40, 9465, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlay,section_under,8,11,30757)
CheckOffset(struct _XkbOverlay,section_under,8,11,30757)
CheckMemberSize(struct _XkbOverlay,num_rows,2,11,30758)
CheckOffset(struct _XkbOverlay,num_rows,16,11,30758)
CheckMemberSize(struct _XkbOverlay,sz_rows,2,11,30759)
CheckOffset(struct _XkbOverlay,sz_rows,18,11,30759)
CheckMemberSize(struct _XkbOverlay,rows,8,11,30760)
CheckOffset(struct _XkbOverlay,rows,24,11,30760)
CheckMemberSize(struct _XkbOverlay,bounds,8,11,30761)
CheckOffset(struct _XkbOverlay,bounds,32,11,30761)
#elif defined __s390x__
CheckTypeSize(struct _XkbOverlay,40, 9465, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlay,section_under,8,12,30757)
CheckOffset(struct _XkbOverlay,section_under,8,12,30757)
CheckMemberSize(struct _XkbOverlay,num_rows,2,12,30758)
CheckOffset(struct _XkbOverlay,num_rows,16,12,30758)
CheckMemberSize(struct _XkbOverlay,sz_rows,2,12,30759)
CheckOffset(struct _XkbOverlay,sz_rows,18,12,30759)
CheckMemberSize(struct _XkbOverlay,rows,8,12,30760)
CheckOffset(struct _XkbOverlay,rows,24,12,30760)
CheckMemberSize(struct _XkbOverlay,bounds,8,12,30761)
CheckOffset(struct _XkbOverlay,bounds,32,12,30761)
#elif defined __ia64__
CheckTypeSize(struct _XkbOverlay,40, 9465, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlay,section_under,8,3,30757)
CheckOffset(struct _XkbOverlay,section_under,8,3,30757)
CheckMemberSize(struct _XkbOverlay,num_rows,2,3,30758)
CheckOffset(struct _XkbOverlay,num_rows,16,3,30758)
CheckMemberSize(struct _XkbOverlay,sz_rows,2,3,30759)
CheckOffset(struct _XkbOverlay,sz_rows,18,3,30759)
CheckMemberSize(struct _XkbOverlay,rows,8,3,30760)
CheckOffset(struct _XkbOverlay,rows,24,3,30760)
CheckMemberSize(struct _XkbOverlay,bounds,8,3,30761)
CheckOffset(struct _XkbOverlay,bounds,32,3,30761)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbOverlay,40, 9465, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlay,section_under,8,9,30757)
CheckOffset(struct _XkbOverlay,section_under,8,9,30757)
CheckMemberSize(struct _XkbOverlay,num_rows,2,9,30758)
CheckOffset(struct _XkbOverlay,num_rows,16,9,30758)
CheckMemberSize(struct _XkbOverlay,sz_rows,2,9,30759)
CheckOffset(struct _XkbOverlay,sz_rows,18,9,30759)
CheckMemberSize(struct _XkbOverlay,rows,8,9,30760)
CheckOffset(struct _XkbOverlay,rows,24,9,30760)
CheckMemberSize(struct _XkbOverlay,bounds,8,9,30761)
CheckOffset(struct _XkbOverlay,bounds,32,9,30761)
#else
Msg("Find size of _XkbOverlay (9465)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9465,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbSectionRec,48, 9467, 10, 1.2, NULL, 9464, NULL)
#elif defined __i386__
CheckTypeSize(XkbSectionRec,48, 9467, 2, 1.2, NULL, 9464, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbSectionRec,48, 9467, 6, 1.2, NULL, 9464, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbSectionRec,64, 9467, 11, 1.2, NULL, 9464, NULL)
#elif defined __s390x__
CheckTypeSize(XkbSectionRec,64, 9467, 12, 1.2, NULL, 9464, NULL)
#elif defined __ia64__
CheckTypeSize(XkbSectionRec,64, 9467, 3, 1.2, NULL, 9464, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbSectionRec,64, 9467, 9, 1.2, NULL, 9464, NULL)
#else
Msg("Find size of XkbSectionRec (9467)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9464,NULL);\n",architecture,9467,0);
#endif

#if defined __i386__
CheckTypeSize(XkbSectionPtr,4, 9469, 2, 1.2, NULL, 9468, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbSectionPtr,4, 9469, 10, 1.2, NULL, 9468, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbSectionPtr,8, 9469, 11, 1.2, NULL, 9468, NULL)
#elif defined __s390x__
CheckTypeSize(XkbSectionPtr,8, 9469, 12, 1.2, NULL, 9468, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbSectionPtr,4, 9469, 6, 1.2, NULL, 9468, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbSectionPtr,8, 9469, 9, 1.2, NULL, 9468, NULL)
#elif defined __ia64__
CheckTypeSize(XkbSectionPtr,8, 9469, 3, 1.2, NULL, 9468, NULL)
#else
Msg("Find size of XkbSectionPtr (9469)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9468,NULL);\n",architecture,9469,0);
#endif

#if 1
CheckTypeSize(struct _XkbOverlayKey,8, 9470, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlayKey,under,4,1,30741)
CheckOffset(struct _XkbOverlayKey,under,4,1,30741)
#endif

#if 1
CheckTypeSize(XkbOverlayKeyRec,8, 9471, 1, 1.2, NULL, 9470, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbOverlayKeyPtr,4, 9473, 10, 1.2, NULL, 9472, NULL)
#elif defined __i386__
CheckTypeSize(XkbOverlayKeyPtr,4, 9473, 2, 1.2, NULL, 9472, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbOverlayKeyPtr,4, 9473, 6, 1.2, NULL, 9472, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbOverlayKeyPtr,8, 9473, 11, 1.2, NULL, 9472, NULL)
#elif defined __s390x__
CheckTypeSize(XkbOverlayKeyPtr,8, 9473, 12, 1.2, NULL, 9472, NULL)
#elif defined __ia64__
CheckTypeSize(XkbOverlayKeyPtr,8, 9473, 3, 1.2, NULL, 9472, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbOverlayKeyPtr,8, 9473, 9, 1.2, NULL, 9472, NULL)
#else
Msg("Find size of XkbOverlayKeyPtr (9473)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9472,NULL);\n",architecture,9473,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbOverlayRow,12, 9474, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlayRow,keys,4,10,30749)
CheckOffset(struct _XkbOverlayRow,keys,8,10,30749)
#elif defined __i386__
CheckTypeSize(struct _XkbOverlayRow,12, 9474, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlayRow,keys,4,2,30749)
CheckOffset(struct _XkbOverlayRow,keys,8,2,30749)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbOverlayRow,12, 9474, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlayRow,keys,4,6,30749)
CheckOffset(struct _XkbOverlayRow,keys,8,6,30749)
#elif defined __x86_64__
CheckTypeSize(struct _XkbOverlayRow,16, 9474, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlayRow,keys,8,11,30749)
CheckOffset(struct _XkbOverlayRow,keys,8,11,30749)
#elif defined __s390x__
CheckTypeSize(struct _XkbOverlayRow,16, 9474, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlayRow,keys,8,12,30749)
CheckOffset(struct _XkbOverlayRow,keys,8,12,30749)
#elif defined __ia64__
CheckTypeSize(struct _XkbOverlayRow,16, 9474, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlayRow,keys,8,3,30749)
CheckOffset(struct _XkbOverlayRow,keys,8,3,30749)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbOverlayRow,16, 9474, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlayRow,keys,8,9,30749)
CheckOffset(struct _XkbOverlayRow,keys,8,9,30749)
#else
Msg("Find size of _XkbOverlayRow (9474)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9474,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbOverlayRowRec,12, 9475, 10, 1.2, NULL, 9474, NULL)
#elif defined __i386__
CheckTypeSize(XkbOverlayRowRec,12, 9475, 2, 1.2, NULL, 9474, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbOverlayRowRec,12, 9475, 6, 1.2, NULL, 9474, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbOverlayRowRec,16, 9475, 11, 1.2, NULL, 9474, NULL)
#elif defined __s390x__
CheckTypeSize(XkbOverlayRowRec,16, 9475, 12, 1.2, NULL, 9474, NULL)
#elif defined __ia64__
CheckTypeSize(XkbOverlayRowRec,16, 9475, 3, 1.2, NULL, 9474, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbOverlayRowRec,16, 9475, 9, 1.2, NULL, 9474, NULL)
#else
Msg("Find size of XkbOverlayRowRec (9475)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9474,NULL);\n",architecture,9475,0);
#endif

#if defined __i386__
CheckTypeSize(XkbOverlayRowPtr,4, 9477, 2, 1.2, NULL, 9476, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbOverlayRowPtr,4, 9477, 10, 1.2, NULL, 9476, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbOverlayRowPtr,8, 9477, 11, 1.2, NULL, 9476, NULL)
#elif defined __s390x__
CheckTypeSize(XkbOverlayRowPtr,8, 9477, 12, 1.2, NULL, 9476, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbOverlayRowPtr,4, 9477, 6, 1.2, NULL, 9476, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbOverlayRowPtr,8, 9477, 9, 1.2, NULL, 9476, NULL)
#elif defined __ia64__
CheckTypeSize(XkbOverlayRowPtr,8, 9477, 3, 1.2, NULL, 9476, NULL)
#else
Msg("Find size of XkbOverlayRowPtr (9477)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9476,NULL);\n",architecture,9477,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XkbOverlayRec,20, 9478, 10, 1.2, NULL, 9465, NULL)
#elif defined __i386__
CheckTypeSize(XkbOverlayRec,20, 9478, 2, 1.2, NULL, 9465, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbOverlayRec,20, 9478, 6, 1.2, NULL, 9465, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbOverlayRec,40, 9478, 11, 1.2, NULL, 9465, NULL)
#elif defined __s390x__
CheckTypeSize(XkbOverlayRec,40, 9478, 12, 1.2, NULL, 9465, NULL)
#elif defined __ia64__
CheckTypeSize(XkbOverlayRec,40, 9478, 3, 1.2, NULL, 9465, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbOverlayRec,40, 9478, 9, 1.2, NULL, 9465, NULL)
#else
Msg("Find size of XkbOverlayRec (9478)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9465,NULL);\n",architecture,9478,0);
#endif

#if defined __i386__
CheckTypeSize(XkbOverlayPtr,4, 9479, 2, 1.2, NULL, 9466, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbOverlayPtr,4, 9479, 10, 1.2, NULL, 9466, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbOverlayPtr,8, 9479, 11, 1.2, NULL, 9466, NULL)
#elif defined __s390x__
CheckTypeSize(XkbOverlayPtr,8, 9479, 12, 1.2, NULL, 9466, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbOverlayPtr,4, 9479, 6, 1.2, NULL, 9466, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbOverlayPtr,8, 9479, 9, 1.2, NULL, 9466, NULL)
#elif defined __ia64__
CheckTypeSize(XkbOverlayPtr,8, 9479, 3, 1.2, NULL, 9466, NULL)
#else
Msg("Find size of XkbOverlayPtr (9479)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9466,NULL);\n",architecture,9479,0);
#endif

#if defined __x86_64__
CheckTypeSize(struct _XkbGeometry,112, 9480, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbGeometry,width_mm,2,11,30763)
CheckOffset(struct _XkbGeometry,width_mm,8,11,30763)
CheckMemberSize(struct _XkbGeometry,height_mm,2,11,30764)
CheckOffset(struct _XkbGeometry,height_mm,10,11,30764)
CheckMemberSize(struct _XkbGeometry,label_font,8,11,30765)
CheckOffset(struct _XkbGeometry,label_font,16,11,30765)
CheckMemberSize(struct _XkbGeometry,label_color,8,11,30766)
CheckOffset(struct _XkbGeometry,label_color,24,11,30766)
CheckMemberSize(struct _XkbGeometry,base_color,8,11,30767)
CheckOffset(struct _XkbGeometry,base_color,32,11,30767)
CheckMemberSize(struct _XkbGeometry,sz_properties,2,11,30768)
CheckOffset(struct _XkbGeometry,sz_properties,40,11,30768)
CheckMemberSize(struct _XkbGeometry,sz_colors,2,11,30769)
CheckOffset(struct _XkbGeometry,sz_colors,42,11,30769)
CheckMemberSize(struct _XkbGeometry,sz_shapes,2,11,30770)
CheckOffset(struct _XkbGeometry,sz_shapes,44,11,30770)
CheckMemberSize(struct _XkbGeometry,sz_sections,2,11,30771)
CheckOffset(struct _XkbGeometry,sz_sections,46,11,30771)
CheckMemberSize(struct _XkbGeometry,sz_doodads,2,11,30772)
CheckOffset(struct _XkbGeometry,sz_doodads,48,11,30772)
CheckMemberSize(struct _XkbGeometry,sz_key_aliases,2,11,30773)
CheckOffset(struct _XkbGeometry,sz_key_aliases,50,11,30773)
CheckMemberSize(struct _XkbGeometry,num_properties,2,11,30774)
CheckOffset(struct _XkbGeometry,num_properties,52,11,30774)
CheckMemberSize(struct _XkbGeometry,num_colors,2,11,30775)
CheckOffset(struct _XkbGeometry,num_colors,54,11,30775)
CheckMemberSize(struct _XkbGeometry,num_shapes,2,11,30776)
CheckOffset(struct _XkbGeometry,num_shapes,56,11,30776)
CheckMemberSize(struct _XkbGeometry,num_sections,2,11,30777)
CheckOffset(struct _XkbGeometry,num_sections,58,11,30777)
CheckMemberSize(struct _XkbGeometry,num_doodads,2,11,30778)
CheckOffset(struct _XkbGeometry,num_doodads,60,11,30778)
CheckMemberSize(struct _XkbGeometry,num_key_aliases,2,11,30779)
CheckOffset(struct _XkbGeometry,num_key_aliases,62,11,30779)
CheckMemberSize(struct _XkbGeometry,properties,8,11,30780)
CheckOffset(struct _XkbGeometry,properties,64,11,30780)
CheckMemberSize(struct _XkbGeometry,colors,8,11,30781)
CheckOffset(struct _XkbGeometry,colors,72,11,30781)
CheckMemberSize(struct _XkbGeometry,shapes,8,11,30782)
CheckOffset(struct _XkbGeometry,shapes,80,11,30782)
CheckMemberSize(struct _XkbGeometry,sections,8,11,30783)
CheckOffset(struct _XkbGeometry,sections,88,11,30783)
CheckMemberSize(struct _XkbGeometry,doodads,8,11,30784)
CheckOffset(struct _XkbGeometry,doodads,96,11,30784)
CheckMemberSize(struct _XkbGeometry,key_aliases,8,11,30785)
CheckOffset(struct _XkbGeometry,key_aliases,104,11,30785)
#elif defined __s390x__
CheckTypeSize(struct _XkbGeometry,112, 9480, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbGeometry,width_mm,2,12,30763)
CheckOffset(struct _XkbGeometry,width_mm,8,12,30763)
CheckMemberSize(struct _XkbGeometry,height_mm,2,12,30764)
CheckOffset(struct _XkbGeometry,height_mm,10,12,30764)
CheckMemberSize(struct _XkbGeometry,label_font,8,12,30765)
CheckOffset(struct _XkbGeometry,label_font,16,12,30765)
CheckMemberSize(struct _XkbGeometry,label_color,8,12,30766)
CheckOffset(struct _XkbGeometry,label_color,24,12,30766)
CheckMemberSize(struct _XkbGeometry,base_color,8,12,30767)
CheckOffset(struct _XkbGeometry,base_color,32,12,30767)
CheckMemberSize(struct _XkbGeometry,sz_properties,2,12,30768)
CheckOffset(struct _XkbGeometry,sz_properties,40,12,30768)
CheckMemberSize(struct _XkbGeometry,sz_colors,2,12,30769)
CheckOffset(struct _XkbGeometry,sz_colors,42,12,30769)
CheckMemberSize(struct _XkbGeometry,sz_shapes,2,12,30770)
CheckOffset(struct _XkbGeometry,sz_shapes,44,12,30770)
CheckMemberSize(struct _XkbGeometry,sz_sections,2,12,30771)
CheckOffset(struct _XkbGeometry,sz_sections,46,12,30771)
CheckMemberSize(struct _XkbGeometry,sz_doodads,2,12,30772)
CheckOffset(struct _XkbGeometry,sz_doodads,48,12,30772)
CheckMemberSize(struct _XkbGeometry,sz_key_aliases,2,12,30773)
CheckOffset(struct _XkbGeometry,sz_key_aliases,50,12,30773)
CheckMemberSize(struct _XkbGeometry,num_properties,2,12,30774)
CheckOffset(struct _XkbGeometry,num_properties,52,12,30774)
CheckMemberSize(struct _XkbGeometry,num_colors,2,12,30775)
CheckOffset(struct _XkbGeometry,num_colors,54,12,30775)
CheckMemberSize(struct _XkbGeometry,num_shapes,2,12,30776)
CheckOffset(struct _XkbGeometry,num_shapes,56,12,30776)
CheckMemberSize(struct _XkbGeometry,num_sections,2,12,30777)
CheckOffset(struct _XkbGeometry,num_sections,58,12,30777)
CheckMemberSize(struct _XkbGeometry,num_doodads,2,12,30778)
CheckOffset(struct _XkbGeometry,num_doodads,60,12,30778)
CheckMemberSize(struct _XkbGeometry,num_key_aliases,2,12,30779)
CheckOffset(struct _XkbGeometry,num_key_aliases,62,12,30779)
CheckMemberSize(struct _XkbGeometry,properties,8,12,30780)
CheckOffset(struct _XkbGeometry,properties,64,12,30780)
CheckMemberSize(struct _XkbGeometry,colors,8,12,30781)
CheckOffset(struct _XkbGeometry,colors,72,12,30781)
CheckMemberSize(struct _XkbGeometry,shapes,8,12,30782)
CheckOffset(struct _XkbGeometry,shapes,80,12,30782)
CheckMemberSize(struct _XkbGeometry,sections,8,12,30783)
CheckOffset(struct _XkbGeometry,sections,88,12,30783)
CheckMemberSize(struct _XkbGeometry,doodads,8,12,30784)
CheckOffset(struct _XkbGeometry,doodads,96,12,30784)
CheckMemberSize(struct _XkbGeometry,key_aliases,8,12,30785)
CheckOffset(struct _XkbGeometry,key_aliases,104,12,30785)
#elif defined __ia64__
CheckTypeSize(struct _XkbGeometry,112, 9480, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbGeometry,width_mm,2,3,30763)
CheckOffset(struct _XkbGeometry,width_mm,8,3,30763)
CheckMemberSize(struct _XkbGeometry,height_mm,2,3,30764)
CheckOffset(struct _XkbGeometry,height_mm,10,3,30764)
CheckMemberSize(struct _XkbGeometry,label_font,8,3,30765)
CheckOffset(struct _XkbGeometry,label_font,16,3,30765)
CheckMemberSize(struct _XkbGeometry,label_color,8,3,30766)
CheckOffset(struct _XkbGeometry,label_color,24,3,30766)
CheckMemberSize(struct _XkbGeometry,base_color,8,3,30767)
CheckOffset(struct _XkbGeometry,base_color,32,3,30767)
CheckMemberSize(struct _XkbGeometry,sz_properties,2,3,30768)
CheckOffset(struct _XkbGeometry,sz_properties,40,3,30768)
CheckMemberSize(struct _XkbGeometry,sz_colors,2,3,30769)
CheckOffset(struct _XkbGeometry,sz_colors,42,3,30769)
CheckMemberSize(struct _XkbGeometry,sz_shapes,2,3,30770)
CheckOffset(struct _XkbGeometry,sz_shapes,44,3,30770)
CheckMemberSize(struct _XkbGeometry,sz_sections,2,3,30771)
CheckOffset(struct _XkbGeometry,sz_sections,46,3,30771)
CheckMemberSize(struct _XkbGeometry,sz_doodads,2,3,30772)
CheckOffset(struct _XkbGeometry,sz_doodads,48,3,30772)
CheckMemberSize(struct _XkbGeometry,sz_key_aliases,2,3,30773)
CheckOffset(struct _XkbGeometry,sz_key_aliases,50,3,30773)
CheckMemberSize(struct _XkbGeometry,num_properties,2,3,30774)
CheckOffset(struct _XkbGeometry,num_properties,52,3,30774)
CheckMemberSize(struct _XkbGeometry,num_colors,2,3,30775)
CheckOffset(struct _XkbGeometry,num_colors,54,3,30775)
CheckMemberSize(struct _XkbGeometry,num_shapes,2,3,30776)
CheckOffset(struct _XkbGeometry,num_shapes,56,3,30776)
CheckMemberSize(struct _XkbGeometry,num_sections,2,3,30777)
CheckOffset(struct _XkbGeometry,num_sections,58,3,30777)
CheckMemberSize(struct _XkbGeometry,num_doodads,2,3,30778)
CheckOffset(struct _XkbGeometry,num_doodads,60,3,30778)
CheckMemberSize(struct _XkbGeometry,num_key_aliases,2,3,30779)
CheckOffset(struct _XkbGeometry,num_key_aliases,62,3,30779)
CheckMemberSize(struct _XkbGeometry,properties,8,3,30780)
CheckOffset(struct _XkbGeometry,properties,64,3,30780)
CheckMemberSize(struct _XkbGeometry,colors,8,3,30781)
CheckOffset(struct _XkbGeometry,colors,72,3,30781)
CheckMemberSize(struct _XkbGeometry,shapes,8,3,30782)
CheckOffset(struct _XkbGeometry,shapes,80,3,30782)
CheckMemberSize(struct _XkbGeometry,sections,8,3,30783)
CheckOffset(struct _XkbGeometry,sections,88,3,30783)
CheckMemberSize(struct _XkbGeometry,doodads,8,3,30784)
CheckOffset(struct _XkbGeometry,doodads,96,3,30784)
CheckMemberSize(struct _XkbGeometry,key_aliases,8,3,30785)
CheckOffset(struct _XkbGeometry,key_aliases,104,3,30785)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbGeometry,112, 9480, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbGeometry,width_mm,2,9,30763)
CheckOffset(struct _XkbGeometry,width_mm,8,9,30763)
CheckMemberSize(struct _XkbGeometry,height_mm,2,9,30764)
CheckOffset(struct _XkbGeometry,height_mm,10,9,30764)
CheckMemberSize(struct _XkbGeometry,label_font,8,9,30765)
CheckOffset(struct _XkbGeometry,label_font,16,9,30765)
CheckMemberSize(struct _XkbGeometry,label_color,8,9,30766)
CheckOffset(struct _XkbGeometry,label_color,24,9,30766)
CheckMemberSize(struct _XkbGeometry,base_color,8,9,30767)
CheckOffset(struct _XkbGeometry,base_color,32,9,30767)
CheckMemberSize(struct _XkbGeometry,sz_properties,2,9,30768)
CheckOffset(struct _XkbGeometry,sz_properties,40,9,30768)
CheckMemberSize(struct _XkbGeometry,sz_colors,2,9,30769)
CheckOffset(struct _XkbGeometry,sz_colors,42,9,30769)
CheckMemberSize(struct _XkbGeometry,sz_shapes,2,9,30770)
CheckOffset(struct _XkbGeometry,sz_shapes,44,9,30770)
CheckMemberSize(struct _XkbGeometry,sz_sections,2,9,30771)
CheckOffset(struct _XkbGeometry,sz_sections,46,9,30771)
CheckMemberSize(struct _XkbGeometry,sz_doodads,2,9,30772)
CheckOffset(struct _XkbGeometry,sz_doodads,48,9,30772)
CheckMemberSize(struct _XkbGeometry,sz_key_aliases,2,9,30773)
CheckOffset(struct _XkbGeometry,sz_key_aliases,50,9,30773)
CheckMemberSize(struct _XkbGeometry,num_properties,2,9,30774)
CheckOffset(struct _XkbGeometry,num_properties,52,9,30774)
CheckMemberSize(struct _XkbGeometry,num_colors,2,9,30775)
CheckOffset(struct _XkbGeometry,num_colors,54,9,30775)
CheckMemberSize(struct _XkbGeometry,num_shapes,2,9,30776)
CheckOffset(struct _XkbGeometry,num_shapes,56,9,30776)
CheckMemberSize(struct _XkbGeometry,num_sections,2,9,30777)
CheckOffset(struct _XkbGeometry,num_sections,58,9,30777)
CheckMemberSize(struct _XkbGeometry,num_doodads,2,9,30778)
CheckOffset(struct _XkbGeometry,num_doodads,60,9,30778)
CheckMemberSize(struct _XkbGeometry,num_key_aliases,2,9,30779)
CheckOffset(struct _XkbGeometry,num_key_aliases,62,9,30779)
CheckMemberSize(struct _XkbGeometry,properties,8,9,30780)
CheckOffset(struct _XkbGeometry,properties,64,9,30780)
CheckMemberSize(struct _XkbGeometry,colors,8,9,30781)
CheckOffset(struct _XkbGeometry,colors,72,9,30781)
CheckMemberSize(struct _XkbGeometry,shapes,8,9,30782)
CheckOffset(struct _XkbGeometry,shapes,80,9,30782)
CheckMemberSize(struct _XkbGeometry,sections,8,9,30783)
CheckOffset(struct _XkbGeometry,sections,88,9,30783)
CheckMemberSize(struct _XkbGeometry,doodads,8,9,30784)
CheckOffset(struct _XkbGeometry,doodads,96,9,30784)
CheckMemberSize(struct _XkbGeometry,key_aliases,8,9,30785)
CheckOffset(struct _XkbGeometry,key_aliases,104,9,30785)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbGeometry,68, 9480, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbGeometry,width_mm,2,10,30763)
CheckOffset(struct _XkbGeometry,width_mm,4,10,30763)
CheckMemberSize(struct _XkbGeometry,height_mm,2,10,30764)
CheckOffset(struct _XkbGeometry,height_mm,6,10,30764)
CheckMemberSize(struct _XkbGeometry,label_font,4,10,30765)
CheckOffset(struct _XkbGeometry,label_font,8,10,30765)
CheckMemberSize(struct _XkbGeometry,label_color,4,10,30766)
CheckOffset(struct _XkbGeometry,label_color,12,10,30766)
CheckMemberSize(struct _XkbGeometry,base_color,4,10,30767)
CheckOffset(struct _XkbGeometry,base_color,16,10,30767)
CheckMemberSize(struct _XkbGeometry,sz_properties,2,10,30768)
CheckOffset(struct _XkbGeometry,sz_properties,20,10,30768)
CheckMemberSize(struct _XkbGeometry,sz_colors,2,10,30769)
CheckOffset(struct _XkbGeometry,sz_colors,22,10,30769)
CheckMemberSize(struct _XkbGeometry,sz_shapes,2,10,30770)
CheckOffset(struct _XkbGeometry,sz_shapes,24,10,30770)
CheckMemberSize(struct _XkbGeometry,sz_sections,2,10,30771)
CheckOffset(struct _XkbGeometry,sz_sections,26,10,30771)
CheckMemberSize(struct _XkbGeometry,sz_doodads,2,10,30772)
CheckOffset(struct _XkbGeometry,sz_doodads,28,10,30772)
CheckMemberSize(struct _XkbGeometry,sz_key_aliases,2,10,30773)
CheckOffset(struct _XkbGeometry,sz_key_aliases,30,10,30773)
CheckMemberSize(struct _XkbGeometry,num_properties,2,10,30774)
CheckOffset(struct _XkbGeometry,num_properties,32,10,30774)
CheckMemberSize(struct _XkbGeometry,num_colors,2,10,30775)
CheckOffset(struct _XkbGeometry,num_colors,34,10,30775)
CheckMemberSize(struct _XkbGeometry,num_shapes,2,10,30776)
CheckOffset(struct _XkbGeometry,num_shapes,36,10,30776)
CheckMemberSize(struct _XkbGeometry,num_sections,2,10,30777)
CheckOffset(struct _XkbGeometry,num_sections,38,10,30777)
CheckMemberSize(struct _XkbGeometry,num_doodads,2,10,30778)
CheckOffset(struct _XkbGeometry,num_doodads,40,10,30778)
CheckMemberSize(struct _XkbGeometry,num_key_aliases,2,10,30779)
CheckOffset(struct _XkbGeometry,num_key_aliases,42,10,30779)
CheckMemberSize(struct _XkbGeometry,properties,4,10,30780)
CheckOffset(struct _XkbGeometry,properties,44,10,30780)
CheckMemberSize(struct _XkbGeometry,colors,4,10,30781)
CheckOffset(struct _XkbGeometry,colors,48,10,30781)
CheckMemberSize(struct _XkbGeometry,shapes,4,10,30782)
CheckOffset(struct _XkbGeometry,shapes,52,10,30782)
CheckMemberSize(struct _XkbGeometry,sections,4,10,30783)
CheckOffset(struct _XkbGeometry,sections,56,10,30783)
CheckMemberSize(struct _XkbGeometry,doodads,4,10,30784)
CheckOffset(struct _XkbGeometry,doodads,60,10,30784)
CheckMemberSize(struct _XkbGeometry,key_aliases,4,10,30785)
CheckOffset(struct _XkbGeometry,key_aliases,64,10,30785)
#elif defined __i386__
CheckTypeSize(struct _XkbGeometry,68, 9480, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbGeometry,width_mm,2,2,30763)
CheckOffset(struct _XkbGeometry,width_mm,4,2,30763)
CheckMemberSize(struct _XkbGeometry,height_mm,2,2,30764)
CheckOffset(struct _XkbGeometry,height_mm,6,2,30764)
CheckMemberSize(struct _XkbGeometry,label_font,4,2,30765)
CheckOffset(struct _XkbGeometry,label_font,8,2,30765)
CheckMemberSize(struct _XkbGeometry,label_color,4,2,30766)
CheckOffset(struct _XkbGeometry,label_color,12,2,30766)
CheckMemberSize(struct _XkbGeometry,base_color,4,2,30767)
CheckOffset(struct _XkbGeometry,base_color,16,2,30767)
CheckMemberSize(struct _XkbGeometry,sz_properties,2,2,30768)
CheckOffset(struct _XkbGeometry,sz_properties,20,2,30768)
CheckMemberSize(struct _XkbGeometry,sz_colors,2,2,30769)
CheckOffset(struct _XkbGeometry,sz_colors,22,2,30769)
CheckMemberSize(struct _XkbGeometry,sz_shapes,2,2,30770)
CheckOffset(struct _XkbGeometry,sz_shapes,24,2,30770)
CheckMemberSize(struct _XkbGeometry,sz_sections,2,2,30771)
CheckOffset(struct _XkbGeometry,sz_sections,26,2,30771)
CheckMemberSize(struct _XkbGeometry,sz_doodads,2,2,30772)
CheckOffset(struct _XkbGeometry,sz_doodads,28,2,30772)
CheckMemberSize(struct _XkbGeometry,sz_key_aliases,2,2,30773)
CheckOffset(struct _XkbGeometry,sz_key_aliases,30,2,30773)
CheckMemberSize(struct _XkbGeometry,num_properties,2,2,30774)
CheckOffset(struct _XkbGeometry,num_properties,32,2,30774)
CheckMemberSize(struct _XkbGeometry,num_colors,2,2,30775)
CheckOffset(struct _XkbGeometry,num_colors,34,2,30775)
CheckMemberSize(struct _XkbGeometry,num_shapes,2,2,30776)
CheckOffset(struct _XkbGeometry,num_shapes,36,2,30776)
CheckMemberSize(struct _XkbGeometry,num_sections,2,2,30777)
CheckOffset(struct _XkbGeometry,num_sections,38,2,30777)
CheckMemberSize(struct _XkbGeometry,num_doodads,2,2,30778)
CheckOffset(struct _XkbGeometry,num_doodads,40,2,30778)
CheckMemberSize(struct _XkbGeometry,num_key_aliases,2,2,30779)
CheckOffset(struct _XkbGeometry,num_key_aliases,42,2,30779)
CheckMemberSize(struct _XkbGeometry,properties,4,2,30780)
CheckOffset(struct _XkbGeometry,properties,44,2,30780)
CheckMemberSize(struct _XkbGeometry,colors,4,2,30781)
CheckOffset(struct _XkbGeometry,colors,48,2,30781)
CheckMemberSize(struct _XkbGeometry,shapes,4,2,30782)
CheckOffset(struct _XkbGeometry,shapes,52,2,30782)
CheckMemberSize(struct _XkbGeometry,sections,4,2,30783)
CheckOffset(struct _XkbGeometry,sections,56,2,30783)
CheckMemberSize(struct _XkbGeometry,doodads,4,2,30784)
CheckOffset(struct _XkbGeometry,doodads,60,2,30784)
CheckMemberSize(struct _XkbGeometry,key_aliases,4,2,30785)
CheckOffset(struct _XkbGeometry,key_aliases,64,2,30785)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbGeometry,68, 9480, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbGeometry,width_mm,2,6,30763)
CheckOffset(struct _XkbGeometry,width_mm,4,6,30763)
CheckMemberSize(struct _XkbGeometry,height_mm,2,6,30764)
CheckOffset(struct _XkbGeometry,height_mm,6,6,30764)
CheckMemberSize(struct _XkbGeometry,label_font,4,6,30765)
CheckOffset(struct _XkbGeometry,label_font,8,6,30765)
CheckMemberSize(struct _XkbGeometry,label_color,4,6,30766)
CheckOffset(struct _XkbGeometry,label_color,12,6,30766)
CheckMemberSize(struct _XkbGeometry,base_color,4,6,30767)
CheckOffset(struct _XkbGeometry,base_color,16,6,30767)
CheckMemberSize(struct _XkbGeometry,sz_properties,2,6,30768)
CheckOffset(struct _XkbGeometry,sz_properties,20,6,30768)
CheckMemberSize(struct _XkbGeometry,sz_colors,2,6,30769)
CheckOffset(struct _XkbGeometry,sz_colors,22,6,30769)
CheckMemberSize(struct _XkbGeometry,sz_shapes,2,6,30770)
CheckOffset(struct _XkbGeometry,sz_shapes,24,6,30770)
CheckMemberSize(struct _XkbGeometry,sz_sections,2,6,30771)
CheckOffset(struct _XkbGeometry,sz_sections,26,6,30771)
CheckMemberSize(struct _XkbGeometry,sz_doodads,2,6,30772)
CheckOffset(struct _XkbGeometry,sz_doodads,28,6,30772)
CheckMemberSize(struct _XkbGeometry,sz_key_aliases,2,6,30773)
CheckOffset(struct _XkbGeometry,sz_key_aliases,30,6,30773)
CheckMemberSize(struct _XkbGeometry,num_properties,2,6,30774)
CheckOffset(struct _XkbGeometry,num_properties,32,6,30774)
CheckMemberSize(struct _XkbGeometry,num_colors,2,6,30775)
CheckOffset(struct _XkbGeometry,num_colors,34,6,30775)
CheckMemberSize(struct _XkbGeometry,num_shapes,2,6,30776)
CheckOffset(struct _XkbGeometry,num_shapes,36,6,30776)
CheckMemberSize(struct _XkbGeometry,num_sections,2,6,30777)
CheckOffset(struct _XkbGeometry,num_sections,38,6,30777)
CheckMemberSize(struct _XkbGeometry,num_doodads,2,6,30778)
CheckOffset(struct _XkbGeometry,num_doodads,40,6,30778)
CheckMemberSize(struct _XkbGeometry,num_key_aliases,2,6,30779)
CheckOffset(struct _XkbGeometry,num_key_aliases,42,6,30779)
CheckMemberSize(struct _XkbGeometry,properties,4,6,30780)
CheckOffset(struct _XkbGeometry,properties,44,6,30780)
CheckMemberSize(struct _XkbGeometry,colors,4,6,30781)
CheckOffset(struct _XkbGeometry,colors,48,6,30781)
CheckMemberSize(struct _XkbGeometry,shapes,4,6,30782)
CheckOffset(struct _XkbGeometry,shapes,52,6,30782)
CheckMemberSize(struct _XkbGeometry,sections,4,6,30783)
CheckOffset(struct _XkbGeometry,sections,56,6,30783)
CheckMemberSize(struct _XkbGeometry,doodads,4,6,30784)
CheckOffset(struct _XkbGeometry,doodads,60,6,30784)
CheckMemberSize(struct _XkbGeometry,key_aliases,4,6,30785)
CheckOffset(struct _XkbGeometry,key_aliases,64,6,30785)
#else
Msg("Find size of _XkbGeometry (9480)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9480,0);
#endif

#if defined __x86_64__
CheckTypeSize(XkbGeometryRec,112, 9482, 11, 1.2, NULL, 9480, NULL)
#elif defined __s390x__
CheckTypeSize(XkbGeometryRec,112, 9482, 12, 1.2, NULL, 9480, NULL)
#elif defined __ia64__
CheckTypeSize(XkbGeometryRec,112, 9482, 3, 1.2, NULL, 9480, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbGeometryRec,112, 9482, 9, 1.2, NULL, 9480, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbGeometryRec,68, 9482, 10, 1.2, NULL, 9480, NULL)
#elif defined __i386__
CheckTypeSize(XkbGeometryRec,68, 9482, 2, 1.2, NULL, 9480, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbGeometryRec,68, 9482, 6, 1.2, NULL, 9480, NULL)
#else
Msg("Find size of XkbGeometryRec (9482)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9480,NULL);\n",architecture,9482,0);
#endif

#if 1
CheckTypeSize(struct _XkbGeometrySizes,16, 9483, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbGeometrySizes,num_properties,2,1,30794)
CheckOffset(struct _XkbGeometrySizes,num_properties,4,1,30794)
CheckMemberSize(struct _XkbGeometrySizes,num_colors,2,1,30795)
CheckOffset(struct _XkbGeometrySizes,num_colors,6,1,30795)
CheckMemberSize(struct _XkbGeometrySizes,num_shapes,2,1,30796)
CheckOffset(struct _XkbGeometrySizes,num_shapes,8,1,30796)
CheckMemberSize(struct _XkbGeometrySizes,num_sections,2,1,30797)
CheckOffset(struct _XkbGeometrySizes,num_sections,10,1,30797)
CheckMemberSize(struct _XkbGeometrySizes,num_doodads,2,1,30798)
CheckOffset(struct _XkbGeometrySizes,num_doodads,12,1,30798)
CheckMemberSize(struct _XkbGeometrySizes,num_key_aliases,2,1,30799)
CheckOffset(struct _XkbGeometrySizes,num_key_aliases,14,1,30799)
#endif

#if 1
CheckTypeSize(XkbGeometrySizesRec,16, 9484, 1, 1.2, NULL, 9483, NULL)
#endif

#if defined __i386__
CheckTypeSize(XkbGeometrySizesPtr,4, 9486, 2, 1.2, NULL, 9485, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbGeometrySizesPtr,4, 9486, 10, 1.2, NULL, 9485, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbGeometrySizesPtr,8, 9486, 11, 1.2, NULL, 9485, NULL)
#elif defined __s390x__
CheckTypeSize(XkbGeometrySizesPtr,8, 9486, 12, 1.2, NULL, 9485, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbGeometrySizesPtr,4, 9486, 6, 1.2, NULL, 9485, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbGeometrySizesPtr,8, 9486, 9, 1.2, NULL, 9485, NULL)
#elif defined __ia64__
CheckTypeSize(XkbGeometrySizesPtr,8, 9486, 3, 1.2, NULL, 9485, NULL)
#else
Msg("Find size of XkbGeometrySizesPtr (9486)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9485, NULL);\n",architecture,9486,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XKBgeom.h\n\n",pcnt,cnt);
return cnt;
#endif

}
