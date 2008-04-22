/*
 * Test of X11/extensions/XKBgeom.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/extensions/XKBgeom.h"



#ifdef TET_TEST
void X11_extensions_XKBgeom_h()
{
#else
int X11_extensions_XKBgeom_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XKBgeom.h\n");
#endif

printf("Checking data structures in X11/extensions/XKBgeom.h\n");
#if 1
CheckTypeSize(struct _XkbProperty,0, 9407, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbProperty on All\n");
CheckOffset(struct _XkbProperty,name,0,1,30546)
CheckOffset(struct _XkbProperty,value,0,1,30547)
#endif

#if 1
CheckTypeSize(XkbPropertyRec,0, 9408, 1, 1.2, NULL, 9407, NULL)
#endif

#if 1
CheckTypeSize(XkbPropertyPtr,0, 9410, 1, 1.2, NULL, 9409, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbColor,0, 9411, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbColor on All\n");
CheckOffset(struct _XkbColor,pixel,0,1,30550)
CheckOffset(struct _XkbColor,spec,0,1,30551)
#endif

#if 1
CheckTypeSize(XkbColorRec,0, 9412, 1, 1.2, NULL, 9411, NULL)
#endif

#if 1
CheckTypeSize(XkbColorPtr,0, 9414, 1, 1.2, NULL, 9413, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbPoint,4, 9415, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbPoint,y,2,1,30555)
CheckOffset(struct _XkbPoint,y,2,1,30555)
#endif

#if 1
CheckTypeSize(XkbPointRec,4, 9416, 1, 1.2, NULL, 9415, NULL)
#endif

#if 1
CheckTypeSize(XkbPointPtr,0, 9418, 1, 1.2, NULL, 9417, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbBounds,8, 9419, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbBounds,y1,2,1,30561)
CheckOffset(struct _XkbBounds,y1,2,1,30561)
CheckMemberSize(struct _XkbBounds,x2,2,1,30562)
CheckOffset(struct _XkbBounds,x2,4,1,30562)
CheckMemberSize(struct _XkbBounds,y2,2,1,30563)
CheckOffset(struct _XkbBounds,y2,6,1,30563)
#endif

#if 1
CheckTypeSize(XkbBoundsRec,8, 9420, 1, 1.2, NULL, 9419, NULL)
#endif

#if defined __i386__
CheckTypeSize(XkbBoundsPtr,4, 9422, 2, 1.2, NULL, 9421, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbBoundsPtr,0, 9422, 10, 1.2, NULL, 9421, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbBoundsPtr,0, 9422, 11, 1.2, NULL, 9421, NULL)
#elif defined __s390x__
CheckTypeSize(XkbBoundsPtr,0, 9422, 12, 1.2, NULL, 9421, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbBoundsPtr,0, 9422, 6, 1.2, NULL, 9421, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbBoundsPtr,0, 9422, 9, 1.2, NULL, 9421, NULL)
#else
Msg("Find size of XkbBoundsPtr (9422)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9421,NULL);\n",architecture,9422,0);
#endif

#if 1
CheckTypeSize(struct _XkbOutline,0, 9423, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOutline,sz_points,2,1,30569)
CheckOffset(struct _XkbOutline,sz_points,2,1,30569)
CheckMemberSize(struct _XkbOutline,corner_radius,2,1,30570)
CheckOffset(struct _XkbOutline,corner_radius,4,1,30570)
#endif

#if 1
CheckTypeSize(XkbOutlineRec,0, 9424, 1, 1.2, NULL, 9423, NULL)
#endif

#if defined __i386__
CheckTypeSize(XkbOutlinePtr,4, 9426, 2, 1.2, NULL, 9425, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbOutlinePtr,0, 9426, 10, 1.2, NULL, 9425, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbOutlinePtr,0, 9426, 11, 1.2, NULL, 9425, NULL)
#elif defined __s390x__
CheckTypeSize(XkbOutlinePtr,0, 9426, 12, 1.2, NULL, 9425, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbOutlinePtr,0, 9426, 6, 1.2, NULL, 9425, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbOutlinePtr,0, 9426, 9, 1.2, NULL, 9425, NULL)
#else
Msg("Find size of XkbOutlinePtr (9426)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9425,NULL);\n",architecture,9426,0);
#endif

#if 1
CheckTypeSize(struct _XkbShape,0, 9427, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbShape on All\n");
CheckOffset(struct _XkbShape,name,0,1,30579)
CheckOffset(struct _XkbShape,num_outlines,0,1,30580)
CheckOffset(struct _XkbShape,sz_outlines,0,1,30581)
CheckOffset(struct _XkbShape,outlines,0,1,30582)
CheckOffset(struct _XkbShape,approx,0,1,30583)
CheckOffset(struct _XkbShape,primary,0,1,30584)
CheckOffset(struct _XkbShape,bounds,0,1,30585)
#endif

#if 1
CheckTypeSize(XkbShapeRec,0, 9428, 1, 1.2, NULL, 9427, NULL)
#endif

#if defined __i386__
CheckTypeSize(XkbShapePtr,4, 9430, 2, 1.2, NULL, 9429, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbShapePtr,0, 9430, 10, 1.2, NULL, 9429, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbShapePtr,0, 9430, 11, 1.2, NULL, 9429, NULL)
#elif defined __s390x__
CheckTypeSize(XkbShapePtr,0, 9430, 12, 1.2, NULL, 9429, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbShapePtr,0, 9430, 6, 1.2, NULL, 9429, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbShapePtr,0, 9430, 9, 1.2, NULL, 9429, NULL)
#else
Msg("Find size of XkbShapePtr (9430)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9429,NULL);\n",architecture,9430,0);
#endif

#if 1
CheckTypeSize(struct _XkbShapeDoodad,0, 9431, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbShapeDoodad on All\n");
CheckOffset(struct _XkbShapeDoodad,name,0,1,30594)
CheckOffset(struct _XkbShapeDoodad,type,0,1,30595)
CheckOffset(struct _XkbShapeDoodad,priority,0,1,30596)
CheckOffset(struct _XkbShapeDoodad,top,0,1,30597)
CheckOffset(struct _XkbShapeDoodad,left,0,1,30598)
CheckOffset(struct _XkbShapeDoodad,angle,0,1,30599)
CheckOffset(struct _XkbShapeDoodad,color_ndx,0,1,30600)
CheckOffset(struct _XkbShapeDoodad,shape_ndx,0,1,30601)
#endif

#if 1
CheckTypeSize(XkbShapeDoodadRec,0, 9432, 1, 1.2, NULL, 9431, NULL)
#endif

#if 1
CheckTypeSize(XkbShapeDoodadPtr,0, 9434, 1, 1.2, NULL, 9433, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbTextDoodad,0, 9435, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbTextDoodad on All\n");
CheckOffset(struct _XkbTextDoodad,name,0,1,30613)
CheckOffset(struct _XkbTextDoodad,type,0,1,30614)
CheckOffset(struct _XkbTextDoodad,priority,0,1,30615)
CheckOffset(struct _XkbTextDoodad,top,0,1,30616)
CheckOffset(struct _XkbTextDoodad,left,0,1,30617)
CheckOffset(struct _XkbTextDoodad,angle,0,1,30618)
CheckOffset(struct _XkbTextDoodad,width,0,1,30619)
CheckOffset(struct _XkbTextDoodad,height,0,1,30620)
CheckOffset(struct _XkbTextDoodad,color_ndx,0,1,30621)
CheckOffset(struct _XkbTextDoodad,text,0,1,30622)
CheckOffset(struct _XkbTextDoodad,font,0,1,30623)
#endif

#if 1
CheckTypeSize(XkbTextDoodadRec,0, 9436, 1, 1.2, NULL, 9435, NULL)
#endif

#if 1
CheckTypeSize(XkbTextDoodadPtr,0, 9438, 1, 1.2, NULL, 9437, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbIndicatorDoodad,0, 9439, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbIndicatorDoodad on All\n");
CheckOffset(struct _XkbIndicatorDoodad,name,0,1,30633)
CheckOffset(struct _XkbIndicatorDoodad,type,0,1,30634)
CheckOffset(struct _XkbIndicatorDoodad,priority,0,1,30635)
CheckOffset(struct _XkbIndicatorDoodad,top,0,1,30636)
CheckOffset(struct _XkbIndicatorDoodad,left,0,1,30637)
CheckOffset(struct _XkbIndicatorDoodad,angle,0,1,30638)
CheckOffset(struct _XkbIndicatorDoodad,shape_ndx,0,1,30639)
CheckOffset(struct _XkbIndicatorDoodad,on_color_ndx,0,1,30640)
CheckOffset(struct _XkbIndicatorDoodad,off_color_ndx,0,1,30641)
#endif

#if 1
CheckTypeSize(XkbIndicatorDoodadRec,0, 9440, 1, 1.2, NULL, 9439, NULL)
#endif

#if 1
CheckTypeSize(XkbIndicatorDoodadPtr,0, 9442, 1, 1.2, NULL, 9441, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbLogoDoodad,0, 9443, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbLogoDoodad on All\n");
CheckOffset(struct _XkbLogoDoodad,name,0,1,30651)
CheckOffset(struct _XkbLogoDoodad,type,0,1,30652)
CheckOffset(struct _XkbLogoDoodad,priority,0,1,30653)
CheckOffset(struct _XkbLogoDoodad,top,0,1,30654)
CheckOffset(struct _XkbLogoDoodad,left,0,1,30655)
CheckOffset(struct _XkbLogoDoodad,angle,0,1,30656)
CheckOffset(struct _XkbLogoDoodad,color_ndx,0,1,30657)
CheckOffset(struct _XkbLogoDoodad,shape_ndx,0,1,30658)
CheckOffset(struct _XkbLogoDoodad,logo_name,0,1,30659)
#endif

#if 1
CheckTypeSize(XkbLogoDoodadRec,0, 9444, 1, 1.2, NULL, 9443, NULL)
#endif

#if 1
CheckTypeSize(XkbLogoDoodadPtr,0, 9446, 1, 1.2, NULL, 9445, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbAnyDoodad,0, 9447, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbAnyDoodad on All\n");
CheckOffset(struct _XkbAnyDoodad,name,0,1,30666)
CheckOffset(struct _XkbAnyDoodad,type,0,1,30667)
CheckOffset(struct _XkbAnyDoodad,priority,0,1,30668)
CheckOffset(struct _XkbAnyDoodad,top,0,1,30669)
CheckOffset(struct _XkbAnyDoodad,left,0,1,30670)
CheckOffset(struct _XkbAnyDoodad,angle,0,1,30671)
#endif

#if 1
CheckTypeSize(XkbAnyDoodadRec,0, 9448, 1, 1.2, NULL, 9447, NULL)
#endif

#if 1
CheckTypeSize(XkbAnyDoodadPtr,0, 9450, 1, 1.2, NULL, 9449, NULL)
#endif

#if 1
CheckTypeSize(union _XkbDoodad,0, 9451, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbDoodad on All\n");
CheckOffset(union _XkbDoodad,any,0,1,30677)
CheckOffset(union _XkbDoodad,shape,0,1,30678)
CheckOffset(union _XkbDoodad,text,0,1,30679)
CheckOffset(union _XkbDoodad,indicator,0,1,30680)
CheckOffset(union _XkbDoodad,logo,0,1,30681)
#endif

#if 1
CheckTypeSize(XkbDoodadRec,0, 9452, 1, 1.2, NULL, 9451, NULL)
#endif

#if defined __i386__
CheckTypeSize(XkbDoodadPtr,4, 9454, 2, 1.2, NULL, 9453, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbDoodadPtr,0, 9454, 10, 1.2, NULL, 9453, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbDoodadPtr,0, 9454, 11, 1.2, NULL, 9453, NULL)
#elif defined __s390x__
CheckTypeSize(XkbDoodadPtr,0, 9454, 12, 1.2, NULL, 9453, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbDoodadPtr,0, 9454, 6, 1.2, NULL, 9453, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbDoodadPtr,0, 9454, 9, 1.2, NULL, 9453, NULL)
#else
Msg("Find size of XkbDoodadPtr (9454)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9453,NULL);\n",architecture,9454,0);
#endif

#if 1
CheckTypeSize(struct _XkbKey,8, 9455, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbKey,gap,2,1,30687)
CheckOffset(struct _XkbKey,gap,4,1,30687)
CheckMemberSize(struct _XkbKey,shape_ndx,1,1,30688)
CheckOffset(struct _XkbKey,shape_ndx,6,1,30688)
CheckMemberSize(struct _XkbKey,color_ndx,1,1,30689)
CheckOffset(struct _XkbKey,color_ndx,7,1,30689)
#endif

#if 1
CheckTypeSize(XkbKeyRec,8, 9457, 1, 1.2, NULL, 9455, NULL)
#endif

#if 1
CheckTypeSize(XkbKeyPtr,0, 9459, 1, 1.2, NULL, 9458, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbRow,0, 9460, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbRow,left,2,1,30698)
CheckOffset(struct _XkbRow,left,2,1,30698)
CheckMemberSize(struct _XkbRow,num_keys,2,1,30699)
CheckOffset(struct _XkbRow,num_keys,4,1,30699)
CheckMemberSize(struct _XkbRow,sz_keys,2,1,30700)
CheckOffset(struct _XkbRow,sz_keys,6,1,30700)
CheckMemberSize(struct _XkbRow,vertical,4,1,30701)
CheckOffset(struct _XkbRow,vertical,8,1,30701)
#endif

#if 1
CheckTypeSize(XkbRowRec,0, 9461, 1, 1.2, NULL, 9460, NULL)
#endif

#if defined __i386__
CheckTypeSize(XkbRowPtr,4, 9463, 2, 1.2, NULL, 9462, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbRowPtr,0, 9463, 10, 1.2, NULL, 9462, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbRowPtr,0, 9463, 11, 1.2, NULL, 9462, NULL)
#elif defined __s390x__
CheckTypeSize(XkbRowPtr,0, 9463, 12, 1.2, NULL, 9462, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbRowPtr,0, 9463, 6, 1.2, NULL, 9462, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbRowPtr,0, 9463, 9, 1.2, NULL, 9462, NULL)
#else
Msg("Find size of XkbRowPtr (9463)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9462,NULL);\n",architecture,9463,0);
#endif

#if 1
CheckTypeSize(struct _XkbSection,0, 9464, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbSection on All\n");
CheckOffset(struct _XkbSection,name,0,1,30721)
CheckOffset(struct _XkbSection,priority,0,1,30722)
CheckOffset(struct _XkbSection,top,0,1,30723)
CheckOffset(struct _XkbSection,left,0,1,30724)
CheckOffset(struct _XkbSection,width,0,1,30725)
CheckOffset(struct _XkbSection,height,0,1,30726)
CheckOffset(struct _XkbSection,angle,0,1,30727)
CheckOffset(struct _XkbSection,num_rows,0,1,30728)
CheckOffset(struct _XkbSection,num_doodads,0,1,30729)
CheckOffset(struct _XkbSection,num_overlays,0,1,30730)
CheckOffset(struct _XkbSection,sz_rows,0,1,30731)
CheckOffset(struct _XkbSection,sz_doodads,0,1,30732)
CheckOffset(struct _XkbSection,sz_overlays,0,1,30733)
CheckOffset(struct _XkbSection,rows,0,1,30734)
CheckOffset(struct _XkbSection,doodads,0,1,30735)
CheckOffset(struct _XkbSection,bounds,0,1,30736)
CheckOffset(struct _XkbSection,overlays,0,1,30737)
#endif

#if 1
CheckTypeSize(struct _XkbOverlay,0, 9465, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbOverlay on All\n");
CheckOffset(struct _XkbOverlay,name,0,1,30756)
CheckOffset(struct _XkbOverlay,section_under,0,1,30757)
CheckOffset(struct _XkbOverlay,num_rows,0,1,30758)
CheckOffset(struct _XkbOverlay,sz_rows,0,1,30759)
CheckOffset(struct _XkbOverlay,rows,0,1,30760)
CheckOffset(struct _XkbOverlay,bounds,0,1,30761)
#endif

#if 1
CheckTypeSize(XkbSectionRec,0, 9467, 1, 1.2, NULL, 9464, NULL)
#endif

#if defined __i386__
CheckTypeSize(XkbSectionPtr,4, 9469, 2, 1.2, NULL, 9468, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbSectionPtr,0, 9469, 10, 1.2, NULL, 9468, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbSectionPtr,0, 9469, 11, 1.2, NULL, 9468, NULL)
#elif defined __s390x__
CheckTypeSize(XkbSectionPtr,0, 9469, 12, 1.2, NULL, 9468, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbSectionPtr,0, 9469, 6, 1.2, NULL, 9468, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbSectionPtr,0, 9469, 9, 1.2, NULL, 9468, NULL)
#else
Msg("Find size of XkbSectionPtr (9469)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9468,NULL);\n",architecture,9469,0);
#endif

#if 1
CheckTypeSize(struct _XkbOverlayKey,8, 9470, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlayKey,under,4,1,30741)
CheckOffset(struct _XkbOverlayKey,under,4,1,30741)
#endif

#if 1
CheckTypeSize(XkbOverlayKeyRec,8, 9471, 1, 1.2, NULL, 9470, NULL)
#endif

#if 1
CheckTypeSize(XkbOverlayKeyPtr,0, 9473, 1, 1.2, NULL, 9472, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbOverlayRow,0, 9474, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbOverlayRow,num_keys,2,1,30747)
CheckOffset(struct _XkbOverlayRow,num_keys,2,1,30747)
CheckMemberSize(struct _XkbOverlayRow,sz_keys,2,1,30748)
CheckOffset(struct _XkbOverlayRow,sz_keys,4,1,30748)
#endif

#if 1
CheckTypeSize(XkbOverlayRowRec,0, 9475, 1, 1.2, NULL, 9474, NULL)
#endif

#if defined __i386__
CheckTypeSize(XkbOverlayRowPtr,4, 9477, 2, 1.2, NULL, 9476, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbOverlayRowPtr,0, 9477, 10, 1.2, NULL, 9476, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbOverlayRowPtr,0, 9477, 11, 1.2, NULL, 9476, NULL)
#elif defined __s390x__
CheckTypeSize(XkbOverlayRowPtr,0, 9477, 12, 1.2, NULL, 9476, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbOverlayRowPtr,0, 9477, 6, 1.2, NULL, 9476, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbOverlayRowPtr,0, 9477, 9, 1.2, NULL, 9476, NULL)
#else
Msg("Find size of XkbOverlayRowPtr (9477)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9476,NULL);\n",architecture,9477,0);
#endif

#if 1
CheckTypeSize(XkbOverlayRec,0, 9478, 1, 1.2, NULL, 9465, NULL)
#endif

#if defined __i386__
CheckTypeSize(XkbOverlayPtr,4, 9479, 2, 1.2, NULL, 9466, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbOverlayPtr,0, 9479, 10, 1.2, NULL, 9466, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbOverlayPtr,0, 9479, 11, 1.2, NULL, 9466, NULL)
#elif defined __s390x__
CheckTypeSize(XkbOverlayPtr,0, 9479, 12, 1.2, NULL, 9466, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbOverlayPtr,0, 9479, 6, 1.2, NULL, 9466, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbOverlayPtr,0, 9479, 9, 1.2, NULL, 9466, NULL)
#else
Msg("Find size of XkbOverlayPtr (9479)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9466,NULL);\n",architecture,9479,0);
#endif

#if 1
CheckTypeSize(struct _XkbGeometry,0, 9480, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbGeometry on All\n");
CheckOffset(struct _XkbGeometry,name,0,1,30762)
CheckOffset(struct _XkbGeometry,width_mm,0,1,30763)
CheckOffset(struct _XkbGeometry,height_mm,0,1,30764)
CheckOffset(struct _XkbGeometry,label_font,0,1,30765)
CheckOffset(struct _XkbGeometry,label_color,0,1,30766)
CheckOffset(struct _XkbGeometry,base_color,0,1,30767)
CheckOffset(struct _XkbGeometry,sz_properties,0,1,30768)
CheckOffset(struct _XkbGeometry,sz_colors,0,1,30769)
CheckOffset(struct _XkbGeometry,sz_shapes,0,1,30770)
CheckOffset(struct _XkbGeometry,sz_sections,0,1,30771)
CheckOffset(struct _XkbGeometry,sz_doodads,0,1,30772)
CheckOffset(struct _XkbGeometry,sz_key_aliases,0,1,30773)
CheckOffset(struct _XkbGeometry,num_properties,0,1,30774)
CheckOffset(struct _XkbGeometry,num_colors,0,1,30775)
CheckOffset(struct _XkbGeometry,num_shapes,0,1,30776)
CheckOffset(struct _XkbGeometry,num_sections,0,1,30777)
CheckOffset(struct _XkbGeometry,num_doodads,0,1,30778)
CheckOffset(struct _XkbGeometry,num_key_aliases,0,1,30779)
CheckOffset(struct _XkbGeometry,properties,0,1,30780)
CheckOffset(struct _XkbGeometry,colors,0,1,30781)
CheckOffset(struct _XkbGeometry,shapes,0,1,30782)
CheckOffset(struct _XkbGeometry,sections,0,1,30783)
CheckOffset(struct _XkbGeometry,doodads,0,1,30784)
CheckOffset(struct _XkbGeometry,key_aliases,0,1,30785)
#endif

#if 1
CheckTypeSize(XkbGeometryRec,0, 9482, 1, 1.2, NULL, 9480, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbGeometrySizes,16, 9483, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbGeometrySizes,num_properties,2,1,30794)
CheckOffset(struct _XkbGeometrySizes,num_properties,4,1,30794)
CheckMemberSize(struct _XkbGeometrySizes,num_colors,2,1,30795)
CheckOffset(struct _XkbGeometrySizes,num_colors,6,1,30795)
CheckMemberSize(struct _XkbGeometrySizes,num_shapes,2,1,30796)
CheckOffset(struct _XkbGeometrySizes,num_shapes,8,1,30796)
CheckMemberSize(struct _XkbGeometrySizes,num_sections,2,1,30797)
CheckOffset(struct _XkbGeometrySizes,num_sections,10,1,30797)
CheckMemberSize(struct _XkbGeometrySizes,num_doodads,2,1,30798)
CheckOffset(struct _XkbGeometrySizes,num_doodads,12,1,30798)
CheckMemberSize(struct _XkbGeometrySizes,num_key_aliases,2,1,30799)
CheckOffset(struct _XkbGeometrySizes,num_key_aliases,14,1,30799)
#endif

#if 1
CheckTypeSize(XkbGeometrySizesRec,16, 9484, 1, 1.2, NULL, 9483, NULL)
#endif

#if defined __i386__
CheckTypeSize(XkbGeometrySizesPtr,4, 9486, 2, 1.2, NULL, 9485, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbGeometrySizesPtr,0, 9486, 10, 1.2, NULL, 9485, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbGeometrySizesPtr,0, 9486, 11, 1.2, NULL, 9485, NULL)
#elif defined __s390x__
CheckTypeSize(XkbGeometrySizesPtr,0, 9486, 12, 1.2, NULL, 9485, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbGeometrySizesPtr,0, 9486, 6, 1.2, NULL, 9485, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbGeometrySizesPtr,0, 9486, 9, 1.2, NULL, 9485, NULL)
#else
Msg("Find size of XkbGeometrySizesPtr (9486)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9485, NULL);\n",architecture,9486,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XKBgeom.h\n\n",pcnt,cnt);
return cnt;
#endif

}
