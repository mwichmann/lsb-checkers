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
CheckTypeSize(XcmsRGBi,24)
CheckTypeSize(XcmsCIEXYZ,24)
CheckTypeSize(XcmsCIEuvY,24)
CheckTypeSize(XcmsCIExyY,24)
CheckTypeSize(XcmsCIELab,24)
CheckTypeSize(XcmsCIELuv,24)
CheckTypeSize(XcmsTekHVC,24)
CheckTypeSize(XcmsPad,32)
CheckTypeSize(XcmsColor,40)
CheckTypeSize(struct _XcmsPerScrnInfo,0)
CheckOffset(struct _XcmsPerScrnInfo,screenWhitePt,0)
CheckOffset(struct _XcmsPerScrnInfo,functionSet,40)
CheckOffset(struct _XcmsPerScrnInfo,screenData,44)
CheckOffset(struct _XcmsPerScrnInfo,state,8)
CheckOffset(struct _XcmsPerScrnInfo,pad,49)
CheckTypeSize(XcmsPerScrnInfo,52)
CheckTypeSize(struct _XcmsCCC,0)
CheckOffset(struct _XcmsCCC,dpy,0)
CheckOffset(struct _XcmsCCC,screenNumber,4)
CheckOffset(struct _XcmsCCC,visual,8)
CheckOffset(struct _XcmsCCC,clientWhitePt,12)
CheckOffset(struct _XcmsCCC,gamutCompProc,52)
CheckOffset(struct _XcmsCCC,gamutCompClientData,56)
CheckOffset(struct _XcmsCCC,whitePtAdjProc,60)
CheckOffset(struct _XcmsCCC,whitePtAdjClientData,64)
CheckOffset(struct _XcmsCCC,pPerScrnInfo,68)
CheckTypeSize(XcmsCCC,4)
CheckTypeSize(XcmsCompressionProc,4)
CheckTypeSize(XcmsWhiteAdjustProc,4)
CheckTypeSize(XcmsCCCRec,72)
CheckTypeSize(XcmsScreenInitProc,4)
CheckTypeSize(XcmsScreenFreeProc,4)
CheckTypeSize(XcmsConversionProc,4)
CheckTypeSize(XcmsFuncListPtr,4)
CheckTypeSize(XcmsParseStringProc,4)
CheckTypeSize(struct _XcmsColorSpace,0)
CheckOffset(struct _XcmsColorSpace,prefix,0)
CheckOffset(struct _XcmsColorSpace,id,4)
CheckOffset(struct _XcmsColorSpace,parseString,8)
CheckOffset(struct _XcmsColorSpace,to_CIEXYZ,12)
CheckOffset(struct _XcmsColorSpace,from_CIEXYZ,16)
CheckOffset(struct _XcmsColorSpace,inverse_flag,20)
CheckTypeSize(XcmsColorSpace,24)
CheckTypeSize(struct _XcmsFunctionSet,0)
CheckOffset(struct _XcmsFunctionSet,DDColorSpaces,0)
CheckOffset(struct _XcmsFunctionSet,screenInitProc,4)
CheckOffset(struct _XcmsFunctionSet,screenFreeProc,8)
CheckTypeSize(XcmsFunctionSet,12)
CheckTypeSize(XcmsRGB,6)
CheckTypeSize(XcmsFloat,8)
CheckTypeSize(XcmsColorFormat,4)
printf("%d tests in X11/Xcms.h\n",cnt);
return cnt;
}
