/*
 * Test of X11/Xutil.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/Xutil.h"



int X11_Xutil_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(Region,4,8314)
#elif __ia64__
CheckTypeSize(Region,8,8314)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8314,0);
#endif
#ifdef __i386__
CheckTypeSize(XContext,4,8319)
#elif __ia64__
CheckTypeSize(XContext,4,8319)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8319,0);
#endif
#ifdef __i386__
CheckTypeSize(XICCEncodingStyle,4,8832)
#elif __ia64__
CheckTypeSize(XICCEncodingStyle,4,8832)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8832,0);
#endif
printf("%d tests in X11/Xutil.h\n",cnt);
return cnt;
}
