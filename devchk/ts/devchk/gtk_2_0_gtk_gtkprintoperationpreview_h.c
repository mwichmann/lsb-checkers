/*
 * Test of gtk-2.0/gtk/gtkprintoperationpreview.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gtk-2.0/gtk/gtkprintoperationpreview.h"



#ifdef TET_TEST
void gtk_2_0_gtk_gtkprintoperationpreview_h()
{
#else
int gtk_2_0_gtk_gtkprintoperationpreview_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gtk/gtkprintoperationpreview.h\n");
#endif

printf("Checking data structures in gtk-2.0/gtk/gtkprintoperationpreview.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef __GTK_PRINT_OPERATION_PREVIEW_H__
Msg( "Error: Constant not found: __GTK_PRINT_OPERATION_PREVIEW_H__\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_PRINT_OPERATION_PREVIEW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_PRINT_OPERATION_PREVIEW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_PRINT_OPERATION_PREVIEW(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_PRINT_OPERATION_PREVIEW_GET_IFACE(obj) */
#endif

#if 1
CheckTypeSize(GtkPrintOperationPreviewIface,0, 40066, 1, 4.1, NULL, 40073, NULL)
#endif

#if 1
CheckTypeSize(struct _GtkPrintOperationPreviewIface,0, 40073, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkPrintOperationPreviewIface on All\n");
CheckOffset(struct _GtkPrintOperationPreviewIface,g_iface,0,1,219755)
CheckOffset(struct _GtkPrintOperationPreviewIface,ready,0,1,219756)
CheckOffset(struct _GtkPrintOperationPreviewIface,got_page_size,0,1,219757)
CheckOffset(struct _GtkPrintOperationPreviewIface,render_page,0,1,219758)
CheckOffset(struct _GtkPrintOperationPreviewIface,is_selected,0,1,219759)
CheckOffset(struct _GtkPrintOperationPreviewIface,end_preview,0,1,219760)
CheckOffset(struct _GtkPrintOperationPreviewIface,_gtk_reserved1,0,1,219761)
CheckOffset(struct _GtkPrintOperationPreviewIface,_gtk_reserved2,0,1,219762)
CheckOffset(struct _GtkPrintOperationPreviewIface,_gtk_reserved3,0,1,219763)
CheckOffset(struct _GtkPrintOperationPreviewIface,_gtk_reserved4,0,1,219764)
CheckOffset(struct _GtkPrintOperationPreviewIface,_gtk_reserved5,0,1,219765)
CheckOffset(struct _GtkPrintOperationPreviewIface,_gtk_reserved6,0,1,219766)
CheckOffset(struct _GtkPrintOperationPreviewIface,_gtk_reserved7,0,1,219767)
#endif

extern GType gtk_print_operation_preview_get_type_db(void);
CheckInterfacedef(gtk_print_operation_preview_get_type,gtk_print_operation_preview_get_type_db);
extern void gtk_print_operation_preview_render_page_db(GtkPrintOperationPreview *, gint);
CheckInterfacedef(gtk_print_operation_preview_render_page,gtk_print_operation_preview_render_page_db);
extern void gtk_print_operation_preview_end_preview_db(GtkPrintOperationPreview *);
CheckInterfacedef(gtk_print_operation_preview_end_preview,gtk_print_operation_preview_end_preview_db);
extern gboolean gtk_print_operation_preview_is_selected_db(GtkPrintOperationPreview *, gint);
CheckInterfacedef(gtk_print_operation_preview_is_selected,gtk_print_operation_preview_is_selected_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-2.0/gtk/gtkprintoperationpreview.h\n\n",pcnt,cnt);
return cnt;
#endif

}
