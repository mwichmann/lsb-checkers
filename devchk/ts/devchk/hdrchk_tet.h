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
	{ GL_glxext_h, 5 },
	{ X11_Composite_h, 6 },
	{ X11_CompositeP_h, 7 },
	{ X11_ConstrainP_h, 8 },
	{ X11_Constraint_h, 9 },
	{ X11_Core_h, 10 },
	{ X11_CoreP_h, 11 },
	{ X11_EventI_h, 12 },
	{ X11_ICE_ICE_h, 13 },
	{ X11_ICE_ICEconn_h, 14 },
	{ X11_ICE_ICElib_h, 15 },
	{ X11_ICE_ICEmsg_h, 16 },
	{ X11_ICE_ICEproto_h, 17 },
	{ X11_ICE_ICEutil_h, 18 },
	{ X11_Intrinsic_h, 19 },
	{ X11_IntrinsicI_h, 20 },
	{ X11_IntrinsicP_h, 21 },
	{ X11_Object_h, 22 },
	{ X11_ObjectP_h, 23 },
	{ X11_RectObj_h, 24 },
	{ X11_RectObjP_h, 25 },
	{ X11_ResourceI_h, 26 },
	{ X11_SM_SM_h, 27 },
	{ X11_SM_SMlib_h, 28 },
	{ X11_SM_SMproto_h, 29 },
	{ X11_Shell_h, 30 },
	{ X11_ShellP_h, 31 },
	{ X11_StringDefs_h, 32 },
	{ X11_TranslateI_h, 33 },
	{ X11_VendorP_h, 34 },
	{ X11_X_h, 35 },
	{ X11_XKBlib_h, 36 },
	{ X11_Xatom_h, 37 },
	{ X11_Xauth_h, 38 },
	{ X11_Xcms_h, 39 },
	{ X11_Xft_Xft_h, 40 },
	{ X11_Xft_XftCompat_h, 41 },
	{ X11_Xfuncproto_h, 42 },
	{ X11_Xlib_h, 43 },
	{ X11_Xlibint_h, 44 },
	{ X11_Xmd_h, 45 },
	{ X11_Xosdefs_h, 46 },
	{ X11_Xproto_h, 47 },
	{ X11_Xprotostr_h, 48 },
	{ X11_Xresource_h, 49 },
	{ X11_Xutil_h, 50 },
	{ X11_cursorfont_h, 51 },
	{ X11_extensions_XEVI_h, 52 },
	{ X11_extensions_XEVIstr_h, 53 },
	{ X11_extensions_XI_h, 54 },
	{ X11_extensions_XInput_h, 55 },
	{ X11_extensions_XIproto_h, 56 },
	{ X11_extensions_XKB_h, 57 },
	{ X11_extensions_XKBbells_h, 58 },
	{ X11_extensions_XKBgeom_h, 59 },
	{ X11_extensions_XKBproto_h, 60 },
	{ X11_extensions_XKBstr_h, 61 },
	{ X11_extensions_XShm_h, 62 },
	{ X11_extensions_XTest_h, 63 },
	{ X11_extensions_Xdbe_h, 64 },
	{ X11_extensions_Xdbeproto_h, 65 },
	{ X11_extensions_Xext_h, 66 },
	{ X11_extensions_Xrender_h, 67 },
	{ X11_extensions_dpms_h, 68 },
	{ X11_extensions_dpmsstr_h, 69 },
	{ X11_extensions_extutil_h, 70 },
	{ X11_extensions_render_h, 71 },
	{ X11_extensions_security_h, 72 },
	{ X11_extensions_securstr_h, 73 },
	{ X11_extensions_shape_h, 74 },
	{ X11_extensions_sync_h, 75 },
	{ X11_extensions_syncstr_h, 76 },
	{ X11_keysym_h, 77 },
	{ X11_keysymdef_h, 78 },
	{ alsa_asoundlib_h, 79 },
	{ alsa_conf_h, 80 },
	{ alsa_control_h, 81 },
	{ alsa_control_external_h, 82 },
	{ alsa_error_h, 83 },
	{ alsa_global_h, 84 },
	{ alsa_hwdep_h, 85 },
	{ alsa_iatomic_h, 86 },
	{ alsa_input_h, 87 },
	{ alsa_mixer_h, 88 },
	{ alsa_mixer_abst_h, 89 },
	{ alsa_output_h, 90 },
	{ alsa_pcm_h, 91 },
	{ alsa_pcm_extplug_h, 92 },
	{ alsa_pcm_plugin_h, 93 },
	{ alsa_rawmidi_h, 94 },
	{ alsa_seq_h, 95 },
	{ alsa_seq_event_h, 96 },
	{ alsa_seq_midi_event_h, 97 },
	{ alsa_seqmid_h, 98 },
	{ alsa_timer_h, 99 },
	{ arpa_inet_h, 100 },
	{ assert_h, 101 },
	{ atk_1_0_atk_atk_enum_types_h, 102 },
	{ atk_1_0_atk_atk_h, 103 },
	{ cairo_cairo_features_h, 104 },
	{ cairo_cairo_ft_h, 105 },
	{ cairo_cairo_pdf_h, 106 },
	{ cairo_cairo_ps_h, 107 },
	{ cairo_cairo_svg_h, 108 },
	{ cairo_cairo_xlib_xrender_h, 109 },
	{ cairo_cairo_xlib_h, 110 },
	{ cairo_cairo_h, 111 },
	{ complex_h, 112 },
	{ cpio_h, 113 },
	{ ctype_h, 114 },
	{ cups_cups_h, 115 },
	{ cups_http_h, 116 },
	{ cups_ipp_h, 117 },
	{ cups_ppd_h, 118 },
	{ cups_raster_h, 119 },
	{ curses_h, 120 },
	{ dirent_h, 121 },
	{ dlfcn_h, 122 },
	{ endian_h, 123 },
	{ err_h, 124 },
	{ errno_h, 125 },
	{ fcntl_h, 126 },
	{ fenv_h, 127 },
	{ fmtmsg_h, 128 },
	{ fnmatch_h, 129 },
	{ fontconfig_fcfreetype_h, 130 },
	{ fontconfig_fcprivate_h, 131 },
	{ fontconfig_fontconfig_h, 132 },
	{ freetype_config_ftheader_h, 133 },
	{ freetype_config_ftoption_h, 134 },
	{ freetype_config_ftstdlib_h, 135 },
	{ freetype_freetype_h, 136 },
	{ freetype_ftbbox_h, 137 },
	{ freetype_ftbdf_h, 138 },
	{ freetype_ftbitmap_h, 139 },
	{ freetype_fterrors_h, 140 },
	{ freetype_ftglyph_h, 141 },
	{ freetype_ftimage_h, 142 },
	{ freetype_ftincrem_h, 143 },
	{ freetype_ftlist_h, 144 },
	{ freetype_ftmm_h, 145 },
	{ freetype_ftmodapi_h, 146 },
	{ freetype_ftmoderr_h, 147 },
	{ freetype_ftotval_h, 148 },
	{ freetype_ftoutln_h, 149 },
	{ freetype_ftpfr_h, 150 },
	{ freetype_ftrender_h, 151 },
	{ freetype_ftsizes_h, 152 },
	{ freetype_ftsnames_h, 153 },
	{ freetype_ftstroke_h, 154 },
	{ freetype_ftsystem_h, 155 },
	{ freetype_fttrigon_h, 156 },
	{ freetype_fttypes_h, 157 },
	{ freetype_ftxf86_h, 158 },
	{ freetype_t1tables_h, 159 },
	{ freetype_ttnameid_h, 160 },
	{ freetype_tttables_h, 161 },
	{ freetype_tttags_h, 162 },
	{ freetype_ttunpat_h, 163 },
	{ ft2build_h, 164 },
	{ ftw_h, 165 },
	{ getopt_h, 166 },
	{ glib_2_0_glib_object_h, 167 },
	{ glib_2_0_glib_h, 168 },
	{ glib_2_0_glib_gi18n_h, 169 },
	{ glib_2_0_glib_gprintf_h, 170 },
	{ glib_2_0_glib_gstdio_h, 171 },
	{ glib_2_0_gmodule_h, 172 },
	{ glib_2_0_gobject_gvaluecollector_h, 173 },
	{ glob_h, 174 },
	{ grp_h, 175 },
	{ gtk_2_0_gdk_pixbuf_xlib_gdk_pixbuf_xlib_h, 176 },
	{ gtk_2_0_gdk_pixbuf_gdk_pixbuf_h, 177 },
	{ gtk_2_0_gdk_pixbuf_gdk_pixdata_h, 178 },
	{ gtk_2_0_gdk_gdk_h, 179 },
	{ gtk_2_0_gdk_gdkcairo_h, 180 },
	{ gtk_2_0_gdk_gdkkeysyms_h, 181 },
	{ gtk_2_0_gdk_gdkx_h, 182 },
	{ gtk_2_0_gtk_gtk_h, 183 },
	{ iconv_h, 184 },
	{ inttypes_h, 185 },
	{ jerror_h, 186 },
	{ jpeglib_h, 187 },
	{ langinfo_h, 188 },
	{ libgen_h, 189 },
	{ libintl_h, 190 },
	{ libxml2_libxml_HTMLparser_h, 191 },
	{ libxml2_libxml_HTMLtree_h, 192 },
	{ libxml2_libxml_SAX2_h, 193 },
	{ libxml2_libxml_c14n_h, 194 },
	{ libxml2_libxml_catalog_h, 195 },
	{ libxml2_libxml_debugXML_h, 196 },
	{ libxml2_libxml_dict_h, 197 },
	{ libxml2_libxml_encoding_h, 198 },
	{ libxml2_libxml_entities_h, 199 },
	{ libxml2_libxml_globals_h, 200 },
	{ libxml2_libxml_hash_h, 201 },
	{ libxml2_libxml_list_h, 202 },
	{ libxml2_libxml_parser_h, 203 },
	{ libxml2_libxml_parserInternals_h, 204 },
	{ libxml2_libxml_pattern_h, 205 },
	{ libxml2_libxml_relaxng_h, 206 },
	{ libxml2_libxml_schematron_h, 207 },
	{ libxml2_libxml_threads_h, 208 },
	{ libxml2_libxml_tree_h, 209 },
	{ libxml2_libxml_uri_h, 210 },
	{ libxml2_libxml_valid_h, 211 },
	{ libxml2_libxml_xinclude_h, 212 },
	{ libxml2_libxml_xmlIO_h, 213 },
	{ libxml2_libxml_xmlautomata_h, 214 },
	{ libxml2_libxml_xmlerror_h, 215 },
	{ libxml2_libxml_xmlexports_h, 216 },
	{ libxml2_libxml_xmlmemory_h, 217 },
	{ libxml2_libxml_xmlmodule_h, 218 },
	{ libxml2_libxml_xmlreader_h, 219 },
	{ libxml2_libxml_xmlregexp_h, 220 },
	{ libxml2_libxml_xmlsave_h, 221 },
	{ libxml2_libxml_xmlschemas_h, 222 },
	{ libxml2_libxml_xmlschemastypes_h, 223 },
	{ libxml2_libxml_xmlstring_h, 224 },
	{ libxml2_libxml_xmlversion_h, 225 },
	{ libxml2_libxml_xmlwriter_h, 226 },
	{ libxml2_libxml_xpath_h, 227 },
	{ libxml2_libxml_xpathInternals_h, 228 },
	{ libxml2_libxml_xpointer_h, 229 },
	{ limits_h, 230 },
	{ locale_h, 231 },
	{ math_h, 232 },
	{ monetary_h, 233 },
	{ mqueue_h, 234 },
	{ net_if_h, 235 },
	{ netdb_h, 236 },
	{ netinet_icmp6_h, 237 },
	{ netinet_igmp_h, 238 },
	{ netinet_in_h, 239 },
	{ netinet_in_systm_h, 240 },
	{ netinet_ip_h, 241 },
	{ netinet_ip6_h, 242 },
	{ netinet_ip_icmp_h, 243 },
	{ netinet_tcp_h, 244 },
	{ netinet_udp_h, 245 },
	{ nl_types_h, 246 },
	{ nspr4_nspr_h, 247 },
	{ nspr4_plarena_h, 248 },
	{ nspr4_plhash_h, 249 },
	{ nspr4_prclist_h, 250 },
	{ nspr4_prerror_h, 251 },
	{ nspr4_prinit_h, 252 },
	{ nspr4_prinrval_h, 253 },
	{ nspr4_prio_h, 254 },
	{ nspr4_private_pprio_h, 255 },
	{ nspr4_prlock_h, 256 },
	{ nspr4_prmon_h, 257 },
	{ nspr4_prnetdb_h, 258 },
	{ nspr4_prthread_h, 259 },
	{ nspr4_prtime_h, 260 },
	{ nspr4_prtypes_h, 261 },
	{ nss3_blapit_h, 262 },
	{ nss3_cert_h, 263 },
	{ nss3_certt_h, 264 },
	{ nss3_cmsreclist_h, 265 },
	{ nss3_cryptoht_h, 266 },
	{ nss3_ecl_exp_h, 267 },
	{ nss3_hasht_h, 268 },
	{ nss3_key_h, 269 },
	{ nss3_keyhi_h, 270 },
	{ nss3_keyt_h, 271 },
	{ nss3_keythi_h, 272 },
	{ nss3_nss_h, 273 },
	{ nss3_nssb64_h, 274 },
	{ nss3_nssb64t_h, 275 },
	{ nss3_nssilckt_h, 276 },
	{ nss3_nssrwlkt_h, 277 },
	{ nss3_ocspt_h, 278 },
	{ nss3_pk11pub_h, 279 },
	{ nss3_pkcs11t_h, 280 },
	{ nss3_pkcs7t_h, 281 },
	{ nss3_secasn1t_h, 282 },
	{ nss3_seccomon_h, 283 },
	{ nss3_secdert_h, 284 },
	{ nss3_secdigt_h, 285 },
	{ nss3_secmodt_h, 286 },
	{ nss3_secoidt_h, 287 },
	{ nss3_secpkcs5_h, 288 },
	{ nss3_secport_h, 289 },
	{ nss3_ssl_h, 290 },
	{ nss3_sslerr_h, 291 },
	{ nss3_sslproto_h, 292 },
	{ nss3_sslt_h, 293 },
	{ pango_1_0_pango_pango_utils_h, 294 },
	{ pango_1_0_pango_pango_h, 295 },
	{ pango_1_0_pango_pangocairo_h, 296 },
	{ pango_1_0_pango_pangofc_decoder_h, 297 },
	{ pango_1_0_pango_pangofc_fontmap_h, 298 },
	{ pango_1_0_pango_pangoft2_h, 299 },
	{ pango_1_0_pango_pangoxft_h, 300 },
	{ png_h, 301 },
	{ poll_h, 302 },
	{ pthread_h, 303 },
	{ pty_h, 304 },
	{ pwd_h, 305 },
	{ regex_h, 306 },
	{ rpc_auth_h, 307 },
	{ rpc_clnt_h, 308 },
	{ rpc_pmap_clnt_h, 309 },
	{ rpc_rpc_h, 310 },
	{ rpc_rpc_msg_h, 311 },
	{ rpc_svc_h, 312 },
	{ rpc_types_h, 313 },
	{ rpc_xdr_h, 314 },
	{ sched_h, 315 },
	{ search_h, 316 },
	{ security_pam_appl_h, 317 },
	{ semaphore_h, 318 },
	{ setjmp_h, 319 },
	{ signal_h, 320 },
	{ spawn_h, 321 },
	{ stddef_h, 322 },
	{ stdint_h, 323 },
	{ stdio_h, 324 },
	{ stdlib_h, 325 },
	{ string_h, 326 },
	{ strings_h, 327 },
	{ sys_epoll_h, 328 },
	{ sys_file_h, 329 },
	{ sys_inotify_h, 330 },
	{ sys_ioctl_h, 331 },
	{ sys_ipc_h, 332 },
	{ sys_mman_h, 333 },
	{ sys_msg_h, 334 },
	{ sys_param_h, 335 },
	{ sys_poll_h, 336 },
	{ sys_resource_h, 337 },
	{ sys_select_h, 338 },
	{ sys_sem_h, 339 },
	{ sys_sendfile_h, 340 },
	{ sys_shm_h, 341 },
	{ sys_socket_h, 342 },
	{ sys_stat_h, 343 },
	{ sys_statfs_h, 344 },
	{ sys_statvfs_h, 345 },
	{ sys_time_h, 346 },
	{ sys_timeb_h, 347 },
	{ sys_times_h, 348 },
	{ sys_types_h, 349 },
	{ sys_uio_h, 350 },
	{ sys_un_h, 351 },
	{ sys_utsname_h, 352 },
	{ sys_wait_h, 353 },
	{ syslog_h, 354 },
	{ tar_h, 355 },
	{ term_h, 356 },
	{ termios_h, 357 },
	{ time_h, 358 },
	{ ucontext_h, 359 },
	{ ulimit_h, 360 },
	{ unistd_h, 361 },
	{ unwind_h, 362 },
	{ utime_h, 363 },
	{ utmp_h, 364 },
	{ utmpx_h, 365 },
	{ wchar_h, 366 },
	{ wctype_h, 367 },
	{ wordexp_h, 368 },
	{ zconf_h, 369 },
	{ zlib_h, 370 },
	{ NULL, 0 }
};
