/*
 * Test of X11/Xlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <X11/X.h>
#include "X11/Xlib.h"



#ifdef TET_TEST
void X11_Xlib_h()
{
#else
int X11_Xlib_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/Xlib.h\n");
#endif

#if __i386__
CheckTypeSize(struct _XDisplay,176, 7053, 2)
Msg("Missing member data for _XDisplay on IA32\n");
#elif __ia64__
CheckTypeSize(struct _XDisplay,296, 7053, 3)
Msg("Missing member data for _XDisplay on IA64\n");
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _XDisplay,176, 7053, 6)
Msg("Missing member data for _XDisplay on PPC32\n");
#elif __s390__ && !__s390x__
CheckTypeSize(struct _XDisplay,176, 7053, 10)
Msg("Missing member data for _XDisplay on S390\n");
#elif __powerpc64__
CheckTypeSize(struct _XDisplay,296, 7053, 9)
Msg("Missing member data for _XDisplay on PPC64\n");
#elif __s390x__
CheckTypeSize(struct _XDisplay,296, 7053, 12)
Msg("Missing member data for _XDisplay on S390X\n");
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7053,0);
Msg("Find size of _XDisplay (7053)\n");
#endif

#if __i386__
CheckTypeSize(XColor,12, 8402, 2)
#elif __ia64__
CheckTypeSize(XColor,16, 8402, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XColor,12, 8402, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XColor,12, 8402, 10)
#elif __powerpc64__
CheckTypeSize(XColor,16, 8402, 9)
#elif __s390x__
CheckTypeSize(XColor,16, 8402, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8402,0);
Msg("Find size of XColor (8402)\n");
#endif

#if __i386__
CheckTypeSize(XVaNestedList,4, 8540, 2)
#elif __ia64__
CheckTypeSize(XVaNestedList,8, 8540, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XVaNestedList,4, 8540, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XVaNestedList,4, 8540, 10)
#elif __powerpc64__
CheckTypeSize(XVaNestedList,8, 8540, 9)
#elif __s390x__
CheckTypeSize(XVaNestedList,8, 8540, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8540,0);
Msg("Find size of XVaNestedList (8540)\n");
#endif

#if __i386__
CheckTypeSize(XErrorHandler,4, 8930, 2)
#elif __ia64__
CheckTypeSize(XErrorHandler,8, 8930, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XErrorHandler,4, 8930, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XErrorHandler,4, 8930, 10)
#elif __powerpc64__
CheckTypeSize(XErrorHandler,8, 8930, 9)
#elif __s390x__
CheckTypeSize(XErrorHandler,8, 8930, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8930,0);
Msg("Find size of XErrorHandler (8930)\n");
#endif

#if __i386__
CheckTypeSize(XIOErrorHandler,4, 8932, 2)
#elif __ia64__
CheckTypeSize(XIOErrorHandler,8, 8932, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XIOErrorHandler,4, 8932, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XIOErrorHandler,4, 8932, 10)
#elif __powerpc64__
CheckTypeSize(XIOErrorHandler,8, 8932, 9)
#elif __s390x__
CheckTypeSize(XIOErrorHandler,8, 8932, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8932,0);
Msg("Find size of XIOErrorHandler (8932)\n");
#endif

#if __i386__
CheckTypeSize(XConnectionWatchProc,4, 8956, 2)
#elif __ia64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XConnectionWatchProc,4, 8956, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XConnectionWatchProc,4, 8956, 10)
#elif __powerpc64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 9)
#elif __s390x__
CheckTypeSize(XConnectionWatchProc,8, 8956, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8956,0);
Msg("Find size of XConnectionWatchProc (8956)\n");
#endif

#if __i386__
CheckTypeSize(XExtData,16, 8368, 2)
#elif __ia64__
CheckTypeSize(XExtData,32, 8368, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XExtData,16, 8368, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XExtData,16, 8368, 10)
#elif __powerpc64__
CheckTypeSize(XExtData,32, 8368, 9)
#elif __s390x__
CheckTypeSize(XExtData,32, 8368, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8368,0);
Msg("Find size of XExtData (8368)\n");
#endif

#if __i386__
CheckTypeSize(XExtCodes,16, 8370, 2)
#elif __ia64__
CheckTypeSize(XExtCodes,16, 8370, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XExtCodes,16, 8370, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XExtCodes,16, 8370, 10)
#elif __powerpc64__
CheckTypeSize(XExtCodes,16, 8370, 9)
#elif __s390x__
CheckTypeSize(XExtCodes,16, 8370, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8370,0);
Msg("Find size of XExtCodes (8370)\n");
#endif

#if __i386__
CheckTypeSize(XPixmapFormatValues,12, 8372, 2)
#elif __ia64__
CheckTypeSize(XPixmapFormatValues,12, 8372, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XPixmapFormatValues,12, 8372, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XPixmapFormatValues,12, 8372, 10)
#elif __powerpc64__
CheckTypeSize(XPixmapFormatValues,12, 8372, 9)
#elif __s390x__
CheckTypeSize(XPixmapFormatValues,12, 8372, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8372,0);
Msg("Find size of XPixmapFormatValues (8372)\n");
#endif

#if __i386__
CheckTypeSize(XGCValues,92, 8374, 2)
#elif __ia64__
CheckTypeSize(XGCValues,128, 8374, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XGCValues,92, 8374, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XGCValues,92, 8374, 10)
#elif __powerpc64__
CheckTypeSize(XGCValues,128, 8374, 9)
#elif __s390x__
CheckTypeSize(XGCValues,128, 8374, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8374,0);
Msg("Find size of XGCValues (8374)\n");
#endif

#if __i386__
CheckTypeSize(GC,4, 8375, 2)
#elif __ia64__
CheckTypeSize(GC,8, 8375, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GC,4, 8375, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(GC,4, 8375, 10)
#elif __powerpc64__
CheckTypeSize(GC,8, 8375, 9)
#elif __s390x__
CheckTypeSize(GC,8, 8375, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8375,0);
Msg("Find size of GC (8375)\n");
#endif

#if __i386__
CheckTypeSize(Visual,32, 8377, 2)
#elif __ia64__
CheckTypeSize(Visual,56, 8377, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Visual,32, 8377, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(Visual,32, 8377, 10)
#elif __powerpc64__
CheckTypeSize(Visual,56, 8377, 9)
#elif __s390x__
CheckTypeSize(Visual,56, 8377, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8377,0);
Msg("Find size of Visual (8377)\n");
#endif

#if __i386__
CheckTypeSize(Depth,12, 8379, 2)
#elif __ia64__
CheckTypeSize(Depth,16, 8379, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Depth,12, 8379, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(Depth,12, 8379, 10)
#elif __powerpc64__
CheckTypeSize(Depth,16, 8379, 9)
#elif __s390x__
CheckTypeSize(Depth,16, 8379, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8379,0);
Msg("Find size of Depth (8379)\n");
#endif

#if __i386__
CheckTypeSize(Screen,80, 8381, 2)
#elif __ia64__
CheckTypeSize(Screen,128, 8381, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Screen,80, 8381, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(Screen,80, 8381, 10)
#elif __powerpc64__
CheckTypeSize(Screen,128, 8381, 9)
#elif __s390x__
CheckTypeSize(Screen,128, 8381, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8381,0);
Msg("Find size of Screen (8381)\n");
#endif

#if __i386__
CheckTypeSize(ScreenFormat,16, 8383, 2)
#elif __ia64__
CheckTypeSize(ScreenFormat,24, 8383, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ScreenFormat,16, 8383, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ScreenFormat,16, 8383, 10)
#elif __powerpc64__
CheckTypeSize(ScreenFormat,24, 8383, 9)
#elif __s390x__
CheckTypeSize(ScreenFormat,24, 8383, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8383,0);
Msg("Find size of ScreenFormat (8383)\n");
#endif

#if __i386__
CheckTypeSize(XSetWindowAttributes,60, 8385, 2)
#elif __ia64__
CheckTypeSize(XSetWindowAttributes,112, 8385, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSetWindowAttributes,60, 8385, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSetWindowAttributes,60, 8385, 10)
#elif __powerpc64__
CheckTypeSize(XSetWindowAttributes,112, 8385, 9)
#elif __s390x__
CheckTypeSize(XSetWindowAttributes,112, 8385, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8385,0);
Msg("Find size of XSetWindowAttributes (8385)\n");
#endif

#if __i386__
CheckTypeSize(XWindowAttributes,92, 8387, 2)
#elif __ia64__
CheckTypeSize(XWindowAttributes,136, 8387, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XWindowAttributes,92, 8387, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XWindowAttributes,92, 8387, 10)
#elif __powerpc64__
CheckTypeSize(XWindowAttributes,136, 8387, 9)
#elif __s390x__
CheckTypeSize(XWindowAttributes,136, 8387, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8387,0);
Msg("Find size of XWindowAttributes (8387)\n");
#endif

#if __i386__
CheckTypeSize(XHostAddress,12, 8389, 2)
#elif __ia64__
CheckTypeSize(XHostAddress,16, 8389, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XHostAddress,12, 8389, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XHostAddress,12, 8389, 10)
#elif __powerpc64__
CheckTypeSize(XHostAddress,16, 8389, 9)
#elif __s390x__
CheckTypeSize(XHostAddress,16, 8389, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8389,0);
Msg("Find size of XHostAddress (8389)\n");
#endif

#if __i386__
CheckTypeSize(XImage,88, 8398, 2)
#elif __ia64__
CheckTypeSize(XImage,136, 8398, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XImage,88, 8398, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XImage,88, 8398, 10)
#elif __powerpc64__
CheckTypeSize(XImage,136, 8398, 9)
#elif __s390x__
CheckTypeSize(XImage,136, 8398, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8398,0);
Msg("Find size of XImage (8398)\n");
#endif

#if __i386__
CheckTypeSize(struct funcs,24, 9291, 2)
CheckMemberSize(struct funcs,destroy_image,4,2,32867)
CheckOffset(struct funcs,destroy_image,4,2,32867)
CheckMemberSize(struct funcs,get_pixel,4,2,32868)
CheckOffset(struct funcs,get_pixel,8,2,32868)
CheckMemberSize(struct funcs,put_pixel,4,2,32869)
CheckOffset(struct funcs,put_pixel,12,2,32869)
CheckMemberSize(struct funcs,sub_image,4,2,32870)
CheckOffset(struct funcs,sub_image,16,2,32870)
CheckMemberSize(struct funcs,add_pixel,4,2,32871)
CheckOffset(struct funcs,add_pixel,20,2,32871)
#elif __ia64__
CheckTypeSize(struct funcs,48, 9291, 3)
CheckMemberSize(struct funcs,destroy_image,8,3,32867)
CheckOffset(struct funcs,destroy_image,8,3,32867)
CheckMemberSize(struct funcs,get_pixel,8,3,32868)
CheckOffset(struct funcs,get_pixel,16,3,32868)
CheckMemberSize(struct funcs,put_pixel,8,3,32869)
CheckOffset(struct funcs,put_pixel,24,3,32869)
CheckMemberSize(struct funcs,sub_image,8,3,32870)
CheckOffset(struct funcs,sub_image,32,3,32870)
CheckMemberSize(struct funcs,add_pixel,8,3,32871)
CheckOffset(struct funcs,add_pixel,40,3,32871)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct funcs,24, 9291, 6)
CheckMemberSize(struct funcs,destroy_image,4,6,32867)
CheckOffset(struct funcs,destroy_image,4,6,32867)
CheckMemberSize(struct funcs,get_pixel,4,6,32868)
CheckOffset(struct funcs,get_pixel,8,6,32868)
CheckMemberSize(struct funcs,put_pixel,4,6,32869)
CheckOffset(struct funcs,put_pixel,12,6,32869)
CheckMemberSize(struct funcs,sub_image,4,6,32870)
CheckOffset(struct funcs,sub_image,16,6,32870)
CheckMemberSize(struct funcs,add_pixel,4,6,32871)
CheckOffset(struct funcs,add_pixel,20,6,32871)
#elif __s390__ && !__s390x__
CheckTypeSize(struct funcs,24, 9291, 10)
CheckMemberSize(struct funcs,destroy_image,4,10,32867)
CheckOffset(struct funcs,destroy_image,4,10,32867)
CheckMemberSize(struct funcs,get_pixel,4,10,32868)
CheckOffset(struct funcs,get_pixel,8,10,32868)
CheckMemberSize(struct funcs,put_pixel,4,10,32869)
CheckOffset(struct funcs,put_pixel,12,10,32869)
CheckMemberSize(struct funcs,sub_image,4,10,32870)
CheckOffset(struct funcs,sub_image,16,10,32870)
CheckMemberSize(struct funcs,add_pixel,4,10,32871)
CheckOffset(struct funcs,add_pixel,20,10,32871)
#elif __powerpc64__
CheckTypeSize(struct funcs,48, 9291, 9)
CheckMemberSize(struct funcs,destroy_image,8,9,32867)
CheckOffset(struct funcs,destroy_image,8,9,32867)
CheckMemberSize(struct funcs,get_pixel,8,9,32868)
CheckOffset(struct funcs,get_pixel,16,9,32868)
CheckMemberSize(struct funcs,put_pixel,8,9,32869)
CheckOffset(struct funcs,put_pixel,24,9,32869)
CheckMemberSize(struct funcs,sub_image,8,9,32870)
CheckOffset(struct funcs,sub_image,32,9,32870)
CheckMemberSize(struct funcs,add_pixel,8,9,32871)
CheckOffset(struct funcs,add_pixel,40,9,32871)
#elif __s390x__
CheckTypeSize(struct funcs,48, 9291, 12)
CheckMemberSize(struct funcs,destroy_image,8,12,32867)
CheckOffset(struct funcs,destroy_image,8,12,32867)
CheckMemberSize(struct funcs,get_pixel,8,12,32868)
CheckOffset(struct funcs,get_pixel,16,12,32868)
CheckMemberSize(struct funcs,put_pixel,8,12,32869)
CheckOffset(struct funcs,put_pixel,24,12,32869)
CheckMemberSize(struct funcs,sub_image,8,12,32870)
CheckOffset(struct funcs,sub_image,32,12,32870)
CheckMemberSize(struct funcs,add_pixel,8,12,32871)
CheckOffset(struct funcs,add_pixel,40,12,32871)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9291,0);
Msg("Find size of funcs (9291)\n");
#endif

#if __i386__
CheckTypeSize(XWindowChanges,28, 8400, 2)
#elif __ia64__
CheckTypeSize(XWindowChanges,40, 8400, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XWindowChanges,28, 8400, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XWindowChanges,28, 8400, 10)
#elif __powerpc64__
CheckTypeSize(XWindowChanges,40, 8400, 9)
#elif __s390x__
CheckTypeSize(XWindowChanges,40, 8400, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8400,0);
Msg("Find size of XWindowChanges (8400)\n");
#endif

#if __i386__
CheckTypeSize(XSegment,8, 8404, 2)
#elif __ia64__
CheckTypeSize(XSegment,8, 8404, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSegment,8, 8404, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSegment,8, 8404, 10)
#elif __powerpc64__
CheckTypeSize(XSegment,8, 8404, 9)
#elif __s390x__
CheckTypeSize(XSegment,8, 8404, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8404,0);
Msg("Find size of XSegment (8404)\n");
#endif

#if __i386__
CheckTypeSize(XPoint,4, 8406, 2)
#elif __ia64__
CheckTypeSize(XPoint,4, 8406, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XPoint,4, 8406, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XPoint,4, 8406, 10)
#elif __powerpc64__
CheckTypeSize(XPoint,4, 8406, 9)
#elif __s390x__
CheckTypeSize(XPoint,4, 8406, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8406,0);
Msg("Find size of XPoint (8406)\n");
#endif

#if __i386__
CheckTypeSize(XRectangle,8, 8408, 2)
#elif __ia64__
CheckTypeSize(XRectangle,8, 8408, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XRectangle,8, 8408, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XRectangle,8, 8408, 10)
#elif __powerpc64__
CheckTypeSize(XRectangle,8, 8408, 9)
#elif __s390x__
CheckTypeSize(XRectangle,8, 8408, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8408,0);
Msg("Find size of XRectangle (8408)\n");
#endif

#if __i386__
CheckTypeSize(XArc,12, 8410, 2)
#elif __ia64__
CheckTypeSize(XArc,12, 8410, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XArc,12, 8410, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XArc,12, 8410, 10)
#elif __powerpc64__
CheckTypeSize(XArc,12, 8410, 9)
#elif __s390x__
CheckTypeSize(XArc,12, 8410, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8410,0);
Msg("Find size of XArc (8410)\n");
#endif

#if __i386__
CheckTypeSize(XKeyboardControl,32, 8412, 2)
#elif __ia64__
CheckTypeSize(XKeyboardControl,32, 8412, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XKeyboardControl,32, 8412, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XKeyboardControl,32, 8412, 10)
#elif __powerpc64__
CheckTypeSize(XKeyboardControl,32, 8412, 9)
#elif __s390x__
CheckTypeSize(XKeyboardControl,32, 8412, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8412,0);
Msg("Find size of XKeyboardControl (8412)\n");
#endif

#if __i386__
CheckTypeSize(XKeyboardState,56, 8414, 2)
#elif __ia64__
CheckTypeSize(XKeyboardState,64, 8414, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XKeyboardState,56, 8414, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XKeyboardState,56, 8414, 10)
#elif __powerpc64__
CheckTypeSize(XKeyboardState,64, 8414, 9)
#elif __s390x__
CheckTypeSize(XKeyboardState,64, 8414, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8414,0);
Msg("Find size of XKeyboardState (8414)\n");
#endif

#if __i386__
CheckTypeSize(XTimeCoord,8, 8416, 2)
#elif __ia64__
CheckTypeSize(XTimeCoord,16, 8416, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XTimeCoord,8, 8416, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XTimeCoord,8, 8416, 10)
#elif __powerpc64__
CheckTypeSize(XTimeCoord,16, 8416, 9)
#elif __s390x__
CheckTypeSize(XTimeCoord,16, 8416, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8416,0);
Msg("Find size of XTimeCoord (8416)\n");
#endif

#if __i386__
CheckTypeSize(XModifierKeymap,8, 8418, 2)
#elif __ia64__
CheckTypeSize(XModifierKeymap,16, 8418, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XModifierKeymap,8, 8418, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XModifierKeymap,8, 8418, 10)
#elif __powerpc64__
CheckTypeSize(XModifierKeymap,16, 8418, 9)
#elif __s390x__
CheckTypeSize(XModifierKeymap,16, 8418, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8418,0);
Msg("Find size of XModifierKeymap (8418)\n");
#endif

#if __i386__
CheckTypeSize(Display,176, 8419, 2)
#elif __ia64__
CheckTypeSize(Display,296, 8419, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Display,176, 8419, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(Display,176, 8419, 10)
#elif __powerpc64__
CheckTypeSize(Display,296, 8419, 9)
#elif __s390x__
CheckTypeSize(Display,296, 8419, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8419,0);
Msg("Find size of Display (8419)\n");
#endif

#if __i386__
CheckTypeSize(XKeyEvent,60, 8425, 2)
#elif __ia64__
CheckTypeSize(XKeyEvent,96, 8425, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XKeyEvent,60, 8425, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XKeyEvent,60, 8425, 10)
#elif __powerpc64__
CheckTypeSize(XKeyEvent,96, 8425, 9)
#elif __s390x__
CheckTypeSize(XKeyEvent,96, 8425, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8425,0);
Msg("Find size of XKeyEvent (8425)\n");
#endif

#if __i386__
CheckTypeSize(XKeyPressedEvent,60, 8426, 2)
#elif __ia64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XKeyPressedEvent,60, 8426, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XKeyPressedEvent,60, 8426, 10)
#elif __powerpc64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 9)
#elif __s390x__
CheckTypeSize(XKeyPressedEvent,96, 8426, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8426,0);
Msg("Find size of XKeyPressedEvent (8426)\n");
#endif

#if __i386__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 2)
#elif __ia64__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 10)
#elif __powerpc64__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 9)
#elif __s390x__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8427,0);
Msg("Find size of XKeyReleasedEvent (8427)\n");
#endif

#if __i386__
CheckTypeSize(XButtonEvent,60, 8429, 2)
#elif __ia64__
CheckTypeSize(XButtonEvent,96, 8429, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XButtonEvent,60, 8429, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XButtonEvent,60, 8429, 10)
#elif __powerpc64__
CheckTypeSize(XButtonEvent,96, 8429, 9)
#elif __s390x__
CheckTypeSize(XButtonEvent,96, 8429, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8429,0);
Msg("Find size of XButtonEvent (8429)\n");
#endif

#if __i386__
CheckTypeSize(XButtonPressedEvent,60, 8430, 2)
#elif __ia64__
CheckTypeSize(XButtonPressedEvent,96, 8430, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XButtonPressedEvent,60, 8430, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XButtonPressedEvent,60, 8430, 10)
#elif __powerpc64__
CheckTypeSize(XButtonPressedEvent,96, 8430, 9)
#elif __s390x__
CheckTypeSize(XButtonPressedEvent,96, 8430, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8430,0);
Msg("Find size of XButtonPressedEvent (8430)\n");
#endif

#if __i386__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 2)
#elif __ia64__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 10)
#elif __powerpc64__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 9)
#elif __s390x__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8431,0);
Msg("Find size of XButtonReleasedEvent (8431)\n");
#endif

#if __i386__
CheckTypeSize(XMotionEvent,60, 8433, 2)
#elif __ia64__
CheckTypeSize(XMotionEvent,96, 8433, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XMotionEvent,60, 8433, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XMotionEvent,60, 8433, 10)
#elif __powerpc64__
CheckTypeSize(XMotionEvent,96, 8433, 9)
#elif __s390x__
CheckTypeSize(XMotionEvent,96, 8433, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8433,0);
Msg("Find size of XMotionEvent (8433)\n");
#endif

#if __i386__
CheckTypeSize(XPointerMovedEvent,60, 8434, 2)
#elif __ia64__
CheckTypeSize(XPointerMovedEvent,96, 8434, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XPointerMovedEvent,60, 8434, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XPointerMovedEvent,60, 8434, 10)
#elif __powerpc64__
CheckTypeSize(XPointerMovedEvent,96, 8434, 9)
#elif __s390x__
CheckTypeSize(XPointerMovedEvent,96, 8434, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8434,0);
Msg("Find size of XPointerMovedEvent (8434)\n");
#endif

#if __i386__
CheckTypeSize(XCrossingEvent,68, 8436, 2)
#elif __ia64__
CheckTypeSize(XCrossingEvent,104, 8436, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XCrossingEvent,68, 8436, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XCrossingEvent,68, 8436, 10)
#elif __powerpc64__
CheckTypeSize(XCrossingEvent,104, 8436, 9)
#elif __s390x__
CheckTypeSize(XCrossingEvent,104, 8436, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8436,0);
Msg("Find size of XCrossingEvent (8436)\n");
#endif

#if __i386__
CheckTypeSize(XEnterWindowEvent,68, 8437, 2)
#elif __ia64__
CheckTypeSize(XEnterWindowEvent,104, 8437, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XEnterWindowEvent,68, 8437, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XEnterWindowEvent,68, 8437, 10)
#elif __powerpc64__
CheckTypeSize(XEnterWindowEvent,104, 8437, 9)
#elif __s390x__
CheckTypeSize(XEnterWindowEvent,104, 8437, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8437,0);
Msg("Find size of XEnterWindowEvent (8437)\n");
#endif

#if __i386__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 2)
#elif __ia64__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 10)
#elif __powerpc64__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 9)
#elif __s390x__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8438,0);
Msg("Find size of XLeaveWindowEvent (8438)\n");
#endif

#if __i386__
CheckTypeSize(XFocusChangeEvent,28, 8440, 2)
#elif __ia64__
CheckTypeSize(XFocusChangeEvent,48, 8440, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XFocusChangeEvent,28, 8440, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XFocusChangeEvent,28, 8440, 10)
#elif __powerpc64__
CheckTypeSize(XFocusChangeEvent,48, 8440, 9)
#elif __s390x__
CheckTypeSize(XFocusChangeEvent,48, 8440, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8440,0);
Msg("Find size of XFocusChangeEvent (8440)\n");
#endif

#if __i386__
CheckTypeSize(XFocusInEvent,28, 8441, 2)
#elif __ia64__
CheckTypeSize(XFocusInEvent,48, 8441, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XFocusInEvent,28, 8441, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XFocusInEvent,28, 8441, 10)
#elif __powerpc64__
CheckTypeSize(XFocusInEvent,48, 8441, 9)
#elif __s390x__
CheckTypeSize(XFocusInEvent,48, 8441, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8441,0);
Msg("Find size of XFocusInEvent (8441)\n");
#endif

#if __i386__
CheckTypeSize(XFocusOutEvent,28, 8442, 2)
#elif __ia64__
CheckTypeSize(XFocusOutEvent,48, 8442, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XFocusOutEvent,28, 8442, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XFocusOutEvent,28, 8442, 10)
#elif __powerpc64__
CheckTypeSize(XFocusOutEvent,48, 8442, 9)
#elif __s390x__
CheckTypeSize(XFocusOutEvent,48, 8442, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8442,0);
Msg("Find size of XFocusOutEvent (8442)\n");
#endif

#if __i386__
CheckTypeSize(XKeymapEvent,52, 8444, 2)
#elif __ia64__
CheckTypeSize(XKeymapEvent,72, 8444, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XKeymapEvent,52, 8444, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XKeymapEvent,52, 8444, 10)
#elif __powerpc64__
CheckTypeSize(XKeymapEvent,72, 8444, 9)
#elif __s390x__
CheckTypeSize(XKeymapEvent,72, 8444, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8444,0);
Msg("Find size of XKeymapEvent (8444)\n");
#endif

#if __i386__
CheckTypeSize(XExposeEvent,40, 8446, 2)
#elif __ia64__
CheckTypeSize(XExposeEvent,64, 8446, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XExposeEvent,40, 8446, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XExposeEvent,40, 8446, 10)
#elif __powerpc64__
CheckTypeSize(XExposeEvent,64, 8446, 9)
#elif __s390x__
CheckTypeSize(XExposeEvent,64, 8446, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8446,0);
Msg("Find size of XExposeEvent (8446)\n");
#endif

#if __i386__
CheckTypeSize(XGraphicsExposeEvent,48, 8448, 2)
#elif __ia64__
CheckTypeSize(XGraphicsExposeEvent,72, 8448, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XGraphicsExposeEvent,48, 8448, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XGraphicsExposeEvent,48, 8448, 10)
#elif __powerpc64__
CheckTypeSize(XGraphicsExposeEvent,72, 8448, 9)
#elif __s390x__
CheckTypeSize(XGraphicsExposeEvent,72, 8448, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8448,0);
Msg("Find size of XGraphicsExposeEvent (8448)\n");
#endif

#if __i386__
CheckTypeSize(XNoExposeEvent,28, 8450, 2)
#elif __ia64__
CheckTypeSize(XNoExposeEvent,48, 8450, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XNoExposeEvent,28, 8450, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XNoExposeEvent,28, 8450, 10)
#elif __powerpc64__
CheckTypeSize(XNoExposeEvent,48, 8450, 9)
#elif __s390x__
CheckTypeSize(XNoExposeEvent,48, 8450, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8450,0);
Msg("Find size of XNoExposeEvent (8450)\n");
#endif

#if __i386__
CheckTypeSize(XVisibilityEvent,24, 8452, 2)
#elif __ia64__
CheckTypeSize(XVisibilityEvent,48, 8452, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XVisibilityEvent,24, 8452, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XVisibilityEvent,24, 8452, 10)
#elif __powerpc64__
CheckTypeSize(XVisibilityEvent,48, 8452, 9)
#elif __s390x__
CheckTypeSize(XVisibilityEvent,48, 8452, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8452,0);
Msg("Find size of XVisibilityEvent (8452)\n");
#endif

#if __i386__
CheckTypeSize(XCreateWindowEvent,48, 8454, 2)
#elif __ia64__
CheckTypeSize(XCreateWindowEvent,72, 8454, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XCreateWindowEvent,48, 8454, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XCreateWindowEvent,48, 8454, 10)
#elif __powerpc64__
CheckTypeSize(XCreateWindowEvent,72, 8454, 9)
#elif __s390x__
CheckTypeSize(XCreateWindowEvent,72, 8454, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8454,0);
Msg("Find size of XCreateWindowEvent (8454)\n");
#endif

#if __i386__
CheckTypeSize(XDestroyWindowEvent,24, 8456, 2)
#elif __ia64__
CheckTypeSize(XDestroyWindowEvent,48, 8456, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XDestroyWindowEvent,24, 8456, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XDestroyWindowEvent,24, 8456, 10)
#elif __powerpc64__
CheckTypeSize(XDestroyWindowEvent,48, 8456, 9)
#elif __s390x__
CheckTypeSize(XDestroyWindowEvent,48, 8456, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8456,0);
Msg("Find size of XDestroyWindowEvent (8456)\n");
#endif

#if __i386__
CheckTypeSize(XUnmapEvent,28, 8458, 2)
#elif __ia64__
CheckTypeSize(XUnmapEvent,56, 8458, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XUnmapEvent,28, 8458, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XUnmapEvent,28, 8458, 10)
#elif __powerpc64__
CheckTypeSize(XUnmapEvent,56, 8458, 9)
#elif __s390x__
CheckTypeSize(XUnmapEvent,56, 8458, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8458,0);
Msg("Find size of XUnmapEvent (8458)\n");
#endif

#if __i386__
CheckTypeSize(XMapEvent,28, 8460, 2)
#elif __ia64__
CheckTypeSize(XMapEvent,56, 8460, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XMapEvent,28, 8460, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XMapEvent,28, 8460, 10)
#elif __powerpc64__
CheckTypeSize(XMapEvent,56, 8460, 9)
#elif __s390x__
CheckTypeSize(XMapEvent,56, 8460, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8460,0);
Msg("Find size of XMapEvent (8460)\n");
#endif

#if __i386__
CheckTypeSize(XMapRequestEvent,24, 8462, 2)
#elif __ia64__
CheckTypeSize(XMapRequestEvent,48, 8462, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XMapRequestEvent,24, 8462, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XMapRequestEvent,24, 8462, 10)
#elif __powerpc64__
CheckTypeSize(XMapRequestEvent,48, 8462, 9)
#elif __s390x__
CheckTypeSize(XMapRequestEvent,48, 8462, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8462,0);
Msg("Find size of XMapRequestEvent (8462)\n");
#endif

#if __i386__
CheckTypeSize(XReparentEvent,40, 8464, 2)
#elif __ia64__
CheckTypeSize(XReparentEvent,72, 8464, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XReparentEvent,40, 8464, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XReparentEvent,40, 8464, 10)
#elif __powerpc64__
CheckTypeSize(XReparentEvent,72, 8464, 9)
#elif __s390x__
CheckTypeSize(XReparentEvent,72, 8464, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8464,0);
Msg("Find size of XReparentEvent (8464)\n");
#endif

#if __i386__
CheckTypeSize(XConfigureEvent,52, 8466, 2)
#elif __ia64__
CheckTypeSize(XConfigureEvent,88, 8466, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XConfigureEvent,52, 8466, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XConfigureEvent,52, 8466, 10)
#elif __powerpc64__
CheckTypeSize(XConfigureEvent,88, 8466, 9)
#elif __s390x__
CheckTypeSize(XConfigureEvent,88, 8466, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8466,0);
Msg("Find size of XConfigureEvent (8466)\n");
#endif

#if __i386__
CheckTypeSize(XGravityEvent,32, 8468, 2)
#elif __ia64__
CheckTypeSize(XGravityEvent,56, 8468, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XGravityEvent,32, 8468, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XGravityEvent,32, 8468, 10)
#elif __powerpc64__
CheckTypeSize(XGravityEvent,56, 8468, 9)
#elif __s390x__
CheckTypeSize(XGravityEvent,56, 8468, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8468,0);
Msg("Find size of XGravityEvent (8468)\n");
#endif

#if __i386__
CheckTypeSize(XResizeRequestEvent,28, 8470, 2)
#elif __ia64__
CheckTypeSize(XResizeRequestEvent,48, 8470, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XResizeRequestEvent,28, 8470, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XResizeRequestEvent,28, 8470, 10)
#elif __powerpc64__
CheckTypeSize(XResizeRequestEvent,48, 8470, 9)
#elif __s390x__
CheckTypeSize(XResizeRequestEvent,48, 8470, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8470,0);
Msg("Find size of XResizeRequestEvent (8470)\n");
#endif

#if __i386__
CheckTypeSize(XConfigureRequestEvent,56, 8472, 2)
#elif __ia64__
CheckTypeSize(XConfigureRequestEvent,96, 8472, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XConfigureRequestEvent,56, 8472, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XConfigureRequestEvent,56, 8472, 10)
#elif __powerpc64__
CheckTypeSize(XConfigureRequestEvent,96, 8472, 9)
#elif __s390x__
CheckTypeSize(XConfigureRequestEvent,96, 8472, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8472,0);
Msg("Find size of XConfigureRequestEvent (8472)\n");
#endif

#if __i386__
CheckTypeSize(XCirculateEvent,28, 8474, 2)
#elif __ia64__
CheckTypeSize(XCirculateEvent,56, 8474, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XCirculateEvent,28, 8474, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XCirculateEvent,28, 8474, 10)
#elif __powerpc64__
CheckTypeSize(XCirculateEvent,56, 8474, 9)
#elif __s390x__
CheckTypeSize(XCirculateEvent,56, 8474, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8474,0);
Msg("Find size of XCirculateEvent (8474)\n");
#endif

#if __i386__
CheckTypeSize(XCirculateRequestEvent,28, 8476, 2)
#elif __ia64__
CheckTypeSize(XCirculateRequestEvent,56, 8476, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XCirculateRequestEvent,28, 8476, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XCirculateRequestEvent,28, 8476, 10)
#elif __powerpc64__
CheckTypeSize(XCirculateRequestEvent,56, 8476, 9)
#elif __s390x__
CheckTypeSize(XCirculateRequestEvent,56, 8476, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8476,0);
Msg("Find size of XCirculateRequestEvent (8476)\n");
#endif

#if __i386__
CheckTypeSize(XPropertyEvent,32, 8478, 2)
#elif __ia64__
CheckTypeSize(XPropertyEvent,64, 8478, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XPropertyEvent,32, 8478, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XPropertyEvent,32, 8478, 10)
#elif __powerpc64__
CheckTypeSize(XPropertyEvent,64, 8478, 9)
#elif __s390x__
CheckTypeSize(XPropertyEvent,64, 8478, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8478,0);
Msg("Find size of XPropertyEvent (8478)\n");
#endif

#if __i386__
CheckTypeSize(XSelectionClearEvent,28, 8480, 2)
#elif __ia64__
CheckTypeSize(XSelectionClearEvent,56, 8480, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSelectionClearEvent,28, 8480, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSelectionClearEvent,28, 8480, 10)
#elif __powerpc64__
CheckTypeSize(XSelectionClearEvent,56, 8480, 9)
#elif __s390x__
CheckTypeSize(XSelectionClearEvent,56, 8480, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8480,0);
Msg("Find size of XSelectionClearEvent (8480)\n");
#endif

#if __i386__
CheckTypeSize(XSelectionRequestEvent,40, 8482, 2)
#elif __ia64__
CheckTypeSize(XSelectionRequestEvent,80, 8482, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSelectionRequestEvent,40, 8482, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSelectionRequestEvent,40, 8482, 10)
#elif __powerpc64__
CheckTypeSize(XSelectionRequestEvent,80, 8482, 9)
#elif __s390x__
CheckTypeSize(XSelectionRequestEvent,80, 8482, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8482,0);
Msg("Find size of XSelectionRequestEvent (8482)\n");
#endif

#if __i386__
CheckTypeSize(XSelectionEvent,36, 8484, 2)
#elif __ia64__
CheckTypeSize(XSelectionEvent,72, 8484, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSelectionEvent,36, 8484, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSelectionEvent,36, 8484, 10)
#elif __powerpc64__
CheckTypeSize(XSelectionEvent,72, 8484, 9)
#elif __s390x__
CheckTypeSize(XSelectionEvent,72, 8484, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8484,0);
Msg("Find size of XSelectionEvent (8484)\n");
#endif

#if __i386__
CheckTypeSize(XColormapEvent,32, 8486, 2)
#elif __ia64__
CheckTypeSize(XColormapEvent,56, 8486, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XColormapEvent,32, 8486, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XColormapEvent,32, 8486, 10)
#elif __powerpc64__
CheckTypeSize(XColormapEvent,56, 8486, 9)
#elif __s390x__
CheckTypeSize(XColormapEvent,56, 8486, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8486,0);
Msg("Find size of XColormapEvent (8486)\n");
#endif

#if __i386__
CheckTypeSize(XClientMessageEvent,48, 8489, 2)
#elif __ia64__
CheckTypeSize(XClientMessageEvent,96, 8489, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XClientMessageEvent,48, 8489, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XClientMessageEvent,48, 8489, 10)
#elif __powerpc64__
CheckTypeSize(XClientMessageEvent,96, 8489, 9)
#elif __s390x__
CheckTypeSize(XClientMessageEvent,96, 8489, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8489,0);
Msg("Find size of XClientMessageEvent (8489)\n");
#endif

#if __i386__
CheckTypeSize(XMappingEvent,32, 8491, 2)
#elif __ia64__
CheckTypeSize(XMappingEvent,56, 8491, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XMappingEvent,32, 8491, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XMappingEvent,32, 8491, 10)
#elif __powerpc64__
CheckTypeSize(XMappingEvent,56, 8491, 9)
#elif __s390x__
CheckTypeSize(XMappingEvent,56, 8491, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8491,0);
Msg("Find size of XMappingEvent (8491)\n");
#endif

#if __i386__
CheckTypeSize(XErrorEvent,20, 8493, 2)
#elif __ia64__
CheckTypeSize(XErrorEvent,40, 8493, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XErrorEvent,20, 8493, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XErrorEvent,20, 8493, 10)
#elif __powerpc64__
CheckTypeSize(XErrorEvent,40, 8493, 9)
#elif __s390x__
CheckTypeSize(XErrorEvent,40, 8493, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8493,0);
Msg("Find size of XErrorEvent (8493)\n");
#endif

#if __i386__
CheckTypeSize(XAnyEvent,20, 8495, 2)
#elif __ia64__
CheckTypeSize(XAnyEvent,40, 8495, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XAnyEvent,20, 8495, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XAnyEvent,20, 8495, 10)
#elif __powerpc64__
CheckTypeSize(XAnyEvent,40, 8495, 9)
#elif __s390x__
CheckTypeSize(XAnyEvent,40, 8495, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8495,0);
Msg("Find size of XAnyEvent (8495)\n");
#endif

#if __i386__
CheckTypeSize(XEvent,96, 8497, 2)
#elif __ia64__
CheckTypeSize(XEvent,192, 8497, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XEvent,96, 8497, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XEvent,96, 8497, 10)
#elif __powerpc64__
CheckTypeSize(XEvent,192, 8497, 9)
#elif __s390x__
CheckTypeSize(XEvent,192, 8497, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8497,0);
Msg("Find size of XEvent (8497)\n");
#endif

#if __i386__
CheckTypeSize(XCharStruct,12, 8499, 2)
#elif __ia64__
CheckTypeSize(XCharStruct,12, 8499, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XCharStruct,12, 8499, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XCharStruct,12, 8499, 10)
#elif __powerpc64__
CheckTypeSize(XCharStruct,12, 8499, 9)
#elif __s390x__
CheckTypeSize(XCharStruct,12, 8499, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8499,0);
Msg("Find size of XCharStruct (8499)\n");
#endif

#if __i386__
CheckTypeSize(XFontProp,8, 8501, 2)
#elif __ia64__
CheckTypeSize(XFontProp,16, 8501, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XFontProp,8, 8501, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XFontProp,8, 8501, 10)
#elif __powerpc64__
CheckTypeSize(XFontProp,16, 8501, 9)
#elif __s390x__
CheckTypeSize(XFontProp,16, 8501, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8501,0);
Msg("Find size of XFontProp (8501)\n");
#endif

#if __i386__
CheckTypeSize(XFontStruct,80, 8503, 2)
#elif __ia64__
CheckTypeSize(XFontStruct,96, 8503, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XFontStruct,80, 8503, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XFontStruct,80, 8503, 10)
#elif __powerpc64__
CheckTypeSize(XFontStruct,96, 8503, 9)
#elif __s390x__
CheckTypeSize(XFontStruct,96, 8503, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8503,0);
Msg("Find size of XFontStruct (8503)\n");
#endif

#if __i386__
CheckTypeSize(XFontSetExtents,16, 8513, 2)
#elif __ia64__
CheckTypeSize(XFontSetExtents,16, 8513, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XFontSetExtents,16, 8513, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XFontSetExtents,16, 8513, 10)
#elif __powerpc64__
CheckTypeSize(XFontSetExtents,16, 8513, 9)
#elif __s390x__
CheckTypeSize(XFontSetExtents,16, 8513, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8513,0);
Msg("Find size of XFontSetExtents (8513)\n");
#endif

#if __i386__
CheckTypeSize(XTextItem,16, 8505, 2)
#elif __ia64__
CheckTypeSize(XTextItem,24, 8505, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XTextItem,16, 8505, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XTextItem,16, 8505, 10)
#elif __powerpc64__
CheckTypeSize(XTextItem,24, 8505, 9)
#elif __s390x__
CheckTypeSize(XTextItem,24, 8505, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8505,0);
Msg("Find size of XTextItem (8505)\n");
#endif

#if __i386__
CheckTypeSize(XChar2b,2, 8507, 2)
#elif __ia64__
CheckTypeSize(XChar2b,2, 8507, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XChar2b,2, 8507, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XChar2b,2, 8507, 10)
#elif __powerpc64__
CheckTypeSize(XChar2b,2, 8507, 9)
#elif __s390x__
CheckTypeSize(XChar2b,2, 8507, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8507,0);
Msg("Find size of XChar2b (8507)\n");
#endif

#if __i386__
CheckTypeSize(XTextItem16,16, 8509, 2)
#elif __ia64__
CheckTypeSize(XTextItem16,24, 8509, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XTextItem16,16, 8509, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XTextItem16,16, 8509, 10)
#elif __powerpc64__
CheckTypeSize(XTextItem16,24, 8509, 9)
#elif __s390x__
CheckTypeSize(XTextItem16,24, 8509, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8509,0);
Msg("Find size of XTextItem16 (8509)\n");
#endif

#if __i386__
CheckTypeSize(XEDataObject,4, 8511, 2)
#elif __ia64__
CheckTypeSize(XEDataObject,8, 8511, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XEDataObject,4, 8511, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XEDataObject,4, 8511, 10)
#elif __powerpc64__
CheckTypeSize(XEDataObject,8, 8511, 9)
#elif __s390x__
CheckTypeSize(XEDataObject,8, 8511, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8511,0);
Msg("Find size of XEDataObject (8511)\n");
#endif

#if __i386__
CheckTypeSize(XOM,4, 8514, 2)
#elif __ia64__
CheckTypeSize(XOM,8, 8514, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XOM,4, 8514, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XOM,4, 8514, 10)
#elif __powerpc64__
CheckTypeSize(XOM,8, 8514, 9)
#elif __s390x__
CheckTypeSize(XOM,8, 8514, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8514,0);
Msg("Find size of XOM (8514)\n");
#endif

#if __i386__
CheckTypeSize(XOC,4, 8515, 2)
#elif __ia64__
CheckTypeSize(XOC,8, 8515, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XOC,4, 8515, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XOC,4, 8515, 10)
#elif __powerpc64__
CheckTypeSize(XOC,8, 8515, 9)
#elif __s390x__
CheckTypeSize(XOC,8, 8515, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8515,0);
Msg("Find size of XOC (8515)\n");
#endif

#if __i386__
CheckTypeSize(XFontSet,4, 8516, 2)
#elif __ia64__
CheckTypeSize(XFontSet,8, 8516, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XFontSet,4, 8516, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XFontSet,4, 8516, 10)
#elif __powerpc64__
CheckTypeSize(XFontSet,8, 8516, 9)
#elif __s390x__
CheckTypeSize(XFontSet,8, 8516, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8516,0);
Msg("Find size of XFontSet (8516)\n");
#endif

#if __i386__
CheckTypeSize(XmbTextItem,16, 8518, 2)
#elif __ia64__
CheckTypeSize(XmbTextItem,24, 8518, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XmbTextItem,16, 8518, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XmbTextItem,16, 8518, 10)
#elif __powerpc64__
CheckTypeSize(XmbTextItem,24, 8518, 9)
#elif __s390x__
CheckTypeSize(XmbTextItem,24, 8518, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8518,0);
Msg("Find size of XmbTextItem (8518)\n");
#endif

#if __i386__
CheckTypeSize(XwcTextItem,16, 8520, 2)
#elif __ia64__
CheckTypeSize(XwcTextItem,24, 8520, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XwcTextItem,16, 8520, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XwcTextItem,16, 8520, 10)
#elif __powerpc64__
CheckTypeSize(XwcTextItem,24, 8520, 9)
#elif __s390x__
CheckTypeSize(XwcTextItem,24, 8520, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8520,0);
Msg("Find size of XwcTextItem (8520)\n");
#endif

#if __i386__
CheckTypeSize(XIM,4, 8529, 2)
#elif __ia64__
CheckTypeSize(XIM,8, 8529, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XIM,4, 8529, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XIM,4, 8529, 10)
#elif __powerpc64__
CheckTypeSize(XIM,8, 8529, 9)
#elif __s390x__
CheckTypeSize(XIM,8, 8529, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8529,0);
Msg("Find size of XIM (8529)\n");
#endif

#if __i386__
CheckTypeSize(XIC,4, 8530, 2)
#elif __ia64__
CheckTypeSize(XIC,8, 8530, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XIC,4, 8530, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XIC,4, 8530, 10)
#elif __powerpc64__
CheckTypeSize(XIC,8, 8530, 9)
#elif __s390x__
CheckTypeSize(XIC,8, 8530, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8530,0);
Msg("Find size of XIC (8530)\n");
#endif

#if __i386__
CheckTypeSize(XIDProc,4, 8902, 2)
#elif __ia64__
CheckTypeSize(XIDProc,8, 8902, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XIDProc,4, 8902, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XIDProc,4, 8902, 10)
#elif __powerpc64__
CheckTypeSize(XIDProc,8, 8902, 9)
#elif __s390x__
CheckTypeSize(XIDProc,8, 8902, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8902,0);
Msg("Find size of XIDProc (8902)\n");
#endif

#if __i386__
CheckTypeSize(XPointer,4, 8365, 2)
#elif __ia64__
CheckTypeSize(XPointer,8, 8365, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XPointer,4, 8365, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XPointer,4, 8365, 10)
#elif __powerpc64__
CheckTypeSize(XPointer,8, 8365, 9)
#elif __s390x__
CheckTypeSize(XPointer,8, 8365, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8365,0);
Msg("Find size of XPointer (8365)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/Xlib.h\n",cnt);
return cnt;
#endif

}
