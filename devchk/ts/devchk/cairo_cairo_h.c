/*
 * Test of cairo/cairo.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "cairo/cairo.h"



#ifdef TET_TEST
void cairo_cairo_h()
{
#else
int cairo_cairo_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in cairo/cairo.h\n");
#endif

printf("Checking data structures in cairo/cairo.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for CAIRO_VERSION_ENCODE(major, minor, micro) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CAIRO_VERSION */
#endif

#if 1
CheckTypeSize(cairo_bool_t,0, 1000142, 1, 4.0, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(cairo_matrix_t,0, 1000148, 1, 4.0, NULL, 1000147, NULL)
#endif

#if 1
CheckTypeSize(cairo_destroy_func_t,0, 1000151, 1, 4.0, NULL, 21532, NULL)
#endif

#if 1
CheckTypeSize(cairo_user_data_key_t,0, 1000153, 1, 4.0, NULL, 1000152, NULL)
#endif

#if 1
CheckTypeSize(cairo_status_t,0, 1000155, 1, 4.0, NULL, 1000154, NULL)
#endif

#if 1
CheckTypeSize(cairo_content_t,0, 1000157, 1, 4.0, NULL, 1000156, NULL)
#endif

#if 1
CheckTypeSize(cairo_write_func_t,0, 1000158, 1, 4.0, NULL, 1000232, NULL)
#endif

#if 1
CheckTypeSize(cairo_read_func_t,0, 1000159, 1, 4.0, NULL, 1000223, NULL)
#endif

#if 1
CheckTypeSize(cairo_operator_t,0, 1000161, 1, 4.0, NULL, 1000160, NULL)
#endif

#if 1
CheckTypeSize(cairo_antialias_t,0, 1000163, 1, 4.0, NULL, 1000162, NULL)
#endif

#if 1
CheckTypeSize(cairo_fill_rule_t,0, 1000165, 1, 4.0, NULL, 1000164, NULL)
#endif

#if 1
CheckTypeSize(cairo_line_cap_t,0, 1000167, 1, 4.0, NULL, 1000166, NULL)
#endif

#if 1
CheckTypeSize(cairo_line_join_t,0, 1000169, 1, 4.0, NULL, 1000168, NULL)
#endif

#if 1
CheckTypeSize(cairo_rectangle_t,0, 1000171, 1, 4.0, NULL, 1000170, NULL)
#endif

#if 1
CheckTypeSize(cairo_rectangle_list_t,0, 1000173, 1, 4.0, NULL, 1000172, NULL)
#endif

#if 1
CheckTypeSize(cairo_glyph_t,0, 1000179, 1, 4.0, NULL, 1000178, NULL)
#endif

#if 1
CheckTypeSize(cairo_text_extents_t,0, 1000181, 1, 4.0, NULL, 1000180, NULL)
#endif

#if 1
CheckTypeSize(cairo_font_extents_t,0, 1000183, 1, 4.0, NULL, 1000182, NULL)
#endif

#if 1
CheckTypeSize(cairo_font_slant_t,0, 1000185, 1, 4.0, NULL, 1000184, NULL)
#endif

#if 1
CheckTypeSize(cairo_font_weight_t,0, 1000187, 1, 4.0, NULL, 1000186, NULL)
#endif

#if 1
CheckTypeSize(cairo_subpixel_order_t,0, 1000189, 1, 4.0, NULL, 1000188, NULL)
#endif

#if 1
CheckTypeSize(cairo_hint_style_t,0, 1000191, 1, 4.0, NULL, 1000190, NULL)
#endif

#if 1
CheckTypeSize(cairo_hint_metrics_t,0, 1000193, 1, 4.0, NULL, 1000192, NULL)
#endif

#if 1
CheckTypeSize(cairo_font_type_t,0, 1000197, 1, 4.0, NULL, 1000196, NULL)
#endif

#if 1
CheckTypeSize(cairo_path_data_type_t,0, 1000199, 1, 4.0, NULL, 1000198, NULL)
#endif

#if 1
CheckTypeSize(cairo_path_data_t,0, 1000200, 1, 4.0, NULL, 1000201, NULL)
#endif

#if 1
CheckTypeSize(cairo_path_t,0, 1000205, 1, 4.0, NULL, 1000204, NULL)
#endif

#if 1
CheckTypeSize(cairo_surface_type_t,0, 1000207, 1, 4.0, NULL, 1000206, NULL)
#endif

#if 1
CheckTypeSize(cairo_format_t,0, 1000209, 1, 4.0, NULL, 1000208, NULL)
#endif

#if 1
CheckTypeSize(cairo_pattern_type_t,0, 1000211, 1, 4.0, NULL, 1000210, NULL)
#endif

#if 1
CheckTypeSize(cairo_extend_t,0, 1000213, 1, 4.0, NULL, 1000212, NULL)
#endif

#if 1
CheckTypeSize(cairo_filter_t,0, 1000215, 1, 4.0, NULL, 1000214, NULL)
#endif

extern int cairo_version_db(void);
CheckInterfacedef(cairo_version,cairo_version_db);
extern const char * cairo_version_string_db(void);
CheckInterfacedef(cairo_version_string,cairo_version_string_db);
extern cairo_t * cairo_create_db(cairo_surface_t *);
CheckInterfacedef(cairo_create,cairo_create_db);
extern cairo_t * cairo_reference_db(cairo_t *);
CheckInterfacedef(cairo_reference,cairo_reference_db);
extern void cairo_destroy_db(cairo_t *);
CheckInterfacedef(cairo_destroy,cairo_destroy_db);
extern void cairo_save_db(cairo_t *);
CheckInterfacedef(cairo_save,cairo_save_db);
extern void cairo_restore_db(cairo_t *);
CheckInterfacedef(cairo_restore,cairo_restore_db);
extern void cairo_set_operator_db(cairo_t *, cairo_operator_t);
CheckInterfacedef(cairo_set_operator,cairo_set_operator_db);
extern void cairo_set_source_db(cairo_t *, cairo_pattern_t *);
CheckInterfacedef(cairo_set_source,cairo_set_source_db);
extern void cairo_set_source_rgb_db(cairo_t *, double, double, double);
CheckInterfacedef(cairo_set_source_rgb,cairo_set_source_rgb_db);
extern void cairo_set_source_rgba_db(cairo_t *, double, double, double, double);
CheckInterfacedef(cairo_set_source_rgba,cairo_set_source_rgba_db);
extern void cairo_set_source_surface_db(cairo_t *, cairo_surface_t *, double, double);
CheckInterfacedef(cairo_set_source_surface,cairo_set_source_surface_db);
extern void cairo_set_tolerance_db(cairo_t *, double);
CheckInterfacedef(cairo_set_tolerance,cairo_set_tolerance_db);
extern void cairo_set_antialias_db(cairo_t *, cairo_antialias_t);
CheckInterfacedef(cairo_set_antialias,cairo_set_antialias_db);
extern void cairo_set_fill_rule_db(cairo_t *, cairo_fill_rule_t);
CheckInterfacedef(cairo_set_fill_rule,cairo_set_fill_rule_db);
extern void cairo_set_line_width_db(cairo_t *, double);
CheckInterfacedef(cairo_set_line_width,cairo_set_line_width_db);
extern void cairo_set_line_cap_db(cairo_t *, cairo_line_cap_t);
CheckInterfacedef(cairo_set_line_cap,cairo_set_line_cap_db);
extern void cairo_set_line_join_db(cairo_t *, cairo_line_join_t);
CheckInterfacedef(cairo_set_line_join,cairo_set_line_join_db);
extern void cairo_set_dash_db(cairo_t *, const double *, int, double);
CheckInterfacedef(cairo_set_dash,cairo_set_dash_db);
extern void cairo_set_miter_limit_db(cairo_t *, double);
CheckInterfacedef(cairo_set_miter_limit,cairo_set_miter_limit_db);
extern void cairo_translate_db(cairo_t *, double, double);
CheckInterfacedef(cairo_translate,cairo_translate_db);
extern void cairo_scale_db(cairo_t *, double, double);
CheckInterfacedef(cairo_scale,cairo_scale_db);
extern void cairo_rotate_db(cairo_t *, double);
CheckInterfacedef(cairo_rotate,cairo_rotate_db);
extern void cairo_transform_db(cairo_t *, const cairo_matrix_t *);
CheckInterfacedef(cairo_transform,cairo_transform_db);
extern void cairo_set_matrix_db(cairo_t *, const cairo_matrix_t *);
CheckInterfacedef(cairo_set_matrix,cairo_set_matrix_db);
extern void cairo_identity_matrix_db(cairo_t *);
CheckInterfacedef(cairo_identity_matrix,cairo_identity_matrix_db);
extern void cairo_user_to_device_db(cairo_t *, double *, double *);
CheckInterfacedef(cairo_user_to_device,cairo_user_to_device_db);
extern void cairo_user_to_device_distance_db(cairo_t *, double *, double *);
CheckInterfacedef(cairo_user_to_device_distance,cairo_user_to_device_distance_db);
extern void cairo_device_to_user_db(cairo_t *, double *, double *);
CheckInterfacedef(cairo_device_to_user,cairo_device_to_user_db);
extern void cairo_device_to_user_distance_db(cairo_t *, double *, double *);
CheckInterfacedef(cairo_device_to_user_distance,cairo_device_to_user_distance_db);
extern void cairo_new_path_db(cairo_t *);
CheckInterfacedef(cairo_new_path,cairo_new_path_db);
extern void cairo_move_to_db(cairo_t *, double, double);
CheckInterfacedef(cairo_move_to,cairo_move_to_db);
extern void cairo_line_to_db(cairo_t *, double, double);
CheckInterfacedef(cairo_line_to,cairo_line_to_db);
extern void cairo_curve_to_db(cairo_t *, double, double, double, double, double, double);
CheckInterfacedef(cairo_curve_to,cairo_curve_to_db);
extern void cairo_arc_db(cairo_t *, double, double, double, double, double);
CheckInterfacedef(cairo_arc,cairo_arc_db);
extern void cairo_arc_negative_db(cairo_t *, double, double, double, double, double);
CheckInterfacedef(cairo_arc_negative,cairo_arc_negative_db);
extern void cairo_rel_move_to_db(cairo_t *, double, double);
CheckInterfacedef(cairo_rel_move_to,cairo_rel_move_to_db);
extern void cairo_rel_line_to_db(cairo_t *, double, double);
CheckInterfacedef(cairo_rel_line_to,cairo_rel_line_to_db);
extern void cairo_rel_curve_to_db(cairo_t *, double, double, double, double, double, double);
CheckInterfacedef(cairo_rel_curve_to,cairo_rel_curve_to_db);
extern void cairo_rectangle_db(cairo_t *, double, double, double, double);
CheckInterfacedef(cairo_rectangle,cairo_rectangle_db);
extern void cairo_close_path_db(cairo_t *);
CheckInterfacedef(cairo_close_path,cairo_close_path_db);
extern void cairo_paint_db(cairo_t *);
CheckInterfacedef(cairo_paint,cairo_paint_db);
extern void cairo_paint_with_alpha_db(cairo_t *, double);
CheckInterfacedef(cairo_paint_with_alpha,cairo_paint_with_alpha_db);
extern void cairo_mask_db(cairo_t *, cairo_pattern_t *);
CheckInterfacedef(cairo_mask,cairo_mask_db);
extern void cairo_mask_surface_db(cairo_t *, cairo_surface_t *, double, double);
CheckInterfacedef(cairo_mask_surface,cairo_mask_surface_db);
extern void cairo_stroke_db(cairo_t *);
CheckInterfacedef(cairo_stroke,cairo_stroke_db);
extern void cairo_stroke_preserve_db(cairo_t *);
CheckInterfacedef(cairo_stroke_preserve,cairo_stroke_preserve_db);
extern void cairo_fill_db(cairo_t *);
CheckInterfacedef(cairo_fill,cairo_fill_db);
extern void cairo_fill_preserve_db(cairo_t *);
CheckInterfacedef(cairo_fill_preserve,cairo_fill_preserve_db);
extern void cairo_copy_page_db(cairo_t *);
CheckInterfacedef(cairo_copy_page,cairo_copy_page_db);
extern void cairo_show_page_db(cairo_t *);
CheckInterfacedef(cairo_show_page,cairo_show_page_db);
extern cairo_bool_t cairo_in_stroke_db(cairo_t *, double, double);
CheckInterfacedef(cairo_in_stroke,cairo_in_stroke_db);
extern cairo_bool_t cairo_in_fill_db(cairo_t *, double, double);
CheckInterfacedef(cairo_in_fill,cairo_in_fill_db);
extern void cairo_stroke_extents_db(cairo_t *, double *, double *, double *, double *);
CheckInterfacedef(cairo_stroke_extents,cairo_stroke_extents_db);
extern void cairo_fill_extents_db(cairo_t *, double *, double *, double *, double *);
CheckInterfacedef(cairo_fill_extents,cairo_fill_extents_db);
extern void cairo_reset_clip_db(cairo_t *);
CheckInterfacedef(cairo_reset_clip,cairo_reset_clip_db);
extern void cairo_clip_db(cairo_t *);
CheckInterfacedef(cairo_clip,cairo_clip_db);
extern void cairo_clip_preserve_db(cairo_t *);
CheckInterfacedef(cairo_clip_preserve,cairo_clip_preserve_db);
extern cairo_font_options_t * cairo_font_options_create_db(void);
CheckInterfacedef(cairo_font_options_create,cairo_font_options_create_db);
extern cairo_font_options_t * cairo_font_options_copy_db(const cairo_font_options_t *);
CheckInterfacedef(cairo_font_options_copy,cairo_font_options_copy_db);
extern void cairo_font_options_destroy_db(cairo_font_options_t *);
CheckInterfacedef(cairo_font_options_destroy,cairo_font_options_destroy_db);
extern cairo_status_t cairo_font_options_status_db(cairo_font_options_t *);
CheckInterfacedef(cairo_font_options_status,cairo_font_options_status_db);
extern void cairo_font_options_merge_db(cairo_font_options_t *, const cairo_font_options_t *);
CheckInterfacedef(cairo_font_options_merge,cairo_font_options_merge_db);
extern cairo_bool_t cairo_font_options_equal_db(const cairo_font_options_t *, const cairo_font_options_t *);
CheckInterfacedef(cairo_font_options_equal,cairo_font_options_equal_db);
extern long unsigned int cairo_font_options_hash_db(const cairo_font_options_t *);
CheckInterfacedef(cairo_font_options_hash,cairo_font_options_hash_db);
extern void cairo_font_options_set_antialias_db(cairo_font_options_t *, cairo_antialias_t);
CheckInterfacedef(cairo_font_options_set_antialias,cairo_font_options_set_antialias_db);
extern cairo_antialias_t cairo_font_options_get_antialias_db(const cairo_font_options_t *);
CheckInterfacedef(cairo_font_options_get_antialias,cairo_font_options_get_antialias_db);
extern void cairo_font_options_set_subpixel_order_db(cairo_font_options_t *, cairo_subpixel_order_t);
CheckInterfacedef(cairo_font_options_set_subpixel_order,cairo_font_options_set_subpixel_order_db);
extern cairo_subpixel_order_t cairo_font_options_get_subpixel_order_db(const cairo_font_options_t *);
CheckInterfacedef(cairo_font_options_get_subpixel_order,cairo_font_options_get_subpixel_order_db);
extern void cairo_font_options_set_hint_style_db(cairo_font_options_t *, cairo_hint_style_t);
CheckInterfacedef(cairo_font_options_set_hint_style,cairo_font_options_set_hint_style_db);
extern cairo_hint_style_t cairo_font_options_get_hint_style_db(const cairo_font_options_t *);
CheckInterfacedef(cairo_font_options_get_hint_style,cairo_font_options_get_hint_style_db);
extern void cairo_font_options_set_hint_metrics_db(cairo_font_options_t *, cairo_hint_metrics_t);
CheckInterfacedef(cairo_font_options_set_hint_metrics,cairo_font_options_set_hint_metrics_db);
extern cairo_hint_metrics_t cairo_font_options_get_hint_metrics_db(const cairo_font_options_t *);
CheckInterfacedef(cairo_font_options_get_hint_metrics,cairo_font_options_get_hint_metrics_db);
extern void cairo_select_font_face_db(cairo_t *, const char *, cairo_font_slant_t, cairo_font_weight_t);
CheckInterfacedef(cairo_select_font_face,cairo_select_font_face_db);
extern void cairo_set_font_size_db(cairo_t *, double);
CheckInterfacedef(cairo_set_font_size,cairo_set_font_size_db);
extern void cairo_set_font_matrix_db(cairo_t *, const cairo_matrix_t *);
CheckInterfacedef(cairo_set_font_matrix,cairo_set_font_matrix_db);
extern void cairo_get_font_matrix_db(cairo_t *, cairo_matrix_t *);
CheckInterfacedef(cairo_get_font_matrix,cairo_get_font_matrix_db);
extern void cairo_set_font_options_db(cairo_t *, const cairo_font_options_t *);
CheckInterfacedef(cairo_set_font_options,cairo_set_font_options_db);
extern void cairo_get_font_options_db(cairo_t *, cairo_font_options_t *);
CheckInterfacedef(cairo_get_font_options,cairo_get_font_options_db);
extern void cairo_set_font_face_db(cairo_t *, cairo_font_face_t *);
CheckInterfacedef(cairo_set_font_face,cairo_set_font_face_db);
extern cairo_font_face_t * cairo_get_font_face_db(cairo_t *);
CheckInterfacedef(cairo_get_font_face,cairo_get_font_face_db);
extern void cairo_show_text_db(cairo_t *, const char *);
CheckInterfacedef(cairo_show_text,cairo_show_text_db);
extern void cairo_show_glyphs_db(cairo_t *, const cairo_glyph_t *, int);
CheckInterfacedef(cairo_show_glyphs,cairo_show_glyphs_db);
extern void cairo_text_path_db(cairo_t *, const char *);
CheckInterfacedef(cairo_text_path,cairo_text_path_db);
extern void cairo_glyph_path_db(cairo_t *, const cairo_glyph_t *, int);
CheckInterfacedef(cairo_glyph_path,cairo_glyph_path_db);
extern void cairo_text_extents_db(cairo_t *, const char *, cairo_text_extents_t *);
CheckInterfacedef(cairo_text_extents,cairo_text_extents_db);
extern void cairo_glyph_extents_db(cairo_t *, const cairo_glyph_t *, int, cairo_text_extents_t *);
CheckInterfacedef(cairo_glyph_extents,cairo_glyph_extents_db);
extern void cairo_font_extents_db(cairo_t *, cairo_font_extents_t *);
CheckInterfacedef(cairo_font_extents,cairo_font_extents_db);
extern cairo_font_face_t * cairo_font_face_reference_db(cairo_font_face_t *);
CheckInterfacedef(cairo_font_face_reference,cairo_font_face_reference_db);
extern void cairo_font_face_destroy_db(cairo_font_face_t *);
CheckInterfacedef(cairo_font_face_destroy,cairo_font_face_destroy_db);
extern cairo_status_t cairo_font_face_status_db(cairo_font_face_t *);
CheckInterfacedef(cairo_font_face_status,cairo_font_face_status_db);
extern void * cairo_font_face_get_user_data_db(cairo_font_face_t *, const cairo_user_data_key_t *);
CheckInterfacedef(cairo_font_face_get_user_data,cairo_font_face_get_user_data_db);
extern cairo_status_t cairo_font_face_set_user_data_db(cairo_font_face_t *, const cairo_user_data_key_t *, void *, cairo_destroy_func_t);
CheckInterfacedef(cairo_font_face_set_user_data,cairo_font_face_set_user_data_db);
extern cairo_scaled_font_t * cairo_scaled_font_create_db(cairo_font_face_t *, const cairo_matrix_t *, const cairo_matrix_t *, const cairo_font_options_t *);
CheckInterfacedef(cairo_scaled_font_create,cairo_scaled_font_create_db);
extern cairo_scaled_font_t * cairo_scaled_font_reference_db(cairo_scaled_font_t *);
CheckInterfacedef(cairo_scaled_font_reference,cairo_scaled_font_reference_db);
extern void cairo_scaled_font_destroy_db(cairo_scaled_font_t *);
CheckInterfacedef(cairo_scaled_font_destroy,cairo_scaled_font_destroy_db);
extern cairo_status_t cairo_scaled_font_status_db(cairo_scaled_font_t *);
CheckInterfacedef(cairo_scaled_font_status,cairo_scaled_font_status_db);
extern void cairo_scaled_font_extents_db(cairo_scaled_font_t *, cairo_font_extents_t *);
CheckInterfacedef(cairo_scaled_font_extents,cairo_scaled_font_extents_db);
extern void cairo_scaled_font_glyph_extents_db(cairo_scaled_font_t *, const cairo_glyph_t *, int, cairo_text_extents_t *);
CheckInterfacedef(cairo_scaled_font_glyph_extents,cairo_scaled_font_glyph_extents_db);
extern cairo_operator_t cairo_get_operator_db(cairo_t *);
CheckInterfacedef(cairo_get_operator,cairo_get_operator_db);
extern cairo_pattern_t * cairo_get_source_db(cairo_t *);
CheckInterfacedef(cairo_get_source,cairo_get_source_db);
extern double cairo_get_tolerance_db(cairo_t *);
CheckInterfacedef(cairo_get_tolerance,cairo_get_tolerance_db);
extern cairo_antialias_t cairo_get_antialias_db(cairo_t *);
CheckInterfacedef(cairo_get_antialias,cairo_get_antialias_db);
extern void cairo_get_current_point_db(cairo_t *, double *, double *);
CheckInterfacedef(cairo_get_current_point,cairo_get_current_point_db);
extern cairo_fill_rule_t cairo_get_fill_rule_db(cairo_t *);
CheckInterfacedef(cairo_get_fill_rule,cairo_get_fill_rule_db);
extern double cairo_get_line_width_db(cairo_t *);
CheckInterfacedef(cairo_get_line_width,cairo_get_line_width_db);
extern cairo_line_cap_t cairo_get_line_cap_db(cairo_t *);
CheckInterfacedef(cairo_get_line_cap,cairo_get_line_cap_db);
extern cairo_line_join_t cairo_get_line_join_db(cairo_t *);
CheckInterfacedef(cairo_get_line_join,cairo_get_line_join_db);
extern double cairo_get_miter_limit_db(cairo_t *);
CheckInterfacedef(cairo_get_miter_limit,cairo_get_miter_limit_db);
extern void cairo_get_matrix_db(cairo_t *, cairo_matrix_t *);
CheckInterfacedef(cairo_get_matrix,cairo_get_matrix_db);
extern cairo_surface_t * cairo_get_target_db(cairo_t *);
CheckInterfacedef(cairo_get_target,cairo_get_target_db);
extern cairo_path_t * cairo_copy_path_db(cairo_t *);
CheckInterfacedef(cairo_copy_path,cairo_copy_path_db);
extern cairo_path_t * cairo_copy_path_flat_db(cairo_t *);
CheckInterfacedef(cairo_copy_path_flat,cairo_copy_path_flat_db);
extern void cairo_append_path_db(cairo_t *, const cairo_path_t *);
CheckInterfacedef(cairo_append_path,cairo_append_path_db);
extern void cairo_path_destroy_db(cairo_path_t *);
CheckInterfacedef(cairo_path_destroy,cairo_path_destroy_db);
extern cairo_status_t cairo_status_db(cairo_t *);
CheckInterfacedef(cairo_status,cairo_status_db);
extern const char * cairo_status_to_string_db(cairo_status_t);
CheckInterfacedef(cairo_status_to_string,cairo_status_to_string_db);
extern cairo_surface_t * cairo_surface_create_similar_db(cairo_surface_t *, cairo_content_t, int, int);
CheckInterfacedef(cairo_surface_create_similar,cairo_surface_create_similar_db);
extern cairo_surface_t * cairo_surface_reference_db(cairo_surface_t *);
CheckInterfacedef(cairo_surface_reference,cairo_surface_reference_db);
extern void cairo_surface_finish_db(cairo_surface_t *);
CheckInterfacedef(cairo_surface_finish,cairo_surface_finish_db);
extern void cairo_surface_destroy_db(cairo_surface_t *);
CheckInterfacedef(cairo_surface_destroy,cairo_surface_destroy_db);
extern cairo_status_t cairo_surface_status_db(cairo_surface_t *);
CheckInterfacedef(cairo_surface_status,cairo_surface_status_db);
extern cairo_status_t cairo_surface_write_to_png_db(cairo_surface_t *, const char *);
CheckInterfacedef(cairo_surface_write_to_png,cairo_surface_write_to_png_db);
extern cairo_status_t cairo_surface_write_to_png_stream_db(cairo_surface_t *, cairo_write_func_t, void *);
CheckInterfacedef(cairo_surface_write_to_png_stream,cairo_surface_write_to_png_stream_db);
extern void * cairo_surface_get_user_data_db(cairo_surface_t *, const cairo_user_data_key_t *);
CheckInterfacedef(cairo_surface_get_user_data,cairo_surface_get_user_data_db);
extern cairo_status_t cairo_surface_set_user_data_db(cairo_surface_t *, const cairo_user_data_key_t *, void *, cairo_destroy_func_t);
CheckInterfacedef(cairo_surface_set_user_data,cairo_surface_set_user_data_db);
extern void cairo_surface_get_font_options_db(cairo_surface_t *, cairo_font_options_t *);
CheckInterfacedef(cairo_surface_get_font_options,cairo_surface_get_font_options_db);
extern void cairo_surface_flush_db(cairo_surface_t *);
CheckInterfacedef(cairo_surface_flush,cairo_surface_flush_db);
extern void cairo_surface_mark_dirty_db(cairo_surface_t *);
CheckInterfacedef(cairo_surface_mark_dirty,cairo_surface_mark_dirty_db);
extern void cairo_surface_mark_dirty_rectangle_db(cairo_surface_t *, int, int, int, int);
CheckInterfacedef(cairo_surface_mark_dirty_rectangle,cairo_surface_mark_dirty_rectangle_db);
extern void cairo_surface_set_device_offset_db(cairo_surface_t *, double, double);
CheckInterfacedef(cairo_surface_set_device_offset,cairo_surface_set_device_offset_db);
extern cairo_surface_t * cairo_image_surface_create_db(cairo_format_t, int, int);
CheckInterfacedef(cairo_image_surface_create,cairo_image_surface_create_db);
extern cairo_surface_t * cairo_image_surface_create_for_data_db(unsigned char *, cairo_format_t, int, int, int);
CheckInterfacedef(cairo_image_surface_create_for_data,cairo_image_surface_create_for_data_db);
extern int cairo_image_surface_get_width_db(cairo_surface_t *);
CheckInterfacedef(cairo_image_surface_get_width,cairo_image_surface_get_width_db);
extern int cairo_image_surface_get_height_db(cairo_surface_t *);
CheckInterfacedef(cairo_image_surface_get_height,cairo_image_surface_get_height_db);
extern cairo_surface_t * cairo_image_surface_create_from_png_db(const char *);
CheckInterfacedef(cairo_image_surface_create_from_png,cairo_image_surface_create_from_png_db);
extern cairo_surface_t * cairo_image_surface_create_from_png_stream_db(cairo_read_func_t, void *);
CheckInterfacedef(cairo_image_surface_create_from_png_stream,cairo_image_surface_create_from_png_stream_db);
extern cairo_pattern_t * cairo_pattern_create_rgb_db(double, double, double);
CheckInterfacedef(cairo_pattern_create_rgb,cairo_pattern_create_rgb_db);
extern cairo_pattern_t * cairo_pattern_create_rgba_db(double, double, double, double);
CheckInterfacedef(cairo_pattern_create_rgba,cairo_pattern_create_rgba_db);
extern cairo_pattern_t * cairo_pattern_create_for_surface_db(cairo_surface_t *);
CheckInterfacedef(cairo_pattern_create_for_surface,cairo_pattern_create_for_surface_db);
extern cairo_pattern_t * cairo_pattern_create_linear_db(double, double, double, double);
CheckInterfacedef(cairo_pattern_create_linear,cairo_pattern_create_linear_db);
extern cairo_pattern_t * cairo_pattern_create_radial_db(double, double, double, double, double, double);
CheckInterfacedef(cairo_pattern_create_radial,cairo_pattern_create_radial_db);
extern cairo_pattern_t * cairo_pattern_reference_db(cairo_pattern_t *);
CheckInterfacedef(cairo_pattern_reference,cairo_pattern_reference_db);
extern void cairo_pattern_destroy_db(cairo_pattern_t *);
CheckInterfacedef(cairo_pattern_destroy,cairo_pattern_destroy_db);
extern cairo_status_t cairo_pattern_status_db(cairo_pattern_t *);
CheckInterfacedef(cairo_pattern_status,cairo_pattern_status_db);
extern void cairo_pattern_add_color_stop_rgb_db(cairo_pattern_t *, double, double, double, double);
CheckInterfacedef(cairo_pattern_add_color_stop_rgb,cairo_pattern_add_color_stop_rgb_db);
extern void cairo_pattern_add_color_stop_rgba_db(cairo_pattern_t *, double, double, double, double, double);
CheckInterfacedef(cairo_pattern_add_color_stop_rgba,cairo_pattern_add_color_stop_rgba_db);
extern void cairo_pattern_set_matrix_db(cairo_pattern_t *, const cairo_matrix_t *);
CheckInterfacedef(cairo_pattern_set_matrix,cairo_pattern_set_matrix_db);
extern void cairo_pattern_get_matrix_db(cairo_pattern_t *, cairo_matrix_t *);
CheckInterfacedef(cairo_pattern_get_matrix,cairo_pattern_get_matrix_db);
extern void cairo_pattern_set_extend_db(cairo_pattern_t *, cairo_extend_t);
CheckInterfacedef(cairo_pattern_set_extend,cairo_pattern_set_extend_db);
extern cairo_extend_t cairo_pattern_get_extend_db(cairo_pattern_t *);
CheckInterfacedef(cairo_pattern_get_extend,cairo_pattern_get_extend_db);
extern void cairo_pattern_set_filter_db(cairo_pattern_t *, cairo_filter_t);
CheckInterfacedef(cairo_pattern_set_filter,cairo_pattern_set_filter_db);
extern cairo_filter_t cairo_pattern_get_filter_db(cairo_pattern_t *);
CheckInterfacedef(cairo_pattern_get_filter,cairo_pattern_get_filter_db);
extern void cairo_matrix_init_db(cairo_matrix_t *, double, double, double, double, double, double);
CheckInterfacedef(cairo_matrix_init,cairo_matrix_init_db);
extern void cairo_matrix_init_identity_db(cairo_matrix_t *);
CheckInterfacedef(cairo_matrix_init_identity,cairo_matrix_init_identity_db);
extern void cairo_matrix_init_translate_db(cairo_matrix_t *, double, double);
CheckInterfacedef(cairo_matrix_init_translate,cairo_matrix_init_translate_db);
extern void cairo_matrix_init_scale_db(cairo_matrix_t *, double, double);
CheckInterfacedef(cairo_matrix_init_scale,cairo_matrix_init_scale_db);
extern void cairo_matrix_init_rotate_db(cairo_matrix_t *, double);
CheckInterfacedef(cairo_matrix_init_rotate,cairo_matrix_init_rotate_db);
extern void cairo_matrix_translate_db(cairo_matrix_t *, double, double);
CheckInterfacedef(cairo_matrix_translate,cairo_matrix_translate_db);
extern void cairo_matrix_scale_db(cairo_matrix_t *, double, double);
CheckInterfacedef(cairo_matrix_scale,cairo_matrix_scale_db);
extern void cairo_matrix_rotate_db(cairo_matrix_t *, double);
CheckInterfacedef(cairo_matrix_rotate,cairo_matrix_rotate_db);
extern cairo_status_t cairo_matrix_invert_db(cairo_matrix_t *);
CheckInterfacedef(cairo_matrix_invert,cairo_matrix_invert_db);
extern void cairo_matrix_multiply_db(cairo_matrix_t *, const cairo_matrix_t *, const cairo_matrix_t *);
CheckInterfacedef(cairo_matrix_multiply,cairo_matrix_multiply_db);
extern void cairo_matrix_transform_distance_db(const cairo_matrix_t *, double *, double *);
CheckInterfacedef(cairo_matrix_transform_distance,cairo_matrix_transform_distance_db);
extern void cairo_matrix_transform_point_db(const cairo_matrix_t *, double *, double *);
CheckInterfacedef(cairo_matrix_transform_point,cairo_matrix_transform_point_db);
extern void cairo_debug_reset_static_data_db(void);
CheckInterfacedef(cairo_debug_reset_static_data,cairo_debug_reset_static_data_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in cairo/cairo.h\n\n",pcnt,cnt);
return cnt;
#endif

}
