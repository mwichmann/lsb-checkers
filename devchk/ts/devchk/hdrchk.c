#include <stdio.h>
#include <stdarg.h>

#if defined __i386__
int architecture=2;
#define __found_arch__
#endif
#if defined __ia64__
int architecture=3;
#define __found_arch__
#endif
#if defined __powerpc__ && !defined __powerpc64__
int architecture=6;
#define __found_arch__
#endif
#if defined __powerpc64__
int architecture=9;
#define __found_arch__
#endif
#if defined __s390__ && !defined __s390x__
int architecture=10;
#define __found_arch__
#endif
#if defined __x86_64__
int architecture=11;
#define __found_arch__
#endif
#if defined __s390x__
int architecture=12;
#define __found_arch__
#endif
#ifndef __found_arch__
#error "Unable to identify architecture"
#endif

#ifdef TET_TEST

#include "hdrchk_tet.h"

#endif

Msg( char *f, ...)
{
va_list args;
va_start(args,f);
vfprintf(stderr, f, args);
va_end(args);
}

Log( char *f, ...)
{
/* Quietly drop extraneous messages when running in non TET mode */
}

int tcnt=0;

#ifndef TET_TEST

main()
{
tcnt+=GL_gl_h();
tcnt+=GL_glext_h();
tcnt+=GL_glu_h();
tcnt+=GL_glx_h();
tcnt+=GL_glxext_h();
tcnt+=X11_Composite_h();
tcnt+=X11_CompositeP_h();
tcnt+=X11_ConstrainP_h();
tcnt+=X11_Constraint_h();
tcnt+=X11_ICE_ICE_h();
tcnt+=X11_ICE_ICEconn_h();
tcnt+=X11_ICE_ICElib_h();
tcnt+=X11_ICE_ICEmsg_h();
tcnt+=X11_ICE_ICEproto_h();
tcnt+=X11_ICE_ICEutil_h();
tcnt+=X11_Intrinsic_h();
tcnt+=X11_IntrinsicP_h();
tcnt+=X11_ObjectP_h();
tcnt+=X11_SM_SM_h();
tcnt+=X11_SM_SMlib_h();
tcnt+=X11_SM_SMproto_h();
tcnt+=X11_X_h();
tcnt+=X11_XKBlib_h();
tcnt+=X11_Xauth_h();
tcnt+=X11_Xcms_h();
tcnt+=X11_Xft_Xft_h();
tcnt+=X11_Xlib_h();
tcnt+=X11_Xresource_h();
tcnt+=X11_Xutil_h();
tcnt+=X11_extensions_XEVI_h();
tcnt+=X11_extensions_XInput_h();
tcnt+=X11_extensions_XKBgeom_h();
tcnt+=X11_extensions_XShm_h();
tcnt+=X11_extensions_XTest_h();
tcnt+=X11_extensions_Xdbe_h();
tcnt+=X11_extensions_Xrender_h();
tcnt+=X11_extensions_dpms_h();
tcnt+=X11_extensions_render_h();
tcnt+=X11_extensions_security_h();
tcnt+=X11_extensions_shape_h();
tcnt+=X11_extensions_sync_h();
tcnt+=alsa_conf_h();
tcnt+=alsa_control_h();
tcnt+=alsa_control_external_h();
tcnt+=alsa_error_h();
tcnt+=alsa_global_h();
tcnt+=alsa_hwdep_h();
tcnt+=alsa_iatomic_h();
tcnt+=alsa_input_h();
tcnt+=alsa_instr_h();
tcnt+=alsa_mixer_h();
tcnt+=alsa_mixer_abst_h();
tcnt+=alsa_output_h();
tcnt+=alsa_pcm_h();
tcnt+=alsa_pcm_extplug_h();
tcnt+=alsa_pcm_plugin_h();
tcnt+=alsa_rawmidi_h();
tcnt+=alsa_seq_h();
tcnt+=alsa_seq_event_h();
tcnt+=alsa_seq_midi_event_h();
tcnt+=alsa_seqmid_h();
tcnt+=alsa_timer_h();
tcnt+=assert_h();
tcnt+=atk_1_0_atk_atk_enum_types_h();
tcnt+=atk_1_0_atk_atk_h();
tcnt+=complex_h();
tcnt+=cpio_h();
tcnt+=ctype_h();
tcnt+=cups_cups_h();
tcnt+=cups_ppd_h();
tcnt+=cups_raster_h();
tcnt+=curses_h();
tcnt+=dirent_h();
tcnt+=dlfcn_h();
tcnt+=endian_h();
tcnt+=errno_h();
tcnt+=fcntl_h();
tcnt+=fenv_h();
tcnt+=fmtmsg_h();
tcnt+=fnmatch_h();
tcnt+=fontconfig_fcprivate_h();
tcnt+=fontconfig_fontconfig_h();
tcnt+=freetype_config_ftheader_h();
tcnt+=freetype_config_ftoption_h();
tcnt+=freetype_config_ftstdlib_h();
tcnt+=freetype_freetype_h();
tcnt+=freetype_ftbdf_h();
tcnt+=freetype_fterrors_h();
tcnt+=freetype_ftglyph_h();
tcnt+=freetype_ftimage_h();
tcnt+=freetype_ftincrem_h();
tcnt+=freetype_ftlist_h();
tcnt+=freetype_ftmm_h();
tcnt+=freetype_ftmodapi_h();
tcnt+=freetype_ftmoderr_h();
tcnt+=freetype_ftotval_h();
tcnt+=freetype_ftoutln_h();
tcnt+=freetype_ftrender_h();
tcnt+=freetype_ftsnames_h();
tcnt+=freetype_ftstroke_h();
tcnt+=freetype_ftsystem_h();
tcnt+=freetype_fttrigon_h();
tcnt+=freetype_fttypes_h();
tcnt+=freetype_t1tables_h();
tcnt+=freetype_ttnameid_h();
tcnt+=freetype_tttables_h();
tcnt+=freetype_tttags_h();
tcnt+=freetype_ttunpat_h();
tcnt+=ft2build_h();
tcnt+=ftw_h();
tcnt+=getopt_h();
tcnt+=glib_2_0_glib_object_h();
tcnt+=glib_2_0_glib_h();
tcnt+=glib_2_0_glib_gstdio_h();
tcnt+=glib_2_0_gmodule_h();
tcnt+=glib_2_0_gobject_gvaluecollector_h();
tcnt+=glob_h();
tcnt+=grp_h();
tcnt+=gtk_2_0_gdk_pixbuf_xlib_gdk_pixbuf_xlib_h();
tcnt+=gtk_2_0_gdk_pixbuf_gdk_pixbuf_h();
tcnt+=gtk_2_0_gdk_pixbuf_gdk_pixdata_h();
tcnt+=gtk_2_0_gdk_gdk_h();
tcnt+=gtk_2_0_gdk_gdkkeysyms_h();
tcnt+=gtk_2_0_gdk_gdkx_h();
tcnt+=gtk_2_0_gtk_gtk_h();
tcnt+=iconv_h();
tcnt+=inttypes_h();
tcnt+=jpeglib_h();
tcnt+=langinfo_h();
tcnt+=libxml2_libxml_HTMLparser_h();
tcnt+=libxml2_libxml_HTMLtree_h();
tcnt+=libxml2_libxml_SAX2_h();
tcnt+=libxml2_libxml_c14n_h();
tcnt+=libxml2_libxml_catalog_h();
tcnt+=libxml2_libxml_debugXML_h();
tcnt+=libxml2_libxml_dict_h();
tcnt+=libxml2_libxml_encoding_h();
tcnt+=libxml2_libxml_entities_h();
tcnt+=libxml2_libxml_globals_h();
tcnt+=libxml2_libxml_hash_h();
tcnt+=libxml2_libxml_list_h();
tcnt+=libxml2_libxml_parser_h();
tcnt+=libxml2_libxml_parserInternals_h();
tcnt+=libxml2_libxml_pattern_h();
tcnt+=libxml2_libxml_relaxng_h();
tcnt+=libxml2_libxml_schematron_h();
tcnt+=libxml2_libxml_threads_h();
tcnt+=libxml2_libxml_tree_h();
tcnt+=libxml2_libxml_uri_h();
tcnt+=libxml2_libxml_valid_h();
tcnt+=libxml2_libxml_xinclude_h();
tcnt+=libxml2_libxml_xmlIO_h();
tcnt+=libxml2_libxml_xmlautomata_h();
tcnt+=libxml2_libxml_xmlerror_h();
tcnt+=libxml2_libxml_xmlexports_h();
tcnt+=libxml2_libxml_xmlmemory_h();
tcnt+=libxml2_libxml_xmlmodule_h();
tcnt+=libxml2_libxml_xmlreader_h();
tcnt+=libxml2_libxml_xmlregexp_h();
tcnt+=libxml2_libxml_xmlsave_h();
tcnt+=libxml2_libxml_xmlschemas_h();
tcnt+=libxml2_libxml_xmlschemastypes_h();
tcnt+=libxml2_libxml_xmlstring_h();
tcnt+=libxml2_libxml_xmlversion_h();
tcnt+=libxml2_libxml_xmlwriter_h();
tcnt+=libxml2_libxml_xpath_h();
tcnt+=libxml2_libxml_xpathInternals_h();
tcnt+=libxml2_libxml_xpointer_h();
tcnt+=limits_h();
tcnt+=locale_h();
tcnt+=math_h();
tcnt+=mqueue_h();
tcnt+=net_if_h();
tcnt+=netdb_h();
tcnt+=netinet_in_h();
tcnt+=netinet_ip_h();
tcnt+=netinet_tcp_h();
tcnt+=netinet_udp_h();
tcnt+=nl_types_h();
tcnt+=pango_1_0_pango_pango_h();
tcnt+=pango_1_0_pango_pangofc_decoder_h();
tcnt+=pango_1_0_pango_pangofc_fontmap_h();
tcnt+=pango_1_0_pango_pangoft2_h();
tcnt+=pango_1_0_pango_pangoxft_h();
tcnt+=png_h();
tcnt+=pthread_h();
tcnt+=pwd_h();
tcnt+=regex_h();
tcnt+=rpc_auth_h();
tcnt+=rpc_clnt_h();
tcnt+=rpc_rpc_h();
tcnt+=rpc_rpc_msg_h();
tcnt+=rpc_svc_h();
tcnt+=rpc_types_h();
tcnt+=rpc_xdr_h();
tcnt+=sched_h();
tcnt+=search_h();
tcnt+=security_pam_appl_h();
tcnt+=semaphore_h();
tcnt+=setjmp_h();
tcnt+=signal_h();
tcnt+=spawn_h();
tcnt+=stddef_h();
tcnt+=stdint_h();
tcnt+=stdio_h();
tcnt+=stdlib_h();
tcnt+=sys_epoll_h();
tcnt+=sys_file_h();
tcnt+=sys_inotify_h();
tcnt+=sys_ioctl_h();
tcnt+=sys_ipc_h();
tcnt+=sys_mman_h();
tcnt+=sys_msg_h();
tcnt+=sys_param_h();
tcnt+=sys_poll_h();
tcnt+=sys_resource_h();
tcnt+=sys_select_h();
tcnt+=sys_sem_h();
tcnt+=sys_shm_h();
tcnt+=sys_socket_h();
tcnt+=sys_stat_h();
tcnt+=sys_statfs_h();
tcnt+=sys_statvfs_h();
tcnt+=sys_time_h();
tcnt+=sys_timeb_h();
tcnt+=sys_times_h();
tcnt+=sys_types_h();
tcnt+=sys_un_h();
tcnt+=sys_utsname_h();
tcnt+=sys_wait_h();
tcnt+=syslog_h();
tcnt+=tar_h();
tcnt+=termios_h();
tcnt+=time_h();
tcnt+=ucontext_h();
tcnt+=ulimit_h();
tcnt+=unistd_h();
tcnt+=unwind_h();
tcnt+=utime_h();
tcnt+=utmp_h();
tcnt+=utmpx_h();
tcnt+=wchar_h();
tcnt+=wctype_h();
tcnt+=wordexp_h();
tcnt+=zlib_h();
tcnt+=intrinsic();
tcnt+=cxx();
printf("Total Tests: %d\n", tcnt );
}
#endif
