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

#ifdef __i386__
CheckTypeSize(struct _XDisplay,176, 7053, 2)
Msg("Missing member data for _XDisplay on IA32\n");
#elif __ia64__
CheckTypeSize(struct _XDisplay,296, 7053, 3)
Msg("Missing member data for _XDisplay on IA64\n");
#elif __powerpc__
CheckTypeSize(struct _XDisplay,176, 7053, 6)
Msg("Missing member data for _XDisplay on PPC32\n");
#elif __s390__
CheckTypeSize(struct _XDisplay,176, 7053, 10)
Msg("Missing member data for _XDisplay on S390\n");
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7053,0);
Msg("Find size of _XDisplay (7053)\n");
#endif

#ifdef __i386__
CheckTypeSize(XColor,12, 8402, 2)
#elif __ia64__
CheckTypeSize(XColor,16, 8402, 3)
#elif __powerpc__
CheckTypeSize(XColor,12, 8402, 6)
#elif __s390__
CheckTypeSize(XColor,12, 8402, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8402,0);
Msg("Find size of XColor (8402)\n");
#endif

#ifdef __i386__
CheckTypeSize(XVaNestedList,4, 8540, 2)
#elif __ia64__
CheckTypeSize(XVaNestedList,8, 8540, 3)
#elif __powerpc__
CheckTypeSize(XVaNestedList,4, 8540, 6)
#elif __s390__
CheckTypeSize(XVaNestedList,4, 8540, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8540,0);
Msg("Find size of XVaNestedList (8540)\n");
#endif

#ifdef __i386__
CheckTypeSize(XErrorHandler,4, 8930, 2)
#elif __ia64__
CheckTypeSize(XErrorHandler,8, 8930, 3)
#elif __powerpc__
CheckTypeSize(XErrorHandler,4, 8930, 6)
#elif __s390__
CheckTypeSize(XErrorHandler,4, 8930, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8930,0);
Msg("Find size of XErrorHandler (8930)\n");
#endif

#ifdef __i386__
CheckTypeSize(XIOErrorHandler,4, 8932, 2)
#elif __ia64__
CheckTypeSize(XIOErrorHandler,8, 8932, 3)
#elif __powerpc__
CheckTypeSize(XIOErrorHandler,4, 8932, 6)
#elif __s390__
CheckTypeSize(XIOErrorHandler,4, 8932, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8932,0);
Msg("Find size of XIOErrorHandler (8932)\n");
#endif

#ifdef __i386__
CheckTypeSize(XConnectionWatchProc,4, 8956, 2)
#elif __ia64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 3)
#elif __powerpc__
CheckTypeSize(XConnectionWatchProc,4, 8956, 6)
#elif __s390__
CheckTypeSize(XConnectionWatchProc,4, 8956, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8956,0);
Msg("Find size of XConnectionWatchProc (8956)\n");
#endif

#ifdef __i386__
CheckTypeSize(XExtData,16, 8368, 2)
#elif __ia64__
CheckTypeSize(XExtData,32, 8368, 3)
#elif __powerpc__
CheckTypeSize(XExtData,16, 8368, 6)
#elif __s390__
CheckTypeSize(XExtData,16, 8368, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8368,0);
Msg("Find size of XExtData (8368)\n");
#endif

#ifdef __i386__
CheckTypeSize(XExtCodes,16, 8370, 2)
#elif __ia64__
CheckTypeSize(XExtCodes,16, 8370, 3)
#elif __powerpc__
CheckTypeSize(XExtCodes,16, 8370, 6)
#elif __s390__
CheckTypeSize(XExtCodes,16, 8370, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8370,0);
Msg("Find size of XExtCodes (8370)\n");
#endif

#ifdef __i386__
CheckTypeSize(XPixmapFormatValues,12, 8372, 2)
#elif __ia64__
CheckTypeSize(XPixmapFormatValues,12, 8372, 3)
#elif __powerpc__
CheckTypeSize(XPixmapFormatValues,12, 8372, 6)
#elif __s390__
CheckTypeSize(XPixmapFormatValues,12, 8372, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8372,0);
Msg("Find size of XPixmapFormatValues (8372)\n");
#endif

#ifdef __i386__
CheckTypeSize(XGCValues,92, 8374, 2)
#elif __ia64__
CheckTypeSize(XGCValues,128, 8374, 3)
#elif __powerpc__
CheckTypeSize(XGCValues,92, 8374, 6)
#elif __s390__
CheckTypeSize(XGCValues,92, 8374, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8374,0);
Msg("Find size of XGCValues (8374)\n");
#endif

#ifdef __i386__
CheckTypeSize(GC,4, 8375, 2)
#elif __ia64__
CheckTypeSize(GC,8, 8375, 3)
#elif __powerpc__
CheckTypeSize(GC,4, 8375, 6)
#elif __s390__
CheckTypeSize(GC,4, 8375, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8375,0);
Msg("Find size of GC (8375)\n");
#endif

#ifdef __i386__
CheckTypeSize(Visual,32, 8377, 2)
#elif __ia64__
CheckTypeSize(Visual,56, 8377, 3)
#elif __powerpc__
CheckTypeSize(Visual,32, 8377, 6)
#elif __s390__
CheckTypeSize(Visual,32, 8377, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8377,0);
Msg("Find size of Visual (8377)\n");
#endif

#ifdef __i386__
CheckTypeSize(Depth,12, 8379, 2)
#elif __ia64__
CheckTypeSize(Depth,16, 8379, 3)
#elif __powerpc__
CheckTypeSize(Depth,12, 8379, 6)
#elif __s390__
CheckTypeSize(Depth,12, 8379, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8379,0);
Msg("Find size of Depth (8379)\n");
#endif

#ifdef __i386__
CheckTypeSize(Screen,80, 8381, 2)
#elif __ia64__
CheckTypeSize(Screen,128, 8381, 3)
#elif __powerpc__
CheckTypeSize(Screen,80, 8381, 6)
#elif __s390__
CheckTypeSize(Screen,80, 8381, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8381,0);
Msg("Find size of Screen (8381)\n");
#endif

#ifdef __i386__
CheckTypeSize(ScreenFormat,16, 8383, 2)
#elif __ia64__
CheckTypeSize(ScreenFormat,24, 8383, 3)
#elif __powerpc__
CheckTypeSize(ScreenFormat,16, 8383, 6)
#elif __s390__
CheckTypeSize(ScreenFormat,16, 8383, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8383,0);
Msg("Find size of ScreenFormat (8383)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSetWindowAttributes,60, 8385, 2)
#elif __ia64__
CheckTypeSize(XSetWindowAttributes,112, 8385, 3)
#elif __powerpc__
CheckTypeSize(XSetWindowAttributes,60, 8385, 6)
#elif __s390__
CheckTypeSize(XSetWindowAttributes,60, 8385, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8385,0);
Msg("Find size of XSetWindowAttributes (8385)\n");
#endif

#ifdef __i386__
CheckTypeSize(XWindowAttributes,92, 8387, 2)
#elif __ia64__
CheckTypeSize(XWindowAttributes,136, 8387, 3)
#elif __powerpc__
CheckTypeSize(XWindowAttributes,92, 8387, 6)
#elif __s390__
CheckTypeSize(XWindowAttributes,92, 8387, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8387,0);
Msg("Find size of XWindowAttributes (8387)\n");
#endif

#ifdef __i386__
CheckTypeSize(XHostAddress,12, 8389, 2)
#elif __ia64__
CheckTypeSize(XHostAddress,16, 8389, 3)
#elif __powerpc__
CheckTypeSize(XHostAddress,12, 8389, 6)
#elif __s390__
CheckTypeSize(XHostAddress,12, 8389, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8389,0);
Msg("Find size of XHostAddress (8389)\n");
#endif

#ifdef __i386__
CheckTypeSize(XImage,88, 8398, 2)
#elif __ia64__
CheckTypeSize(XImage,136, 8398, 3)
#elif __powerpc__
CheckTypeSize(XImage,88, 8398, 6)
#elif __s390__
CheckTypeSize(XImage,88, 8398, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8398,0);
Msg("Find size of XImage (8398)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct funcs,24, 9291, 2)
CheckOffset(struct funcs,destroy_image,4,2,32867)
CheckOffset(struct funcs,get_pixel,8,2,32868)
CheckOffset(struct funcs,put_pixel,12,2,32869)
CheckOffset(struct funcs,sub_image,16,2,32870)
CheckOffset(struct funcs,add_pixel,20,2,32871)
#elif __ia64__
CheckTypeSize(struct funcs,48, 9291, 3)
CheckOffset(struct funcs,destroy_image,8,3,32867)
CheckOffset(struct funcs,get_pixel,16,3,32868)
CheckOffset(struct funcs,put_pixel,24,3,32869)
CheckOffset(struct funcs,sub_image,32,3,32870)
CheckOffset(struct funcs,add_pixel,40,3,32871)
#elif __powerpc__
CheckTypeSize(struct funcs,24, 9291, 6)
Msg("Missing member data for funcs on PPC32\n");
CheckOffset(struct funcs,create_image,0,6,32866)
CheckOffset(struct funcs,destroy_image,0,6,32867)
CheckOffset(struct funcs,get_pixel,0,6,32868)
CheckOffset(struct funcs,put_pixel,0,6,32869)
CheckOffset(struct funcs,sub_image,0,6,32870)
CheckOffset(struct funcs,add_pixel,0,6,32871)
#elif __s390__
CheckTypeSize(struct funcs,24, 9291, 10)
Msg("Missing member data for funcs on S390\n");
CheckOffset(struct funcs,create_image,0,10,32866)
CheckOffset(struct funcs,destroy_image,0,10,32867)
CheckOffset(struct funcs,get_pixel,0,10,32868)
CheckOffset(struct funcs,put_pixel,0,10,32869)
CheckOffset(struct funcs,sub_image,0,10,32870)
CheckOffset(struct funcs,add_pixel,0,10,32871)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9291,0);
Msg("Find size of funcs (9291)\n");
#endif

#ifdef __i386__
CheckTypeSize(XWindowChanges,28, 8400, 2)
#elif __ia64__
CheckTypeSize(XWindowChanges,40, 8400, 3)
#elif __powerpc__
CheckTypeSize(XWindowChanges,28, 8400, 6)
#elif __s390__
CheckTypeSize(XWindowChanges,28, 8400, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8400,0);
Msg("Find size of XWindowChanges (8400)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSegment,8, 8404, 2)
#elif __ia64__
CheckTypeSize(XSegment,8, 8404, 3)
#elif __powerpc__
CheckTypeSize(XSegment,8, 8404, 6)
#elif __s390__
CheckTypeSize(XSegment,8, 8404, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8404,0);
Msg("Find size of XSegment (8404)\n");
#endif

#ifdef __i386__
CheckTypeSize(XPoint,4, 8406, 2)
#elif __ia64__
CheckTypeSize(XPoint,4, 8406, 3)
#elif __powerpc__
CheckTypeSize(XPoint,4, 8406, 6)
#elif __s390__
CheckTypeSize(XPoint,4, 8406, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8406,0);
Msg("Find size of XPoint (8406)\n");
#endif

#ifdef __i386__
CheckTypeSize(XRectangle,8, 8408, 2)
#elif __ia64__
CheckTypeSize(XRectangle,8, 8408, 3)
#elif __powerpc__
CheckTypeSize(XRectangle,8, 8408, 6)
#elif __s390__
CheckTypeSize(XRectangle,8, 8408, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8408,0);
Msg("Find size of XRectangle (8408)\n");
#endif

#ifdef __i386__
CheckTypeSize(XArc,12, 8410, 2)
#elif __ia64__
CheckTypeSize(XArc,12, 8410, 3)
#elif __powerpc__
CheckTypeSize(XArc,12, 8410, 6)
#elif __s390__
CheckTypeSize(XArc,12, 8410, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8410,0);
Msg("Find size of XArc (8410)\n");
#endif

#ifdef __i386__
CheckTypeSize(XKeyboardControl,32, 8412, 2)
#elif __ia64__
CheckTypeSize(XKeyboardControl,32, 8412, 3)
#elif __powerpc__
CheckTypeSize(XKeyboardControl,32, 8412, 6)
#elif __s390__
CheckTypeSize(XKeyboardControl,32, 8412, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8412,0);
Msg("Find size of XKeyboardControl (8412)\n");
#endif

#ifdef __i386__
CheckTypeSize(XKeyboardState,56, 8414, 2)
#elif __ia64__
CheckTypeSize(XKeyboardState,64, 8414, 3)
#elif __powerpc__
CheckTypeSize(XKeyboardState,56, 8414, 6)
#elif __s390__
CheckTypeSize(XKeyboardState,56, 8414, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8414,0);
Msg("Find size of XKeyboardState (8414)\n");
#endif

#ifdef __i386__
CheckTypeSize(XTimeCoord,8, 8416, 2)
#elif __ia64__
CheckTypeSize(XTimeCoord,16, 8416, 3)
#elif __powerpc__
CheckTypeSize(XTimeCoord,8, 8416, 6)
#elif __s390__
CheckTypeSize(XTimeCoord,8, 8416, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8416,0);
Msg("Find size of XTimeCoord (8416)\n");
#endif

#ifdef __i386__
CheckTypeSize(XModifierKeymap,8, 8418, 2)
#elif __ia64__
CheckTypeSize(XModifierKeymap,16, 8418, 3)
#elif __powerpc__
CheckTypeSize(XModifierKeymap,8, 8418, 6)
#elif __s390__
CheckTypeSize(XModifierKeymap,8, 8418, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8418,0);
Msg("Find size of XModifierKeymap (8418)\n");
#endif

#ifdef __i386__
CheckTypeSize(Display,176, 8419, 2)
#elif __ia64__
CheckTypeSize(Display,296, 8419, 3)
#elif __powerpc__
CheckTypeSize(Display,176, 8419, 6)
#elif __s390__
CheckTypeSize(Display,176, 8419, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8419,0);
Msg("Find size of Display (8419)\n");
#endif

#ifdef __i386__
CheckTypeSize(XKeyEvent,60, 8425, 2)
#elif __ia64__
CheckTypeSize(XKeyEvent,96, 8425, 3)
#elif __powerpc__
CheckTypeSize(XKeyEvent,60, 8425, 6)
#elif __s390__
CheckTypeSize(XKeyEvent,60, 8425, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8425,0);
Msg("Find size of XKeyEvent (8425)\n");
#endif

#ifdef __i386__
CheckTypeSize(XKeyPressedEvent,60, 8426, 2)
#elif __ia64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 3)
#elif __powerpc__
CheckTypeSize(XKeyPressedEvent,60, 8426, 6)
#elif __s390__
CheckTypeSize(XKeyPressedEvent,60, 8426, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8426,0);
Msg("Find size of XKeyPressedEvent (8426)\n");
#endif

#ifdef __i386__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 2)
#elif __ia64__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 3)
#elif __powerpc__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 6)
#elif __s390__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8427,0);
Msg("Find size of XKeyReleasedEvent (8427)\n");
#endif

#ifdef __i386__
CheckTypeSize(XButtonEvent,60, 8429, 2)
#elif __ia64__
CheckTypeSize(XButtonEvent,96, 8429, 3)
#elif __powerpc__
CheckTypeSize(XButtonEvent,60, 8429, 6)
#elif __s390__
CheckTypeSize(XButtonEvent,60, 8429, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8429,0);
Msg("Find size of XButtonEvent (8429)\n");
#endif

#ifdef __i386__
CheckTypeSize(XButtonPressedEvent,60, 8430, 2)
#elif __ia64__
CheckTypeSize(XButtonPressedEvent,96, 8430, 3)
#elif __powerpc__
CheckTypeSize(XButtonPressedEvent,60, 8430, 6)
#elif __s390__
CheckTypeSize(XButtonPressedEvent,60, 8430, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8430,0);
Msg("Find size of XButtonPressedEvent (8430)\n");
#endif

#ifdef __i386__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 2)
#elif __ia64__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 3)
#elif __powerpc__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 6)
#elif __s390__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8431,0);
Msg("Find size of XButtonReleasedEvent (8431)\n");
#endif

#ifdef __i386__
CheckTypeSize(XMotionEvent,60, 8433, 2)
#elif __ia64__
CheckTypeSize(XMotionEvent,96, 8433, 3)
#elif __powerpc__
CheckTypeSize(XMotionEvent,60, 8433, 6)
#elif __s390__
CheckTypeSize(XMotionEvent,60, 8433, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8433,0);
Msg("Find size of XMotionEvent (8433)\n");
#endif

#ifdef __i386__
CheckTypeSize(XPointerMovedEvent,60, 8434, 2)
#elif __ia64__
CheckTypeSize(XPointerMovedEvent,96, 8434, 3)
#elif __powerpc__
CheckTypeSize(XPointerMovedEvent,60, 8434, 6)
#elif __s390__
CheckTypeSize(XPointerMovedEvent,60, 8434, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8434,0);
Msg("Find size of XPointerMovedEvent (8434)\n");
#endif

#ifdef __i386__
CheckTypeSize(XCrossingEvent,68, 8436, 2)
#elif __ia64__
CheckTypeSize(XCrossingEvent,104, 8436, 3)
#elif __powerpc__
CheckTypeSize(XCrossingEvent,68, 8436, 6)
#elif __s390__
CheckTypeSize(XCrossingEvent,68, 8436, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8436,0);
Msg("Find size of XCrossingEvent (8436)\n");
#endif

#ifdef __i386__
CheckTypeSize(XEnterWindowEvent,68, 8437, 2)
#elif __ia64__
CheckTypeSize(XEnterWindowEvent,104, 8437, 3)
#elif __powerpc__
CheckTypeSize(XEnterWindowEvent,68, 8437, 6)
#elif __s390__
CheckTypeSize(XEnterWindowEvent,68, 8437, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8437,0);
Msg("Find size of XEnterWindowEvent (8437)\n");
#endif

#ifdef __i386__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 2)
#elif __ia64__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 3)
#elif __powerpc__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 6)
#elif __s390__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8438,0);
Msg("Find size of XLeaveWindowEvent (8438)\n");
#endif

#ifdef __i386__
CheckTypeSize(XFocusChangeEvent,28, 8440, 2)
#elif __ia64__
CheckTypeSize(XFocusChangeEvent,48, 8440, 3)
#elif __powerpc__
CheckTypeSize(XFocusChangeEvent,28, 8440, 6)
#elif __s390__
CheckTypeSize(XFocusChangeEvent,28, 8440, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8440,0);
Msg("Find size of XFocusChangeEvent (8440)\n");
#endif

#ifdef __i386__
CheckTypeSize(XFocusInEvent,28, 8441, 2)
#elif __ia64__
CheckTypeSize(XFocusInEvent,48, 8441, 3)
#elif __powerpc__
CheckTypeSize(XFocusInEvent,28, 8441, 6)
#elif __s390__
CheckTypeSize(XFocusInEvent,28, 8441, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8441,0);
Msg("Find size of XFocusInEvent (8441)\n");
#endif

#ifdef __i386__
CheckTypeSize(XFocusOutEvent,28, 8442, 2)
#elif __ia64__
CheckTypeSize(XFocusOutEvent,48, 8442, 3)
#elif __powerpc__
CheckTypeSize(XFocusOutEvent,28, 8442, 6)
#elif __s390__
CheckTypeSize(XFocusOutEvent,28, 8442, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8442,0);
Msg("Find size of XFocusOutEvent (8442)\n");
#endif

#ifdef __i386__
CheckTypeSize(XKeymapEvent,52, 8444, 2)
#elif __ia64__
CheckTypeSize(XKeymapEvent,72, 8444, 3)
#elif __powerpc__
CheckTypeSize(XKeymapEvent,52, 8444, 6)
#elif __s390__
CheckTypeSize(XKeymapEvent,52, 8444, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8444,0);
Msg("Find size of XKeymapEvent (8444)\n");
#endif

#ifdef __i386__
CheckTypeSize(XExposeEvent,40, 8446, 2)
#elif __ia64__
CheckTypeSize(XExposeEvent,64, 8446, 3)
#elif __powerpc__
CheckTypeSize(XExposeEvent,40, 8446, 6)
#elif __s390__
CheckTypeSize(XExposeEvent,40, 8446, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8446,0);
Msg("Find size of XExposeEvent (8446)\n");
#endif

#ifdef __i386__
CheckTypeSize(XGraphicsExposeEvent,48, 8448, 2)
#elif __ia64__
CheckTypeSize(XGraphicsExposeEvent,72, 8448, 3)
#elif __powerpc__
CheckTypeSize(XGraphicsExposeEvent,48, 8448, 6)
#elif __s390__
CheckTypeSize(XGraphicsExposeEvent,48, 8448, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8448,0);
Msg("Find size of XGraphicsExposeEvent (8448)\n");
#endif

#ifdef __i386__
CheckTypeSize(XNoExposeEvent,28, 8450, 2)
#elif __ia64__
CheckTypeSize(XNoExposeEvent,48, 8450, 3)
#elif __powerpc__
CheckTypeSize(XNoExposeEvent,28, 8450, 6)
#elif __s390__
CheckTypeSize(XNoExposeEvent,28, 8450, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8450,0);
Msg("Find size of XNoExposeEvent (8450)\n");
#endif

#ifdef __i386__
CheckTypeSize(XVisibilityEvent,24, 8452, 2)
#elif __ia64__
CheckTypeSize(XVisibilityEvent,48, 8452, 3)
#elif __powerpc__
CheckTypeSize(XVisibilityEvent,24, 8452, 6)
#elif __s390__
CheckTypeSize(XVisibilityEvent,24, 8452, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8452,0);
Msg("Find size of XVisibilityEvent (8452)\n");
#endif

#ifdef __i386__
CheckTypeSize(XCreateWindowEvent,48, 8454, 2)
#elif __ia64__
CheckTypeSize(XCreateWindowEvent,72, 8454, 3)
#elif __powerpc__
CheckTypeSize(XCreateWindowEvent,48, 8454, 6)
#elif __s390__
CheckTypeSize(XCreateWindowEvent,48, 8454, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8454,0);
Msg("Find size of XCreateWindowEvent (8454)\n");
#endif

#ifdef __i386__
CheckTypeSize(XDestroyWindowEvent,24, 8456, 2)
#elif __ia64__
CheckTypeSize(XDestroyWindowEvent,48, 8456, 3)
#elif __powerpc__
CheckTypeSize(XDestroyWindowEvent,24, 8456, 6)
#elif __s390__
CheckTypeSize(XDestroyWindowEvent,24, 8456, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8456,0);
Msg("Find size of XDestroyWindowEvent (8456)\n");
#endif

#ifdef __i386__
CheckTypeSize(XUnmapEvent,28, 8458, 2)
#elif __ia64__
CheckTypeSize(XUnmapEvent,56, 8458, 3)
#elif __powerpc__
CheckTypeSize(XUnmapEvent,28, 8458, 6)
#elif __s390__
CheckTypeSize(XUnmapEvent,28, 8458, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8458,0);
Msg("Find size of XUnmapEvent (8458)\n");
#endif

#ifdef __i386__
CheckTypeSize(XMapEvent,28, 8460, 2)
#elif __ia64__
CheckTypeSize(XMapEvent,56, 8460, 3)
#elif __powerpc__
CheckTypeSize(XMapEvent,28, 8460, 6)
#elif __s390__
CheckTypeSize(XMapEvent,28, 8460, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8460,0);
Msg("Find size of XMapEvent (8460)\n");
#endif

#ifdef __i386__
CheckTypeSize(XMapRequestEvent,24, 8462, 2)
#elif __ia64__
CheckTypeSize(XMapRequestEvent,48, 8462, 3)
#elif __powerpc__
CheckTypeSize(XMapRequestEvent,24, 8462, 6)
#elif __s390__
CheckTypeSize(XMapRequestEvent,24, 8462, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8462,0);
Msg("Find size of XMapRequestEvent (8462)\n");
#endif

#ifdef __i386__
CheckTypeSize(XReparentEvent,40, 8464, 2)
#elif __ia64__
CheckTypeSize(XReparentEvent,72, 8464, 3)
#elif __powerpc__
CheckTypeSize(XReparentEvent,40, 8464, 6)
#elif __s390__
CheckTypeSize(XReparentEvent,40, 8464, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8464,0);
Msg("Find size of XReparentEvent (8464)\n");
#endif

#ifdef __i386__
CheckTypeSize(XConfigureEvent,52, 8466, 2)
#elif __ia64__
CheckTypeSize(XConfigureEvent,88, 8466, 3)
#elif __powerpc__
CheckTypeSize(XConfigureEvent,52, 8466, 6)
#elif __s390__
CheckTypeSize(XConfigureEvent,52, 8466, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8466,0);
Msg("Find size of XConfigureEvent (8466)\n");
#endif

#ifdef __i386__
CheckTypeSize(XGravityEvent,32, 8468, 2)
#elif __ia64__
CheckTypeSize(XGravityEvent,56, 8468, 3)
#elif __powerpc__
CheckTypeSize(XGravityEvent,32, 8468, 6)
#elif __s390__
CheckTypeSize(XGravityEvent,32, 8468, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8468,0);
Msg("Find size of XGravityEvent (8468)\n");
#endif

#ifdef __i386__
CheckTypeSize(XResizeRequestEvent,28, 8470, 2)
#elif __ia64__
CheckTypeSize(XResizeRequestEvent,48, 8470, 3)
#elif __powerpc__
CheckTypeSize(XResizeRequestEvent,28, 8470, 6)
#elif __s390__
CheckTypeSize(XResizeRequestEvent,28, 8470, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8470,0);
Msg("Find size of XResizeRequestEvent (8470)\n");
#endif

#ifdef __i386__
CheckTypeSize(XConfigureRequestEvent,56, 8472, 2)
#elif __ia64__
CheckTypeSize(XConfigureRequestEvent,96, 8472, 3)
#elif __powerpc__
CheckTypeSize(XConfigureRequestEvent,56, 8472, 6)
#elif __s390__
CheckTypeSize(XConfigureRequestEvent,56, 8472, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8472,0);
Msg("Find size of XConfigureRequestEvent (8472)\n");
#endif

#ifdef __i386__
CheckTypeSize(XCirculateEvent,28, 8474, 2)
#elif __ia64__
CheckTypeSize(XCirculateEvent,56, 8474, 3)
#elif __powerpc__
CheckTypeSize(XCirculateEvent,28, 8474, 6)
#elif __s390__
CheckTypeSize(XCirculateEvent,28, 8474, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8474,0);
Msg("Find size of XCirculateEvent (8474)\n");
#endif

#ifdef __i386__
CheckTypeSize(XCirculateRequestEvent,28, 8476, 2)
#elif __ia64__
CheckTypeSize(XCirculateRequestEvent,56, 8476, 3)
#elif __powerpc__
CheckTypeSize(XCirculateRequestEvent,28, 8476, 6)
#elif __s390__
CheckTypeSize(XCirculateRequestEvent,28, 8476, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8476,0);
Msg("Find size of XCirculateRequestEvent (8476)\n");
#endif

#ifdef __i386__
CheckTypeSize(XPropertyEvent,32, 8478, 2)
#elif __ia64__
CheckTypeSize(XPropertyEvent,64, 8478, 3)
#elif __powerpc__
CheckTypeSize(XPropertyEvent,32, 8478, 6)
#elif __s390__
CheckTypeSize(XPropertyEvent,32, 8478, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8478,0);
Msg("Find size of XPropertyEvent (8478)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSelectionClearEvent,28, 8480, 2)
#elif __ia64__
CheckTypeSize(XSelectionClearEvent,56, 8480, 3)
#elif __powerpc__
CheckTypeSize(XSelectionClearEvent,28, 8480, 6)
#elif __s390__
CheckTypeSize(XSelectionClearEvent,28, 8480, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8480,0);
Msg("Find size of XSelectionClearEvent (8480)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSelectionRequestEvent,40, 8482, 2)
#elif __ia64__
CheckTypeSize(XSelectionRequestEvent,80, 8482, 3)
#elif __powerpc__
CheckTypeSize(XSelectionRequestEvent,40, 8482, 6)
#elif __s390__
CheckTypeSize(XSelectionRequestEvent,40, 8482, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8482,0);
Msg("Find size of XSelectionRequestEvent (8482)\n");
#endif

#ifdef __i386__
CheckTypeSize(XSelectionEvent,36, 8484, 2)
#elif __ia64__
CheckTypeSize(XSelectionEvent,72, 8484, 3)
#elif __powerpc__
CheckTypeSize(XSelectionEvent,36, 8484, 6)
#elif __s390__
CheckTypeSize(XSelectionEvent,36, 8484, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8484,0);
Msg("Find size of XSelectionEvent (8484)\n");
#endif

#ifdef __i386__
CheckTypeSize(XColormapEvent,32, 8486, 2)
#elif __ia64__
CheckTypeSize(XColormapEvent,56, 8486, 3)
#elif __powerpc__
CheckTypeSize(XColormapEvent,32, 8486, 6)
#elif __s390__
CheckTypeSize(XColormapEvent,32, 8486, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8486,0);
Msg("Find size of XColormapEvent (8486)\n");
#endif

#ifdef __i386__
CheckTypeSize(XClientMessageEvent,48, 8489, 2)
#elif __ia64__
CheckTypeSize(XClientMessageEvent,96, 8489, 3)
#elif __powerpc__
CheckTypeSize(XClientMessageEvent,48, 8489, 6)
#elif __s390__
CheckTypeSize(XClientMessageEvent,48, 8489, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8489,0);
Msg("Find size of XClientMessageEvent (8489)\n");
#endif

#ifdef __i386__
CheckTypeSize(XMappingEvent,32, 8491, 2)
#elif __ia64__
CheckTypeSize(XMappingEvent,56, 8491, 3)
#elif __powerpc__
CheckTypeSize(XMappingEvent,32, 8491, 6)
#elif __s390__
CheckTypeSize(XMappingEvent,32, 8491, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8491,0);
Msg("Find size of XMappingEvent (8491)\n");
#endif

#ifdef __i386__
CheckTypeSize(XErrorEvent,20, 8493, 2)
#elif __ia64__
CheckTypeSize(XErrorEvent,40, 8493, 3)
#elif __powerpc__
CheckTypeSize(XErrorEvent,20, 8493, 6)
#elif __s390__
CheckTypeSize(XErrorEvent,20, 8493, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8493,0);
Msg("Find size of XErrorEvent (8493)\n");
#endif

#ifdef __i386__
CheckTypeSize(XAnyEvent,20, 8495, 2)
#elif __ia64__
CheckTypeSize(XAnyEvent,40, 8495, 3)
#elif __powerpc__
CheckTypeSize(XAnyEvent,20, 8495, 6)
#elif __s390__
CheckTypeSize(XAnyEvent,20, 8495, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8495,0);
Msg("Find size of XAnyEvent (8495)\n");
#endif

#ifdef __i386__
CheckTypeSize(XEvent,96, 8497, 2)
#elif __ia64__
CheckTypeSize(XEvent,192, 8497, 3)
#elif __powerpc__
CheckTypeSize(XEvent,96, 8497, 6)
#elif __s390__
CheckTypeSize(XEvent,96, 8497, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8497,0);
Msg("Find size of XEvent (8497)\n");
#endif

#ifdef __i386__
CheckTypeSize(XCharStruct,12, 8499, 2)
#elif __ia64__
CheckTypeSize(XCharStruct,12, 8499, 3)
#elif __powerpc__
CheckTypeSize(XCharStruct,12, 8499, 6)
#elif __s390__
CheckTypeSize(XCharStruct,12, 8499, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8499,0);
Msg("Find size of XCharStruct (8499)\n");
#endif

#ifdef __i386__
CheckTypeSize(XFontProp,8, 8501, 2)
#elif __ia64__
CheckTypeSize(XFontProp,16, 8501, 3)
#elif __powerpc__
CheckTypeSize(XFontProp,8, 8501, 6)
#elif __s390__
CheckTypeSize(XFontProp,8, 8501, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8501,0);
Msg("Find size of XFontProp (8501)\n");
#endif

#ifdef __i386__
CheckTypeSize(XFontStruct,80, 8503, 2)
#elif __ia64__
CheckTypeSize(XFontStruct,96, 8503, 3)
#elif __powerpc__
CheckTypeSize(XFontStruct,80, 8503, 6)
#elif __s390__
CheckTypeSize(XFontStruct,80, 8503, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8503,0);
Msg("Find size of XFontStruct (8503)\n");
#endif

#ifdef __i386__
CheckTypeSize(XFontSetExtents,16, 8513, 2)
#elif __ia64__
CheckTypeSize(XFontSetExtents,16, 8513, 3)
#elif __powerpc__
CheckTypeSize(XFontSetExtents,16, 8513, 6)
#elif __s390__
CheckTypeSize(XFontSetExtents,16, 8513, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8513,0);
Msg("Find size of XFontSetExtents (8513)\n");
#endif

#ifdef __i386__
CheckTypeSize(XTextItem,16, 8505, 2)
#elif __ia64__
CheckTypeSize(XTextItem,24, 8505, 3)
#elif __powerpc__
CheckTypeSize(XTextItem,16, 8505, 6)
#elif __s390__
CheckTypeSize(XTextItem,16, 8505, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8505,0);
Msg("Find size of XTextItem (8505)\n");
#endif

#ifdef __i386__
CheckTypeSize(XChar2b,2, 8507, 2)
#elif __ia64__
CheckTypeSize(XChar2b,2, 8507, 3)
#elif __powerpc__
CheckTypeSize(XChar2b,2, 8507, 6)
#elif __s390__
CheckTypeSize(XChar2b,2, 8507, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8507,0);
Msg("Find size of XChar2b (8507)\n");
#endif

#ifdef __i386__
CheckTypeSize(XTextItem16,16, 8509, 2)
#elif __ia64__
CheckTypeSize(XTextItem16,24, 8509, 3)
#elif __powerpc__
CheckTypeSize(XTextItem16,16, 8509, 6)
#elif __s390__
CheckTypeSize(XTextItem16,16, 8509, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8509,0);
Msg("Find size of XTextItem16 (8509)\n");
#endif

#ifdef __i386__
CheckTypeSize(XEDataObject,4, 8511, 2)
#elif __ia64__
CheckTypeSize(XEDataObject,8, 8511, 3)
#elif __powerpc__
CheckTypeSize(XEDataObject,4, 8511, 6)
#elif __s390__
CheckTypeSize(XEDataObject,4, 8511, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8511,0);
Msg("Find size of XEDataObject (8511)\n");
#endif

#ifdef __i386__
CheckTypeSize(XOM,4, 8514, 2)
#elif __ia64__
CheckTypeSize(XOM,8, 8514, 3)
#elif __powerpc__
CheckTypeSize(XOM,4, 8514, 6)
#elif __s390__
CheckTypeSize(XOM,4, 8514, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8514,0);
Msg("Find size of XOM (8514)\n");
#endif

#ifdef __i386__
CheckTypeSize(XOC,4, 8515, 2)
#elif __ia64__
CheckTypeSize(XOC,8, 8515, 3)
#elif __powerpc__
CheckTypeSize(XOC,4, 8515, 6)
#elif __s390__
CheckTypeSize(XOC,4, 8515, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8515,0);
Msg("Find size of XOC (8515)\n");
#endif

#ifdef __i386__
CheckTypeSize(XFontSet,4, 8516, 2)
#elif __ia64__
CheckTypeSize(XFontSet,8, 8516, 3)
#elif __powerpc__
CheckTypeSize(XFontSet,4, 8516, 6)
#elif __s390__
CheckTypeSize(XFontSet,4, 8516, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8516,0);
Msg("Find size of XFontSet (8516)\n");
#endif

#ifdef __i386__
CheckTypeSize(XmbTextItem,16, 8518, 2)
#elif __ia64__
CheckTypeSize(XmbTextItem,24, 8518, 3)
#elif __powerpc__
CheckTypeSize(XmbTextItem,16, 8518, 6)
#elif __s390__
CheckTypeSize(XmbTextItem,16, 8518, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8518,0);
Msg("Find size of XmbTextItem (8518)\n");
#endif

#ifdef __i386__
CheckTypeSize(XwcTextItem,16, 8520, 2)
#elif __ia64__
CheckTypeSize(XwcTextItem,24, 8520, 3)
#elif __powerpc__
CheckTypeSize(XwcTextItem,16, 8520, 6)
#elif __s390__
CheckTypeSize(XwcTextItem,16, 8520, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8520,0);
Msg("Find size of XwcTextItem (8520)\n");
#endif

#ifdef __i386__
CheckTypeSize(XIM,4, 8529, 2)
#elif __ia64__
CheckTypeSize(XIM,8, 8529, 3)
#elif __powerpc__
CheckTypeSize(XIM,4, 8529, 6)
#elif __s390__
CheckTypeSize(XIM,4, 8529, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8529,0);
Msg("Find size of XIM (8529)\n");
#endif

#ifdef __i386__
CheckTypeSize(XIC,4, 8530, 2)
#elif __ia64__
CheckTypeSize(XIC,8, 8530, 3)
#elif __powerpc__
CheckTypeSize(XIC,4, 8530, 6)
#elif __s390__
CheckTypeSize(XIC,4, 8530, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8530,0);
Msg("Find size of XIC (8530)\n");
#endif

#ifdef __i386__
CheckTypeSize(XIDProc,4, 8902, 2)
#elif __ia64__
CheckTypeSize(XIDProc,8, 8902, 3)
#elif __powerpc__
CheckTypeSize(XIDProc,4, 8902, 6)
#elif __s390__
CheckTypeSize(XIDProc,4, 8902, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8902,0);
Msg("Find size of XIDProc (8902)\n");
#endif

#ifdef __i386__
CheckTypeSize(XPointer,4, 8365, 2)
#elif __ia64__
CheckTypeSize(XPointer,8, 8365, 3)
#elif __powerpc__
CheckTypeSize(XPointer,4, 8365, 6)
#elif __s390__
CheckTypeSize(XPointer,4, 8365, 10)
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
