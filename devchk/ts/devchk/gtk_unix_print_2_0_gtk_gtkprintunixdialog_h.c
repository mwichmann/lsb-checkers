/*
 * Test of gtk-unix-print-2.0/gtk/gtkprintunixdialog.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gtk-unix-print-2.0/gtk/gtkprintunixdialog.h"



#ifdef TET_TEST
void gtk_unix_print_2_0_gtk_gtkprintunixdialog_h()
{
#else
int gtk_unix_print_2_0_gtk_gtkprintunixdialog_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-unix-print-2.0/gtk/gtkprintunixdialog.h\n");
#endif

printf("Checking data structures in gtk-unix-print-2.0/gtk/gtkprintunixdialog.h\n");
#if 1
CheckTypeSize(GtkPrintUnixDialog,0, 40258, 1, 4.1, NULL, 40263, NULL)
#endif

#if 1
CheckTypeSize(GtkPrintUnixDialogClass,0, 40259, 1, 4.1, NULL, 40264, NULL)
#endif

#if 1
CheckTypeSize(struct _GtkPrintUnixDialog,0, 40263, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkPrintUnixDialog on All\n");
CheckOffset(struct _GtkPrintUnixDialog,parent_instance,0,1,220083)
CheckOffset(struct _GtkPrintUnixDialog,priv,0,1,220084)
#endif

#if 1
CheckTypeSize(struct _GtkPrintUnixDialogClass,0, 40264, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkPrintUnixDialogClass on All\n");
CheckOffset(struct _GtkPrintUnixDialogClass,parent_class,0,1,220085)
CheckOffset(struct _GtkPrintUnixDialogClass,_gtk_reserved1,0,1,220086)
CheckOffset(struct _GtkPrintUnixDialogClass,_gtk_reserved2,0,1,220087)
CheckOffset(struct _GtkPrintUnixDialogClass,_gtk_reserved3,0,1,220088)
CheckOffset(struct _GtkPrintUnixDialogClass,_gtk_reserved4,0,1,220089)
CheckOffset(struct _GtkPrintUnixDialogClass,_gtk_reserved5,0,1,220090)
CheckOffset(struct _GtkPrintUnixDialogClass,_gtk_reserved6,0,1,220091)
CheckOffset(struct _GtkPrintUnixDialogClass,_gtk_reserved7,0,1,220092)
#endif

extern GType gtk_print_unix_dialog_get_type_db(void);
CheckInterfacedef(gtk_print_unix_dialog_get_type,gtk_print_unix_dialog_get_type_db);
extern GtkWidget * gtk_print_unix_dialog_new_db(const char *, GtkWindow *);
CheckInterfacedef(gtk_print_unix_dialog_new,gtk_print_unix_dialog_new_db);
extern void gtk_print_unix_dialog_set_page_setup_db(GtkPrintUnixDialog *, GtkPageSetup *);
CheckInterfacedef(gtk_print_unix_dialog_set_page_setup,gtk_print_unix_dialog_set_page_setup_db);
extern GtkPageSetup * gtk_print_unix_dialog_get_page_setup_db(GtkPrintUnixDialog *);
CheckInterfacedef(gtk_print_unix_dialog_get_page_setup,gtk_print_unix_dialog_get_page_setup_db);
extern void gtk_print_unix_dialog_set_current_page_db(GtkPrintUnixDialog *, gint);
CheckInterfacedef(gtk_print_unix_dialog_set_current_page,gtk_print_unix_dialog_set_current_page_db);
extern gint gtk_print_unix_dialog_get_current_page_db(GtkPrintUnixDialog *);
CheckInterfacedef(gtk_print_unix_dialog_get_current_page,gtk_print_unix_dialog_get_current_page_db);
extern void gtk_print_unix_dialog_set_settings_db(GtkPrintUnixDialog *, GtkPrintSettings *);
CheckInterfacedef(gtk_print_unix_dialog_set_settings,gtk_print_unix_dialog_set_settings_db);
extern GtkPrintSettings * gtk_print_unix_dialog_get_settings_db(GtkPrintUnixDialog *);
CheckInterfacedef(gtk_print_unix_dialog_get_settings,gtk_print_unix_dialog_get_settings_db);
extern GtkPrinter * gtk_print_unix_dialog_get_selected_printer_db(GtkPrintUnixDialog *);
CheckInterfacedef(gtk_print_unix_dialog_get_selected_printer,gtk_print_unix_dialog_get_selected_printer_db);
extern void gtk_print_unix_dialog_add_custom_tab_db(GtkPrintUnixDialog *, GtkWidget *, GtkWidget *);
CheckInterfacedef(gtk_print_unix_dialog_add_custom_tab,gtk_print_unix_dialog_add_custom_tab_db);
extern void gtk_print_unix_dialog_set_manual_capabilities_db(GtkPrintUnixDialog *, GtkPrintCapabilities);
CheckInterfacedef(gtk_print_unix_dialog_set_manual_capabilities,gtk_print_unix_dialog_set_manual_capabilities_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-unix-print-2.0/gtk/gtkprintunixdialog.h\n\n",pcnt,cnt);
return cnt;
#endif

}
