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
CheckTypeSize(XcmsColorFormat,4,8320)
#elif __ia64__
CheckTypeSize(XcmsColorFormat,8,8320)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8320,0);
#endif
#ifdef __i386__
CheckTypeSize(XcmsFloat,8,8321)
#elif __ia64__
CheckTypeSize(XcmsFloat,8,8321)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8321,0);
#endif
#ifdef __i386__
CheckTypeSize(XcmsCCC,4,8853)
#elif __ia64__
CheckTypeSize(XcmsCCC,8,8853)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8853,0);
#endif
#ifdef __i386__
CheckTypeSize(XcmsCompressionProc,4,8856)
#elif __ia64__
CheckTypeSize(XcmsCompressionProc,8,8856)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8856,0);
#endif
#ifdef __i386__
CheckTypeSize(XcmsWhiteAdjustProc,4,8858)
#elif __ia64__
CheckTypeSize(XcmsWhiteAdjustProc,8,8858)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8858,0);
#endif
printf("%d tests in X11/Xcms.h\n",cnt);
return cnt;
}
