/* dummy (and a few real) prototypes to shut up compiler */
extern int printf(const char *, ...);
extern void exit(int);
extern void glAccum(void);
extern void IceAcceptConnection(void);
extern void SmFreeProperty(void);
extern void XActivateScreenSaver(void);
extern void DPMSCapable(void);
extern void XtAddActions(void);
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

	exit(0);
}


