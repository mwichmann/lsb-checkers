/*
 * Test of X11/extensions/XShm.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "X11/X.h"
#include "X11/Xlib.h"

#include "X11/extensions/XShm.h"



#ifdef TET_TEST
void X11_extensions_XShm_h()
{
#else
int X11_extensions_XShm_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XShm.h\n");
#endif

printf("Checking data structures in X11/extensions/XShm.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef X_ShmQueryVersion
	CompareConstant(X_ShmQueryVersion,0,3624,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShmQueryVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShmAttach
	CompareConstant(X_ShmAttach,1,3625,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShmAttach\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShmDetach
	CompareConstant(X_ShmDetach,2,3626,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShmDetach\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShmPutImage
	CompareConstant(X_ShmPutImage,3,3627,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShmPutImage\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShmGetImage
	CompareConstant(X_ShmGetImage,4,3628,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShmGetImage\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ShmCreatePixmap
	CompareConstant(X_ShmCreatePixmap,5,3629,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ShmCreatePixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShmCompletion
	CompareConstant(ShmCompletion,0,3630,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShmCompletion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShmNumberEvents
	CompareConstant(ShmNumberEvents,(ShmCompletion + 1),3631,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShmNumberEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadShmSeg
	CompareConstant(BadShmSeg,0,3632,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: BadShmSeg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShmNumberErrors
	CompareConstant(ShmNumberErrors,(BadShmSeg + 1),3633,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ShmNumberErrors\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(ShmSeg,8, 9388, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(ShmSeg,8, 9388, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ShmSeg,4, 9388, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(ShmSeg,8, 9388, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ShmSeg,4, 9388, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(ShmSeg,8, 9388, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(ShmSeg,4, 9388, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of ShmSeg (9388)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,9388,0);
#endif

#if defined __s390x__
CheckTypeSize(XShmCompletionEvent,64, 9390, 12, 1.3, NULL, 9389, NULL)
#elif defined __x86_64__
CheckTypeSize(XShmCompletionEvent,64, 9390, 11, 2.0, NULL, 9389, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XShmCompletionEvent,36, 9390, 10, 1.3, NULL, 9389, NULL)
#elif defined __powerpc64__
CheckTypeSize(XShmCompletionEvent,64, 9390, 9, 2.0, NULL, 9389, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XShmCompletionEvent,36, 9390, 6, 1.2, NULL, 9389, NULL)
#elif defined __ia64__
CheckTypeSize(XShmCompletionEvent,64, 9390, 3, 1.3, NULL, 9389, NULL)
#elif defined __i386__
CheckTypeSize(XShmCompletionEvent,36, 9390, 2, 1.2, NULL, 9389, NULL)
#else
Msg("Find size of XShmCompletionEvent (9390)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9389,NULL);\n",architecture,9390,0);
#endif

#if defined __s390x__
CheckTypeSize(XShmSegmentInfo,32, 9392, 12, 1.3, NULL, 9391, NULL)
#elif defined __x86_64__
CheckTypeSize(XShmSegmentInfo,32, 9392, 11, 2.0, NULL, 9391, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XShmSegmentInfo,16, 9392, 10, 1.3, NULL, 9391, NULL)
#elif defined __powerpc64__
CheckTypeSize(XShmSegmentInfo,32, 9392, 9, 2.0, NULL, 9391, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XShmSegmentInfo,16, 9392, 6, 1.2, NULL, 9391, NULL)
#elif defined __ia64__
CheckTypeSize(XShmSegmentInfo,32, 9392, 3, 1.3, NULL, 9391, NULL)
#elif defined __i386__
CheckTypeSize(XShmSegmentInfo,16, 9392, 2, 1.2, NULL, 9391, NULL)
#else
Msg("Find size of XShmSegmentInfo (9392)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9391, NULL);\n",architecture,9392,0);
#endif

extern int XShmAttach_db(Display *, XShmSegmentInfo *);
CheckInterfacedef(XShmAttach,XShmAttach_db);
extern XImage * XShmCreateImage_db(Display *, Visual *, unsigned int, int, char *, XShmSegmentInfo *, unsigned int, unsigned int);
CheckInterfacedef(XShmCreateImage,XShmCreateImage_db);
extern Pixmap XShmCreatePixmap_db(Display *, Drawable, char *, XShmSegmentInfo *, unsigned int, unsigned int, unsigned int);
CheckInterfacedef(XShmCreatePixmap,XShmCreatePixmap_db);
extern int XShmDetach_db(Display *, XShmSegmentInfo *);
CheckInterfacedef(XShmDetach,XShmDetach_db);
extern int XShmGetEventBase_db(Display *);
CheckInterfacedef(XShmGetEventBase,XShmGetEventBase_db);
extern int XShmGetImage_db(Display *, Drawable, XImage *, int, int, unsigned long int);
CheckInterfacedef(XShmGetImage,XShmGetImage_db);
extern int XShmPixmapFormat_db(Display *);
CheckInterfacedef(XShmPixmapFormat,XShmPixmapFormat_db);
extern int XShmPutImage_db(Display *, Drawable, GC, XImage *, int, int, int, int, unsigned int, unsigned int, int);
CheckInterfacedef(XShmPutImage,XShmPutImage_db);
extern int XShmQueryExtension_db(Display *);
CheckInterfacedef(XShmQueryExtension,XShmQueryExtension_db);
extern int XShmQueryVersion_db(Display *, int *, int *, int *);
CheckInterfacedef(XShmQueryVersion,XShmQueryVersion_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XShm.h\n\n",pcnt,cnt);
return cnt;
#endif

}
