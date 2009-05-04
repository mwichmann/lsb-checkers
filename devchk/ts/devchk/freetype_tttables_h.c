/*
 * Test of freetype/tttables.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/tttables.h"



#ifdef TET_TEST
void freetype_tttables_h()
{
#else
int freetype_tttables_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in freetype/tttables.h\n");
#endif

printf("Checking data structures in freetype/tttables.h\n");
#if 1
CheckTypeSize(FT_Sfnt_Tag,4, 16925, 1, 3.2, NULL, 16924, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct TT_Header_,24, 37107, 12, , NULL, 0, NULL)
Msg("Missing member data for TT_Header_ on S390X\n");
CheckOffset(struct TT_Header_,Table_Version,0,12,217302)
CheckOffset(struct TT_Header_,Font_Revision,0,12,217303)
CheckOffset(struct TT_Header_,CheckSum_Adjust,0,12,217304)
CheckOffset(struct TT_Header_,Magic_Number,0,12,217305)
CheckOffset(struct TT_Header_,Flags,0,12,217306)
CheckOffset(struct TT_Header_,Units_Per_EM,0,12,217307)
CheckOffset(struct TT_Header_,Created,0,12,217308)
CheckOffset(struct TT_Header_,Modified,0,12,217309)
CheckOffset(struct TT_Header_,xMin,0,12,217310)
CheckOffset(struct TT_Header_,yMin,0,12,217311)
CheckOffset(struct TT_Header_,xMax,0,12,217312)
CheckOffset(struct TT_Header_,yMax,0,12,217313)
CheckOffset(struct TT_Header_,Mac_Style,0,12,217314)
CheckOffset(struct TT_Header_,Lowest_Rec_PPEM,0,12,217315)
CheckOffset(struct TT_Header_,Font_Direction,0,12,217316)
CheckOffset(struct TT_Header_,Index_To_Loc_Format,0,12,217317)
CheckOffset(struct TT_Header_,Glyph_Data_Format,0,12,217318)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct TT_Header_,12, 37107, 10, , NULL, 0, NULL)
Msg("Missing member data for TT_Header_ on S390\n");
CheckOffset(struct TT_Header_,Table_Version,0,10,217302)
CheckOffset(struct TT_Header_,Font_Revision,0,10,217303)
CheckOffset(struct TT_Header_,CheckSum_Adjust,0,10,217304)
CheckOffset(struct TT_Header_,Magic_Number,0,10,217305)
CheckOffset(struct TT_Header_,Flags,0,10,217306)
CheckOffset(struct TT_Header_,Units_Per_EM,0,10,217307)
CheckOffset(struct TT_Header_,Created,0,10,217308)
CheckOffset(struct TT_Header_,Modified,0,10,217309)
CheckOffset(struct TT_Header_,xMin,0,10,217310)
CheckOffset(struct TT_Header_,yMin,0,10,217311)
CheckOffset(struct TT_Header_,xMax,0,10,217312)
CheckOffset(struct TT_Header_,yMax,0,10,217313)
CheckOffset(struct TT_Header_,Mac_Style,0,10,217314)
CheckOffset(struct TT_Header_,Lowest_Rec_PPEM,0,10,217315)
CheckOffset(struct TT_Header_,Font_Direction,0,10,217316)
CheckOffset(struct TT_Header_,Index_To_Loc_Format,0,10,217317)
CheckOffset(struct TT_Header_,Glyph_Data_Format,0,10,217318)
#elif defined __powerpc64__
CheckTypeSize(struct TT_Header_,24, 37107, 9, , NULL, 0, NULL)
Msg("Missing member data for TT_Header_ on PPC64\n");
CheckOffset(struct TT_Header_,Table_Version,0,9,217302)
CheckOffset(struct TT_Header_,Font_Revision,0,9,217303)
CheckOffset(struct TT_Header_,CheckSum_Adjust,0,9,217304)
CheckOffset(struct TT_Header_,Magic_Number,0,9,217305)
CheckOffset(struct TT_Header_,Flags,0,9,217306)
CheckOffset(struct TT_Header_,Units_Per_EM,0,9,217307)
CheckOffset(struct TT_Header_,Created,0,9,217308)
CheckOffset(struct TT_Header_,Modified,0,9,217309)
CheckOffset(struct TT_Header_,xMin,0,9,217310)
CheckOffset(struct TT_Header_,yMin,0,9,217311)
CheckOffset(struct TT_Header_,xMax,0,9,217312)
CheckOffset(struct TT_Header_,yMax,0,9,217313)
CheckOffset(struct TT_Header_,Mac_Style,0,9,217314)
CheckOffset(struct TT_Header_,Lowest_Rec_PPEM,0,9,217315)
CheckOffset(struct TT_Header_,Font_Direction,0,9,217316)
CheckOffset(struct TT_Header_,Index_To_Loc_Format,0,9,217317)
CheckOffset(struct TT_Header_,Glyph_Data_Format,0,9,217318)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct TT_Header_,12, 37107, 6, , NULL, 0, NULL)
Msg("Missing member data for TT_Header_ on PPC32\n");
CheckOffset(struct TT_Header_,Table_Version,0,6,217302)
CheckOffset(struct TT_Header_,Font_Revision,0,6,217303)
CheckOffset(struct TT_Header_,CheckSum_Adjust,0,6,217304)
CheckOffset(struct TT_Header_,Magic_Number,0,6,217305)
CheckOffset(struct TT_Header_,Flags,0,6,217306)
CheckOffset(struct TT_Header_,Units_Per_EM,0,6,217307)
CheckOffset(struct TT_Header_,Created,0,6,217308)
CheckOffset(struct TT_Header_,Modified,0,6,217309)
CheckOffset(struct TT_Header_,xMin,0,6,217310)
CheckOffset(struct TT_Header_,yMin,0,6,217311)
CheckOffset(struct TT_Header_,xMax,0,6,217312)
CheckOffset(struct TT_Header_,yMax,0,6,217313)
CheckOffset(struct TT_Header_,Mac_Style,0,6,217314)
CheckOffset(struct TT_Header_,Lowest_Rec_PPEM,0,6,217315)
CheckOffset(struct TT_Header_,Font_Direction,0,6,217316)
CheckOffset(struct TT_Header_,Index_To_Loc_Format,0,6,217317)
CheckOffset(struct TT_Header_,Glyph_Data_Format,0,6,217318)
#elif defined __ia64__
CheckTypeSize(struct TT_Header_,24, 37107, 3, , NULL, 0, NULL)
Msg("Missing member data for TT_Header_ on IA64\n");
CheckOffset(struct TT_Header_,Table_Version,0,3,217302)
CheckOffset(struct TT_Header_,Font_Revision,0,3,217303)
CheckOffset(struct TT_Header_,CheckSum_Adjust,0,3,217304)
CheckOffset(struct TT_Header_,Magic_Number,0,3,217305)
CheckOffset(struct TT_Header_,Flags,0,3,217306)
CheckOffset(struct TT_Header_,Units_Per_EM,0,3,217307)
CheckOffset(struct TT_Header_,Created,0,3,217308)
CheckOffset(struct TT_Header_,Modified,0,3,217309)
CheckOffset(struct TT_Header_,xMin,0,3,217310)
CheckOffset(struct TT_Header_,yMin,0,3,217311)
CheckOffset(struct TT_Header_,xMax,0,3,217312)
CheckOffset(struct TT_Header_,yMax,0,3,217313)
CheckOffset(struct TT_Header_,Mac_Style,0,3,217314)
CheckOffset(struct TT_Header_,Lowest_Rec_PPEM,0,3,217315)
CheckOffset(struct TT_Header_,Font_Direction,0,3,217316)
CheckOffset(struct TT_Header_,Index_To_Loc_Format,0,3,217317)
CheckOffset(struct TT_Header_,Glyph_Data_Format,0,3,217318)
#elif defined __i386__
CheckTypeSize(struct TT_Header_,12, 37107, 2, , NULL, 0, NULL)
Msg("Missing member data for TT_Header_ on IA32\n");
CheckOffset(struct TT_Header_,Table_Version,0,2,217302)
CheckOffset(struct TT_Header_,Font_Revision,0,2,217303)
CheckOffset(struct TT_Header_,CheckSum_Adjust,0,2,217304)
CheckOffset(struct TT_Header_,Magic_Number,0,2,217305)
CheckOffset(struct TT_Header_,Flags,0,2,217306)
CheckOffset(struct TT_Header_,Units_Per_EM,0,2,217307)
CheckOffset(struct TT_Header_,Created,0,2,217308)
CheckOffset(struct TT_Header_,Modified,0,2,217309)
CheckOffset(struct TT_Header_,xMin,0,2,217310)
CheckOffset(struct TT_Header_,yMin,0,2,217311)
CheckOffset(struct TT_Header_,xMax,0,2,217312)
CheckOffset(struct TT_Header_,yMax,0,2,217313)
CheckOffset(struct TT_Header_,Mac_Style,0,2,217314)
CheckOffset(struct TT_Header_,Lowest_Rec_PPEM,0,2,217315)
CheckOffset(struct TT_Header_,Font_Direction,0,2,217316)
CheckOffset(struct TT_Header_,Index_To_Loc_Format,0,2,217317)
CheckOffset(struct TT_Header_,Glyph_Data_Format,0,2,217318)
#elif 1
CheckTypeSize(struct TT_Header_,0, 37107, 1, , NULL, 0, NULL)
Msg("Missing member data for TT_Header_ on All\n");
CheckOffset(struct TT_Header_,Table_Version,0,1,217302)
CheckOffset(struct TT_Header_,Font_Revision,0,1,217303)
CheckOffset(struct TT_Header_,CheckSum_Adjust,0,1,217304)
CheckOffset(struct TT_Header_,Magic_Number,0,1,217305)
CheckOffset(struct TT_Header_,Flags,0,1,217306)
CheckOffset(struct TT_Header_,Units_Per_EM,0,1,217307)
CheckOffset(struct TT_Header_,Created,0,1,217308)
CheckOffset(struct TT_Header_,Modified,0,1,217309)
CheckOffset(struct TT_Header_,xMin,0,1,217310)
CheckOffset(struct TT_Header_,yMin,0,1,217311)
CheckOffset(struct TT_Header_,xMax,0,1,217312)
CheckOffset(struct TT_Header_,yMax,0,1,217313)
CheckOffset(struct TT_Header_,Mac_Style,0,1,217314)
CheckOffset(struct TT_Header_,Lowest_Rec_PPEM,0,1,217315)
CheckOffset(struct TT_Header_,Font_Direction,0,1,217316)
CheckOffset(struct TT_Header_,Index_To_Loc_Format,0,1,217317)
CheckOffset(struct TT_Header_,Glyph_Data_Format,0,1,217318)
#endif

#if defined __s390x__
CheckTypeSize(TT_Header,56, 37108, 12, 4.0, NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TT_Header,32, 37108, 10, 4.0, NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TT_Header,56, 37108, 9, 4.0, NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TT_Header,32, 37108, 6, 4.0, NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TT_Header,56, 37108, 3, 4.0, NULL, 0, NULL)
#elif defined __i386__
CheckTypeSize(TT_Header,32, 37108, 2, 4.0, NULL, 0, NULL)
#elif defined __x86_64__
Msg("Find size of TT_Header (37108)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,37107,NULL);\n",architecture,37108,0);
#else
Msg("Find size of TT_Header (37108)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,0,NULL);\n",architecture,37108,0);
#endif

#if defined __s390x__
CheckTypeSize(struct TT_HoriHeader_,1, 37110, 12, , NULL, 0, NULL)
Msg("Missing member data for TT_HoriHeader_ on S390X\n");
CheckOffset(struct TT_HoriHeader_,Version,0,12,217319)
CheckOffset(struct TT_HoriHeader_,Ascender,0,12,217320)
CheckOffset(struct TT_HoriHeader_,Descender,0,12,217321)
CheckOffset(struct TT_HoriHeader_,Line_Gap,0,12,217322)
CheckOffset(struct TT_HoriHeader_,advance_Width_Max,0,12,217323)
CheckOffset(struct TT_HoriHeader_,min_Left_Side_Bearing,0,12,217324)
CheckOffset(struct TT_HoriHeader_,min_Right_Side_Bearing,0,12,217325)
CheckOffset(struct TT_HoriHeader_,xMax_Extent,0,12,217326)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Rise,0,12,217327)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Run,0,12,217328)
CheckOffset(struct TT_HoriHeader_,caret_Offset,0,12,217329)
CheckOffset(struct TT_HoriHeader_,Reserved,0,12,217330)
CheckOffset(struct TT_HoriHeader_,metric_Data_Format,0,12,217331)
CheckOffset(struct TT_HoriHeader_,number_Of_HMetrics,0,12,217332)
CheckOffset(struct TT_HoriHeader_,long_metrics,0,12,217333)
CheckOffset(struct TT_HoriHeader_,short_metrics,0,12,217334)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct TT_HoriHeader_,1, 37110, 10, , NULL, 0, NULL)
Msg("Missing member data for TT_HoriHeader_ on S390\n");
CheckOffset(struct TT_HoriHeader_,Version,0,10,217319)
CheckOffset(struct TT_HoriHeader_,Ascender,0,10,217320)
CheckOffset(struct TT_HoriHeader_,Descender,0,10,217321)
CheckOffset(struct TT_HoriHeader_,Line_Gap,0,10,217322)
CheckOffset(struct TT_HoriHeader_,advance_Width_Max,0,10,217323)
CheckOffset(struct TT_HoriHeader_,min_Left_Side_Bearing,0,10,217324)
CheckOffset(struct TT_HoriHeader_,min_Right_Side_Bearing,0,10,217325)
CheckOffset(struct TT_HoriHeader_,xMax_Extent,0,10,217326)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Rise,0,10,217327)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Run,0,10,217328)
CheckOffset(struct TT_HoriHeader_,caret_Offset,0,10,217329)
CheckOffset(struct TT_HoriHeader_,Reserved,0,10,217330)
CheckOffset(struct TT_HoriHeader_,metric_Data_Format,0,10,217331)
CheckOffset(struct TT_HoriHeader_,number_Of_HMetrics,0,10,217332)
CheckOffset(struct TT_HoriHeader_,long_metrics,0,10,217333)
CheckOffset(struct TT_HoriHeader_,short_metrics,0,10,217334)
#elif defined __powerpc64__
CheckTypeSize(struct TT_HoriHeader_,1, 37110, 9, , NULL, 0, NULL)
Msg("Missing member data for TT_HoriHeader_ on PPC64\n");
CheckOffset(struct TT_HoriHeader_,Version,0,9,217319)
CheckOffset(struct TT_HoriHeader_,Ascender,0,9,217320)
CheckOffset(struct TT_HoriHeader_,Descender,0,9,217321)
CheckOffset(struct TT_HoriHeader_,Line_Gap,0,9,217322)
CheckOffset(struct TT_HoriHeader_,advance_Width_Max,0,9,217323)
CheckOffset(struct TT_HoriHeader_,min_Left_Side_Bearing,0,9,217324)
CheckOffset(struct TT_HoriHeader_,min_Right_Side_Bearing,0,9,217325)
CheckOffset(struct TT_HoriHeader_,xMax_Extent,0,9,217326)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Rise,0,9,217327)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Run,0,9,217328)
CheckOffset(struct TT_HoriHeader_,caret_Offset,0,9,217329)
CheckOffset(struct TT_HoriHeader_,Reserved,0,9,217330)
CheckOffset(struct TT_HoriHeader_,metric_Data_Format,0,9,217331)
CheckOffset(struct TT_HoriHeader_,number_Of_HMetrics,0,9,217332)
CheckOffset(struct TT_HoriHeader_,long_metrics,0,9,217333)
CheckOffset(struct TT_HoriHeader_,short_metrics,0,9,217334)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct TT_HoriHeader_,1, 37110, 6, , NULL, 0, NULL)
Msg("Missing member data for TT_HoriHeader_ on PPC32\n");
CheckOffset(struct TT_HoriHeader_,Version,0,6,217319)
CheckOffset(struct TT_HoriHeader_,Ascender,0,6,217320)
CheckOffset(struct TT_HoriHeader_,Descender,0,6,217321)
CheckOffset(struct TT_HoriHeader_,Line_Gap,0,6,217322)
CheckOffset(struct TT_HoriHeader_,advance_Width_Max,0,6,217323)
CheckOffset(struct TT_HoriHeader_,min_Left_Side_Bearing,0,6,217324)
CheckOffset(struct TT_HoriHeader_,min_Right_Side_Bearing,0,6,217325)
CheckOffset(struct TT_HoriHeader_,xMax_Extent,0,6,217326)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Rise,0,6,217327)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Run,0,6,217328)
CheckOffset(struct TT_HoriHeader_,caret_Offset,0,6,217329)
CheckOffset(struct TT_HoriHeader_,Reserved,0,6,217330)
CheckOffset(struct TT_HoriHeader_,metric_Data_Format,0,6,217331)
CheckOffset(struct TT_HoriHeader_,number_Of_HMetrics,0,6,217332)
CheckOffset(struct TT_HoriHeader_,long_metrics,0,6,217333)
CheckOffset(struct TT_HoriHeader_,short_metrics,0,6,217334)
#elif defined __ia64__
CheckTypeSize(struct TT_HoriHeader_,1, 37110, 3, , NULL, 0, NULL)
Msg("Missing member data for TT_HoriHeader_ on IA64\n");
CheckOffset(struct TT_HoriHeader_,Version,0,3,217319)
CheckOffset(struct TT_HoriHeader_,Ascender,0,3,217320)
CheckOffset(struct TT_HoriHeader_,Descender,0,3,217321)
CheckOffset(struct TT_HoriHeader_,Line_Gap,0,3,217322)
CheckOffset(struct TT_HoriHeader_,advance_Width_Max,0,3,217323)
CheckOffset(struct TT_HoriHeader_,min_Left_Side_Bearing,0,3,217324)
CheckOffset(struct TT_HoriHeader_,min_Right_Side_Bearing,0,3,217325)
CheckOffset(struct TT_HoriHeader_,xMax_Extent,0,3,217326)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Rise,0,3,217327)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Run,0,3,217328)
CheckOffset(struct TT_HoriHeader_,caret_Offset,0,3,217329)
CheckOffset(struct TT_HoriHeader_,Reserved,0,3,217330)
CheckOffset(struct TT_HoriHeader_,metric_Data_Format,0,3,217331)
CheckOffset(struct TT_HoriHeader_,number_Of_HMetrics,0,3,217332)
CheckOffset(struct TT_HoriHeader_,long_metrics,0,3,217333)
CheckOffset(struct TT_HoriHeader_,short_metrics,0,3,217334)
#elif defined __i386__
CheckTypeSize(struct TT_HoriHeader_,1, 37110, 2, , NULL, 0, NULL)
Msg("Missing member data for TT_HoriHeader_ on IA32\n");
CheckOffset(struct TT_HoriHeader_,Version,0,2,217319)
CheckOffset(struct TT_HoriHeader_,Ascender,0,2,217320)
CheckOffset(struct TT_HoriHeader_,Descender,0,2,217321)
CheckOffset(struct TT_HoriHeader_,Line_Gap,0,2,217322)
CheckOffset(struct TT_HoriHeader_,advance_Width_Max,0,2,217323)
CheckOffset(struct TT_HoriHeader_,min_Left_Side_Bearing,0,2,217324)
CheckOffset(struct TT_HoriHeader_,min_Right_Side_Bearing,0,2,217325)
CheckOffset(struct TT_HoriHeader_,xMax_Extent,0,2,217326)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Rise,0,2,217327)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Run,0,2,217328)
CheckOffset(struct TT_HoriHeader_,caret_Offset,0,2,217329)
CheckOffset(struct TT_HoriHeader_,Reserved,0,2,217330)
CheckOffset(struct TT_HoriHeader_,metric_Data_Format,0,2,217331)
CheckOffset(struct TT_HoriHeader_,number_Of_HMetrics,0,2,217332)
CheckOffset(struct TT_HoriHeader_,long_metrics,0,2,217333)
CheckOffset(struct TT_HoriHeader_,short_metrics,0,2,217334)
#elif 1
CheckTypeSize(struct TT_HoriHeader_,0, 37110, 1, , NULL, 0, NULL)
Msg("Missing member data for TT_HoriHeader_ on All\n");
CheckOffset(struct TT_HoriHeader_,Version,0,1,217319)
CheckOffset(struct TT_HoriHeader_,Ascender,0,1,217320)
CheckOffset(struct TT_HoriHeader_,Descender,0,1,217321)
CheckOffset(struct TT_HoriHeader_,Line_Gap,0,1,217322)
CheckOffset(struct TT_HoriHeader_,advance_Width_Max,0,1,217323)
CheckOffset(struct TT_HoriHeader_,min_Left_Side_Bearing,0,1,217324)
CheckOffset(struct TT_HoriHeader_,min_Right_Side_Bearing,0,1,217325)
CheckOffset(struct TT_HoriHeader_,xMax_Extent,0,1,217326)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Rise,0,1,217327)
CheckOffset(struct TT_HoriHeader_,caret_Slope_Run,0,1,217328)
CheckOffset(struct TT_HoriHeader_,caret_Offset,0,1,217329)
CheckOffset(struct TT_HoriHeader_,Reserved,0,1,217330)
CheckOffset(struct TT_HoriHeader_,metric_Data_Format,0,1,217331)
CheckOffset(struct TT_HoriHeader_,number_Of_HMetrics,0,1,217332)
CheckOffset(struct TT_HoriHeader_,long_metrics,0,1,217333)
CheckOffset(struct TT_HoriHeader_,short_metrics,0,1,217334)
#endif

#if defined __s390x__
CheckTypeSize(TT_HoriHeader,56, 37111, 12, 4.0, NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TT_HoriHeader,32, 37111, 10, 4.0, NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TT_HoriHeader,56, 37111, 9, 4.0, NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TT_HoriHeader,32, 37111, 6, 4.0, NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TT_HoriHeader,56, 37111, 3, 4.0, NULL, 0, NULL)
#elif defined __i386__
CheckTypeSize(TT_HoriHeader,32, 37111, 2, 4.0, NULL, 0, NULL)
#elif defined __x86_64__
Msg("Find size of TT_HoriHeader (37111)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,37110,NULL);\n",architecture,37111,0);
#else
Msg("Find size of TT_HoriHeader (37111)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,0,NULL);\n",architecture,37111,0);
#endif

#if defined __s390x__
CheckTypeSize(struct TT_VertHeader_,2, 37112, 12, , NULL, 0, NULL)
Msg("Missing member data for TT_VertHeader_ on S390X\n");
CheckOffset(struct TT_VertHeader_,Version,0,12,217335)
CheckOffset(struct TT_VertHeader_,Ascender,0,12,217336)
CheckOffset(struct TT_VertHeader_,Descender,0,12,217337)
CheckOffset(struct TT_VertHeader_,Line_Gap,0,12,217338)
CheckOffset(struct TT_VertHeader_,advance_Height_Max,0,12,217339)
CheckOffset(struct TT_VertHeader_,min_Top_Side_Bearing,0,12,217340)
CheckOffset(struct TT_VertHeader_,min_Bottom_Side_Bearing,0,12,217341)
CheckOffset(struct TT_VertHeader_,yMax_Extent,0,12,217342)
CheckOffset(struct TT_VertHeader_,caret_Slope_Rise,0,12,217343)
CheckOffset(struct TT_VertHeader_,caret_Slope_Run,0,12,217344)
CheckOffset(struct TT_VertHeader_,caret_Offset,0,12,217345)
CheckOffset(struct TT_VertHeader_,Reserved,0,12,217346)
CheckOffset(struct TT_VertHeader_,metric_Data_Format,0,12,217347)
CheckOffset(struct TT_VertHeader_,number_Of_VMetrics,0,12,217348)
CheckOffset(struct TT_VertHeader_,long_metrics,0,12,217349)
CheckOffset(struct TT_VertHeader_,short_metrics,0,12,217350)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct TT_VertHeader_,2, 37112, 10, , NULL, 0, NULL)
Msg("Missing member data for TT_VertHeader_ on S390\n");
CheckOffset(struct TT_VertHeader_,Version,0,10,217335)
CheckOffset(struct TT_VertHeader_,Ascender,0,10,217336)
CheckOffset(struct TT_VertHeader_,Descender,0,10,217337)
CheckOffset(struct TT_VertHeader_,Line_Gap,0,10,217338)
CheckOffset(struct TT_VertHeader_,advance_Height_Max,0,10,217339)
CheckOffset(struct TT_VertHeader_,min_Top_Side_Bearing,0,10,217340)
CheckOffset(struct TT_VertHeader_,min_Bottom_Side_Bearing,0,10,217341)
CheckOffset(struct TT_VertHeader_,yMax_Extent,0,10,217342)
CheckOffset(struct TT_VertHeader_,caret_Slope_Rise,0,10,217343)
CheckOffset(struct TT_VertHeader_,caret_Slope_Run,0,10,217344)
CheckOffset(struct TT_VertHeader_,caret_Offset,0,10,217345)
CheckOffset(struct TT_VertHeader_,Reserved,0,10,217346)
CheckOffset(struct TT_VertHeader_,metric_Data_Format,0,10,217347)
CheckOffset(struct TT_VertHeader_,number_Of_VMetrics,0,10,217348)
CheckOffset(struct TT_VertHeader_,long_metrics,0,10,217349)
CheckOffset(struct TT_VertHeader_,short_metrics,0,10,217350)
#elif defined __powerpc64__
CheckTypeSize(struct TT_VertHeader_,2, 37112, 9, , NULL, 0, NULL)
Msg("Missing member data for TT_VertHeader_ on PPC64\n");
CheckOffset(struct TT_VertHeader_,Version,0,9,217335)
CheckOffset(struct TT_VertHeader_,Ascender,0,9,217336)
CheckOffset(struct TT_VertHeader_,Descender,0,9,217337)
CheckOffset(struct TT_VertHeader_,Line_Gap,0,9,217338)
CheckOffset(struct TT_VertHeader_,advance_Height_Max,0,9,217339)
CheckOffset(struct TT_VertHeader_,min_Top_Side_Bearing,0,9,217340)
CheckOffset(struct TT_VertHeader_,min_Bottom_Side_Bearing,0,9,217341)
CheckOffset(struct TT_VertHeader_,yMax_Extent,0,9,217342)
CheckOffset(struct TT_VertHeader_,caret_Slope_Rise,0,9,217343)
CheckOffset(struct TT_VertHeader_,caret_Slope_Run,0,9,217344)
CheckOffset(struct TT_VertHeader_,caret_Offset,0,9,217345)
CheckOffset(struct TT_VertHeader_,Reserved,0,9,217346)
CheckOffset(struct TT_VertHeader_,metric_Data_Format,0,9,217347)
CheckOffset(struct TT_VertHeader_,number_Of_VMetrics,0,9,217348)
CheckOffset(struct TT_VertHeader_,long_metrics,0,9,217349)
CheckOffset(struct TT_VertHeader_,short_metrics,0,9,217350)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct TT_VertHeader_,2, 37112, 6, , NULL, 0, NULL)
Msg("Missing member data for TT_VertHeader_ on PPC32\n");
CheckOffset(struct TT_VertHeader_,Version,0,6,217335)
CheckOffset(struct TT_VertHeader_,Ascender,0,6,217336)
CheckOffset(struct TT_VertHeader_,Descender,0,6,217337)
CheckOffset(struct TT_VertHeader_,Line_Gap,0,6,217338)
CheckOffset(struct TT_VertHeader_,advance_Height_Max,0,6,217339)
CheckOffset(struct TT_VertHeader_,min_Top_Side_Bearing,0,6,217340)
CheckOffset(struct TT_VertHeader_,min_Bottom_Side_Bearing,0,6,217341)
CheckOffset(struct TT_VertHeader_,yMax_Extent,0,6,217342)
CheckOffset(struct TT_VertHeader_,caret_Slope_Rise,0,6,217343)
CheckOffset(struct TT_VertHeader_,caret_Slope_Run,0,6,217344)
CheckOffset(struct TT_VertHeader_,caret_Offset,0,6,217345)
CheckOffset(struct TT_VertHeader_,Reserved,0,6,217346)
CheckOffset(struct TT_VertHeader_,metric_Data_Format,0,6,217347)
CheckOffset(struct TT_VertHeader_,number_Of_VMetrics,0,6,217348)
CheckOffset(struct TT_VertHeader_,long_metrics,0,6,217349)
CheckOffset(struct TT_VertHeader_,short_metrics,0,6,217350)
#elif defined __ia64__
CheckTypeSize(struct TT_VertHeader_,2, 37112, 3, , NULL, 0, NULL)
Msg("Missing member data for TT_VertHeader_ on IA64\n");
CheckOffset(struct TT_VertHeader_,Version,0,3,217335)
CheckOffset(struct TT_VertHeader_,Ascender,0,3,217336)
CheckOffset(struct TT_VertHeader_,Descender,0,3,217337)
CheckOffset(struct TT_VertHeader_,Line_Gap,0,3,217338)
CheckOffset(struct TT_VertHeader_,advance_Height_Max,0,3,217339)
CheckOffset(struct TT_VertHeader_,min_Top_Side_Bearing,0,3,217340)
CheckOffset(struct TT_VertHeader_,min_Bottom_Side_Bearing,0,3,217341)
CheckOffset(struct TT_VertHeader_,yMax_Extent,0,3,217342)
CheckOffset(struct TT_VertHeader_,caret_Slope_Rise,0,3,217343)
CheckOffset(struct TT_VertHeader_,caret_Slope_Run,0,3,217344)
CheckOffset(struct TT_VertHeader_,caret_Offset,0,3,217345)
CheckOffset(struct TT_VertHeader_,Reserved,0,3,217346)
CheckOffset(struct TT_VertHeader_,metric_Data_Format,0,3,217347)
CheckOffset(struct TT_VertHeader_,number_Of_VMetrics,0,3,217348)
CheckOffset(struct TT_VertHeader_,long_metrics,0,3,217349)
CheckOffset(struct TT_VertHeader_,short_metrics,0,3,217350)
#elif defined __i386__
CheckTypeSize(struct TT_VertHeader_,2, 37112, 2, , NULL, 0, NULL)
Msg("Missing member data for TT_VertHeader_ on IA32\n");
CheckOffset(struct TT_VertHeader_,Version,0,2,217335)
CheckOffset(struct TT_VertHeader_,Ascender,0,2,217336)
CheckOffset(struct TT_VertHeader_,Descender,0,2,217337)
CheckOffset(struct TT_VertHeader_,Line_Gap,0,2,217338)
CheckOffset(struct TT_VertHeader_,advance_Height_Max,0,2,217339)
CheckOffset(struct TT_VertHeader_,min_Top_Side_Bearing,0,2,217340)
CheckOffset(struct TT_VertHeader_,min_Bottom_Side_Bearing,0,2,217341)
CheckOffset(struct TT_VertHeader_,yMax_Extent,0,2,217342)
CheckOffset(struct TT_VertHeader_,caret_Slope_Rise,0,2,217343)
CheckOffset(struct TT_VertHeader_,caret_Slope_Run,0,2,217344)
CheckOffset(struct TT_VertHeader_,caret_Offset,0,2,217345)
CheckOffset(struct TT_VertHeader_,Reserved,0,2,217346)
CheckOffset(struct TT_VertHeader_,metric_Data_Format,0,2,217347)
CheckOffset(struct TT_VertHeader_,number_Of_VMetrics,0,2,217348)
CheckOffset(struct TT_VertHeader_,long_metrics,0,2,217349)
CheckOffset(struct TT_VertHeader_,short_metrics,0,2,217350)
#elif 1
CheckTypeSize(struct TT_VertHeader_,0, 37112, 1, , NULL, 0, NULL)
Msg("Missing member data for TT_VertHeader_ on All\n");
CheckOffset(struct TT_VertHeader_,Version,0,1,217335)
CheckOffset(struct TT_VertHeader_,Ascender,0,1,217336)
CheckOffset(struct TT_VertHeader_,Descender,0,1,217337)
CheckOffset(struct TT_VertHeader_,Line_Gap,0,1,217338)
CheckOffset(struct TT_VertHeader_,advance_Height_Max,0,1,217339)
CheckOffset(struct TT_VertHeader_,min_Top_Side_Bearing,0,1,217340)
CheckOffset(struct TT_VertHeader_,min_Bottom_Side_Bearing,0,1,217341)
CheckOffset(struct TT_VertHeader_,yMax_Extent,0,1,217342)
CheckOffset(struct TT_VertHeader_,caret_Slope_Rise,0,1,217343)
CheckOffset(struct TT_VertHeader_,caret_Slope_Run,0,1,217344)
CheckOffset(struct TT_VertHeader_,caret_Offset,0,1,217345)
CheckOffset(struct TT_VertHeader_,Reserved,0,1,217346)
CheckOffset(struct TT_VertHeader_,metric_Data_Format,0,1,217347)
CheckOffset(struct TT_VertHeader_,number_Of_VMetrics,0,1,217348)
CheckOffset(struct TT_VertHeader_,long_metrics,0,1,217349)
CheckOffset(struct TT_VertHeader_,short_metrics,0,1,217350)
#endif

#if defined __s390x__
CheckTypeSize(TT_VertHeader,40, 37113, 12, 4.0, NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TT_VertHeader,20, 37113, 10, 4.0, NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TT_VertHeader,40, 37113, 9, 4.0, NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TT_VertHeader,20, 37113, 6, 4.0, NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TT_VertHeader,40, 37113, 3, 4.0, NULL, 0, NULL)
#elif defined __i386__
CheckTypeSize(TT_VertHeader,20, 37113, 2, 4.0, NULL, 0, NULL)
#elif defined __x86_64__
Msg("Find size of TT_VertHeader (37113)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,37112,NULL);\n",architecture,37113,0);
#else
Msg("Find size of TT_VertHeader (37113)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,0,NULL);\n",architecture,37113,0);
#endif

#if defined __s390x__
CheckTypeSize(struct TT_OS2_,1208, 37116, 12, , NULL, 0, NULL)
Msg("Missing member data for TT_OS2_ on S390X\n");
CheckOffset(struct TT_OS2_,version,0,12,217351)
CheckOffset(struct TT_OS2_,xAvgCharWidth,0,12,217352)
CheckOffset(struct TT_OS2_,usWeightClass,0,12,217353)
CheckOffset(struct TT_OS2_,usWidthClass,0,12,217354)
CheckOffset(struct TT_OS2_,fsType,0,12,217355)
CheckOffset(struct TT_OS2_,ySubscriptXSize,0,12,217356)
CheckOffset(struct TT_OS2_,ySubscriptYSize,0,12,217357)
CheckOffset(struct TT_OS2_,ySubscriptXOffset,0,12,217358)
CheckOffset(struct TT_OS2_,ySubscriptYOffset,0,12,217359)
CheckOffset(struct TT_OS2_,ySuperscriptXSize,0,12,217360)
CheckOffset(struct TT_OS2_,ySuperscriptYSize,0,12,217361)
CheckOffset(struct TT_OS2_,ySuperscriptXOffset,0,12,217362)
CheckOffset(struct TT_OS2_,ySuperscriptYOffset,0,12,217363)
CheckOffset(struct TT_OS2_,yStrikeoutSize,0,12,217364)
CheckOffset(struct TT_OS2_,yStrikeoutPosition,0,12,217365)
CheckOffset(struct TT_OS2_,sFamilyClass,0,12,217366)
CheckOffset(struct TT_OS2_,panose,0,12,217367)
CheckOffset(struct TT_OS2_,ulUnicodeRange1,0,12,217368)
CheckOffset(struct TT_OS2_,ulUnicodeRange2,0,12,217369)
CheckOffset(struct TT_OS2_,ulUnicodeRange3,0,12,217370)
CheckOffset(struct TT_OS2_,ulUnicodeRange4,0,12,217371)
CheckOffset(struct TT_OS2_,achVendID,0,12,217372)
CheckOffset(struct TT_OS2_,fsSelection,0,12,217373)
CheckOffset(struct TT_OS2_,usFirstCharIndex,0,12,217374)
CheckOffset(struct TT_OS2_,usLastCharIndex,0,12,217375)
CheckOffset(struct TT_OS2_,sTypoAscender,0,12,217376)
CheckOffset(struct TT_OS2_,sTypoDescender,0,12,217377)
CheckOffset(struct TT_OS2_,sTypoLineGap,0,12,217378)
CheckOffset(struct TT_OS2_,usWinAscent,0,12,217379)
CheckOffset(struct TT_OS2_,usWinDescent,0,12,217380)
CheckOffset(struct TT_OS2_,ulCodePageRange1,0,12,217381)
CheckOffset(struct TT_OS2_,ulCodePageRange2,0,12,217382)
CheckOffset(struct TT_OS2_,sxHeight,0,12,217383)
CheckOffset(struct TT_OS2_,sCapHeight,0,12,217384)
CheckOffset(struct TT_OS2_,usDefaultChar,0,12,217385)
CheckOffset(struct TT_OS2_,usBreakChar,0,12,217386)
CheckOffset(struct TT_OS2_,usMaxContext,0,12,217387)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct TT_OS2_,604, 37116, 10, , NULL, 0, NULL)
Msg("Missing member data for TT_OS2_ on S390\n");
CheckOffset(struct TT_OS2_,version,0,10,217351)
CheckOffset(struct TT_OS2_,xAvgCharWidth,0,10,217352)
CheckOffset(struct TT_OS2_,usWeightClass,0,10,217353)
CheckOffset(struct TT_OS2_,usWidthClass,0,10,217354)
CheckOffset(struct TT_OS2_,fsType,0,10,217355)
CheckOffset(struct TT_OS2_,ySubscriptXSize,0,10,217356)
CheckOffset(struct TT_OS2_,ySubscriptYSize,0,10,217357)
CheckOffset(struct TT_OS2_,ySubscriptXOffset,0,10,217358)
CheckOffset(struct TT_OS2_,ySubscriptYOffset,0,10,217359)
CheckOffset(struct TT_OS2_,ySuperscriptXSize,0,10,217360)
CheckOffset(struct TT_OS2_,ySuperscriptYSize,0,10,217361)
CheckOffset(struct TT_OS2_,ySuperscriptXOffset,0,10,217362)
CheckOffset(struct TT_OS2_,ySuperscriptYOffset,0,10,217363)
CheckOffset(struct TT_OS2_,yStrikeoutSize,0,10,217364)
CheckOffset(struct TT_OS2_,yStrikeoutPosition,0,10,217365)
CheckOffset(struct TT_OS2_,sFamilyClass,0,10,217366)
CheckOffset(struct TT_OS2_,panose,0,10,217367)
CheckOffset(struct TT_OS2_,ulUnicodeRange1,0,10,217368)
CheckOffset(struct TT_OS2_,ulUnicodeRange2,0,10,217369)
CheckOffset(struct TT_OS2_,ulUnicodeRange3,0,10,217370)
CheckOffset(struct TT_OS2_,ulUnicodeRange4,0,10,217371)
CheckOffset(struct TT_OS2_,achVendID,0,10,217372)
CheckOffset(struct TT_OS2_,fsSelection,0,10,217373)
CheckOffset(struct TT_OS2_,usFirstCharIndex,0,10,217374)
CheckOffset(struct TT_OS2_,usLastCharIndex,0,10,217375)
CheckOffset(struct TT_OS2_,sTypoAscender,0,10,217376)
CheckOffset(struct TT_OS2_,sTypoDescender,0,10,217377)
CheckOffset(struct TT_OS2_,sTypoLineGap,0,10,217378)
CheckOffset(struct TT_OS2_,usWinAscent,0,10,217379)
CheckOffset(struct TT_OS2_,usWinDescent,0,10,217380)
CheckOffset(struct TT_OS2_,ulCodePageRange1,0,10,217381)
CheckOffset(struct TT_OS2_,ulCodePageRange2,0,10,217382)
CheckOffset(struct TT_OS2_,sxHeight,0,10,217383)
CheckOffset(struct TT_OS2_,sCapHeight,0,10,217384)
CheckOffset(struct TT_OS2_,usDefaultChar,0,10,217385)
CheckOffset(struct TT_OS2_,usBreakChar,0,10,217386)
CheckOffset(struct TT_OS2_,usMaxContext,0,10,217387)
#elif defined __powerpc64__
CheckTypeSize(struct TT_OS2_,1208, 37116, 9, , NULL, 0, NULL)
Msg("Missing member data for TT_OS2_ on PPC64\n");
CheckOffset(struct TT_OS2_,version,0,9,217351)
CheckOffset(struct TT_OS2_,xAvgCharWidth,0,9,217352)
CheckOffset(struct TT_OS2_,usWeightClass,0,9,217353)
CheckOffset(struct TT_OS2_,usWidthClass,0,9,217354)
CheckOffset(struct TT_OS2_,fsType,0,9,217355)
CheckOffset(struct TT_OS2_,ySubscriptXSize,0,9,217356)
CheckOffset(struct TT_OS2_,ySubscriptYSize,0,9,217357)
CheckOffset(struct TT_OS2_,ySubscriptXOffset,0,9,217358)
CheckOffset(struct TT_OS2_,ySubscriptYOffset,0,9,217359)
CheckOffset(struct TT_OS2_,ySuperscriptXSize,0,9,217360)
CheckOffset(struct TT_OS2_,ySuperscriptYSize,0,9,217361)
CheckOffset(struct TT_OS2_,ySuperscriptXOffset,0,9,217362)
CheckOffset(struct TT_OS2_,ySuperscriptYOffset,0,9,217363)
CheckOffset(struct TT_OS2_,yStrikeoutSize,0,9,217364)
CheckOffset(struct TT_OS2_,yStrikeoutPosition,0,9,217365)
CheckOffset(struct TT_OS2_,sFamilyClass,0,9,217366)
CheckOffset(struct TT_OS2_,panose,0,9,217367)
CheckOffset(struct TT_OS2_,ulUnicodeRange1,0,9,217368)
CheckOffset(struct TT_OS2_,ulUnicodeRange2,0,9,217369)
CheckOffset(struct TT_OS2_,ulUnicodeRange3,0,9,217370)
CheckOffset(struct TT_OS2_,ulUnicodeRange4,0,9,217371)
CheckOffset(struct TT_OS2_,achVendID,0,9,217372)
CheckOffset(struct TT_OS2_,fsSelection,0,9,217373)
CheckOffset(struct TT_OS2_,usFirstCharIndex,0,9,217374)
CheckOffset(struct TT_OS2_,usLastCharIndex,0,9,217375)
CheckOffset(struct TT_OS2_,sTypoAscender,0,9,217376)
CheckOffset(struct TT_OS2_,sTypoDescender,0,9,217377)
CheckOffset(struct TT_OS2_,sTypoLineGap,0,9,217378)
CheckOffset(struct TT_OS2_,usWinAscent,0,9,217379)
CheckOffset(struct TT_OS2_,usWinDescent,0,9,217380)
CheckOffset(struct TT_OS2_,ulCodePageRange1,0,9,217381)
CheckOffset(struct TT_OS2_,ulCodePageRange2,0,9,217382)
CheckOffset(struct TT_OS2_,sxHeight,0,9,217383)
CheckOffset(struct TT_OS2_,sCapHeight,0,9,217384)
CheckOffset(struct TT_OS2_,usDefaultChar,0,9,217385)
CheckOffset(struct TT_OS2_,usBreakChar,0,9,217386)
CheckOffset(struct TT_OS2_,usMaxContext,0,9,217387)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct TT_OS2_,604, 37116, 6, , NULL, 0, NULL)
Msg("Missing member data for TT_OS2_ on PPC32\n");
CheckOffset(struct TT_OS2_,version,0,6,217351)
CheckOffset(struct TT_OS2_,xAvgCharWidth,0,6,217352)
CheckOffset(struct TT_OS2_,usWeightClass,0,6,217353)
CheckOffset(struct TT_OS2_,usWidthClass,0,6,217354)
CheckOffset(struct TT_OS2_,fsType,0,6,217355)
CheckOffset(struct TT_OS2_,ySubscriptXSize,0,6,217356)
CheckOffset(struct TT_OS2_,ySubscriptYSize,0,6,217357)
CheckOffset(struct TT_OS2_,ySubscriptXOffset,0,6,217358)
CheckOffset(struct TT_OS2_,ySubscriptYOffset,0,6,217359)
CheckOffset(struct TT_OS2_,ySuperscriptXSize,0,6,217360)
CheckOffset(struct TT_OS2_,ySuperscriptYSize,0,6,217361)
CheckOffset(struct TT_OS2_,ySuperscriptXOffset,0,6,217362)
CheckOffset(struct TT_OS2_,ySuperscriptYOffset,0,6,217363)
CheckOffset(struct TT_OS2_,yStrikeoutSize,0,6,217364)
CheckOffset(struct TT_OS2_,yStrikeoutPosition,0,6,217365)
CheckOffset(struct TT_OS2_,sFamilyClass,0,6,217366)
CheckOffset(struct TT_OS2_,panose,0,6,217367)
CheckOffset(struct TT_OS2_,ulUnicodeRange1,0,6,217368)
CheckOffset(struct TT_OS2_,ulUnicodeRange2,0,6,217369)
CheckOffset(struct TT_OS2_,ulUnicodeRange3,0,6,217370)
CheckOffset(struct TT_OS2_,ulUnicodeRange4,0,6,217371)
CheckOffset(struct TT_OS2_,achVendID,0,6,217372)
CheckOffset(struct TT_OS2_,fsSelection,0,6,217373)
CheckOffset(struct TT_OS2_,usFirstCharIndex,0,6,217374)
CheckOffset(struct TT_OS2_,usLastCharIndex,0,6,217375)
CheckOffset(struct TT_OS2_,sTypoAscender,0,6,217376)
CheckOffset(struct TT_OS2_,sTypoDescender,0,6,217377)
CheckOffset(struct TT_OS2_,sTypoLineGap,0,6,217378)
CheckOffset(struct TT_OS2_,usWinAscent,0,6,217379)
CheckOffset(struct TT_OS2_,usWinDescent,0,6,217380)
CheckOffset(struct TT_OS2_,ulCodePageRange1,0,6,217381)
CheckOffset(struct TT_OS2_,ulCodePageRange2,0,6,217382)
CheckOffset(struct TT_OS2_,sxHeight,0,6,217383)
CheckOffset(struct TT_OS2_,sCapHeight,0,6,217384)
CheckOffset(struct TT_OS2_,usDefaultChar,0,6,217385)
CheckOffset(struct TT_OS2_,usBreakChar,0,6,217386)
CheckOffset(struct TT_OS2_,usMaxContext,0,6,217387)
#elif defined __ia64__
CheckTypeSize(struct TT_OS2_,1208, 37116, 3, , NULL, 0, NULL)
Msg("Missing member data for TT_OS2_ on IA64\n");
CheckOffset(struct TT_OS2_,version,0,3,217351)
CheckOffset(struct TT_OS2_,xAvgCharWidth,0,3,217352)
CheckOffset(struct TT_OS2_,usWeightClass,0,3,217353)
CheckOffset(struct TT_OS2_,usWidthClass,0,3,217354)
CheckOffset(struct TT_OS2_,fsType,0,3,217355)
CheckOffset(struct TT_OS2_,ySubscriptXSize,0,3,217356)
CheckOffset(struct TT_OS2_,ySubscriptYSize,0,3,217357)
CheckOffset(struct TT_OS2_,ySubscriptXOffset,0,3,217358)
CheckOffset(struct TT_OS2_,ySubscriptYOffset,0,3,217359)
CheckOffset(struct TT_OS2_,ySuperscriptXSize,0,3,217360)
CheckOffset(struct TT_OS2_,ySuperscriptYSize,0,3,217361)
CheckOffset(struct TT_OS2_,ySuperscriptXOffset,0,3,217362)
CheckOffset(struct TT_OS2_,ySuperscriptYOffset,0,3,217363)
CheckOffset(struct TT_OS2_,yStrikeoutSize,0,3,217364)
CheckOffset(struct TT_OS2_,yStrikeoutPosition,0,3,217365)
CheckOffset(struct TT_OS2_,sFamilyClass,0,3,217366)
CheckOffset(struct TT_OS2_,panose,0,3,217367)
CheckOffset(struct TT_OS2_,ulUnicodeRange1,0,3,217368)
CheckOffset(struct TT_OS2_,ulUnicodeRange2,0,3,217369)
CheckOffset(struct TT_OS2_,ulUnicodeRange3,0,3,217370)
CheckOffset(struct TT_OS2_,ulUnicodeRange4,0,3,217371)
CheckOffset(struct TT_OS2_,achVendID,0,3,217372)
CheckOffset(struct TT_OS2_,fsSelection,0,3,217373)
CheckOffset(struct TT_OS2_,usFirstCharIndex,0,3,217374)
CheckOffset(struct TT_OS2_,usLastCharIndex,0,3,217375)
CheckOffset(struct TT_OS2_,sTypoAscender,0,3,217376)
CheckOffset(struct TT_OS2_,sTypoDescender,0,3,217377)
CheckOffset(struct TT_OS2_,sTypoLineGap,0,3,217378)
CheckOffset(struct TT_OS2_,usWinAscent,0,3,217379)
CheckOffset(struct TT_OS2_,usWinDescent,0,3,217380)
CheckOffset(struct TT_OS2_,ulCodePageRange1,0,3,217381)
CheckOffset(struct TT_OS2_,ulCodePageRange2,0,3,217382)
CheckOffset(struct TT_OS2_,sxHeight,0,3,217383)
CheckOffset(struct TT_OS2_,sCapHeight,0,3,217384)
CheckOffset(struct TT_OS2_,usDefaultChar,0,3,217385)
CheckOffset(struct TT_OS2_,usBreakChar,0,3,217386)
CheckOffset(struct TT_OS2_,usMaxContext,0,3,217387)
#elif defined __i386__
CheckTypeSize(struct TT_OS2_,604, 37116, 2, , NULL, 0, NULL)
Msg("Missing member data for TT_OS2_ on IA32\n");
CheckOffset(struct TT_OS2_,version,0,2,217351)
CheckOffset(struct TT_OS2_,xAvgCharWidth,0,2,217352)
CheckOffset(struct TT_OS2_,usWeightClass,0,2,217353)
CheckOffset(struct TT_OS2_,usWidthClass,0,2,217354)
CheckOffset(struct TT_OS2_,fsType,0,2,217355)
CheckOffset(struct TT_OS2_,ySubscriptXSize,0,2,217356)
CheckOffset(struct TT_OS2_,ySubscriptYSize,0,2,217357)
CheckOffset(struct TT_OS2_,ySubscriptXOffset,0,2,217358)
CheckOffset(struct TT_OS2_,ySubscriptYOffset,0,2,217359)
CheckOffset(struct TT_OS2_,ySuperscriptXSize,0,2,217360)
CheckOffset(struct TT_OS2_,ySuperscriptYSize,0,2,217361)
CheckOffset(struct TT_OS2_,ySuperscriptXOffset,0,2,217362)
CheckOffset(struct TT_OS2_,ySuperscriptYOffset,0,2,217363)
CheckOffset(struct TT_OS2_,yStrikeoutSize,0,2,217364)
CheckOffset(struct TT_OS2_,yStrikeoutPosition,0,2,217365)
CheckOffset(struct TT_OS2_,sFamilyClass,0,2,217366)
CheckOffset(struct TT_OS2_,panose,0,2,217367)
CheckOffset(struct TT_OS2_,ulUnicodeRange1,0,2,217368)
CheckOffset(struct TT_OS2_,ulUnicodeRange2,0,2,217369)
CheckOffset(struct TT_OS2_,ulUnicodeRange3,0,2,217370)
CheckOffset(struct TT_OS2_,ulUnicodeRange4,0,2,217371)
CheckOffset(struct TT_OS2_,achVendID,0,2,217372)
CheckOffset(struct TT_OS2_,fsSelection,0,2,217373)
CheckOffset(struct TT_OS2_,usFirstCharIndex,0,2,217374)
CheckOffset(struct TT_OS2_,usLastCharIndex,0,2,217375)
CheckOffset(struct TT_OS2_,sTypoAscender,0,2,217376)
CheckOffset(struct TT_OS2_,sTypoDescender,0,2,217377)
CheckOffset(struct TT_OS2_,sTypoLineGap,0,2,217378)
CheckOffset(struct TT_OS2_,usWinAscent,0,2,217379)
CheckOffset(struct TT_OS2_,usWinDescent,0,2,217380)
CheckOffset(struct TT_OS2_,ulCodePageRange1,0,2,217381)
CheckOffset(struct TT_OS2_,ulCodePageRange2,0,2,217382)
CheckOffset(struct TT_OS2_,sxHeight,0,2,217383)
CheckOffset(struct TT_OS2_,sCapHeight,0,2,217384)
CheckOffset(struct TT_OS2_,usDefaultChar,0,2,217385)
CheckOffset(struct TT_OS2_,usBreakChar,0,2,217386)
CheckOffset(struct TT_OS2_,usMaxContext,0,2,217387)
#elif 1
CheckTypeSize(struct TT_OS2_,0, 37116, 1, , NULL, 0, NULL)
Msg("Missing member data for TT_OS2_ on All\n");
CheckOffset(struct TT_OS2_,version,0,1,217351)
CheckOffset(struct TT_OS2_,xAvgCharWidth,0,1,217352)
CheckOffset(struct TT_OS2_,usWeightClass,0,1,217353)
CheckOffset(struct TT_OS2_,usWidthClass,0,1,217354)
CheckOffset(struct TT_OS2_,fsType,0,1,217355)
CheckOffset(struct TT_OS2_,ySubscriptXSize,0,1,217356)
CheckOffset(struct TT_OS2_,ySubscriptYSize,0,1,217357)
CheckOffset(struct TT_OS2_,ySubscriptXOffset,0,1,217358)
CheckOffset(struct TT_OS2_,ySubscriptYOffset,0,1,217359)
CheckOffset(struct TT_OS2_,ySuperscriptXSize,0,1,217360)
CheckOffset(struct TT_OS2_,ySuperscriptYSize,0,1,217361)
CheckOffset(struct TT_OS2_,ySuperscriptXOffset,0,1,217362)
CheckOffset(struct TT_OS2_,ySuperscriptYOffset,0,1,217363)
CheckOffset(struct TT_OS2_,yStrikeoutSize,0,1,217364)
CheckOffset(struct TT_OS2_,yStrikeoutPosition,0,1,217365)
CheckOffset(struct TT_OS2_,sFamilyClass,0,1,217366)
CheckOffset(struct TT_OS2_,panose,0,1,217367)
CheckOffset(struct TT_OS2_,ulUnicodeRange1,0,1,217368)
CheckOffset(struct TT_OS2_,ulUnicodeRange2,0,1,217369)
CheckOffset(struct TT_OS2_,ulUnicodeRange3,0,1,217370)
CheckOffset(struct TT_OS2_,ulUnicodeRange4,0,1,217371)
CheckOffset(struct TT_OS2_,achVendID,0,1,217372)
CheckOffset(struct TT_OS2_,fsSelection,0,1,217373)
CheckOffset(struct TT_OS2_,usFirstCharIndex,0,1,217374)
CheckOffset(struct TT_OS2_,usLastCharIndex,0,1,217375)
CheckOffset(struct TT_OS2_,sTypoAscender,0,1,217376)
CheckOffset(struct TT_OS2_,sTypoDescender,0,1,217377)
CheckOffset(struct TT_OS2_,sTypoLineGap,0,1,217378)
CheckOffset(struct TT_OS2_,usWinAscent,0,1,217379)
CheckOffset(struct TT_OS2_,usWinDescent,0,1,217380)
CheckOffset(struct TT_OS2_,ulCodePageRange1,0,1,217381)
CheckOffset(struct TT_OS2_,ulCodePageRange2,0,1,217382)
CheckOffset(struct TT_OS2_,sxHeight,0,1,217383)
CheckOffset(struct TT_OS2_,sCapHeight,0,1,217384)
CheckOffset(struct TT_OS2_,usDefaultChar,0,1,217385)
CheckOffset(struct TT_OS2_,usBreakChar,0,1,217386)
CheckOffset(struct TT_OS2_,usMaxContext,0,1,217387)
#endif

#if defined __s390x__
CheckTypeSize(TT_OS2,1, 37117, 12, 4.0, NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TT_OS2,1, 37117, 10, 4.0, NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TT_OS2,1, 37117, 9, 4.0, NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TT_OS2,1, 37117, 6, 4.0, NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TT_OS2,1, 37117, 3, 4.0, NULL, 0, NULL)
#elif defined __i386__
CheckTypeSize(TT_OS2,1, 37117, 2, 4.0, NULL, 0, NULL)
#elif defined __x86_64__
Msg("Find size of TT_OS2 (37117)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,37116,NULL);\n",architecture,37117,0);
#else
Msg("Find size of TT_OS2 (37117)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,0,NULL);\n",architecture,37117,0);
#endif

#if defined __s390x__
CheckTypeSize(struct TT_Postscript_,56, 37118, 12, , NULL, 0, NULL)
Msg("Missing member data for TT_Postscript_ on S390X\n");
CheckOffset(struct TT_Postscript_,FormatType,0,12,217388)
CheckOffset(struct TT_Postscript_,italicAngle,0,12,217389)
CheckOffset(struct TT_Postscript_,underlinePosition,0,12,217390)
CheckOffset(struct TT_Postscript_,underlineThickness,0,12,217391)
CheckOffset(struct TT_Postscript_,isFixedPitch,0,12,217392)
CheckOffset(struct TT_Postscript_,minMemType42,0,12,217393)
CheckOffset(struct TT_Postscript_,maxMemType42,0,12,217394)
CheckOffset(struct TT_Postscript_,minMemType1,0,12,217395)
CheckOffset(struct TT_Postscript_,maxMemType1,0,12,217396)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct TT_Postscript_,28, 37118, 10, , NULL, 0, NULL)
Msg("Missing member data for TT_Postscript_ on S390\n");
CheckOffset(struct TT_Postscript_,FormatType,0,10,217388)
CheckOffset(struct TT_Postscript_,italicAngle,0,10,217389)
CheckOffset(struct TT_Postscript_,underlinePosition,0,10,217390)
CheckOffset(struct TT_Postscript_,underlineThickness,0,10,217391)
CheckOffset(struct TT_Postscript_,isFixedPitch,0,10,217392)
CheckOffset(struct TT_Postscript_,minMemType42,0,10,217393)
CheckOffset(struct TT_Postscript_,maxMemType42,0,10,217394)
CheckOffset(struct TT_Postscript_,minMemType1,0,10,217395)
CheckOffset(struct TT_Postscript_,maxMemType1,0,10,217396)
#elif defined __powerpc64__
CheckTypeSize(struct TT_Postscript_,56, 37118, 9, , NULL, 0, NULL)
Msg("Missing member data for TT_Postscript_ on PPC64\n");
CheckOffset(struct TT_Postscript_,FormatType,0,9,217388)
CheckOffset(struct TT_Postscript_,italicAngle,0,9,217389)
CheckOffset(struct TT_Postscript_,underlinePosition,0,9,217390)
CheckOffset(struct TT_Postscript_,underlineThickness,0,9,217391)
CheckOffset(struct TT_Postscript_,isFixedPitch,0,9,217392)
CheckOffset(struct TT_Postscript_,minMemType42,0,9,217393)
CheckOffset(struct TT_Postscript_,maxMemType42,0,9,217394)
CheckOffset(struct TT_Postscript_,minMemType1,0,9,217395)
CheckOffset(struct TT_Postscript_,maxMemType1,0,9,217396)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct TT_Postscript_,28, 37118, 6, , NULL, 0, NULL)
Msg("Missing member data for TT_Postscript_ on PPC32\n");
CheckOffset(struct TT_Postscript_,FormatType,0,6,217388)
CheckOffset(struct TT_Postscript_,italicAngle,0,6,217389)
CheckOffset(struct TT_Postscript_,underlinePosition,0,6,217390)
CheckOffset(struct TT_Postscript_,underlineThickness,0,6,217391)
CheckOffset(struct TT_Postscript_,isFixedPitch,0,6,217392)
CheckOffset(struct TT_Postscript_,minMemType42,0,6,217393)
CheckOffset(struct TT_Postscript_,maxMemType42,0,6,217394)
CheckOffset(struct TT_Postscript_,minMemType1,0,6,217395)
CheckOffset(struct TT_Postscript_,maxMemType1,0,6,217396)
#elif defined __ia64__
CheckTypeSize(struct TT_Postscript_,56, 37118, 3, , NULL, 0, NULL)
Msg("Missing member data for TT_Postscript_ on IA64\n");
CheckOffset(struct TT_Postscript_,FormatType,0,3,217388)
CheckOffset(struct TT_Postscript_,italicAngle,0,3,217389)
CheckOffset(struct TT_Postscript_,underlinePosition,0,3,217390)
CheckOffset(struct TT_Postscript_,underlineThickness,0,3,217391)
CheckOffset(struct TT_Postscript_,isFixedPitch,0,3,217392)
CheckOffset(struct TT_Postscript_,minMemType42,0,3,217393)
CheckOffset(struct TT_Postscript_,maxMemType42,0,3,217394)
CheckOffset(struct TT_Postscript_,minMemType1,0,3,217395)
CheckOffset(struct TT_Postscript_,maxMemType1,0,3,217396)
#elif defined __i386__
CheckTypeSize(struct TT_Postscript_,28, 37118, 2, , NULL, 0, NULL)
Msg("Missing member data for TT_Postscript_ on IA32\n");
CheckOffset(struct TT_Postscript_,FormatType,0,2,217388)
CheckOffset(struct TT_Postscript_,italicAngle,0,2,217389)
CheckOffset(struct TT_Postscript_,underlinePosition,0,2,217390)
CheckOffset(struct TT_Postscript_,underlineThickness,0,2,217391)
CheckOffset(struct TT_Postscript_,isFixedPitch,0,2,217392)
CheckOffset(struct TT_Postscript_,minMemType42,0,2,217393)
CheckOffset(struct TT_Postscript_,maxMemType42,0,2,217394)
CheckOffset(struct TT_Postscript_,minMemType1,0,2,217395)
CheckOffset(struct TT_Postscript_,maxMemType1,0,2,217396)
#elif 1
CheckTypeSize(struct TT_Postscript_,0, 37118, 1, , NULL, 0, NULL)
Msg("Missing member data for TT_Postscript_ on All\n");
CheckOffset(struct TT_Postscript_,FormatType,0,1,217388)
CheckOffset(struct TT_Postscript_,italicAngle,0,1,217389)
CheckOffset(struct TT_Postscript_,underlinePosition,0,1,217390)
CheckOffset(struct TT_Postscript_,underlineThickness,0,1,217391)
CheckOffset(struct TT_Postscript_,isFixedPitch,0,1,217392)
CheckOffset(struct TT_Postscript_,minMemType42,0,1,217393)
CheckOffset(struct TT_Postscript_,maxMemType42,0,1,217394)
CheckOffset(struct TT_Postscript_,minMemType1,0,1,217395)
CheckOffset(struct TT_Postscript_,maxMemType1,0,1,217396)
#endif

#if defined __s390x__
CheckTypeSize(TT_Postscript,1, 37119, 12, 4.0, NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TT_Postscript,1, 37119, 10, 4.0, NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TT_Postscript,1, 37119, 9, 4.0, NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TT_Postscript,1, 37119, 6, 4.0, NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TT_Postscript,1, 37119, 3, 4.0, NULL, 0, NULL)
#elif defined __i386__
CheckTypeSize(TT_Postscript,1, 37119, 2, 4.0, NULL, 0, NULL)
#elif defined __x86_64__
Msg("Find size of TT_Postscript (37119)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,37118,NULL);\n",architecture,37119,0);
#else
Msg("Find size of TT_Postscript (37119)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,0,NULL);\n",architecture,37119,0);
#endif

#if defined __s390x__
CheckTypeSize(struct TT_PCLT_,24, 37123, 12, , NULL, 0, NULL)
Msg("Missing member data for TT_PCLT_ on S390X\n");
CheckOffset(struct TT_PCLT_,Version,0,12,217397)
CheckOffset(struct TT_PCLT_,FontNumber,0,12,217398)
CheckOffset(struct TT_PCLT_,Pitch,0,12,217399)
CheckOffset(struct TT_PCLT_,xHeight,0,12,217400)
CheckOffset(struct TT_PCLT_,Style,0,12,217401)
CheckOffset(struct TT_PCLT_,TypeFamily,0,12,217402)
CheckOffset(struct TT_PCLT_,CapHeight,0,12,217403)
CheckOffset(struct TT_PCLT_,SymbolSet,0,12,217404)
CheckOffset(struct TT_PCLT_,TypeFace,0,12,217405)
CheckOffset(struct TT_PCLT_,CharacterComplement,0,12,217406)
CheckOffset(struct TT_PCLT_,FileName,0,12,217407)
CheckOffset(struct TT_PCLT_,StrokeWeight,0,12,217408)
CheckOffset(struct TT_PCLT_,WidthType,0,12,217409)
CheckOffset(struct TT_PCLT_,SerifStyle,0,12,217410)
CheckOffset(struct TT_PCLT_,Reserved,0,12,217411)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct TT_PCLT_,12, 37123, 10, , NULL, 0, NULL)
Msg("Missing member data for TT_PCLT_ on S390\n");
CheckOffset(struct TT_PCLT_,Version,0,10,217397)
CheckOffset(struct TT_PCLT_,FontNumber,0,10,217398)
CheckOffset(struct TT_PCLT_,Pitch,0,10,217399)
CheckOffset(struct TT_PCLT_,xHeight,0,10,217400)
CheckOffset(struct TT_PCLT_,Style,0,10,217401)
CheckOffset(struct TT_PCLT_,TypeFamily,0,10,217402)
CheckOffset(struct TT_PCLT_,CapHeight,0,10,217403)
CheckOffset(struct TT_PCLT_,SymbolSet,0,10,217404)
CheckOffset(struct TT_PCLT_,TypeFace,0,10,217405)
CheckOffset(struct TT_PCLT_,CharacterComplement,0,10,217406)
CheckOffset(struct TT_PCLT_,FileName,0,10,217407)
CheckOffset(struct TT_PCLT_,StrokeWeight,0,10,217408)
CheckOffset(struct TT_PCLT_,WidthType,0,10,217409)
CheckOffset(struct TT_PCLT_,SerifStyle,0,10,217410)
CheckOffset(struct TT_PCLT_,Reserved,0,10,217411)
#elif defined __powerpc64__
CheckTypeSize(struct TT_PCLT_,24, 37123, 9, , NULL, 0, NULL)
Msg("Missing member data for TT_PCLT_ on PPC64\n");
CheckOffset(struct TT_PCLT_,Version,0,9,217397)
CheckOffset(struct TT_PCLT_,FontNumber,0,9,217398)
CheckOffset(struct TT_PCLT_,Pitch,0,9,217399)
CheckOffset(struct TT_PCLT_,xHeight,0,9,217400)
CheckOffset(struct TT_PCLT_,Style,0,9,217401)
CheckOffset(struct TT_PCLT_,TypeFamily,0,9,217402)
CheckOffset(struct TT_PCLT_,CapHeight,0,9,217403)
CheckOffset(struct TT_PCLT_,SymbolSet,0,9,217404)
CheckOffset(struct TT_PCLT_,TypeFace,0,9,217405)
CheckOffset(struct TT_PCLT_,CharacterComplement,0,9,217406)
CheckOffset(struct TT_PCLT_,FileName,0,9,217407)
CheckOffset(struct TT_PCLT_,StrokeWeight,0,9,217408)
CheckOffset(struct TT_PCLT_,WidthType,0,9,217409)
CheckOffset(struct TT_PCLT_,SerifStyle,0,9,217410)
CheckOffset(struct TT_PCLT_,Reserved,0,9,217411)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct TT_PCLT_,12, 37123, 6, , NULL, 0, NULL)
Msg("Missing member data for TT_PCLT_ on PPC32\n");
CheckOffset(struct TT_PCLT_,Version,0,6,217397)
CheckOffset(struct TT_PCLT_,FontNumber,0,6,217398)
CheckOffset(struct TT_PCLT_,Pitch,0,6,217399)
CheckOffset(struct TT_PCLT_,xHeight,0,6,217400)
CheckOffset(struct TT_PCLT_,Style,0,6,217401)
CheckOffset(struct TT_PCLT_,TypeFamily,0,6,217402)
CheckOffset(struct TT_PCLT_,CapHeight,0,6,217403)
CheckOffset(struct TT_PCLT_,SymbolSet,0,6,217404)
CheckOffset(struct TT_PCLT_,TypeFace,0,6,217405)
CheckOffset(struct TT_PCLT_,CharacterComplement,0,6,217406)
CheckOffset(struct TT_PCLT_,FileName,0,6,217407)
CheckOffset(struct TT_PCLT_,StrokeWeight,0,6,217408)
CheckOffset(struct TT_PCLT_,WidthType,0,6,217409)
CheckOffset(struct TT_PCLT_,SerifStyle,0,6,217410)
CheckOffset(struct TT_PCLT_,Reserved,0,6,217411)
#elif defined __ia64__
CheckTypeSize(struct TT_PCLT_,24, 37123, 3, , NULL, 0, NULL)
Msg("Missing member data for TT_PCLT_ on IA64\n");
CheckOffset(struct TT_PCLT_,Version,0,3,217397)
CheckOffset(struct TT_PCLT_,FontNumber,0,3,217398)
CheckOffset(struct TT_PCLT_,Pitch,0,3,217399)
CheckOffset(struct TT_PCLT_,xHeight,0,3,217400)
CheckOffset(struct TT_PCLT_,Style,0,3,217401)
CheckOffset(struct TT_PCLT_,TypeFamily,0,3,217402)
CheckOffset(struct TT_PCLT_,CapHeight,0,3,217403)
CheckOffset(struct TT_PCLT_,SymbolSet,0,3,217404)
CheckOffset(struct TT_PCLT_,TypeFace,0,3,217405)
CheckOffset(struct TT_PCLT_,CharacterComplement,0,3,217406)
CheckOffset(struct TT_PCLT_,FileName,0,3,217407)
CheckOffset(struct TT_PCLT_,StrokeWeight,0,3,217408)
CheckOffset(struct TT_PCLT_,WidthType,0,3,217409)
CheckOffset(struct TT_PCLT_,SerifStyle,0,3,217410)
CheckOffset(struct TT_PCLT_,Reserved,0,3,217411)
#elif defined __i386__
CheckTypeSize(struct TT_PCLT_,12, 37123, 2, , NULL, 0, NULL)
Msg("Missing member data for TT_PCLT_ on IA32\n");
CheckOffset(struct TT_PCLT_,Version,0,2,217397)
CheckOffset(struct TT_PCLT_,FontNumber,0,2,217398)
CheckOffset(struct TT_PCLT_,Pitch,0,2,217399)
CheckOffset(struct TT_PCLT_,xHeight,0,2,217400)
CheckOffset(struct TT_PCLT_,Style,0,2,217401)
CheckOffset(struct TT_PCLT_,TypeFamily,0,2,217402)
CheckOffset(struct TT_PCLT_,CapHeight,0,2,217403)
CheckOffset(struct TT_PCLT_,SymbolSet,0,2,217404)
CheckOffset(struct TT_PCLT_,TypeFace,0,2,217405)
CheckOffset(struct TT_PCLT_,CharacterComplement,0,2,217406)
CheckOffset(struct TT_PCLT_,FileName,0,2,217407)
CheckOffset(struct TT_PCLT_,StrokeWeight,0,2,217408)
CheckOffset(struct TT_PCLT_,WidthType,0,2,217409)
CheckOffset(struct TT_PCLT_,SerifStyle,0,2,217410)
CheckOffset(struct TT_PCLT_,Reserved,0,2,217411)
#elif 1
CheckTypeSize(struct TT_PCLT_,0, 37123, 1, , NULL, 0, NULL)
Msg("Missing member data for TT_PCLT_ on All\n");
CheckOffset(struct TT_PCLT_,Version,0,1,217397)
CheckOffset(struct TT_PCLT_,FontNumber,0,1,217398)
CheckOffset(struct TT_PCLT_,Pitch,0,1,217399)
CheckOffset(struct TT_PCLT_,xHeight,0,1,217400)
CheckOffset(struct TT_PCLT_,Style,0,1,217401)
CheckOffset(struct TT_PCLT_,TypeFamily,0,1,217402)
CheckOffset(struct TT_PCLT_,CapHeight,0,1,217403)
CheckOffset(struct TT_PCLT_,SymbolSet,0,1,217404)
CheckOffset(struct TT_PCLT_,TypeFace,0,1,217405)
CheckOffset(struct TT_PCLT_,CharacterComplement,0,1,217406)
CheckOffset(struct TT_PCLT_,FileName,0,1,217407)
CheckOffset(struct TT_PCLT_,StrokeWeight,0,1,217408)
CheckOffset(struct TT_PCLT_,WidthType,0,1,217409)
CheckOffset(struct TT_PCLT_,SerifStyle,0,1,217410)
CheckOffset(struct TT_PCLT_,Reserved,0,1,217411)
#endif

#if defined __s390x__
CheckTypeSize(TT_PCLT,32, 37124, 12, 4.0, NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TT_PCLT,16, 37124, 10, 4.0, NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TT_PCLT,32, 37124, 9, 4.0, NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TT_PCLT,16, 37124, 6, 4.0, NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TT_PCLT,32, 37124, 3, 4.0, NULL, 0, NULL)
#elif defined __i386__
CheckTypeSize(TT_PCLT,16, 37124, 2, 4.0, NULL, 0, NULL)
#elif defined __x86_64__
Msg("Find size of TT_PCLT (37124)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,37123,NULL);\n",architecture,37124,0);
#else
Msg("Find size of TT_PCLT (37124)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,0,NULL);\n",architecture,37124,0);
#endif

#if defined __s390x__
CheckTypeSize(struct TT_MaxProfile_,32, 37125, 12, , NULL, 0, NULL)
Msg("Missing member data for TT_MaxProfile_ on S390X\n");
CheckOffset(struct TT_MaxProfile_,version,0,12,217412)
CheckOffset(struct TT_MaxProfile_,numGlyphs,0,12,217413)
CheckOffset(struct TT_MaxProfile_,maxPoints,0,12,217414)
CheckOffset(struct TT_MaxProfile_,maxContours,0,12,217415)
CheckOffset(struct TT_MaxProfile_,maxCompositePoints,0,12,217416)
CheckOffset(struct TT_MaxProfile_,maxCompositeContours,0,12,217417)
CheckOffset(struct TT_MaxProfile_,maxZones,0,12,217418)
CheckOffset(struct TT_MaxProfile_,maxTwilightPoints,0,12,217419)
CheckOffset(struct TT_MaxProfile_,maxStorage,0,12,217420)
CheckOffset(struct TT_MaxProfile_,maxFunctionDefs,0,12,217421)
CheckOffset(struct TT_MaxProfile_,maxInstructionDefs,0,12,217422)
CheckOffset(struct TT_MaxProfile_,maxStackElements,0,12,217423)
CheckOffset(struct TT_MaxProfile_,maxSizeOfInstructions,0,12,217424)
CheckOffset(struct TT_MaxProfile_,maxComponentElements,0,12,217425)
CheckOffset(struct TT_MaxProfile_,maxComponentDepth,0,12,217426)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct TT_MaxProfile_,16, 37125, 10, , NULL, 0, NULL)
Msg("Missing member data for TT_MaxProfile_ on S390\n");
CheckOffset(struct TT_MaxProfile_,version,0,10,217412)
CheckOffset(struct TT_MaxProfile_,numGlyphs,0,10,217413)
CheckOffset(struct TT_MaxProfile_,maxPoints,0,10,217414)
CheckOffset(struct TT_MaxProfile_,maxContours,0,10,217415)
CheckOffset(struct TT_MaxProfile_,maxCompositePoints,0,10,217416)
CheckOffset(struct TT_MaxProfile_,maxCompositeContours,0,10,217417)
CheckOffset(struct TT_MaxProfile_,maxZones,0,10,217418)
CheckOffset(struct TT_MaxProfile_,maxTwilightPoints,0,10,217419)
CheckOffset(struct TT_MaxProfile_,maxStorage,0,10,217420)
CheckOffset(struct TT_MaxProfile_,maxFunctionDefs,0,10,217421)
CheckOffset(struct TT_MaxProfile_,maxInstructionDefs,0,10,217422)
CheckOffset(struct TT_MaxProfile_,maxStackElements,0,10,217423)
CheckOffset(struct TT_MaxProfile_,maxSizeOfInstructions,0,10,217424)
CheckOffset(struct TT_MaxProfile_,maxComponentElements,0,10,217425)
CheckOffset(struct TT_MaxProfile_,maxComponentDepth,0,10,217426)
#elif defined __powerpc64__
CheckTypeSize(struct TT_MaxProfile_,32, 37125, 9, , NULL, 0, NULL)
Msg("Missing member data for TT_MaxProfile_ on PPC64\n");
CheckOffset(struct TT_MaxProfile_,version,0,9,217412)
CheckOffset(struct TT_MaxProfile_,numGlyphs,0,9,217413)
CheckOffset(struct TT_MaxProfile_,maxPoints,0,9,217414)
CheckOffset(struct TT_MaxProfile_,maxContours,0,9,217415)
CheckOffset(struct TT_MaxProfile_,maxCompositePoints,0,9,217416)
CheckOffset(struct TT_MaxProfile_,maxCompositeContours,0,9,217417)
CheckOffset(struct TT_MaxProfile_,maxZones,0,9,217418)
CheckOffset(struct TT_MaxProfile_,maxTwilightPoints,0,9,217419)
CheckOffset(struct TT_MaxProfile_,maxStorage,0,9,217420)
CheckOffset(struct TT_MaxProfile_,maxFunctionDefs,0,9,217421)
CheckOffset(struct TT_MaxProfile_,maxInstructionDefs,0,9,217422)
CheckOffset(struct TT_MaxProfile_,maxStackElements,0,9,217423)
CheckOffset(struct TT_MaxProfile_,maxSizeOfInstructions,0,9,217424)
CheckOffset(struct TT_MaxProfile_,maxComponentElements,0,9,217425)
CheckOffset(struct TT_MaxProfile_,maxComponentDepth,0,9,217426)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct TT_MaxProfile_,16, 37125, 6, , NULL, 0, NULL)
Msg("Missing member data for TT_MaxProfile_ on PPC32\n");
CheckOffset(struct TT_MaxProfile_,version,0,6,217412)
CheckOffset(struct TT_MaxProfile_,numGlyphs,0,6,217413)
CheckOffset(struct TT_MaxProfile_,maxPoints,0,6,217414)
CheckOffset(struct TT_MaxProfile_,maxContours,0,6,217415)
CheckOffset(struct TT_MaxProfile_,maxCompositePoints,0,6,217416)
CheckOffset(struct TT_MaxProfile_,maxCompositeContours,0,6,217417)
CheckOffset(struct TT_MaxProfile_,maxZones,0,6,217418)
CheckOffset(struct TT_MaxProfile_,maxTwilightPoints,0,6,217419)
CheckOffset(struct TT_MaxProfile_,maxStorage,0,6,217420)
CheckOffset(struct TT_MaxProfile_,maxFunctionDefs,0,6,217421)
CheckOffset(struct TT_MaxProfile_,maxInstructionDefs,0,6,217422)
CheckOffset(struct TT_MaxProfile_,maxStackElements,0,6,217423)
CheckOffset(struct TT_MaxProfile_,maxSizeOfInstructions,0,6,217424)
CheckOffset(struct TT_MaxProfile_,maxComponentElements,0,6,217425)
CheckOffset(struct TT_MaxProfile_,maxComponentDepth,0,6,217426)
#elif defined __ia64__
CheckTypeSize(struct TT_MaxProfile_,32, 37125, 3, , NULL, 0, NULL)
Msg("Missing member data for TT_MaxProfile_ on IA64\n");
CheckOffset(struct TT_MaxProfile_,version,0,3,217412)
CheckOffset(struct TT_MaxProfile_,numGlyphs,0,3,217413)
CheckOffset(struct TT_MaxProfile_,maxPoints,0,3,217414)
CheckOffset(struct TT_MaxProfile_,maxContours,0,3,217415)
CheckOffset(struct TT_MaxProfile_,maxCompositePoints,0,3,217416)
CheckOffset(struct TT_MaxProfile_,maxCompositeContours,0,3,217417)
CheckOffset(struct TT_MaxProfile_,maxZones,0,3,217418)
CheckOffset(struct TT_MaxProfile_,maxTwilightPoints,0,3,217419)
CheckOffset(struct TT_MaxProfile_,maxStorage,0,3,217420)
CheckOffset(struct TT_MaxProfile_,maxFunctionDefs,0,3,217421)
CheckOffset(struct TT_MaxProfile_,maxInstructionDefs,0,3,217422)
CheckOffset(struct TT_MaxProfile_,maxStackElements,0,3,217423)
CheckOffset(struct TT_MaxProfile_,maxSizeOfInstructions,0,3,217424)
CheckOffset(struct TT_MaxProfile_,maxComponentElements,0,3,217425)
CheckOffset(struct TT_MaxProfile_,maxComponentDepth,0,3,217426)
#elif defined __i386__
CheckTypeSize(struct TT_MaxProfile_,16, 37125, 2, , NULL, 0, NULL)
Msg("Missing member data for TT_MaxProfile_ on IA32\n");
CheckOffset(struct TT_MaxProfile_,version,0,2,217412)
CheckOffset(struct TT_MaxProfile_,numGlyphs,0,2,217413)
CheckOffset(struct TT_MaxProfile_,maxPoints,0,2,217414)
CheckOffset(struct TT_MaxProfile_,maxContours,0,2,217415)
CheckOffset(struct TT_MaxProfile_,maxCompositePoints,0,2,217416)
CheckOffset(struct TT_MaxProfile_,maxCompositeContours,0,2,217417)
CheckOffset(struct TT_MaxProfile_,maxZones,0,2,217418)
CheckOffset(struct TT_MaxProfile_,maxTwilightPoints,0,2,217419)
CheckOffset(struct TT_MaxProfile_,maxStorage,0,2,217420)
CheckOffset(struct TT_MaxProfile_,maxFunctionDefs,0,2,217421)
CheckOffset(struct TT_MaxProfile_,maxInstructionDefs,0,2,217422)
CheckOffset(struct TT_MaxProfile_,maxStackElements,0,2,217423)
CheckOffset(struct TT_MaxProfile_,maxSizeOfInstructions,0,2,217424)
CheckOffset(struct TT_MaxProfile_,maxComponentElements,0,2,217425)
CheckOffset(struct TT_MaxProfile_,maxComponentDepth,0,2,217426)
#elif 1
CheckTypeSize(struct TT_MaxProfile_,0, 37125, 1, , NULL, 0, NULL)
Msg("Missing member data for TT_MaxProfile_ on All\n");
CheckOffset(struct TT_MaxProfile_,version,0,1,217412)
CheckOffset(struct TT_MaxProfile_,numGlyphs,0,1,217413)
CheckOffset(struct TT_MaxProfile_,maxPoints,0,1,217414)
CheckOffset(struct TT_MaxProfile_,maxContours,0,1,217415)
CheckOffset(struct TT_MaxProfile_,maxCompositePoints,0,1,217416)
CheckOffset(struct TT_MaxProfile_,maxCompositeContours,0,1,217417)
CheckOffset(struct TT_MaxProfile_,maxZones,0,1,217418)
CheckOffset(struct TT_MaxProfile_,maxTwilightPoints,0,1,217419)
CheckOffset(struct TT_MaxProfile_,maxStorage,0,1,217420)
CheckOffset(struct TT_MaxProfile_,maxFunctionDefs,0,1,217421)
CheckOffset(struct TT_MaxProfile_,maxInstructionDefs,0,1,217422)
CheckOffset(struct TT_MaxProfile_,maxStackElements,0,1,217423)
CheckOffset(struct TT_MaxProfile_,maxSizeOfInstructions,0,1,217424)
CheckOffset(struct TT_MaxProfile_,maxComponentElements,0,1,217425)
CheckOffset(struct TT_MaxProfile_,maxComponentDepth,0,1,217426)
#endif

#if defined __s390x__
CheckTypeSize(TT_MaxProfile,40, 37126, 12, 4.0, NULL, 0, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(TT_MaxProfile,20, 37126, 10, 4.0, NULL, 0, NULL)
#elif defined __powerpc64__
CheckTypeSize(TT_MaxProfile,40, 37126, 9, 4.0, NULL, 0, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(TT_MaxProfile,20, 37126, 6, 4.0, NULL, 0, NULL)
#elif defined __ia64__
CheckTypeSize(TT_MaxProfile,40, 37126, 3, 4.0, NULL, 0, NULL)
#elif defined __i386__
CheckTypeSize(TT_MaxProfile,20, 37126, 2, 4.0, NULL, 0, NULL)
#elif defined __x86_64__
Msg("Find size of TT_MaxProfile (37126)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,37125,NULL);\n",architecture,37126,0);
#else
Msg("Find size of TT_MaxProfile (37126)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,0, NULL);\n",architecture,37126,0);
#endif

extern FT_ULong FT_Get_CMap_Language_ID_db(FT_CharMap);
CheckInterfacedef(FT_Get_CMap_Language_ID,FT_Get_CMap_Language_ID_db);
extern FT_Error FT_Load_Sfnt_Table_db(FT_Face, FT_ULong, FT_Long, FT_Byte *, FT_ULong *);
CheckInterfacedef(FT_Load_Sfnt_Table,FT_Load_Sfnt_Table_db);
extern void * FT_Get_Sfnt_Table_db(FT_Face, FT_Sfnt_Tag);
CheckInterfacedef(FT_Get_Sfnt_Table,FT_Get_Sfnt_Table_db);
extern FT_Error FT_Sfnt_Table_Info_db(FT_Face, FT_UInt, FT_ULong *, FT_ULong *);
CheckInterfacedef(FT_Sfnt_Table_Info,FT_Sfnt_Table_Info_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/tttables.h\n\n",pcnt,cnt);
return cnt;
#endif

}
