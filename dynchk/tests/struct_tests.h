extern int validate_struct_FTW(struct FTW  * input, char *name);
extern int validate_struct__IO_FILE(struct _IO_FILE  * input, char *name);
extern int validate_struct___jmp_buf_tag(struct __jmp_buf_tag  * input, char *name);
#if defined(__i386__)
extern int validate_struct__fpreg(struct _fpreg  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__i386__)
extern int validate_struct__fpstate(struct _fpstate  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__x86_64__)
extern int validate_struct__fpstate(struct _fpstate  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__i386__)
extern int validate_struct__fpxreg(struct _fpxreg  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__x86_64__)
extern int validate_struct__fpxreg(struct _fpxreg  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__i386__)
extern int validate_struct__libc_fpreg(struct _libc_fpreg  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__i386__)
extern int validate_struct__libc_fpstate(struct _libc_fpstate  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__x86_64__)
extern int validate_struct__libc_fpstate(struct _libc_fpstate  * input, char *name);
#endif /*defined(__x86_64__)*/
extern int validate_struct__pthread_cleanup_buffer(struct _pthread_cleanup_buffer  * input, char *name);
extern int validate_struct__pthread_fastlock(struct _pthread_fastlock  * input, char *name);
extern int validate_struct__win_st(struct _win_st  * input, char *name);
#if defined(__i386__)
extern int validate_struct__xmmreg(struct _xmmreg  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__x86_64__)
extern int validate_struct__xmmreg(struct _xmmreg  * input, char *name);
#endif /*defined(__x86_64__)*/
extern int validate_struct_accepted_reply(struct accepted_reply  * input, char *name);
extern int validate_struct_addrinfo(struct addrinfo  * input, char *name);
extern int validate_struct_auth_ops(struct auth_ops  * input, char *name);
extern int validate_struct_call_body(struct call_body  * input, char *name);
extern int validate_struct_clnt_ops(struct clnt_ops  * input, char *name);
extern int validate_struct_cmsghdr(struct cmsghdr  * input, char *name);
extern int validate_struct_dirent(struct dirent  * input, char *name);
extern int validate_struct_dirent64(struct dirent64  * input, char *name);
extern int validate_struct_exception(struct exception  * input, char *name);
extern int validate_struct_exit_status(struct exit_status  * input, char *name);
extern int validate_struct_flock(struct flock  * input, char *name);
extern int validate_struct_flock64(struct flock64  * input, char *name);
extern int validate_struct_group(struct group  * input, char *name);
extern int validate_struct_hostent(struct hostent  * input, char *name);
extern int validate_struct_if_nameindex(struct if_nameindex  * input, char *name);
extern int validate_struct_ifaddr(struct ifaddr  * input, char *name);
extern int validate_struct_ifconf(struct ifconf  * input, char *name);
extern int validate_struct_ifmap(struct ifmap  * input, char *name);
extern int validate_struct_ifreq(struct ifreq  * input, char *name);
extern int validate_struct_in6_addr(struct in6_addr  * input, char *name);
extern int validate_struct_in_addr(struct in_addr  * input, char *name);
extern int validate_struct_internal_state(struct internal_state  * input, char *name);
extern int validate_struct_iovec(struct iovec  * input, char *name);
extern int validate_struct_ip_mreq(struct ip_mreq  * input, char *name);
#if defined(__i386__)
extern int validate_struct_ipc_perm(struct ipc_perm  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_ipc_perm(struct ipc_perm  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_ipc_perm(struct ipc_perm  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_ipc_perm(struct ipc_perm  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_ipc_perm(struct ipc_perm  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_ipc_perm(struct ipc_perm  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_ipc_perm(struct ipc_perm  * input, char *name);
#endif /*defined(__s390x__)*/
extern int validate_struct_ipv6_mreq(struct ipv6_mreq  * input, char *name);
extern int validate_struct_itimerspec(struct itimerspec  * input, char *name);
extern int validate_struct_itimerval(struct itimerval  * input, char *name);
#if defined(__i386__)
extern int validate_struct_lastlog(struct lastlog  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_lastlog(struct lastlog  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_lastlog(struct lastlog  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_lastlog(struct lastlog  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_lastlog(struct lastlog  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_lastlog(struct lastlog  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_lastlog(struct lastlog  * input, char *name);
#endif /*defined(__s390x__)*/
extern int validate_struct_lconv(struct lconv  * input, char *name);
extern int validate_struct_ldat(struct ldat  * input, char *name);
extern int validate_struct_linger(struct linger  * input, char *name);
extern int validate_struct_msghdr(struct msghdr  * input, char *name);
#if defined(__i386__)
extern int validate_struct_msqid_ds(struct msqid_ds  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_msqid_ds(struct msqid_ds  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_msqid_ds(struct msqid_ds  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_msqid_ds(struct msqid_ds  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_msqid_ds(struct msqid_ds  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_msqid_ds(struct msqid_ds  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_msqid_ds(struct msqid_ds  * input, char *name);
#endif /*defined(__s390x__)*/
extern int validate_struct_netent(struct netent  * input, char *name);
extern int validate_struct_opaque_auth(struct opaque_auth  * input, char *name);
extern int validate_struct_option(struct option  * input, char *name);
extern int validate_struct_pam_conv(struct pam_conv  * input, char *name);
extern int validate_struct_pam_handle(struct pam_handle  * input, char *name);
extern int validate_struct_pam_message(struct pam_message  * input, char *name);
extern int validate_struct_pam_response(struct pam_response  * input, char *name);
extern int validate_struct_passwd(struct passwd  * input, char *name);
extern int validate_struct_pdat(struct pdat  * input, char *name);
extern int validate_struct_pollfd(struct pollfd  * input, char *name);
extern int validate_struct_protoent(struct protoent  * input, char *name);
extern int validate_struct_random_data(struct random_data  * input, char *name);
extern int validate_struct_rejected_reply(struct rejected_reply  * input, char *name);
extern int validate_struct_reply_body(struct reply_body  * input, char *name);
extern int validate_struct_rlimit(struct rlimit  * input, char *name);
extern int validate_struct_rlimit64(struct rlimit64  * input, char *name);
extern int validate_struct_rpc_err(struct rpc_err  * input, char *name);
extern int validate_struct_rpc_msg(struct rpc_msg  * input, char *name);
extern int validate_struct_rusage(struct rusage  * input, char *name);
extern int validate_struct_sched_param(struct sched_param  * input, char *name);
extern int validate_struct_sembuf(struct sembuf  * input, char *name);
#if defined(__i386__)
extern int validate_struct_semid_ds(struct semid_ds  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_semid_ds(struct semid_ds  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_semid_ds(struct semid_ds  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_semid_ds(struct semid_ds  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_semid_ds(struct semid_ds  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_semid_ds(struct semid_ds  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_semid_ds(struct semid_ds  * input, char *name);
#endif /*defined(__s390x__)*/
extern int validate_struct_servent(struct servent  * input, char *name);
#if defined(__i386__)
extern int validate_struct_shmid_ds(struct shmid_ds  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_shmid_ds(struct shmid_ds  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_shmid_ds(struct shmid_ds  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_shmid_ds(struct shmid_ds  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_shmid_ds(struct shmid_ds  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_shmid_ds(struct shmid_ds  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_shmid_ds(struct shmid_ds  * input, char *name);
#endif /*defined(__s390x__)*/
#if defined(__i386__)
extern int validate_struct_sigaction(struct sigaction  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_sigaction(struct sigaction  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_sigaction(struct sigaction  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_sigaction(struct sigaction  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_sigaction(struct sigaction  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_sigaction(struct sigaction  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_sigaction(struct sigaction  * input, char *name);
#endif /*defined(__s390x__)*/
#if defined(__i386__)
extern int validate_struct_sigcontext(struct sigcontext  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_sigcontext(struct sigcontext  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_sigcontext(struct sigcontext  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_sigcontext(struct sigcontext  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_sigcontext(struct sigcontext  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_sigcontext(struct sigcontext  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_sigcontext(struct sigcontext  * input, char *name);
#endif /*defined(__s390x__)*/
extern int validate_struct_sockaddr(struct sockaddr  * input, char *name);
extern int validate_struct_sockaddr_in(struct sockaddr_in  * input, char *name);
extern int validate_struct_sockaddr_in6(struct sockaddr_in6  * input, char *name);
extern int validate_struct_sockaddr_storage(struct sockaddr_storage  * input, char *name);
extern int validate_struct_sockaddr_un(struct sockaddr_un  * input, char *name);
#if defined(__i386__)
extern int validate_struct_stat(struct stat  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_stat(struct stat  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_stat(struct stat  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_stat(struct stat  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_stat(struct stat  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_stat(struct stat  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_stat(struct stat  * input, char *name);
#endif /*defined(__s390x__)*/
#if defined(__i386__)
extern int validate_struct_stat64(struct stat64  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_stat64(struct stat64  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_stat64(struct stat64  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_stat64(struct stat64  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_stat64(struct stat64  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_stat64(struct stat64  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_stat64(struct stat64  * input, char *name);
#endif /*defined(__s390x__)*/
#if defined(__i386__)
extern int validate_struct_statvfs(struct statvfs  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_statvfs(struct statvfs  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_statvfs(struct statvfs  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_statvfs(struct statvfs  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_statvfs(struct statvfs  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_statvfs(struct statvfs  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_statvfs(struct statvfs  * input, char *name);
#endif /*defined(__s390x__)*/
#if defined(__i386__)
extern int validate_struct_statvfs64(struct statvfs64  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_statvfs64(struct statvfs64  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_statvfs64(struct statvfs64  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_statvfs64(struct statvfs64  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_statvfs64(struct statvfs64  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_statvfs64(struct statvfs64  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_statvfs64(struct statvfs64  * input, char *name);
#endif /*defined(__s390x__)*/
extern int validate_struct_svc_req(struct svc_req  * input, char *name);
extern int validate_struct_term(struct term  * input, char *name);
extern int validate_struct_termios(struct termios  * input, char *name);
extern int validate_struct_timeb(struct timeb  * input, char *name);
extern int validate_struct_timespec(struct timespec  * input, char *name);
extern int validate_struct_timeval(struct timeval  * input, char *name);
extern int validate_struct_timezone(struct timezone  * input, char *name);
extern int validate_struct_tm(struct tm  * input, char *name);
extern int validate_struct_tms(struct tms  * input, char *name);
extern int validate_struct_utimbuf(struct utimbuf  * input, char *name);
#if defined(__i386__)
extern int validate_struct_utmp(struct utmp  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_utmp(struct utmp  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_utmp(struct utmp  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_utmp(struct utmp  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_utmp(struct utmp  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_utmp(struct utmp  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_utmp(struct utmp  * input, char *name);
#endif /*defined(__s390x__)*/
#if defined(__i386__)
extern int validate_struct_utmpx(struct utmpx  * input, char *name);
#endif /*defined(__i386__)*/
#if defined(__ia64__)
extern int validate_struct_utmpx(struct utmpx  * input, char *name);
#endif /*defined(__ia64__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
extern int validate_struct_utmpx(struct utmpx  * input, char *name);
#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__powerpc64__)
extern int validate_struct_utmpx(struct utmpx  * input, char *name);
#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
extern int validate_struct_utmpx(struct utmpx  * input, char *name);
#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
extern int validate_struct_utmpx(struct utmpx  * input, char *name);
#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
extern int validate_struct_utmpx(struct utmpx  * input, char *name);
#endif /*defined(__s390x__)*/
extern int validate_struct_utsname(struct utsname  * input, char *name);
extern int validate_struct_winsize(struct winsize  * input, char *name);
extern int validate_struct_xdr_discrim(struct xdr_discrim  * input, char *name);
extern int validate_struct_xdr_ops(struct xdr_ops  * input, char *name);
extern int validate_struct_xp_ops(struct xp_ops  * input, char *name);
