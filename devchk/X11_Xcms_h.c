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
CheckTypeSize(XcmsColor,40)
CheckTypeSize(XcmsCCC,4)
CheckTypeSize(XcmsCompressionProc,4)
CheckTypeSize(XcmsWhiteAdjustProc,4)
CheckTypeSize(XcmsColorSpace,24)
CheckTypeSize(XcmsFunctionSet,12)
CheckTypeSize(XcmsFloat,8)
CheckTypeSize(XcmsColorFormat,4)
printf("%d tests in X11/Xcms.h\n",cnt);
return cnt;
}
