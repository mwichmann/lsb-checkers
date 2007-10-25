/*
 * Test of X11/Xlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xlib.h\n");
#endif

printf("Checking data structures in X11/Xlib.h\n");
#if defined __i386__
CheckTypeSize(struct _XDisplay,176, 7053, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on IA32\n");
#elif defined __ia64__
CheckTypeSize(struct _XDisplay,296, 7053, 3, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on IA64\n");
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XDisplay,176, 7053, 6, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on PPC32\n");
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XDisplay,176, 7053, 10, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on S390\n");
#elif defined __powerpc64__
CheckTypeSize(struct _XDisplay,296, 7053, 9, 2.0, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on PPC64\n");
#elif defined __s390x__
CheckTypeSize(struct _XDisplay,296, 7053, 12, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on S390X\n");
#elif defined __x86_64__
CheckTypeSize(struct _XDisplay,296, 7053, 11, 2.0, NULL, 0, NULL)
Msg("Missing member data for _XDisplay on x86-64\n");
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of _XDisplay (7053)\n");
%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,7053,0);
#endif

#if defined __i386__
CheckTypeSize(XVaNestedList,4, 8540, 2, 1.0, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(XVaNestedList,8, 8540, 3, 1.3, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XVaNestedList,4, 8540, 6, 1.2, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XVaNestedList,4, 8540, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(XVaNestedList,8, 8540, 9, 2.0, NULL, 40, NULL)
#elif defined __s390x__
CheckTypeSize(XVaNestedList,8, 8540, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(XVaNestedList,8, 8540, 11, 2.0, NULL, 40, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XVaNestedList (8540)\n");
%d,%d,%d,'""2.0""',NULL,40,NULL);\n",architecture,8540,0);
#endif

#if defined __i386__
CheckTypeSize(XErrorHandler,4, 8930, 2, 1.0, NULL, 8928, NULL)
#elif defined __ia64__
CheckTypeSize(XErrorHandler,8, 8930, 3, 1.3, NULL, 8928, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XErrorHandler,4, 8930, 6, 1.2, NULL, 8928, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XErrorHandler,4, 8930, 10, 1.3, NULL, 8928, NULL)
#elif defined __powerpc64__
CheckTypeSize(XErrorHandler,8, 8930, 9, 2.0, NULL, 8928, NULL)
#elif defined __s390x__
CheckTypeSize(XErrorHandler,8, 8930, 12, 1.3, NULL, 8928, NULL)
#elif defined __x86_64__
CheckTypeSize(XErrorHandler,8, 8930, 11, 2.0, NULL, 8928, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XErrorHandler (8930)\n");
%d,%d,%d,'""2.0""',NULL,8928,NULL);\n",architecture,8930,0);
#endif

#if defined __i386__
CheckTypeSize(XIOErrorHandler,4, 8932, 2, 1.0, NULL, 8931, NULL)
#elif defined __ia64__
CheckTypeSize(XIOErrorHandler,8, 8932, 3, 1.3, NULL, 8931, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIOErrorHandler,4, 8932, 6, 1.2, NULL, 8931, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIOErrorHandler,4, 8932, 10, 1.3, NULL, 8931, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIOErrorHandler,8, 8932, 9, 2.0, NULL, 8931, NULL)
#elif defined __s390x__
CheckTypeSize(XIOErrorHandler,8, 8932, 12, 1.3, NULL, 8931, NULL)
#elif defined __x86_64__
CheckTypeSize(XIOErrorHandler,8, 8932, 11, 2.0, NULL, 8931, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XIOErrorHandler (8932)\n");
%d,%d,%d,'""2.0""',NULL,8931,NULL);\n",architecture,8932,0);
#endif

#if defined __i386__
CheckTypeSize(XConnectionWatchProc,4, 8956, 2, 1.0, NULL, 8955, NULL)
#elif defined __ia64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 3, 1.3, NULL, 8955, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XConnectionWatchProc,4, 8956, 6, 1.2, NULL, 8955, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XConnectionWatchProc,4, 8956, 10, 1.3, NULL, 8955, NULL)
#elif defined __powerpc64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 9, 2.0, NULL, 8955, NULL)
#elif defined __s390x__
CheckTypeSize(XConnectionWatchProc,8, 8956, 12, 1.3, NULL, 8955, NULL)
#elif defined __x86_64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 11, 2.0, NULL, 8955, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XConnectionWatchProc (8956)\n");
%d,%d,%d,'""2.0""',NULL,8955,NULL);\n",architecture,8956,0);
#endif

#if defined __i386__
CheckTypeSize(XExtData,16, 8368, 2, 1.2, NULL, 8366, NULL)
#elif defined __ia64__
CheckTypeSize(XExtData,32, 8368, 3, 1.3, NULL, 8366, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XExtData,16, 8368, 6, 1.2, NULL, 8366, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XExtData,16, 8368, 10, 1.3, NULL, 8366, NULL)
#elif defined __powerpc64__
CheckTypeSize(XExtData,32, 8368, 9, 2.0, NULL, 8366, NULL)
#elif defined __s390x__
CheckTypeSize(XExtData,32, 8368, 12, 1.3, NULL, 8366, NULL)
#elif defined __x86_64__
CheckTypeSize(XExtData,32, 8368, 11, 2.0, NULL, 8366, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XExtData (8368)\n");
%d,%d,%d,'""2.0""',NULL,8366,NULL);\n",architecture,8368,0);
#endif

#if defined __i386__
CheckTypeSize(GC,4, 8375, 2, 1.0, NULL, 7045, NULL)
#elif defined __ia64__
CheckTypeSize(GC,8, 8375, 3, 1.3, NULL, 7045, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GC,4, 8375, 6, 1.2, NULL, 7045, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GC,4, 8375, 10, 1.3, NULL, 7045, NULL)
#elif defined __powerpc64__
CheckTypeSize(GC,8, 8375, 9, 2.0, NULL, 7045, NULL)
#elif defined __s390x__
CheckTypeSize(GC,8, 8375, 12, 1.3, NULL, 7045, NULL)
#elif defined __x86_64__
CheckTypeSize(GC,8, 8375, 11, 2.0, NULL, 7045, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of GC (8375)\n");
%d,%d,%d,'""2.0""',NULL,7045,NULL);\n",architecture,8375,0);
#endif

#if defined __i386__
CheckTypeSize(XImage,88, 8398, 2, 1.2, NULL, 8390, NULL)
#elif defined __ia64__
CheckTypeSize(XImage,136, 8398, 3, 1.3, NULL, 8390, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XImage,88, 8398, 6, 1.2, NULL, 8390, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XImage,88, 8398, 10, 1.3, NULL, 8390, NULL)
#elif defined __powerpc64__
CheckTypeSize(XImage,136, 8398, 9, 2.0, NULL, 8390, NULL)
#elif defined __s390x__
CheckTypeSize(XImage,136, 8398, 12, 1.3, NULL, 8390, NULL)
#elif defined __x86_64__
CheckTypeSize(XImage,136, 8398, 11, 2.0, NULL, 8390, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XImage (8398)\n");
%d,%d,%d,'""2.0""',NULL,8390,NULL);\n",architecture,8398,0);
#endif

#if defined __i386__
CheckTypeSize(XKeyPressedEvent,60, 8426, 2, 1.2, NULL, 8425, NULL)
#elif defined __ia64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 3, 1.3, NULL, 8425, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XKeyPressedEvent,60, 8426, 6, 1.2, NULL, 8425, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XKeyPressedEvent,60, 8426, 10, 1.3, NULL, 8425, NULL)
#elif defined __powerpc64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 9, 2.0, NULL, 8425, NULL)
#elif defined __s390x__
CheckTypeSize(XKeyPressedEvent,96, 8426, 12, 1.3, NULL, 8425, NULL)
#elif defined __x86_64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 11, 2.0, NULL, 8425, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XKeyPressedEvent (8426)\n");
%d,%d,%d,'""2.0""',NULL,8425,NULL);\n",architecture,8426,0);
#endif

#if defined __i386__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 2, 1.2, NULL, 8425, NULL)
#elif defined __ia64__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 3, 1.3, NULL, 8425, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 6, 1.2, NULL, 8425, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XKeyReleasedEvent,60, 8427, 10, 1.3, NULL, 8425, NULL)
#elif defined __powerpc64__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 9, 2.0, NULL, 8425, NULL)
#elif defined __s390x__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 12, 1.3, NULL, 8425, NULL)
#elif defined __x86_64__
CheckTypeSize(XKeyReleasedEvent,96, 8427, 11, 2.0, NULL, 8425, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XKeyReleasedEvent (8427)\n");
%d,%d,%d,'""2.0""',NULL,8425,NULL);\n",architecture,8427,0);
#endif

#if defined __i386__
CheckTypeSize(XButtonPressedEvent,60, 8430, 2, 1.2, NULL, 8429, NULL)
#elif defined __ia64__
CheckTypeSize(XButtonPressedEvent,96, 8430, 3, 1.3, NULL, 8429, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XButtonPressedEvent,60, 8430, 6, 1.2, NULL, 8429, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XButtonPressedEvent,60, 8430, 10, 1.3, NULL, 8429, NULL)
#elif defined __powerpc64__
CheckTypeSize(XButtonPressedEvent,96, 8430, 9, 2.0, NULL, 8429, NULL)
#elif defined __s390x__
CheckTypeSize(XButtonPressedEvent,96, 8430, 12, 1.3, NULL, 8429, NULL)
#elif defined __x86_64__
CheckTypeSize(XButtonPressedEvent,96, 8430, 11, 2.0, NULL, 8429, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XButtonPressedEvent (8430)\n");
%d,%d,%d,'""2.0""',NULL,8429,NULL);\n",architecture,8430,0);
#endif

#if defined __i386__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 2, 1.2, NULL, 8429, NULL)
#elif defined __ia64__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 3, 1.3, NULL, 8429, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 6, 1.2, NULL, 8429, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XButtonReleasedEvent,60, 8431, 10, 1.3, NULL, 8429, NULL)
#elif defined __powerpc64__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 9, 2.0, NULL, 8429, NULL)
#elif defined __s390x__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 12, 1.3, NULL, 8429, NULL)
#elif defined __x86_64__
CheckTypeSize(XButtonReleasedEvent,96, 8431, 11, 2.0, NULL, 8429, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XButtonReleasedEvent (8431)\n");
%d,%d,%d,'""2.0""',NULL,8429,NULL);\n",architecture,8431,0);
#endif

#if defined __i386__
CheckTypeSize(XPointerMovedEvent,60, 8434, 2, 1.2, NULL, 8433, NULL)
#elif defined __ia64__
CheckTypeSize(XPointerMovedEvent,96, 8434, 3, 1.3, NULL, 8433, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XPointerMovedEvent,60, 8434, 6, 1.2, NULL, 8433, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XPointerMovedEvent,60, 8434, 10, 1.3, NULL, 8433, NULL)
#elif defined __powerpc64__
CheckTypeSize(XPointerMovedEvent,96, 8434, 9, 2.0, NULL, 8433, NULL)
#elif defined __s390x__
CheckTypeSize(XPointerMovedEvent,96, 8434, 12, 1.3, NULL, 8433, NULL)
#elif defined __x86_64__
CheckTypeSize(XPointerMovedEvent,96, 8434, 11, 2.0, NULL, 8433, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XPointerMovedEvent (8434)\n");
%d,%d,%d,'""2.0""',NULL,8433,NULL);\n",architecture,8434,0);
#endif

#if defined __i386__
CheckTypeSize(XEnterWindowEvent,68, 8437, 2, 1.2, NULL, 8436, NULL)
#elif defined __ia64__
CheckTypeSize(XEnterWindowEvent,104, 8437, 3, 1.3, NULL, 8436, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XEnterWindowEvent,68, 8437, 6, 1.2, NULL, 8436, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XEnterWindowEvent,68, 8437, 10, 1.3, NULL, 8436, NULL)
#elif defined __powerpc64__
CheckTypeSize(XEnterWindowEvent,104, 8437, 9, 2.0, NULL, 8436, NULL)
#elif defined __s390x__
CheckTypeSize(XEnterWindowEvent,104, 8437, 12, 1.3, NULL, 8436, NULL)
#elif defined __x86_64__
CheckTypeSize(XEnterWindowEvent,104, 8437, 11, 2.0, NULL, 8436, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XEnterWindowEvent (8437)\n");
%d,%d,%d,'""2.0""',NULL,8436,NULL);\n",architecture,8437,0);
#endif

#if defined __i386__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 2, 1.2, NULL, 8436, NULL)
#elif defined __ia64__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 3, 1.3, NULL, 8436, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 6, 1.2, NULL, 8436, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XLeaveWindowEvent,68, 8438, 10, 1.3, NULL, 8436, NULL)
#elif defined __powerpc64__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 9, 2.0, NULL, 8436, NULL)
#elif defined __s390x__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 12, 1.3, NULL, 8436, NULL)
#elif defined __x86_64__
CheckTypeSize(XLeaveWindowEvent,104, 8438, 11, 2.0, NULL, 8436, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XLeaveWindowEvent (8438)\n");
%d,%d,%d,'""2.0""',NULL,8436,NULL);\n",architecture,8438,0);
#endif

#if defined __i386__
CheckTypeSize(XFocusInEvent,28, 8441, 2, 1.2, NULL, 8440, NULL)
#elif defined __ia64__
CheckTypeSize(XFocusInEvent,48, 8441, 3, 1.3, NULL, 8440, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XFocusInEvent,28, 8441, 6, 1.2, NULL, 8440, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XFocusInEvent,28, 8441, 10, 1.3, NULL, 8440, NULL)
#elif defined __powerpc64__
CheckTypeSize(XFocusInEvent,48, 8441, 9, 2.0, NULL, 8440, NULL)
#elif defined __s390x__
CheckTypeSize(XFocusInEvent,48, 8441, 12, 1.3, NULL, 8440, NULL)
#elif defined __x86_64__
CheckTypeSize(XFocusInEvent,48, 8441, 11, 2.0, NULL, 8440, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XFocusInEvent (8441)\n");
%d,%d,%d,'""2.0""',NULL,8440,NULL);\n",architecture,8441,0);
#endif

#if defined __i386__
CheckTypeSize(XFocusOutEvent,28, 8442, 2, 1.2, NULL, 8440, NULL)
#elif defined __ia64__
CheckTypeSize(XFocusOutEvent,48, 8442, 3, 1.3, NULL, 8440, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XFocusOutEvent,28, 8442, 6, 1.2, NULL, 8440, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XFocusOutEvent,28, 8442, 10, 1.3, NULL, 8440, NULL)
#elif defined __powerpc64__
CheckTypeSize(XFocusOutEvent,48, 8442, 9, 2.0, NULL, 8440, NULL)
#elif defined __s390x__
CheckTypeSize(XFocusOutEvent,48, 8442, 12, 1.3, NULL, 8440, NULL)
#elif defined __x86_64__
CheckTypeSize(XFocusOutEvent,48, 8442, 11, 2.0, NULL, 8440, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XFocusOutEvent (8442)\n");
%d,%d,%d,'""2.0""',NULL,8440,NULL);\n",architecture,8442,0);
#endif

#if defined __i386__
CheckTypeSize(XEvent,96, 8497, 2, 1.2, NULL, 8496, NULL)
#elif defined __ia64__
CheckTypeSize(XEvent,192, 8497, 3, 1.3, NULL, 8496, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XEvent,96, 8497, 6, 1.2, NULL, 8496, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XEvent,96, 8497, 10, 1.3, NULL, 8496, NULL)
#elif defined __powerpc64__
CheckTypeSize(XEvent,192, 8497, 9, 2.0, NULL, 8496, NULL)
#elif defined __s390x__
CheckTypeSize(XEvent,192, 8497, 12, 1.3, NULL, 8496, NULL)
#elif defined __x86_64__
CheckTypeSize(XEvent,192, 8497, 11, 2.0, NULL, 8496, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XEvent (8497)\n");
%d,%d,%d,'""2.0""',NULL,8496,NULL);\n",architecture,8497,0);
#endif

#if defined __i386__
CheckTypeSize(XOM,4, 8514, 2, 1.0, NULL, 7269, NULL)
#elif defined __ia64__
CheckTypeSize(XOM,8, 8514, 3, 1.3, NULL, 7269, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XOM,4, 8514, 6, 1.2, NULL, 7269, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XOM,4, 8514, 10, 1.3, NULL, 7269, NULL)
#elif defined __powerpc64__
CheckTypeSize(XOM,8, 8514, 9, 2.0, NULL, 7269, NULL)
#elif defined __s390x__
CheckTypeSize(XOM,8, 8514, 12, 1.3, NULL, 7269, NULL)
#elif defined __x86_64__
CheckTypeSize(XOM,8, 8514, 11, 2.0, NULL, 7269, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XOM (8514)\n");
%d,%d,%d,'""2.0""',NULL,7269,NULL);\n",architecture,8514,0);
#endif

#if defined __i386__
CheckTypeSize(XOC,4, 8515, 2, 1.0, NULL, 7272, NULL)
#elif defined __ia64__
CheckTypeSize(XOC,8, 8515, 3, 1.3, NULL, 7272, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XOC,4, 8515, 6, 1.2, NULL, 7272, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XOC,4, 8515, 10, 1.3, NULL, 7272, NULL)
#elif defined __powerpc64__
CheckTypeSize(XOC,8, 8515, 9, 2.0, NULL, 7272, NULL)
#elif defined __s390x__
CheckTypeSize(XOC,8, 8515, 12, 1.3, NULL, 7272, NULL)
#elif defined __x86_64__
CheckTypeSize(XOC,8, 8515, 11, 2.0, NULL, 7272, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XOC (8515)\n");
%d,%d,%d,'""2.0""',NULL,7272,NULL);\n",architecture,8515,0);
#endif

#if defined __i386__
CheckTypeSize(XFontSet,4, 8516, 2, 1.0, NULL, 7272, NULL)
#elif defined __ia64__
CheckTypeSize(XFontSet,8, 8516, 3, 1.3, NULL, 7272, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XFontSet,4, 8516, 6, 1.2, NULL, 7272, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XFontSet,4, 8516, 10, 1.3, NULL, 7272, NULL)
#elif defined __powerpc64__
CheckTypeSize(XFontSet,8, 8516, 9, 2.0, NULL, 7272, NULL)
#elif defined __s390x__
CheckTypeSize(XFontSet,8, 8516, 12, 1.3, NULL, 7272, NULL)
#elif defined __x86_64__
CheckTypeSize(XFontSet,8, 8516, 11, 2.0, NULL, 7272, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XFontSet (8516)\n");
%d,%d,%d,'""2.0""',NULL,7272,NULL);\n",architecture,8516,0);
#endif

#if defined __i386__
CheckTypeSize(XIM,4, 8529, 2, 1.0, NULL, 7293, NULL)
#elif defined __ia64__
CheckTypeSize(XIM,8, 8529, 3, 1.3, NULL, 7293, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIM,4, 8529, 6, 1.2, NULL, 7293, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIM,4, 8529, 10, 1.3, NULL, 7293, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIM,8, 8529, 9, 2.0, NULL, 7293, NULL)
#elif defined __s390x__
CheckTypeSize(XIM,8, 8529, 12, 1.3, NULL, 7293, NULL)
#elif defined __x86_64__
CheckTypeSize(XIM,8, 8529, 11, 2.0, NULL, 7293, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XIM (8529)\n");
%d,%d,%d,'""2.0""',NULL,7293,NULL);\n",architecture,8529,0);
#endif

#if defined __i386__
CheckTypeSize(XIC,4, 8530, 2, 1.0, NULL, 7296, NULL)
#elif defined __ia64__
CheckTypeSize(XIC,8, 8530, 3, 1.3, NULL, 7296, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIC,4, 8530, 6, 1.2, NULL, 7296, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIC,4, 8530, 10, 1.3, NULL, 7296, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIC,8, 8530, 9, 2.0, NULL, 7296, NULL)
#elif defined __s390x__
CheckTypeSize(XIC,8, 8530, 12, 1.3, NULL, 7296, NULL)
#elif defined __x86_64__
CheckTypeSize(XIC,8, 8530, 11, 2.0, NULL, 7296, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XIC (8530)\n");
%d,%d,%d,'""2.0""',NULL,7296,NULL);\n",architecture,8530,0);
#endif

#if defined __i386__
CheckTypeSize(XIDProc,4, 8902, 2, 1.0, NULL, 8901, NULL)
#elif defined __ia64__
CheckTypeSize(XIDProc,8, 8902, 3, 1.3, NULL, 8901, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIDProc,4, 8902, 6, 1.2, NULL, 8901, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIDProc,4, 8902, 10, 1.3, NULL, 8901, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIDProc,8, 8902, 9, 2.0, NULL, 8901, NULL)
#elif defined __s390x__
CheckTypeSize(XIDProc,8, 8902, 12, 1.3, NULL, 8901, NULL)
#elif defined __x86_64__
CheckTypeSize(XIDProc,8, 8902, 11, 2.0, NULL, 8901, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XIDProc (8902)\n");
%d,%d,%d,'""2.0""',NULL,8901,NULL);\n",architecture,8902,0);
#endif

#if defined __i386__
CheckTypeSize(XPointer,4, 8365, 2, 1.2, NULL, 63, NULL)
#elif defined __ia64__
CheckTypeSize(XPointer,8, 8365, 3, 1.3, NULL, 63, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XPointer,4, 8365, 6, 1.2, NULL, 63, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XPointer,4, 8365, 10, 1.3, NULL, 63, NULL)
#elif defined __powerpc64__
CheckTypeSize(XPointer,8, 8365, 9, 2.0, NULL, 63, NULL)
#elif defined __s390x__
CheckTypeSize(XPointer,8, 8365, 12, 1.3, NULL, 63, NULL)
#elif defined __x86_64__
CheckTypeSize(XPointer,8, 8365, 11, 2.0, NULL, 63, NULL)
#else
Msg("Find size of XPointer (8365)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,63, NULL);\n",architecture,8365,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xlib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
