/*
 * Test of gtk-2.0/gtk/gtkstatusicon.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gtk-2.0/gtk/gtkstatusicon.h"



#ifdef TET_TEST
void gtk_2_0_gtk_gtkstatusicon_h()
{
#else
int gtk_2_0_gtk_gtkstatusicon_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gtk/gtkstatusicon.h\n");
#endif

printf("Checking data structures in gtk-2.0/gtk/gtkstatusicon.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef __GTK_STATUS_ICON_H__
Msg( "Error: Constant not found: __GTK_STATUS_ICON_H__\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_STATUS_ICON */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_STATUS_ICON(o) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_STATUS_ICON_CLASS(k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_STATUS_ICON(o) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_STATUS_ICON_CLASS(k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_STATUS_ICON_GET_CLASS(o) */
#endif

#if 1
CheckTypeSize(GtkStatusIcon,0, 40138, 1, 4.1, NULL, 40143, NULL)
#endif

#if 1
CheckTypeSize(GtkStatusIconClass,0, 40139, 1, 4.1, NULL, 40152, NULL)
#endif

#if 1
CheckTypeSize(struct _GtkStatusIcon,0, 40143, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkStatusIcon on All\n");
CheckOffset(struct _GtkStatusIcon,parent_instance,0,1,219884)
CheckOffset(struct _GtkStatusIcon,priv,0,1,219885)
#endif

#if 1
CheckTypeSize(struct _GtkStatusIconClass,0, 40152, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkStatusIconClass on All\n");
CheckOffset(struct _GtkStatusIconClass,parent_class,0,1,219901)
CheckOffset(struct _GtkStatusIconClass,activate,0,1,219902)
CheckOffset(struct _GtkStatusIconClass,popup_menu,0,1,219903)
CheckOffset(struct _GtkStatusIconClass,size_changed,0,1,219904)
CheckOffset(struct _GtkStatusIconClass,button_press_event,0,1,219905)
CheckOffset(struct _GtkStatusIconClass,button_release_event,0,1,219906)
CheckOffset(struct _GtkStatusIconClass,scroll_event,0,1,219907)
CheckOffset(struct _GtkStatusIconClass,query_tooltip,0,1,219908)
CheckOffset(struct _GtkStatusIconClass,__gtk_reserved1,0,1,219909)
CheckOffset(struct _GtkStatusIconClass,__gtk_reserved2,0,1,219910)
#endif

extern GType gtk_status_icon_get_type_db(void);
CheckInterfacedef(gtk_status_icon_get_type,gtk_status_icon_get_type_db);
extern GtkStatusIcon * gtk_status_icon_new_db(void);
CheckInterfacedef(gtk_status_icon_new,gtk_status_icon_new_db);
extern GtkStatusIcon * gtk_status_icon_new_from_pixbuf_db(GdkPixbuf *);
CheckInterfacedef(gtk_status_icon_new_from_pixbuf,gtk_status_icon_new_from_pixbuf_db);
extern GtkStatusIcon * gtk_status_icon_new_from_file_db(const char *);
CheckInterfacedef(gtk_status_icon_new_from_file,gtk_status_icon_new_from_file_db);
extern GtkStatusIcon * gtk_status_icon_new_from_stock_db(const char *);
CheckInterfacedef(gtk_status_icon_new_from_stock,gtk_status_icon_new_from_stock_db);
extern GtkStatusIcon * gtk_status_icon_new_from_icon_name_db(const char *);
CheckInterfacedef(gtk_status_icon_new_from_icon_name,gtk_status_icon_new_from_icon_name_db);
extern void gtk_status_icon_set_from_pixbuf_db(GtkStatusIcon *, GdkPixbuf *);
CheckInterfacedef(gtk_status_icon_set_from_pixbuf,gtk_status_icon_set_from_pixbuf_db);
extern void gtk_status_icon_set_from_file_db(GtkStatusIcon *, const char *);
CheckInterfacedef(gtk_status_icon_set_from_file,gtk_status_icon_set_from_file_db);
extern void gtk_status_icon_set_from_stock_db(GtkStatusIcon *, const char *);
CheckInterfacedef(gtk_status_icon_set_from_stock,gtk_status_icon_set_from_stock_db);
extern void gtk_status_icon_set_from_icon_name_db(GtkStatusIcon *, const char *);
CheckInterfacedef(gtk_status_icon_set_from_icon_name,gtk_status_icon_set_from_icon_name_db);
extern GtkImageType gtk_status_icon_get_storage_type_db(GtkStatusIcon *);
CheckInterfacedef(gtk_status_icon_get_storage_type,gtk_status_icon_get_storage_type_db);
extern GdkPixbuf * gtk_status_icon_get_pixbuf_db(GtkStatusIcon *);
CheckInterfacedef(gtk_status_icon_get_pixbuf,gtk_status_icon_get_pixbuf_db);
extern const char * gtk_status_icon_get_stock_db(GtkStatusIcon *);
CheckInterfacedef(gtk_status_icon_get_stock,gtk_status_icon_get_stock_db);
extern const char * gtk_status_icon_get_icon_name_db(GtkStatusIcon *);
CheckInterfacedef(gtk_status_icon_get_icon_name,gtk_status_icon_get_icon_name_db);
extern gint gtk_status_icon_get_size_db(GtkStatusIcon *);
CheckInterfacedef(gtk_status_icon_get_size,gtk_status_icon_get_size_db);
extern void gtk_status_icon_set_visible_db(GtkStatusIcon *, gboolean);
CheckInterfacedef(gtk_status_icon_set_visible,gtk_status_icon_set_visible_db);
extern gboolean gtk_status_icon_get_visible_db(GtkStatusIcon *);
CheckInterfacedef(gtk_status_icon_get_visible,gtk_status_icon_get_visible_db);
extern void gtk_status_icon_set_blinking_db(GtkStatusIcon *, gboolean);
CheckInterfacedef(gtk_status_icon_set_blinking,gtk_status_icon_set_blinking_db);
extern gboolean gtk_status_icon_get_blinking_db(GtkStatusIcon *);
CheckInterfacedef(gtk_status_icon_get_blinking,gtk_status_icon_get_blinking_db);
extern gboolean gtk_status_icon_is_embedded_db(GtkStatusIcon *);
CheckInterfacedef(gtk_status_icon_is_embedded,gtk_status_icon_is_embedded_db);
extern void gtk_status_icon_position_menu_db(GtkMenu *, gint *, gint *, gboolean *, gpointer);
CheckInterfacedef(gtk_status_icon_position_menu,gtk_status_icon_position_menu_db);
extern gboolean gtk_status_icon_get_geometry_db(GtkStatusIcon *, GdkScreen * *, GdkRectangle *, GtkOrientation *);
CheckInterfacedef(gtk_status_icon_get_geometry,gtk_status_icon_get_geometry_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-2.0/gtk/gtkstatusicon.h\n\n",pcnt,cnt);
return cnt;
#endif

}
