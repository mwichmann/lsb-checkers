/*
 * Test of X11/ObjectP.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <X11/Core.h>
#include <X11/CoreP.h>
#include "X11/ObjectP.h"



#ifdef TET_TEST
void X11_ObjectP_h()
{
#else
int X11_ObjectP_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/ObjectP.h\n");
#endif

#ifdef XtObjectExtensionVersion
	CompareConstant(XtObjectExtensionVersion,1L)
#else
Msg( "Error: Constant not found: XtObjectExtensionVersion\n");
cnt++;
#endif

#ifdef XtInheritAllocate
	CompareConstant(XtInheritAllocate,((XtAllocateProc) _XtInherit))
#else
Msg( "Error: Constant not found: XtInheritAllocate\n");
cnt++;
#endif

#ifdef XtInheritDeallocate
	CompareConstant(XtInheritDeallocate,((XtDeallocateProc) _XtInherit))
#else
Msg( "Error: Constant not found: XtInheritDeallocate\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(struct _ObjectPart,28, 10261, 2)
CheckOffset(struct _ObjectPart,self,0,2,34363)
CheckOffset(struct _ObjectPart,widget_class,4,2,34364)
CheckOffset(struct _ObjectPart,parent,8,2,34365)
CheckOffset(struct _ObjectPart,xrm_name,12,2,34366)
CheckOffset(struct _ObjectPart,being_destroyed,16,2,34367)
CheckOffset(struct _ObjectPart,destroy_callbacks,20,2,34368)
CheckOffset(struct _ObjectPart,constraints,24,2,34369)
#elif __ia64__
CheckTypeSize(struct _ObjectPart,48, 10261, 3)
#elif __powerpc__
CheckTypeSize(struct _ObjectPart,28, 10261, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10261,0);
#endif

#ifdef __i386__
CheckTypeSize(ObjectPart,28, 10264, 2)
#elif __ia64__
CheckTypeSize(ObjectPart,48, 10264, 3)
#elif __powerpc__
CheckTypeSize(ObjectPart,28, 10264, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10264,0);
#endif

#ifdef __i386__
CheckTypeSize(struct _ObjectRec,28, 10262, 2)
#elif __ia64__
CheckTypeSize(struct _ObjectRec,48, 10262, 3)
#elif __powerpc__
CheckTypeSize(struct _ObjectRec,28, 10262, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10262,0);
#endif

#ifdef __i386__
CheckTypeSize(ObjectRec,28, 10263, 2)
#elif __ia64__
CheckTypeSize(ObjectRec,48, 10263, 3)
#elif __powerpc__
CheckTypeSize(ObjectRec,28, 10263, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10263,0);
#endif

#ifdef __i386__
CheckTypeSize(struct _ObjectClassPart,116, 10265, 2)
CheckOffset(struct _ObjectClassPart,superclass,0,2,34370)
#elif __ia64__
CheckTypeSize(struct _ObjectClassPart,224, 10265, 3)
#elif __powerpc__
CheckTypeSize(struct _ObjectClassPart,116, 10265, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10265,0);
#endif

#ifdef __i386__
CheckTypeSize(ObjectClassPart,116, 10266, 2)
#elif __ia64__
CheckTypeSize(ObjectClassPart,224, 10266, 3)
#elif __powerpc__
CheckTypeSize(ObjectClassPart,116, 10266, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10266,0);
#endif

#ifdef __i386__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 2)
#elif __ia64__
CheckTypeSize(ObjectClassExtensionRec,48, 10268, 3)
#elif __powerpc__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10268,0);
#endif

#ifdef __i386__
CheckTypeSize(ObjectClassExtension,4, 10270, 2)
#elif __ia64__
CheckTypeSize(ObjectClassExtension,8, 10270, 3)
#elif __powerpc__
CheckTypeSize(ObjectClassExtension,4, 10270, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10270,0);
#endif

#ifdef __i386__
CheckTypeSize(struct _ObjectClassRec,116, 10271, 2)
#elif __ia64__
CheckTypeSize(struct _ObjectClassRec,224, 10271, 3)
#elif __powerpc__
CheckTypeSize(struct _ObjectClassRec,116, 10271, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10271,0);
#endif

#ifdef __i386__
CheckTypeSize(ObjectClassRec,116, 10272, 2)
#elif __ia64__
CheckTypeSize(ObjectClassRec,224, 10272, 3)
#elif __powerpc__
CheckTypeSize(ObjectClassRec,116, 10272, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10272,0);
#endif

#ifdef __i386__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10267,0);
#endif

#ifdef __i386__
#elif __ia64__
#elif __powerpc__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10269,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/ObjectP.h\n",cnt);
return cnt;
#endif

}
