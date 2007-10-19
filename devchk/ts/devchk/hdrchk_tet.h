#include <tet_api.h>

#include "testdefs.h"

static void startup(), cleanup();

void (*tet_startup)() = NULL;
void (*tet_cleanup)() = NULL;

struct tet_testlist tet_testlist[] = {
	{ GL_gl_h, 1 },
	{ GL_glx_h, 2 },
	{ X11_Composite_h, 3 },
	{ X11_CompositeP_h, 4 },
	{ X11_ConstrainP_h, 5 },
	{ X11_Constraint_h, 6 },
	{ X11_ICE_ICElib_h, 7 },
	{ X11_ICE_ICEutil_h, 8 },
	{ X11_Intrinsic_h, 9 },
	{ X11_ObjectP_h, 10 },
	{ X11_SM_SMlib_h, 11 },
	{ X11_X_h, 12 },
	{ X11_Xauth_h, 13 },
	{ X11_Xcms_h, 14 },
	{ X11_Xft_Xft_h, 15 },
	{ X11_Xlib_h, 16 },
	{ X11_Xutil_h, 17 },
	{ X11_extensions_XEVI_h, 18 },
	{ X11_extensions_Xrender_h, 19 },
	{ X11_extensions_render_h, 20 },
	{ X11_extensions_security_h, 21 },
	{ X11_extensions_sync_h, 22 },
	{ atk_1_0_atk_atk_enum_types_h, 23 },
	{ atk_1_0_atk_atk_h, 24 },
	{ complex_h, 25 },
	{ cpio_h, 26 },
	{ ctype_h, 27 },
	{ curses_h, 28 },
	{ dirent_h, 29 },
	{ dlfcn_h, 30 },
	{ errno_h, 31 },
	{ fcntl_h, 32 },
	{ fenv_h, 33 },
	{ fmtmsg_h, 34 },
	{ fnmatch_h, 35 },
	{ fontconfig_fcprivate_h, 36 },
	{ fontconfig_fontconfig_h, 37 },
	{ freetype_config_ftheader_h, 38 },
	{ freetype_config_ftoption_h, 39 },
	{ freetype_config_ftstdlib_h, 40 },
	{ freetype_freetype_h, 41 },
	{ freetype_ftbdf_h, 42 },
	{ freetype_fterrdef_h, 43 },
	{ freetype_fterrors_h, 44 },
	{ freetype_ftglyph_h, 45 },
	{ freetype_ftimage_h, 46 },
	{ freetype_ftincrem_h, 47 },
	{ freetype_ftlist_h, 48 },
	{ freetype_ftmm_h, 49 },
	{ freetype_ftmodapi_h, 50 },
	{ freetype_ftmoderr_h, 51 },
	{ freetype_ftotval_h, 52 },
	{ freetype_ftoutln_h, 53 },
	{ freetype_ftrender_h, 54 },
	{ freetype_ftsnames_h, 55 },
	{ freetype_ftstroke_h, 56 },
	{ freetype_ftsystem_h, 57 },
	{ freetype_fttrigon_h, 58 },
	{ freetype_fttypes_h, 59 },
	{ freetype_t1tables_h, 60 },
	{ freetype_ttnameid_h, 61 },
	{ freetype_tttables_h, 62 },
	{ freetype_tttags_h, 63 },
	{ freetype_ttunpat_h, 64 },
	{ ft2build_h, 65 },
	{ ftw_h, 66 },
	{ getopt_h, 67 },
	{ glib_2_0_glib_object_h, 68 },
	{ glib_2_0_glib_h, 69 },
	{ glib_2_0_glib_gstdio_h, 70 },
	{ glib_2_0_gmodule_h, 71 },
	{ glib_2_0_gobject_gvaluecollector_h, 72 },
	{ glob_h, 73 },
	{ grp_h, 74 },
	{ gtk_2_0_gdk_pixbuf_xlib_gdk_pixbuf_xlib_h, 75 },
	{ gtk_2_0_gdk_pixbuf_gdk_pixbuf_h, 76 },
	{ gtk_2_0_gdk_pixbuf_gdk_pixdata_h, 77 },
	{ gtk_2_0_gdk_gdk_h, 78 },
	{ gtk_2_0_gdk_gdkkeysyms_h, 79 },
	{ gtk_2_0_gdk_gdkx_h, 80 },
	{ gtk_2_0_gtk_gtk_h, 81 },
	{ iconv_h, 82 },
	{ inttypes_h, 83 },
	{ jpeglib_h, 84 },
	{ langinfo_h, 85 },
	{ libxml2_libxml_HTMLparser_h, 86 },
	{ libxml2_libxml_HTMLtree_h, 87 },
	{ libxml2_libxml_SAX2_h, 88 },
	{ libxml2_libxml_c14n_h, 89 },
	{ libxml2_libxml_catalog_h, 90 },
	{ libxml2_libxml_debugXML_h, 91 },
	{ libxml2_libxml_dict_h, 92 },
	{ libxml2_libxml_encoding_h, 93 },
	{ libxml2_libxml_entities_h, 94 },
	{ libxml2_libxml_globals_h, 95 },
	{ libxml2_libxml_hash_h, 96 },
	{ libxml2_libxml_list_h, 97 },
	{ libxml2_libxml_parser_h, 98 },
	{ libxml2_libxml_parserInternals_h, 99 },
	{ libxml2_libxml_pattern_h, 100 },
	{ libxml2_libxml_relaxng_h, 101 },
	{ libxml2_libxml_schematron_h, 102 },
	{ libxml2_libxml_threads_h, 103 },
	{ libxml2_libxml_tree_h, 104 },
	{ libxml2_libxml_uri_h, 105 },
	{ libxml2_libxml_valid_h, 106 },
	{ libxml2_libxml_xinclude_h, 107 },
	{ libxml2_libxml_xmlIO_h, 108 },
	{ libxml2_libxml_xmlautomata_h, 109 },
	{ libxml2_libxml_xmlerror_h, 110 },
	{ libxml2_libxml_xmlexports_h, 111 },
	{ libxml2_libxml_xmlmemory_h, 112 },
	{ libxml2_libxml_xmlmodule_h, 113 },
	{ libxml2_libxml_xmlreader_h, 114 },
	{ libxml2_libxml_xmlregexp_h, 115 },
	{ libxml2_libxml_xmlsave_h, 116 },
	{ libxml2_libxml_xmlschemas_h, 117 },
	{ libxml2_libxml_xmlschemastypes_h, 118 },
	{ libxml2_libxml_xmlstring_h, 119 },
	{ libxml2_libxml_xmlversion_h, 120 },
	{ libxml2_libxml_xmlwriter_h, 121 },
	{ libxml2_libxml_xpath_h, 122 },
	{ libxml2_libxml_xpathInternals_h, 123 },
	{ libxml2_libxml_xpointer_h, 124 },
	{ limits_h, 125 },
	{ locale_h, 126 },
	{ math_h, 127 },
	{ mqueue_h, 128 },
	{ net_if_h, 129 },
	{ netdb_h, 130 },
	{ netinet_in_h, 131 },
	{ netinet_ip_h, 132 },
	{ netinet_tcp_h, 133 },
	{ netinet_udp_h, 134 },
	{ nl_types_h, 135 },
	{ pango_1_0_pango_pango_h, 136 },
	{ pango_1_0_pango_pangofc_decoder_h, 137 },
	{ pango_1_0_pango_pangofc_fontmap_h, 138 },
	{ pango_1_0_pango_pangoft2_h, 139 },
	{ pango_1_0_pango_pangoxft_h, 140 },
	{ png_h, 141 },
	{ pthread_h, 142 },
	{ pwd_h, 143 },
	{ regex_h, 144 },
	{ rpc_auth_h, 145 },
	{ rpc_clnt_h, 146 },
	{ rpc_rpc_msg_h, 147 },
	{ rpc_svc_h, 148 },
	{ rpc_types_h, 149 },
	{ rpc_xdr_h, 150 },
	{ sched_h, 151 },
	{ search_h, 152 },
	{ security_pam_appl_h, 153 },
	{ semaphore_h, 154 },
	{ setjmp_h, 155 },
	{ signal_h, 156 },
	{ spawn_h, 157 },
	{ stddef_h, 158 },
	{ stdint_h, 159 },
	{ stdio_h, 160 },
	{ stdlib_h, 161 },
	{ sys_file_h, 162 },
	{ sys_ioctl_h, 163 },
	{ sys_ipc_h, 164 },
	{ sys_mman_h, 165 },
	{ sys_msg_h, 166 },
	{ sys_param_h, 167 },
	{ sys_poll_h, 168 },
	{ sys_resource_h, 169 },
	{ sys_sem_h, 170 },
	{ sys_shm_h, 171 },
	{ sys_socket_h, 172 },
	{ sys_stat_h, 173 },
	{ sys_statfs_h, 174 },
	{ sys_statvfs_h, 175 },
	{ sys_time_h, 176 },
	{ sys_timeb_h, 177 },
	{ sys_times_h, 178 },
	{ sys_types_h, 179 },
	{ sys_un_h, 180 },
	{ sys_utsname_h, 181 },
	{ sys_wait_h, 182 },
	{ syslog_h, 183 },
	{ tar_h, 184 },
	{ termios_h, 185 },
	{ time_h, 186 },
	{ ucontext_h, 187 },
	{ ulimit_h, 188 },
	{ unistd_h, 189 },
	{ utime_h, 190 },
	{ utmp_h, 191 },
	{ utmpx_h, 192 },
	{ wchar_h, 193 },
	{ wctype_h, 194 },
	{ wordexp_h, 195 },
	{ zlib_h, 196 },
	{ NULL, 0 }
};
