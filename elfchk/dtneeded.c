char *DtNeeded[] = {
#if defined(__ia64__)
	"/lib/ld-lsb-ia64.so.1",
#endif /* __ia64__ */
#if defined(__i386__)
	"/lib/ld-lsb.so.1",
#endif /* __i386__ */
	"libGL.so.1",
	"libICE.so.6",
	"libSM.so.6",
	"libX11.so.6",
	"libXext.so.6",
	"libXt.so.6",
#if defined(__i386__)
	"libc.so.6",
#endif /* __i386__ */
#if defined(__ia64__)
	"libc.so.6.1",
#endif /* __ia64__ */
	"libcrypt.so.1",
	"libdl.so.2",
#if defined(__i386__)
	"libm.so.6",
#endif /* __i386__ */
	"libncurses.so.5",
#if defined(__i386__)
	"libpthread.so.0",
#endif /* __i386__ */
#if defined(__i386__)
	"librt.so.1",
#endif /* __i386__ */
#if defined(__i386__)
	"libutil.so.1",
#endif /* __i386__ */
	"libz.so.1",
	};
int numDtNeeded = sizeof(DtNeeded)/sizeof(char *);
