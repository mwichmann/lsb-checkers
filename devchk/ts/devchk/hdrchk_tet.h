#include <tet_api.h>

#include "testdefs.h"

static void startup(), cleanup();

void (*tet_startup)() = NULL;
void (*tet_cleanup)() = NULL;

struct tet_testlist tet_testlist[] = {
	{ GL_gl_h, 1 },
	{ GL_glext_h, 2 },
	{ GL_glu_h, 3 },
	{ GL_glx_h, 4 },
	{ X11_Composite_h, 5 },
	{ X11_CompositeP_h, 6 },
	{ X11_ConstrainP_h, 7 },
	{ X11_Constraint_h, 8 },
	{ X11_ICE_ICE_h, 9 },
	{ X11_ICE_ICEconn_h, 10 },
	{ X11_ICE_ICElib_h, 11 },
	{ X11_ICE_ICEmsg_h, 12 },
	{ X11_ICE_ICEproto_h, 13 },
	{ X11_ICE_ICEutil_h, 14 },
	{ X11_Intrinsic_h, 15 },
	{ X11_IntrinsicP_h, 16 },
	{ X11_ObjectP_h, 17 },
	{ X11_SM_SM_h, 18 },
	{ X11_SM_SMlib_h, 19 },
	{ X11_SM_SMproto_h, 20 },
	{ X11_X_h, 21 },
	{ X11_XKBlib_h, 22 },
	{ X11_Xauth_h, 23 },
	{ X11_Xcms_h, 24 },
	{ X11_Xft_Xft_h, 25 },
	{ X11_Xlib_h, 26 },
	{ X11_Xresource_h, 27 },
	{ X11_Xutil_h, 28 },
	{ X11_extensions_XEVI_h, 29 },
	{ X11_extensions_XKBgeom_h, 30 },
	{ X11_extensions_XShm_h, 31 },
	{ X11_extensions_Xdbe_h, 32 },
	{ X11_extensions_Xrender_h, 33 },
	{ X11_extensions_dpms_h, 34 },
	{ X11_extensions_render_h, 35 },
	{ X11_extensions_security_h, 36 },
	{ X11_extensions_shape_h, 37 },
	{ X11_extensions_sync_h, 38 },
	{ alsa_conf_h, 39 },
	{ alsa_control_h, 40 },
	{ alsa_control_external_h, 41 },
	{ alsa_error_h, 42 },
	{ alsa_global_h, 43 },
	{ alsa_hwdep_h, 44 },
	{ alsa_iatomic_h, 45 },
	{ alsa_input_h, 46 },
	{ alsa_instr_h, 47 },
	{ alsa_mixer_h, 48 },
	{ alsa_mixer_abst_h, 49 },
	{ alsa_output_h, 50 },
	{ alsa_pcm_h, 51 },
	{ alsa_pcm_extplug_h, 52 },
	{ alsa_pcm_plugin_h, 53 },
	{ alsa_rawmidi_h, 54 },
	{ alsa_seq_h, 55 },
	{ alsa_seq_event_h, 56 },
	{ alsa_seq_midi_event_h, 57 },
	{ alsa_seqmid_h, 58 },
	{ alsa_timer_h, 59 },
	{ atk_1_0_atk_atk_enum_types_h, 60 },
	{ atk_1_0_atk_atk_h, 61 },
	{ complex_h, 62 },
	{ cpio_h, 63 },
	{ ctype_h, 64 },
	{ cups_cups_h, 65 },
	{ cups_ppd_h, 66 },
	{ cups_raster_h, 67 },
	{ curses_h, 68 },
	{ dirent_h, 69 },
	{ dlfcn_h, 70 },
	{ errno_h, 71 },
	{ fcntl_h, 72 },
	{ fenv_h, 73 },
	{ fmtmsg_h, 74 },
	{ fnmatch_h, 75 },
	{ fontconfig_fcprivate_h, 76 },
	{ fontconfig_fontconfig_h, 77 },
	{ freetype_config_ftheader_h, 78 },
	{ freetype_config_ftoption_h, 79 },
	{ freetype_config_ftstdlib_h, 80 },
	{ freetype_freetype_h, 81 },
	{ freetype_ftbdf_h, 82 },
	{ freetype_fterrdef_h, 83 },
	{ freetype_fterrors_h, 84 },
	{ freetype_ftglyph_h, 85 },
	{ freetype_ftimage_h, 86 },
	{ freetype_ftincrem_h, 87 },
	{ freetype_ftlist_h, 88 },
	{ freetype_ftmm_h, 89 },
	{ freetype_ftmodapi_h, 90 },
	{ freetype_ftmoderr_h, 91 },
	{ freetype_ftotval_h, 92 },
	{ freetype_ftoutln_h, 93 },
	{ freetype_ftrender_h, 94 },
	{ freetype_ftsnames_h, 95 },
	{ freetype_ftstroke_h, 96 },
	{ freetype_ftsystem_h, 97 },
	{ freetype_fttrigon_h, 98 },
	{ freetype_fttypes_h, 99 },
	{ freetype_t1tables_h, 100 },
	{ freetype_ttnameid_h, 101 },
	{ freetype_tttables_h, 102 },
	{ freetype_tttags_h, 103 },
	{ freetype_ttunpat_h, 104 },
	{ ft2build_h, 105 },
	{ ftw_h, 106 },
	{ getopt_h, 107 },
	{ glib_2_0_glib_object_h, 108 },
	{ glib_2_0_glib_h, 109 },
	{ glib_2_0_glib_gstdio_h, 110 },
	{ glib_2_0_gmodule_h, 111 },
	{ glib_2_0_gobject_gvaluecollector_h, 112 },
	{ glob_h, 113 },
	{ grp_h, 114 },
	{ gtk_2_0_gdk_pixbuf_xlib_gdk_pixbuf_xlib_h, 115 },
	{ gtk_2_0_gdk_pixbuf_gdk_pixbuf_h, 116 },
	{ gtk_2_0_gdk_pixbuf_gdk_pixdata_h, 117 },
	{ gtk_2_0_gdk_gdk_h, 118 },
	{ gtk_2_0_gdk_gdkkeysyms_h, 119 },
	{ gtk_2_0_gdk_gdkx_h, 120 },
	{ gtk_2_0_gtk_gtk_h, 121 },
	{ iconv_h, 122 },
	{ inttypes_h, 123 },
	{ jpeglib_h, 124 },
	{ langinfo_h, 125 },
	{ libxml2_libxml_HTMLparser_h, 126 },
	{ libxml2_libxml_HTMLtree_h, 127 },
	{ libxml2_libxml_SAX2_h, 128 },
	{ libxml2_libxml_c14n_h, 129 },
	{ libxml2_libxml_catalog_h, 130 },
	{ libxml2_libxml_debugXML_h, 131 },
	{ libxml2_libxml_dict_h, 132 },
	{ libxml2_libxml_encoding_h, 133 },
	{ libxml2_libxml_entities_h, 134 },
	{ libxml2_libxml_globals_h, 135 },
	{ libxml2_libxml_hash_h, 136 },
	{ libxml2_libxml_list_h, 137 },
	{ libxml2_libxml_parser_h, 138 },
	{ libxml2_libxml_parserInternals_h, 139 },
	{ libxml2_libxml_pattern_h, 140 },
	{ libxml2_libxml_relaxng_h, 141 },
	{ libxml2_libxml_schematron_h, 142 },
	{ libxml2_libxml_threads_h, 143 },
	{ libxml2_libxml_tree_h, 144 },
	{ libxml2_libxml_uri_h, 145 },
	{ libxml2_libxml_valid_h, 146 },
	{ libxml2_libxml_xinclude_h, 147 },
	{ libxml2_libxml_xmlIO_h, 148 },
	{ libxml2_libxml_xmlautomata_h, 149 },
	{ libxml2_libxml_xmlerror_h, 150 },
	{ libxml2_libxml_xmlexports_h, 151 },
	{ libxml2_libxml_xmlmemory_h, 152 },
	{ libxml2_libxml_xmlmodule_h, 153 },
	{ libxml2_libxml_xmlreader_h, 154 },
	{ libxml2_libxml_xmlregexp_h, 155 },
	{ libxml2_libxml_xmlsave_h, 156 },
	{ libxml2_libxml_xmlschemas_h, 157 },
	{ libxml2_libxml_xmlschemastypes_h, 158 },
	{ libxml2_libxml_xmlstring_h, 159 },
	{ libxml2_libxml_xmlversion_h, 160 },
	{ libxml2_libxml_xmlwriter_h, 161 },
	{ libxml2_libxml_xpath_h, 162 },
	{ libxml2_libxml_xpathInternals_h, 163 },
	{ libxml2_libxml_xpointer_h, 164 },
	{ limits_h, 165 },
	{ locale_h, 166 },
	{ math_h, 167 },
	{ mqueue_h, 168 },
	{ net_if_h, 169 },
	{ netdb_h, 170 },
	{ netinet_in_h, 171 },
	{ netinet_ip_h, 172 },
	{ netinet_tcp_h, 173 },
	{ netinet_udp_h, 174 },
	{ nl_types_h, 175 },
	{ pango_1_0_pango_pango_h, 176 },
	{ pango_1_0_pango_pangofc_decoder_h, 177 },
	{ pango_1_0_pango_pangofc_fontmap_h, 178 },
	{ pango_1_0_pango_pangoft2_h, 179 },
	{ pango_1_0_pango_pangoxft_h, 180 },
	{ png_h, 181 },
	{ pthread_h, 182 },
	{ pwd_h, 183 },
	{ regex_h, 184 },
	{ rpc_auth_h, 185 },
	{ rpc_clnt_h, 186 },
	{ rpc_rpc_msg_h, 187 },
	{ rpc_svc_h, 188 },
	{ rpc_types_h, 189 },
	{ rpc_xdr_h, 190 },
	{ sched_h, 191 },
	{ search_h, 192 },
	{ security_pam_appl_h, 193 },
	{ semaphore_h, 194 },
	{ setjmp_h, 195 },
	{ signal_h, 196 },
	{ spawn_h, 197 },
	{ stddef_h, 198 },
	{ stdint_h, 199 },
	{ stdio_h, 200 },
	{ stdlib_h, 201 },
	{ sys_file_h, 202 },
	{ sys_ioctl_h, 203 },
	{ sys_ipc_h, 204 },
	{ sys_mman_h, 205 },
	{ sys_msg_h, 206 },
	{ sys_param_h, 207 },
	{ sys_poll_h, 208 },
	{ sys_resource_h, 209 },
	{ sys_sem_h, 210 },
	{ sys_shm_h, 211 },
	{ sys_socket_h, 212 },
	{ sys_stat_h, 213 },
	{ sys_statfs_h, 214 },
	{ sys_statvfs_h, 215 },
	{ sys_time_h, 216 },
	{ sys_timeb_h, 217 },
	{ sys_times_h, 218 },
	{ sys_types_h, 219 },
	{ sys_un_h, 220 },
	{ sys_utsname_h, 221 },
	{ sys_wait_h, 222 },
	{ syslog_h, 223 },
	{ tar_h, 224 },
	{ termios_h, 225 },
	{ time_h, 226 },
	{ ucontext_h, 227 },
	{ ulimit_h, 228 },
	{ unistd_h, 229 },
	{ unwind_h, 230 },
	{ utime_h, 231 },
	{ utmp_h, 232 },
	{ utmpx_h, 233 },
	{ wchar_h, 234 },
	{ wctype_h, 235 },
	{ wordexp_h, 236 },
	{ zlib_h, 237 },
	{ NULL, 0 }
};
