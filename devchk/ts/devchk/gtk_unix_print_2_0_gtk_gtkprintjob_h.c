/*
 * Test of gtk-unix-print-2.0/gtk/gtkprintjob.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gtk-unix-print-2.0/gtk/gtkprintjob.h"



#ifdef TET_TEST
void gtk_unix_print_2_0_gtk_gtkprintjob_h()
{
#else
int gtk_unix_print_2_0_gtk_gtkprintjob_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-unix-print-2.0/gtk/gtkprintjob.h\n");
#endif

printf("Checking data structures in gtk-unix-print-2.0/gtk/gtkprintjob.h\n");
#if 1
CheckTypeSize(GtkPrintJob,0, 40244, 1, 4.1, NULL, 40255, NULL)
#endif

#if 1
CheckTypeSize(GtkPrintJobClass,0, 40245, 1, 4.1, NULL, 40257, NULL)
#endif

#if 1
CheckTypeSize(GtkPrintJobCompleteFunc,0, 40248, 1, 4.1, NULL, 40250, NULL)
#endif

#if 1
CheckTypeSize(struct _GtkPrintJob,0, 40255, 1, , NULL, 0, NULL)
CheckBitField(struct _GtkPrintJob,rotate_to_orientation,1,1,220033)
CheckBitField(struct _GtkPrintJob,collate,1,1,220034)
CheckBitField(struct _GtkPrintJob,reverse,1,1,220035)
#endif

#if 1
CheckTypeSize(struct _GtkPrintJobClass,0, 40257, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkPrintJobClass on All\n");
CheckOffset(struct _GtkPrintJobClass,parent_class,0,1,220039)
CheckOffset(struct _GtkPrintJobClass,status_changed,0,1,220040)
CheckOffset(struct _GtkPrintJobClass,_gtk_reserved1,0,1,220041)
CheckOffset(struct _GtkPrintJobClass,_gtk_reserved2,0,1,220042)
CheckOffset(struct _GtkPrintJobClass,_gtk_reserved3,0,1,220043)
CheckOffset(struct _GtkPrintJobClass,_gtk_reserved4,0,1,220044)
CheckOffset(struct _GtkPrintJobClass,_gtk_reserved5,0,1,220045)
CheckOffset(struct _GtkPrintJobClass,_gtk_reserved6,0,1,220046)
CheckOffset(struct _GtkPrintJobClass,_gtk_reserved7,0,1,220047)
#endif

#if 1
/* All */
typedef void (*GtkPrintJobCompleteFunc_db)(GtkPrintJob *, gpointer, GError *);
CheckFunctionTypedef(GtkPrintJobCompleteFunc,GtkPrintJobCompleteFunc_db);
#endif

extern GType gtk_print_job_get_type_db(void);
CheckInterfacedef(gtk_print_job_get_type,gtk_print_job_get_type_db);
extern GtkPrintJob * gtk_print_job_new_db(const char *, GtkPrinter *, GtkPrintSettings *, GtkPageSetup *);
CheckInterfacedef(gtk_print_job_new,gtk_print_job_new_db);
extern GtkPrintSettings * gtk_print_job_get_settings_db(GtkPrintJob *);
CheckInterfacedef(gtk_print_job_get_settings,gtk_print_job_get_settings_db);
extern GtkPrinter * gtk_print_job_get_printer_db(GtkPrintJob *);
CheckInterfacedef(gtk_print_job_get_printer,gtk_print_job_get_printer_db);
extern const char * gtk_print_job_get_title_db(GtkPrintJob *);
CheckInterfacedef(gtk_print_job_get_title,gtk_print_job_get_title_db);
extern GtkPrintStatus gtk_print_job_get_status_db(GtkPrintJob *);
CheckInterfacedef(gtk_print_job_get_status,gtk_print_job_get_status_db);
extern gboolean gtk_print_job_set_source_file_db(GtkPrintJob *, const char *, GError * *);
CheckInterfacedef(gtk_print_job_set_source_file,gtk_print_job_set_source_file_db);
extern cairo_surface_t * gtk_print_job_get_surface_db(GtkPrintJob *, GError * *);
CheckInterfacedef(gtk_print_job_get_surface,gtk_print_job_get_surface_db);
extern void gtk_print_job_set_track_print_status_db(GtkPrintJob *, gboolean);
CheckInterfacedef(gtk_print_job_set_track_print_status,gtk_print_job_set_track_print_status_db);
extern gboolean gtk_print_job_get_track_print_status_db(GtkPrintJob *);
CheckInterfacedef(gtk_print_job_get_track_print_status,gtk_print_job_get_track_print_status_db);
extern void gtk_print_job_send_db(GtkPrintJob *, GtkPrintJobCompleteFunc, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_print_job_send,gtk_print_job_send_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-unix-print-2.0/gtk/gtkprintjob.h\n\n",pcnt,cnt);
return cnt;
#endif

}
