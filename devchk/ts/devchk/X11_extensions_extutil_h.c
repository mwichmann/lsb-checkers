/*
 * Test of X11/extensions/extutil.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/extensions/extutil.h"



#ifdef TET_TEST
void X11_extensions_extutil_h()
{
#else
int X11_extensions_extutil_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/extutil.h\n");
#endif

printf("Checking data structures in X11/extensions/extutil.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XextHasExtension(i) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XextCheckExtension(dpy,i,name,val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XextSimpleCheckExtension(dpy,i,name) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XEXT_GENERATE_FIND_DISPLAY(proc,extinfo,extname,hooks,nev,data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XEXT_FIND_DISPLAY_PROTO(proc) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XEXT_GENERATE_CLOSE_DISPLAY(proc,extinfo) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XEXT_CLOSE_DISPLAY_PROTO(proc) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XEXT_GENERATE_ERROR_STRING(proc,extname,nerr,errl) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XEXT_ERROR_STRING_PROTO(proc) */
#endif

#if 1
CheckTypeSize(struct _XExtDisplayInfo,0, 1007945, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _XExtDisplayInfo on All\n");
CheckOffset(struct _XExtDisplayInfo,next,0,1,211209)
CheckOffset(struct _XExtDisplayInfo,display,0,1,211210)
CheckOffset(struct _XExtDisplayInfo,codes,0,1,211211)
CheckOffset(struct _XExtDisplayInfo,data,0,1,211212)
#endif

#if 1
CheckTypeSize(XExtDisplayInfo,0, 1007946, 1, 4.0, NULL, 1007945, NULL)
#endif

#if 1
CheckTypeSize(struct _XExtensionInfo,0, 1007948, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _XExtensionInfo on All\n");
CheckOffset(struct _XExtensionInfo,head,0,1,211213)
CheckOffset(struct _XExtensionInfo,cur,0,1,211214)
CheckOffset(struct _XExtensionInfo,ndisplays,0,1,211215)
#endif

#if 1
CheckTypeSize(XExtensionInfo,0, 1007949, 1, 4.0, NULL, 1007948, NULL)
#endif

#if 1
CheckTypeSize(struct _XExtensionHooks,0, 1007950, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _XExtensionHooks on All\n");
CheckOffset(struct _XExtensionHooks,create_gc,0,1,211216)
CheckOffset(struct _XExtensionHooks,copy_gc,0,1,211217)
CheckOffset(struct _XExtensionHooks,flush_gc,0,1,211218)
CheckOffset(struct _XExtensionHooks,free_gc,0,1,211219)
CheckOffset(struct _XExtensionHooks,create_font,0,1,211220)
CheckOffset(struct _XExtensionHooks,free_font,0,1,211221)
CheckOffset(struct _XExtensionHooks,close_display,0,1,211222)
CheckOffset(struct _XExtensionHooks,wire_to_event,0,1,211223)
CheckOffset(struct _XExtensionHooks,event_to_wire,0,1,211224)
CheckOffset(struct _XExtensionHooks,error,0,1,211225)
CheckOffset(struct _XExtensionHooks,error_string,0,1,211226)
#endif

#if 1
CheckTypeSize(XExtensionHooks,0, 1007951, 1, 4.0, NULL, 1007950, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/extutil.h\n\n",pcnt,cnt);
return cnt;
#endif

}
