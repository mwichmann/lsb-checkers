/*
 * Test of gtk-2.0/gtk/gtktextbufferrichtext.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gtk-2.0/gtk/gtktextbufferrichtext.h"



#ifdef TET_TEST
void gtk_2_0_gtk_gtktextbufferrichtext_h()
{
#else
int gtk_2_0_gtk_gtktextbufferrichtext_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gtk/gtktextbufferrichtext.h\n");
#endif

printf("Checking data structures in gtk-2.0/gtk/gtktextbufferrichtext.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef __GTK_TEXT_BUFFER_RICH_TEXT_H__
Msg( "Error: Constant not found: __GTK_TEXT_BUFFER_RICH_TEXT_H__\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(GtkTextBufferSerializeFunc,0, 40274, 1, 4.1, NULL, 40277, NULL)
#endif

#if 1
CheckTypeSize(GtkTextBufferDeserializeFunc,0, 40278, 1, 4.1, NULL, 40279, NULL)
#endif

#if 1
/* All */
typedef guint8 * (*GtkTextBufferSerializeFunc_db)(GtkTextBuffer *, GtkTextBuffer *, const struct _GtkTextIter *, const struct _GtkTextIter *, gsize *, gpointer);
CheckFunctionTypedef(GtkTextBufferSerializeFunc,GtkTextBufferSerializeFunc_db);
#endif

#if 1
/* All */
typedef gboolean (*GtkTextBufferDeserializeFunc_db)(GtkTextBuffer *, GtkTextBuffer *, GtkTextIter *, const unsigned char *, gsize, gboolean, gpointer, GError * *);
CheckFunctionTypedef(GtkTextBufferDeserializeFunc,GtkTextBufferDeserializeFunc_db);
#endif

extern GdkAtom gtk_text_buffer_register_serialize_format_db(GtkTextBuffer *, const char *, GtkTextBufferSerializeFunc, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_text_buffer_register_serialize_format,gtk_text_buffer_register_serialize_format_db);
extern GdkAtom gtk_text_buffer_register_serialize_tagset_db(GtkTextBuffer *, const char *);
CheckInterfacedef(gtk_text_buffer_register_serialize_tagset,gtk_text_buffer_register_serialize_tagset_db);
extern GdkAtom gtk_text_buffer_register_deserialize_format_db(GtkTextBuffer *, const char *, GtkTextBufferDeserializeFunc, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_text_buffer_register_deserialize_format,gtk_text_buffer_register_deserialize_format_db);
extern GdkAtom gtk_text_buffer_register_deserialize_tagset_db(GtkTextBuffer *, const char *);
CheckInterfacedef(gtk_text_buffer_register_deserialize_tagset,gtk_text_buffer_register_deserialize_tagset_db);
extern void gtk_text_buffer_unregister_serialize_format_db(GtkTextBuffer *, GdkAtom);
CheckInterfacedef(gtk_text_buffer_unregister_serialize_format,gtk_text_buffer_unregister_serialize_format_db);
extern void gtk_text_buffer_unregister_deserialize_format_db(GtkTextBuffer *, GdkAtom);
CheckInterfacedef(gtk_text_buffer_unregister_deserialize_format,gtk_text_buffer_unregister_deserialize_format_db);
extern void gtk_text_buffer_deserialize_set_can_create_tags_db(GtkTextBuffer *, GdkAtom, gboolean);
CheckInterfacedef(gtk_text_buffer_deserialize_set_can_create_tags,gtk_text_buffer_deserialize_set_can_create_tags_db);
extern gboolean gtk_text_buffer_deserialize_get_can_create_tags_db(GtkTextBuffer *, GdkAtom);
CheckInterfacedef(gtk_text_buffer_deserialize_get_can_create_tags,gtk_text_buffer_deserialize_get_can_create_tags_db);
extern struct _GdkAtom * * gtk_text_buffer_get_serialize_formats_db(GtkTextBuffer *, gint *);
CheckInterfacedef(gtk_text_buffer_get_serialize_formats,gtk_text_buffer_get_serialize_formats_db);
extern struct _GdkAtom * * gtk_text_buffer_get_deserialize_formats_db(GtkTextBuffer *, gint *);
CheckInterfacedef(gtk_text_buffer_get_deserialize_formats,gtk_text_buffer_get_deserialize_formats_db);
extern guint8 * gtk_text_buffer_serialize_db(GtkTextBuffer *, GtkTextBuffer *, struct _GdkAtom *, const struct _GtkTextIter *, const struct _GtkTextIter *, gsize *);
CheckInterfacedef(gtk_text_buffer_serialize,gtk_text_buffer_serialize_db);
extern gboolean gtk_text_buffer_deserialize_db(GtkTextBuffer *, GtkTextBuffer *, struct _GdkAtom *, GtkTextIter *, const unsigned char *, gsize, GError * *);
CheckInterfacedef(gtk_text_buffer_deserialize,gtk_text_buffer_deserialize_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-2.0/gtk/gtktextbufferrichtext.h\n\n",pcnt,cnt);
return cnt;
#endif

}
