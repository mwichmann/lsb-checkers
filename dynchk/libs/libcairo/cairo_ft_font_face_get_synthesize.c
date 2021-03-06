// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#include <cairo/cairo-ft.h>
#undef cairo_ft_font_face_get_synthesize
static unsigned int(*funcptr) (cairo_font_face_t * ) = 0;

extern int __lsb_check_params;
unsigned int cairo_ft_font_face_get_synthesize (cairo_font_face_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	unsigned int ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_ft_font_face_get_synthesize()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_ft_font_face_get_synthesize");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_ft_font_face_get_synthesize. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_ft_font_face_get_synthesize() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_ft_font_face_get_synthesize - arg0 (font_face)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_ft_font_face_get_synthesize - arg0 (font_face)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

