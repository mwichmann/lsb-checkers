/*
 * Test of freetype/ftmodapi.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/ftmodapi.h"



#ifdef TET_TEST
void freetype_ftmodapi_h()
{
#else
int freetype_ftmodapi_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftmodapi.h\n");
#endif

printf("Checking data structures in freetype/ftmodapi.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_DRIVER_HAS_HINTER
	CompareConstant(FT_MODULE_DRIVER_HAS_HINTER,0x400,10446,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_DRIVER_HAS_HINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_DRIVER_NO_OUTLINES
	CompareConstant(FT_MODULE_DRIVER_NO_OUTLINES,0x200,10447,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_DRIVER_NO_OUTLINES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_DRIVER_SCALABLE
	CompareConstant(FT_MODULE_DRIVER_SCALABLE,0x100,10448,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_DRIVER_SCALABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_FONT_DRIVER
	CompareConstant(FT_MODULE_FONT_DRIVER,1,10449,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_FONT_DRIVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_HINTER
	CompareConstant(FT_MODULE_HINTER,4,10450,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_HINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_RENDERER
	CompareConstant(FT_MODULE_RENDERER,2,10451,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_RENDERER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_STYLER
	CompareConstant(FT_MODULE_STYLER,8,10452,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_STYLER\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct FT_Module_Class_,36, 16753, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Module_Class_ on All\n");
CheckOffset(struct FT_Module_Class_,module_flags,0,1,53974)
CheckOffset(struct FT_Module_Class_,module_size,0,1,53975)
CheckOffset(struct FT_Module_Class_,module_name,0,1,53976)
CheckOffset(struct FT_Module_Class_,module_version,0,1,53977)
CheckOffset(struct FT_Module_Class_,module_requires,0,1,53978)
CheckOffset(struct FT_Module_Class_,module_interface,0,1,53979)
CheckOffset(struct FT_Module_Class_,module_init,0,1,53981)
CheckOffset(struct FT_Module_Class_,module_done,0,1,53983)
CheckOffset(struct FT_Module_Class_,get_interface,0,1,53986)
#endif

#if 1
CheckTypeSize(FT_Module_Constructor,0, 16763, 1, 3.2, NULL, 16762, NULL)
#endif

#if 1
CheckTypeSize(FT_Module_Destructor,0, 16765, 1, 3.2, NULL, 16764, NULL)
#endif

#if 1
CheckTypeSize(FT_Module_Interface,0, 16767, 1, 3.2, NULL, 16766, NULL)
#endif

#if 1
CheckTypeSize(FT_Module_Requester,0, 16769, 1, 3.2, NULL, 16768, NULL)
#endif

#if 1
CheckTypeSize(FT_Module_Class,0, 16770, 1, 3.2, NULL, 16753, NULL)
#endif

#if 1
CheckTypeSize(FT_DebugHook_Func,0, 16868, 1, 3.2, NULL, 6988, NULL)
#endif

extern FT_Module FT_Get_Module_db(FT_Library, const char *);
CheckInterfacedef(FT_Get_Module,FT_Get_Module_db);
extern FT_Error FT_Done_Library_db(FT_Library);
CheckInterfacedef(FT_Done_Library,FT_Done_Library_db);
extern void FT_Set_Debug_Hook_db(FT_Library, FT_UInt, FT_DebugHook_Func);
CheckInterfacedef(FT_Set_Debug_Hook,FT_Set_Debug_Hook_db);
extern void FT_Add_Default_Modules_db(FT_Library);
CheckInterfacedef(FT_Add_Default_Modules,FT_Add_Default_Modules_db);
extern FT_Error FT_New_Library_db(FT_Memory, FT_Library *);
CheckInterfacedef(FT_New_Library,FT_New_Library_db);
extern FT_Error FT_Remove_Module_db(FT_Library, FT_Module);
CheckInterfacedef(FT_Remove_Module,FT_Remove_Module_db);
extern FT_Error FT_Add_Module_db(FT_Library, const FT_Module_Class *);
CheckInterfacedef(FT_Add_Module,FT_Add_Module_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftmodapi.h\n\n",pcnt,cnt);
return cnt;
#endif

}
