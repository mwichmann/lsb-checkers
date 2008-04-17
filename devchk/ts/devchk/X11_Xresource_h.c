/*
 * Test of X11/Xresource.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xresource.h\n");
#endif

printf("Checking data structures in X11/Xresource.h\n");
#if defined __i386__
CheckTypeSize(XrmQuark,4, 9542, 2, 1.2, NULL, 6, NULL)
#else
Msg("Find size of XrmQuark (9542)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,6,NULL);\n",architecture,9542,0);
#endif

#if defined __i386__
CheckTypeSize(XrmQuarkList,4, 9543, 2, 1.2, NULL, 60, NULL)
#else
Msg("Find size of XrmQuarkList (9543)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,60,NULL);\n",architecture,9543,0);
#endif

#if defined __i386__
CheckTypeSize(XrmString,4, 9544, 2, 1.2, NULL, 63, NULL)
#else
Msg("Find size of XrmString (9544)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,63,NULL);\n",architecture,9544,0);
#endif

#if 1
CheckEnum("XrmBindTightly",XrmBindTightly,0,31588)
CheckEnum("XrmBindLoosely",XrmBindLoosely,(0) + 1,31589)
#endif

#if 1
CheckTypeSize(XrmBinding,0, 9546, 1, 1.2, NULL, 9545, NULL)
#endif

#if 1
CheckEnum("XrmBindTightly",XrmBindTightly,0,31590)
CheckEnum("XrmBindLoosely",XrmBindLoosely,(0) + 1,31591)
#endif

#if defined __i386__
CheckTypeSize(XrmBindingList,4, 9549, 2, 1.2, NULL, 9548, NULL)
#else
Msg("Find size of XrmBindingList (9549)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9548,NULL);\n",architecture,9549,0);
#endif

#if defined __i386__
CheckTypeSize(XrmName,4, 9550, 2, 1.2, NULL, 9542, NULL)
#else
Msg("Find size of XrmName (9550)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9542,NULL);\n",architecture,9550,0);
#endif

#if defined __i386__
CheckTypeSize(XrmNameList,4, 9551, 2, 1.2, NULL, 9543, NULL)
#else
Msg("Find size of XrmNameList (9551)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9543,NULL);\n",architecture,9551,0);
#endif

#if defined __i386__
CheckTypeSize(XrmClass,4, 9552, 2, 1.2, NULL, 9542, NULL)
#else
Msg("Find size of XrmClass (9552)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9542,NULL);\n",architecture,9552,0);
#endif

#if defined __i386__
CheckTypeSize(XrmClassList,4, 9553, 2, 1.2, NULL, 9543, NULL)
#else
Msg("Find size of XrmClassList (9553)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9543,NULL);\n",architecture,9553,0);
#endif

#if defined __i386__
CheckTypeSize(XrmRepresentation,4, 9554, 2, 1.2, NULL, 9542, NULL)
#else
Msg("Find size of XrmRepresentation (9554)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9542,NULL);\n",architecture,9554,0);
#endif

#if 1
CheckTypeSize(XrmValue,0, 9556, 1, 1.2, NULL, 9555, NULL)
#endif

#if defined __i386__
CheckTypeSize(XrmValuePtr,4, 9559, 2, 1.2, NULL, 9558, NULL)
#else
Msg("Find size of XrmValuePtr (9559)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9558,NULL);\n",architecture,9559,0);
#endif

#if 1
CheckTypeSize(XrmHashBucket,0, 9560, 1, 1.2, NULL, 7107, NULL)
#endif

#if 1
CheckTypeSize(XrmHashTable,0, 9562, 1, 1.2, NULL, 9561, NULL)
#endif

#if defined __i386__
CheckTypeSize(XrmSearchList,0, 9563, 2, 1.2, NULL, 9562, NULL)
#else
Msg("Find size of XrmSearchList (9563)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9562,NULL);\n",architecture,9563,0);
#endif

#if defined __i386__
CheckTypeSize(XrmDatabase,4, 9564, 2, 1.2, NULL, 7107, NULL)
#else
Msg("Find size of XrmDatabase (9564)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7107,NULL);\n",architecture,9564,0);
#endif

#if 1
CheckEnum("XrmoptionNoArg",XrmoptionNoArg,0,31596)
CheckEnum("XrmoptionIsArg",XrmoptionIsArg,(0) + 1,31597)
CheckEnum("XrmoptionStickyArg",XrmoptionStickyArg,((0) + 1) + 1,31598)
CheckEnum("XrmoptionSepArg",XrmoptionSepArg,(((0) + 1) + 1) + 1,31599)
CheckEnum("XrmoptionResArg",XrmoptionResArg,((((0) + 1) + 1) + 1) + 1,31600)
CheckEnum("XrmoptionSkipArg",XrmoptionSkipArg,(((((0) + 1) + 1) + 1) + 1) + 1,31601)
CheckEnum("XrmoptionSkipLine",XrmoptionSkipLine,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,31602)
CheckEnum("XrmoptionSkipNArgs",XrmoptionSkipNArgs,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,31603)
#endif

#if 1
CheckTypeSize(XrmOptionKind,0, 9569, 1, 1.2, NULL, 9568, NULL)
#endif

#if 1
CheckTypeSize(XrmOptionDescRec,0, 9571, 1, 1.2, NULL, 9570, NULL)
#endif

#if defined __i386__
CheckTypeSize(XrmOptionDescList,4, 9574, 2, 1.2, NULL, 9573, NULL)
#else
Msg("Find size of XrmOptionDescList (9574)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9573,NULL);\n",architecture,9574,0);
#endif

#if 1
CheckTypeSize(XrmQuark *,0, 100518, 1, 1.2, NULL, 9542, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xresource.h\n\n",pcnt,cnt);
return cnt;
#endif

}
