/*
 * Test of freetype/fterrdef.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/fterrdef.h"



#ifdef TET_TEST
void freetype_fterrdef_h()
{
#else
int freetype_fterrdef_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/fterrdef.h\n");
#endif

printf("Checking data structures in freetype/fterrdef.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Bad_Argument, 0x84, "bad argument" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Cannot_Open_Resource, 0x01, "cannot open resource" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Cannot_Open_Stream, 0x51, "cannot open stream" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Cannot_Render_Glyph, 0x13, "cannot render this glyph format" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( CMap_Table_Missing, 0x92, "character map (cmap) table missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Code_Overflow, 0x83, "code overflow" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Could_Not_Find_Context, 0x99, "could not find context" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Debug_OpCode, 0x87, "found debug opcode" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Divide_By_Zero, 0x85, "division by zero" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( ENDF_In_Exec_Stream, 0x88, "found ENDF opcode in execution stream" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Execution_Too_Long, 0x8B, "execution context too long" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Hmtx_Table_Missing, 0x93, "horizontal metrics (hmtx) table missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Horiz_Header_Missing, 0x8F, "horizontal header (hhea) table missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Ignore, 0xA2, "ignore" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Argument, 0x06, "invalid argument" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Cache_Handle, 0x27, "invalid cache manager handle" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Character_Code, 0x11, "invalid character code" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_CharMap_Format, 0x96, "invalid character map (cmap) format" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_CharMap_Handle, 0x26, "invalid charmap handle" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_CodeRange, 0x8A, "invalid code range" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Composite, 0x15, "invalid composite glyph" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Driver_Handle, 0x22, "invalid module handle" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Face_Handle, 0x23, "invalid face handle" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_File_Format, 0x03, "broken file" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Frame_Operation, 0x56, "invalid frame operation" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Frame_Read, 0x58, "invalid frame read" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Glyph_Format, 0x12, "unsupported glyph image format" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Glyph_Index, 0x10, "invalid glyph index" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Handle, 0x20, "invalid object handle" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Horiz_Metrics, 0x95, "invalid horizontal metrics" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Library_Handle, 0x21, "invalid library handle" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Offset, 0x09, "broken offset within table" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Opcode, 0x80, "invalid opcode" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Outline, 0x14, "invalid outline" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Pixel_Size, 0x17, "invalid pixel size" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Post_Table, 0x9B, "invalid PostScript (post) table" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Post_Table_Format, 0x9A, "invalid PostScript (post) table format" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_PPem, 0x97, "invalid ppem value" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Reference, 0x86, "invalid reference" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Size_Handle, 0x24, "invalid size handle" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Slot_Handle, 0x25, "invalid glyph slot handle" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Stream_Handle, 0x28, "invalid stream handle" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Stream_Operation, 0x55, "invalid stream operation" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Stream_Read, 0x54, "invalid stream read" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Stream_Seek, 0x52, "invalid stream seek" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Stream_Skip, 0x53, "invalid stream skip" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Table, 0x08, "broken table" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Version, 0x04, "invalid FreeType version" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Invalid_Vert_Metrics, 0x98, "invalid vertical metrics" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Locations_Missing, 0x90, "locations (loca) table missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Lower_Module_Version, 0x05, "module version is too low" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Missing_Chars_Field, 0xB3, "`CHARS' field missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Missing_Encoding_Field, 0xB5, "`ENCODING' field missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Missing_Font_Field, 0xB1, "`FONT' field missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Missing_Size_Field, 0xB2, "`SIZE' field missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Missing_Startchar_Field, 0xB4, "`STARTCHAR' field missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Missing_Startfont_Field, 0xB0, "`STARTFONT' field missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Name_Table_Missing, 0x91, "name table missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Nested_DEFS, 0x89, "nested DEFS" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Nested_Frame_Access, 0x57, "nested frame access" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Out_Of_Memory, 0x40, "out of memory" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Post_Table_Missing, 0x94, "PostScript (post) table missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Raster_Corrupted, 0x61, "raster corrupted" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Raster_Negative_Height, 0x63, "negative height while rastering" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Raster_Overflow, 0x62, "raster overflow" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Raster_Uninitialized, 0x60, "raster uninitialized" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Stack_Overflow, 0x82, "stack overflow" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Stack_Underflow, 0xA1, "argument stack underflow" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Syntax_Error, 0xA0, "opcode syntax error" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Table_Missing, 0x8E, "SFNT font table missing" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Too_Few_Arguments, 0x81, "too few arguments" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Too_Many_Caches, 0x70, "too many registered caches" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Too_Many_Drivers, 0x30, "too many modules" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Too_Many_Extensions, 0x31, "too many extensions" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Too_Many_Function_Defs, 0x8C, "too many function definitions" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Too_Many_Hints, 0x16, "too many hints" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Too_Many_Instruction_Defs, 0x8D, "too many instruction definitions" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Unimplemented_Feature, 0x07, "unimplemented feature" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Unknown_File_Format, 0x02, "unknown file format" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_( Unlisted_Object, 0x41, "unlisted object" ) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_NOERRORDEF_( Ok, 0x00, "no error" ) */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/fterrdef.h\n\n",pcnt,cnt);
return cnt;
#endif

}
