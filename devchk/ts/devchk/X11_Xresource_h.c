/*
 * Test of X11/Xresource.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/Xresource.h"



#ifdef TET_TEST
void X11_Xresource_h()
{
#else
int X11_Xresource_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/Xresource.h\n");
#endif

#ifdef __i386__
CheckTypeSize(XrmQuark,4, 9542, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9542,0);
#endif

#ifdef __i386__
CheckTypeSize(XrmQuarkList,4, 9543, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9543,0);
#endif

#ifdef __i386__
CheckTypeSize(XrmString,4, 9544, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9544,0);
#endif

#ifdef __i386__
CheckTypeSize(XrmBindingList,4, 9549, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9549,0);
#endif

#ifdef __i386__
CheckTypeSize(XrmName,4, 9550, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9550,0);
#endif

#ifdef __i386__
CheckTypeSize(XrmNameList,4, 9551, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9551,0);
#endif

#ifdef __i386__
CheckTypeSize(XrmClass,4, 9552, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9552,0);
#endif

#ifdef __i386__
CheckTypeSize(XrmClassList,4, 9553, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9553,0);
#endif

#ifdef __i386__
CheckTypeSize(XrmRepresentation,4, 9554, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9554,0);
#endif

#ifdef __i386__
CheckTypeSize(XrmValuePtr,4, 9559, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9559,0);
#endif

#ifdef __i386__
CheckTypeSize(XrmDatabase,4, 9564, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9564,0);
#endif

#ifdef __i386__
CheckTypeSize(XrmOptionDescList,4, 9574, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9574,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/Xresource.h\n",cnt);
return cnt;
#endif

}
