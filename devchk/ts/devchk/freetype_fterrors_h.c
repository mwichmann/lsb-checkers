/*
 * Test of freetype/fterrors.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/fterrors.h"



#ifdef TET_TEST
void freetype_fterrors_h()
{
#else
int freetype_fterrors_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/fterrors.h\n");
#endif

printf("Checking data structures in freetype/fterrors.h\n");
#if 1
CheckEnum("FT_Err_Ok",FT_Err_Ok,0x00,65065)
CheckEnum("FT_Err_Cannot_Open_Resource",FT_Err_Cannot_Open_Resource,0x01,65066)
CheckEnum("FT_Err_Unknown_File_Format",FT_Err_Unknown_File_Format,0x02,65067)
CheckEnum("FT_Err_Invalid_File_Format",FT_Err_Invalid_File_Format,0x03,65068)
CheckEnum("FT_Err_Invalid_Version",FT_Err_Invalid_Version,0x04,65069)
CheckEnum("FT_Err_Lower_Module_Version",FT_Err_Lower_Module_Version,0x05,65070)
CheckEnum("FT_Err_Invalid_Argument",FT_Err_Invalid_Argument,0x06,65071)
CheckEnum("FT_Err_Unimplemented_Feature",FT_Err_Unimplemented_Feature,0x07,65072)
CheckEnum("FT_Err_Invalid_Table",FT_Err_Invalid_Table,0x08,65073)
CheckEnum("FT_Err_Invalid_Offset",FT_Err_Invalid_Offset,0x09,65074)
CheckEnum("FT_Err_Array_Too_Large",FT_Err_Array_Too_Large,0x0A,65075)
CheckEnum("FT_Err_Invalid_Glyph_Index",FT_Err_Invalid_Glyph_Index,0x10,65076)
CheckEnum("FT_Err_Invalid_Character_Code",FT_Err_Invalid_Character_Code,0x11,65077)
CheckEnum("FT_Err_Invalid_Glyph_Format",FT_Err_Invalid_Glyph_Format,0x12,65078)
CheckEnum("FT_Err_Cannot_Render_Glyph",FT_Err_Cannot_Render_Glyph,0x13,65079)
CheckEnum("FT_Err_Invalid_Outline",FT_Err_Invalid_Outline,0x14,65080)
CheckEnum("FT_Err_Invalid_Composite",FT_Err_Invalid_Composite,0x15,65081)
CheckEnum("FT_Err_Too_Many_Hints",FT_Err_Too_Many_Hints,0x16,65082)
CheckEnum("FT_Err_Invalid_Pixel_Size",FT_Err_Invalid_Pixel_Size,0x17,65083)
CheckEnum("FT_Err_Invalid_Handle",FT_Err_Invalid_Handle,0x20,65084)
CheckEnum("FT_Err_Invalid_Library_Handle",FT_Err_Invalid_Library_Handle,0x21,65085)
CheckEnum("FT_Err_Invalid_Driver_Handle",FT_Err_Invalid_Driver_Handle,0x22,65086)
CheckEnum("FT_Err_Invalid_Face_Handle",FT_Err_Invalid_Face_Handle,0x23,65087)
CheckEnum("FT_Err_Invalid_Size_Handle",FT_Err_Invalid_Size_Handle,0x24,65088)
CheckEnum("FT_Err_Invalid_Slot_Handle",FT_Err_Invalid_Slot_Handle,0x25,65089)
CheckEnum("FT_Err_Invalid_CharMap_Handle",FT_Err_Invalid_CharMap_Handle,0x26,65090)
CheckEnum("FT_Err_Invalid_Cache_Handle",FT_Err_Invalid_Cache_Handle,0x27,65091)
CheckEnum("FT_Err_Invalid_Stream_Handle",FT_Err_Invalid_Stream_Handle,0x28,65092)
CheckEnum("FT_Err_Too_Many_Drivers",FT_Err_Too_Many_Drivers,0x30,65093)
CheckEnum("FT_Err_Too_Many_Extensions",FT_Err_Too_Many_Extensions,0x31,65094)
CheckEnum("FT_Err_Out_Of_Memory",FT_Err_Out_Of_Memory,0x40,65095)
CheckEnum("FT_Err_Unlisted_Object",FT_Err_Unlisted_Object,0x41,65096)
CheckEnum("FT_Err_Cannot_Open_Stream",FT_Err_Cannot_Open_Stream,0x51,65097)
CheckEnum("FT_Err_Invalid_Stream_Seek",FT_Err_Invalid_Stream_Seek,0x52,65098)
CheckEnum("FT_Err_Invalid_Stream_Skip",FT_Err_Invalid_Stream_Skip,0x53,65099)
CheckEnum("FT_Err_Invalid_Stream_Read",FT_Err_Invalid_Stream_Read,0x54,65100)
CheckEnum("FT_Err_Invalid_Stream_Operation",FT_Err_Invalid_Stream_Operation,0x55,65101)
CheckEnum("FT_Err_Invalid_Frame_Operation",FT_Err_Invalid_Frame_Operation,0x56,65102)
CheckEnum("FT_Err_Nested_Frame_Access",FT_Err_Nested_Frame_Access,0x57,65103)
CheckEnum("FT_Err_Invalid_Frame_Read",FT_Err_Invalid_Frame_Read,0x58,65104)
CheckEnum("FT_Err_Raster_Uninitialized",FT_Err_Raster_Uninitialized,0x60,65105)
CheckEnum("FT_Err_Raster_Corrupted",FT_Err_Raster_Corrupted,0x61,65106)
CheckEnum("FT_Err_Raster_Overflow",FT_Err_Raster_Overflow,0x62,65107)
CheckEnum("FT_Err_Raster_Negative_Height",FT_Err_Raster_Negative_Height,0x63,65108)
CheckEnum("FT_Err_Too_Many_Caches",FT_Err_Too_Many_Caches,0x70,65109)
CheckEnum("FT_Err_Invalid_Opcode",FT_Err_Invalid_Opcode,0x80,65110)
CheckEnum("FT_Err_Too_Few_Arguments",FT_Err_Too_Few_Arguments,0x81,65111)
CheckEnum("FT_Err_Stack_Overflow",FT_Err_Stack_Overflow,0x82,65112)
CheckEnum("FT_Err_Code_Overflow",FT_Err_Code_Overflow,0x83,65113)
CheckEnum("FT_Err_Bad_Argument",FT_Err_Bad_Argument,0x84,65114)
CheckEnum("FT_Err_Divide_By_Zero",FT_Err_Divide_By_Zero,0x85,65115)
CheckEnum("FT_Err_Invalid_Reference",FT_Err_Invalid_Reference,0x86,65116)
CheckEnum("FT_Err_Debug_OpCode",FT_Err_Debug_OpCode,0x87,65117)
CheckEnum("FT_Err_ENDF_In_Exec_Stream",FT_Err_ENDF_In_Exec_Stream,0x88,65118)
CheckEnum("FT_Err_Nested_DEFS",FT_Err_Nested_DEFS,0x89,65119)
CheckEnum("FT_Err_Invalid_CodeRange",FT_Err_Invalid_CodeRange,0x8A,65120)
CheckEnum("FT_Err_Execution_Too_Long",FT_Err_Execution_Too_Long,0x8B,65121)
CheckEnum("FT_Err_Too_Many_Function_Defs",FT_Err_Too_Many_Function_Defs,0x8C,65122)
CheckEnum("FT_Err_Too_Many_Instruction_Defs",FT_Err_Too_Many_Instruction_Defs,0x8D,65123)
CheckEnum("FT_Err_Table_Missing",FT_Err_Table_Missing,0x8E,65124)
CheckEnum("FT_Err_Horiz_Header_Missing",FT_Err_Horiz_Header_Missing,0x8F,65125)
CheckEnum("FT_Err_Locations_Missing",FT_Err_Locations_Missing,0x90,65126)
CheckEnum("FT_Err_Name_Table_Missing",FT_Err_Name_Table_Missing,0x91,65127)
CheckEnum("FT_Err_CMap_Table_Missing",FT_Err_CMap_Table_Missing,0x92,65128)
CheckEnum("FT_Err_Hmtx_Table_Missing",FT_Err_Hmtx_Table_Missing,0x93,65129)
CheckEnum("FT_Err_Post_Table_Missing",FT_Err_Post_Table_Missing,0x94,65130)
CheckEnum("FT_Err_Invalid_Horiz_Metrics",FT_Err_Invalid_Horiz_Metrics,0x95,65131)
CheckEnum("FT_Err_Invalid_CharMap_Format",FT_Err_Invalid_CharMap_Format,0x96,65132)
CheckEnum("FT_Err_Invalid_PPem",FT_Err_Invalid_PPem,0x97,65133)
CheckEnum("FT_Err_Invalid_Vert_Metrics",FT_Err_Invalid_Vert_Metrics,0x98,65134)
CheckEnum("FT_Err_Could_Not_Find_Context",FT_Err_Could_Not_Find_Context,0x99,65135)
CheckEnum("FT_Err_Invalid_Post_Table_Format",FT_Err_Invalid_Post_Table_Format,0x9A,65136)
CheckEnum("FT_Err_Invalid_Post_Table",FT_Err_Invalid_Post_Table,0x9B,65137)
CheckEnum("FT_Err_Syntax_Error",FT_Err_Syntax_Error,0xA0,65138)
CheckEnum("FT_Err_Stack_Underflow",FT_Err_Stack_Underflow,0xA1,65139)
CheckEnum("FT_Err_Ignore",FT_Err_Ignore,0xA2,65140)
CheckEnum("FT_Err_Missing_Startfont_Field",FT_Err_Missing_Startfont_Field,0xB0,65141)
CheckEnum("FT_Err_Missing_Font_Field",FT_Err_Missing_Font_Field,0xB1,65142)
CheckEnum("FT_Err_Missing_Size_Field",FT_Err_Missing_Size_Field,0xB2,65143)
CheckEnum("FT_Err_Missing_Chars_Field",FT_Err_Missing_Chars_Field,0xB3,65144)
CheckEnum("FT_Err_Missing_Startchar_Field",FT_Err_Missing_Startchar_Field,0xB4,65145)
CheckEnum("FT_Err_Missing_Encoding_Field",FT_Err_Missing_Encoding_Field,0xB5,65146)
CheckEnum("FT_Err_Missing_Bbx_Field",FT_Err_Missing_Bbx_Field,0xB6,65147)
CheckEnum("FT_Err_Bbx_Too_Big",FT_Err_Bbx_Too_Big,0xB7,65148)
CheckEnum("FT_Err_Max",FT_Err_Max,0xB8,65149)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/fterrors.h\n\n",pcnt,cnt);
return cnt;
#endif

}
