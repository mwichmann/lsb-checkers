/*
 * Test of X11/Xcms.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <X11/Xlib.h>
#include "X11/Xcms.h"



int X11_Xcms_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(XcmsColorFormat,4,6569)
#elif __ia64__
CheckTypeSize(XcmsColorFormat,8,6569)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6569,0);
#endif
#ifdef __i386__
CheckTypeSize(XcmsFloat,8,6570)
#elif __ia64__
CheckTypeSize(XcmsFloat,8,6570)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6570,0);
#endif
#ifdef __i386__
CheckTypeSize(XcmsCCC,4,6595)
#elif __ia64__
CheckTypeSize(XcmsCCC,8,6595)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6595,0);
#endif
#ifdef __i386__
CheckTypeSize(XcmsCompressionProc,4,6596)
#elif __ia64__
CheckTypeSize(XcmsCompressionProc,8,6596)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6596,0);
#endif
#ifdef __i386__
CheckTypeSize(XcmsWhiteAdjustProc,4,6597)
#elif __ia64__
CheckTypeSize(XcmsWhiteAdjustProc,8,6597)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6597,0);
#endif
printf("%d tests in X11/Xcms.h\n",cnt);
return cnt;
}
