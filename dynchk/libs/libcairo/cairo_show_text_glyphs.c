// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_show_text_glyphs
static void(*funcptr) (cairo_t * , const char * , int , const cairo_glyph_t * , int , const cairo_text_cluster_t * , int , cairo_text_cluster_flags_t ) = 0;

extern int __lsb_check_params;
void cairo_show_text_glyphs (cairo_t * arg0 , const char * arg1 , int arg2 , const cairo_glyph_t * arg3 , int arg4 , const cairo_text_cluster_t * arg5 , int arg6 , cairo_text_cluster_flags_t arg7 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_show_text_glyphs()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_show_text_glyphs");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_show_text_glyphs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_show_text_glyphs() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_show_text_glyphs - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_show_text_glyphs - arg0 (cr)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cairo_show_text_glyphs - arg1 (utf8)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_show_text_glyphs - arg1 (utf8)");
		validate_NULL_TYPETYPE(  arg2, "cairo_show_text_glyphs - arg2 (utf8_len)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "cairo_show_text_glyphs - arg3 (glyphs)");
		}
		validate_NULL_TYPETYPE(  arg3, "cairo_show_text_glyphs - arg3 (glyphs)");
		validate_NULL_TYPETYPE(  arg4, "cairo_show_text_glyphs - arg4 (num_glyphs)");
		if( arg5 ) {
		validate_Rdaddress( arg5, "cairo_show_text_glyphs - arg5 (clusters)");
		}
		validate_NULL_TYPETYPE(  arg5, "cairo_show_text_glyphs - arg5 (clusters)");
		validate_NULL_TYPETYPE(  arg6, "cairo_show_text_glyphs - arg6 (num_clusters)");
		validate_NULL_TYPETYPE(  arg7, "cairo_show_text_glyphs - arg7 (cluster_flags)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
}

