/*
 * Test of X11/extensions/XKBgeom.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/extensions/XKBgeom.h\n");
#endif

#ifdef __i386__
CheckTypeSize(XkbBoundsPtr,4, 9422, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9422,0);
#endif

#ifdef __i386__
CheckTypeSize(XkbOutlinePtr,4, 9426, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9426,0);
#endif

#ifdef __i386__
CheckTypeSize(XkbShapePtr,4, 9430, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9430,0);
#endif

#ifdef __i386__
CheckTypeSize(XkbDoodadPtr,4, 9454, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9454,0);
#endif

#ifdef __i386__
CheckTypeSize(XkbRowPtr,4, 9463, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9463,0);
#endif

#ifdef __i386__
CheckTypeSize(XkbSectionPtr,4, 9469, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9469,0);
#endif

#ifdef __i386__
CheckTypeSize(XkbOverlayRowPtr,4, 9477, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9477,0);
#endif

#ifdef __i386__
CheckTypeSize(XkbOverlayPtr,4, 9479, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9479,0);
#endif

#ifdef __i386__
CheckTypeSize(XkbGeometrySizesPtr,4, 9486, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9486,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/extensions/XKBgeom.h\n",cnt);
return cnt;
#endif

}
