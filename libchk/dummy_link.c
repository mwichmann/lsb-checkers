/* dummy (and a few real) prototypes to shut up compiler */
extern int printf(const char *, ...);
extern void exit(int);
extern void glAccum(void);
extern void IceAcceptConnection(void);
extern void SmFreeProperty(void);
extern void XActivateScreenSaver(void);
extern void DPMSCapable(void);
extern void XtAddActions(void);
extern void XCloseDevice(void);
extern void alarm(void);
extern void crypt(void);
extern void dlsym(void);
extern void shm_open(void);
extern void _Unwind_DeleteException(void);
extern void acos(void);
extern void addch(void);
extern void pam_acct_mgmt(void);
extern void pthread_kill(void);
extern void login(void);
extern void compress(void);
extern void __cxa_pure_virtual(void);
extern void png_free(void);
extern void jpeg_destroy(void);
extern void FcCharSetSubtract(void);
extern void g_allocator_free(void);
extern void g_boxed_copy(void);
extern void g_module_close(void);
extern void atk_action_do_action(void);
extern void pango_alignment_get_type(void);
extern void pango_xft_font_get_type(void);
extern void pango_fc_font_lock_face(void);
extern void gdk_pixbuf_flip(void);
extern void xlib_draw_gray_image(void);
extern void gdk_beep(void);
extern void gtk_accel_group_find(void);
extern void htmlCtxtReadDoc(void);
extern void XRenderAddGlyphs(void);
extern void FT_List_Insert(void);
extern void XftInit(void);

extern void _Z10forcepointR11QTextStream(void);
extern void _ZN10QHideEventD2Ev (void);
extern void _ZN10QTcpServerD1Ev(void);
extern void _ZN10QGLContext5resetEv(void);
extern void _ZN10QSqlDriverD0Ev(void);
extern void _ZN10QSvgWidgetD2Ev(void);
extern void _ZN11QDomCommentC2Ev(void);

extern void _ZN7QString6removeE5QChar(void);

int main()
{
	/* We need one function from each library to cause
		 the library to get linked */
	printf("This program should never get executed. It does nothing.\n");

	/* libGL */
	glAccum();

	/* libICE */
	IceAcceptConnection();

	/* libSM */
	SmFreeProperty();

	/* libX11 */
	XActivateScreenSaver();

	/* libXext */
	DPMSCapable();

	/* libXt */
	XtAddActions();

	/* libXi */
	XCloseDevice();

	/* libc */
	alarm();

	/* libcrypt */
	crypt();
	
	/* libdl */
	dlsym();
	
	/* librt */
	shm_open();
	
	/* libgcc_s */
	_Unwind_DeleteException();

	/* libm */
	acos();

	/* libncurses */
	addch();

	/* libpam */
	pam_acct_mgmt();

	/* libpthread */
	pthread_kill();

	/* libutil */
	login();

	/* libz */
	compress();

	/* libstdc++ */
	__cxa_pure_virtual();

    /* libpng12 */
    png_free();

    /* libjpeg */
    jpeg_destroy();

    /* libfontconfig */
    FcCharSetSubtract();

    /* libglib */
    g_allocator_free();

    /* libgobject */
    g_boxed_copy();

    /* libgmodule */
    g_module_close();

    /* libatk */
    atk_action_do_action();

    /* libpango */
    pango_alignment_get_type();

    /* libpangoxft */
    pango_xft_font_get_type();

    /* libpangoft */
    pango_fc_font_lock_face();

    /* libgdk_pixbuf */
    gdk_pixbuf_flip();
    
    /* libgdk_pixbuf_xlib */
    xlib_draw_gray_image();

    /* libgdk */
    gdk_beep();

    /* libgtk-x11 */
    gtk_accel_group_find();

    /* libxml2 */
    htmlCtxtReadDoc();

    /* libXrender */
    XRenderAddGlyphs();

    /* libfreetype */
    FT_List_Insert();

    /* libXft */
    XftInit();

    /* libQtCore */
    _Z10forcepointR11QTextStream();

    /* libQtGui */
    _ZN10QHideEventD2Ev ();

    /* libQtNetwork */
    _ZN10QTcpServerD1Ev();

    /* libQtOpenGL */
    _ZN10QGLContext5resetEv();

    /* libQtSql */
    _ZN10QSqlDriverD0Ev();

    /* libQtSvg */
    _ZN10QSvgWidgetD2Ev();

    /* libQtXml */
    _ZN11QDomCommentC2Ev();

    /* libqt-mt */
    _ZN7QString6removeE5QChar();

	exit(0);
}


