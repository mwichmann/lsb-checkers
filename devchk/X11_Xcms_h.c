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
CheckTypeSize(XcmsWhiteAdjustProc,0)
CheckTypeSize(XcmsCompressionProc,0)
CheckTypeSize(XcmsCCC,0)
CheckTypeSize(XcmsFloat,0)
CheckTypeSize(XcmsColorFormat,0)
printf("%d tests in X11/Xcms.h\n",cnt);
return cnt;
}
