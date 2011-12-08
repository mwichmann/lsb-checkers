/*
 * Test of X11/extensions/Xdbe.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/extensions/Xdbe.h"



#ifdef TET_TEST
void X11_extensions_Xdbe_h()
{
#else
int X11_extensions_Xdbe_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in X11/extensions/Xdbe.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XdbeBadBuffer
	CompareConstant(XdbeBadBuffer,0,3635,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XdbeBadBuffer\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(XdbeBackBuffer,8, 9394, 12, 1.3, NULL, 8727, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeBackBuffer,8, 9394, 11, 2.0, NULL, 8727, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeBackBuffer,4, 9394, 10, 1.3, NULL, 8727, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeBackBuffer,8, 9394, 9, 2.0, NULL, 8727, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeBackBuffer,4, 9394, 6, 1.2, NULL, 8727, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeBackBuffer,8, 9394, 3, 1.3, NULL, 8727, NULL)
#elif defined __i386__
CheckTypeSize(XdbeBackBuffer,4, 9394, 2, 1.2, NULL, 8727, NULL)
#else
Msg("Find size of XdbeBackBuffer (9394)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8727,NULL);\n",architecture,9394,0);
#endif

#if defined __s390x__
CheckTypeSize(XdbeSwapAction,1, 9395, 12, 1.3, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeSwapAction,1, 9395, 11, 2.0, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeSwapAction,1, 9395, 10, 1.3, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeSwapAction,1, 9395, 9, 2.0, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeSwapAction,1, 9395, 6, 1.2, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeSwapAction,1, 9395, 3, 1.3, NULL, 3, NULL)
#elif defined __i386__
CheckTypeSize(XdbeSwapAction,1, 9395, 2, 1.2, NULL, 3, NULL)
#else
Msg("Find size of XdbeSwapAction (9395)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,3,NULL);\n",architecture,9395,0);
#endif

#if defined __s390x__
CheckTypeSize(XdbeSwapInfo,16, 9397, 12, 1.3, NULL, 9396, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeSwapInfo,16, 9397, 11, 2.0, NULL, 9396, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeSwapInfo,8, 9397, 10, 1.3, NULL, 9396, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeSwapInfo,16, 9397, 9, 2.0, NULL, 9396, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeSwapInfo,8, 9397, 6, 1.2, NULL, 9396, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeSwapInfo,16, 9397, 3, 1.3, NULL, 9396, NULL)
#elif defined __i386__
CheckTypeSize(XdbeSwapInfo,8, 9397, 2, 1.2, NULL, 9396, NULL)
#else
Msg("Find size of XdbeSwapInfo (9397)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9396,NULL);\n",architecture,9397,0);
#endif

#if defined __s390x__
CheckTypeSize(XdbeBackBufferAttributes,8, 9399, 12, 1.3, NULL, 9398, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeBackBufferAttributes,8, 9399, 11, 2.0, NULL, 9398, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeBackBufferAttributes,4, 9399, 10, 1.3, NULL, 9398, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeBackBufferAttributes,8, 9399, 9, 2.0, NULL, 9398, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeBackBufferAttributes,4, 9399, 6, 1.2, NULL, 9398, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeBackBufferAttributes,8, 9399, 3, 1.3, NULL, 9398, NULL)
#elif defined __i386__
CheckTypeSize(XdbeBackBufferAttributes,4, 9399, 2, 1.2, NULL, 9398, NULL)
#else
Msg("Find size of XdbeBackBufferAttributes (9399)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9398,NULL);\n",architecture,9399,0);
#endif

#if defined __s390x__
CheckTypeSize(XdbeBufferError,40, 9401, 12, 1.3, NULL, 9400, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeBufferError,40, 9401, 11, 2.0, NULL, 9400, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeBufferError,20, 9401, 10, 1.3, NULL, 9400, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeBufferError,40, 9401, 9, 2.0, NULL, 9400, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeBufferError,20, 9401, 6, 1.2, NULL, 9400, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeBufferError,40, 9401, 3, 1.3, NULL, 9400, NULL)
#elif defined __i386__
CheckTypeSize(XdbeBufferError,20, 9401, 2, 1.2, NULL, 9400, NULL)
#else
Msg("Find size of XdbeBufferError (9401)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9400, NULL);\n",architecture,9401,0);
#endif

extern XdbeBackBuffer XdbeAllocateBackBufferName_db(Display *, Window, XdbeSwapAction);
CheckInterfacedef(XdbeAllocateBackBufferName,XdbeAllocateBackBufferName_db);
extern int XdbeBeginIdiom_db(Display *);
CheckInterfacedef(XdbeBeginIdiom,XdbeBeginIdiom_db);
extern int XdbeDeallocateBackBufferName_db(Display *, XdbeBackBuffer);
CheckInterfacedef(XdbeDeallocateBackBufferName,XdbeDeallocateBackBufferName_db);
extern int XdbeEndIdiom_db(Display *);
CheckInterfacedef(XdbeEndIdiom,XdbeEndIdiom_db);
extern void XdbeFreeVisualInfo_db(XdbeScreenVisualInfo *);
CheckInterfacedef(XdbeFreeVisualInfo,XdbeFreeVisualInfo_db);
extern XdbeBackBufferAttributes * XdbeGetBackBufferAttributes_db(Display *, XdbeBackBuffer);
CheckInterfacedef(XdbeGetBackBufferAttributes,XdbeGetBackBufferAttributes_db);
extern XdbeScreenVisualInfo * XdbeGetVisualInfo_db(Display *, Drawable *, int *);
CheckInterfacedef(XdbeGetVisualInfo,XdbeGetVisualInfo_db);
extern int XdbeQueryExtension_db(Display *, int *, int *);
CheckInterfacedef(XdbeQueryExtension,XdbeQueryExtension_db);
extern int XdbeSwapBuffers_db(Display *, XdbeSwapInfo *, int);
CheckInterfacedef(XdbeSwapBuffers,XdbeSwapBuffers_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in X11/extensions/Xdbe.h\n\n",pcnt,cnt);
return cnt;
#endif

}
