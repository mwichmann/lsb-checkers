char *libc_so_6[] = {
	"_Exit",
	"_IO_2_1_stderr_",
	"_IO_2_1_stdin_",
	"_IO_2_1_stdout_",
	"_IO_feof",
	"_IO_getc",
	"_IO_putc",
	"_IO_puts",
	"_IO_stdin_used",
	"__assert_fail",
	"__bzero",
	"__ctype_get_mb_cur_max",
	"__ctype_tolower",
	"__ctype_toupper",
	"__dcgettext",
	"__divdi3",
	"__environ",
	"__errno_location",
	"__fxstat",
	"__fxstat64",
	"__getpgid",
	"__libc_current_sigrtmax",
	"__libc_current_sigrtmin",
	"__libc_start_main",
	"__lxstat",
	"__lxstat64",
	"__mbrlen",
	"__mempcpy",
	"__secure_getenv",
	"__sigpause",
	"__sigsetjmp",
	"__stpcpy",
	"__strdup",
	"__strtod_internal",
	"__strtof_internal",
	"__strtok_r",
	"__strtol_internal",
	"__strtold_internal",
	"__strtoll_internal",
	"__strtoul_internal",
	"__strtoull_internal",
	"__sysv_signal",
	"__wcstod_internal",
	"__wcstof_internal",
	"__wcstol_internal",
	"__wcstold_internal",
	"__wcstoll_internal",
	"__wcstoul_internal",
	"__wcstoull_internal",
	"__xmknod",
	"__xstat",
	"__xstat64",
	"_environ",
	"_exit",
	"_h_errno",
	"_longjmp",
	"_nl_msg_cat_cntr",
	"_obstack_begin",
	"_obstack_newchunk",
	"_setjmp",
	"_sys_errlist",
	"_sys_siglist",
	"_tolower",
	"_toupper",
	"a64l",
	"abort",
	"abs",
	"accept",
	"access",
	"acct",
	"adjtime",
	"adjtimex",
	"advance",
	"alarm",
	"alphasort",
	"alphasort64",
	"asctime",
	"asprintf",
	"atexit",
	"atof",
	"atoi",
	"atol",
	"authdes_create",
	"authdes_getucred",
	"authdes_pk_create",
	"authnone_create",
	"authunix_create",
	"authunix_create_default",
	"basename",
	"bcmp",
	"bcopy",
	"bind",
	"bindresvport",
	"bindtextdomain",
	"brk",
	"bsd_signal",
	"bsearch",
	"btowc",
	"bzero",
	"calloc",
	"catclose",
	"catgets",
	"catopen",
	"cfgetispeed",
	"cfgetospeed",
	"cfmakeraw",
	"cfsetispeed",
	"cfsetospeed",
	"cfsetspeed",
	"chdir",
	"chmod",
	"chown",
	"chroot",
	"clearerr",
	"clnt_broadcast",
	"clnt_create",
	"clnt_pcreateerror",
	"clnt_perrno",
	"clnt_perror",
	"clnt_spcreateerror",
	"clnt_sperrno",
	"clnt_sperror",
	"clntraw_create",
	"clnttcp_create",
	"clntudp_bufcreate",
	"clntudp_create",
	"clntunix_create",
	"clock",
	"close",
	"closedir",
	"closelog",
	"confstr",
	"connect",
	"creat",
	"creat64",
	"ctermid",
	"ctime",
	"cuserid",
	"daemon",
	"daylight",
	"difftime",
	"dirname",
	"div",
	"dprintf",
	"drand48",
	"dup",
	"dup2",
	"ecvt",
	"endaliasent",
	"endfsent",
	"endgrent",
	"endhostent",
	"endmntent",
	"endnetent",
	"endnetgrent",
	"endprotoent",
	"endpwent",
	"endrpcent",
	"endservent",
	"endspent",
	"endttyent",
	"endutent",
	"endutxent",
	"environ",
	"erand48",
	"err",
	"errno",
	"error",
	"errx",
	"ether_aton",
	"ether_hostton",
	"ether_line",
	"ether_ntoa",
	"ether_ntoa_r",
	"ether_ntohost",
	"execl",
	"execle",
	"execlp",
	"execv",
	"execve",
	"execvp",
	"exit",
	"fchdir",
	"fchmod",
	"fchown",
	"fclose",
	"fcntl",
	"fcvt",
	"fdatasync",
	"fdetach",
	"fdopen",
	"feof",
	"ferror",
	"fflush",
	"fflush_unlocked",
	"ffs",
	"fgetc",
	"fgetgrent",
	"fgetpos",
	"fgetpos64",
	"fgetpwent",
	"fgets",
	"fgetspent",
	"fgetwc",
	"fgetwc_unlocked",
	"fgetws",
	"fileno",
	"flock",
	"flockfile",
	"fmtmsg",
	"fnmatch",
	"fopen",
	"fopen64",
	"fork",
	"fpathconf",
	"fprintf",
	"fputc",
	"fputs",
	"fputwc",
	"fputws",
	"fread",
	"free",
	"freopen",
	"freopen64",
	"fscanf",
	"fseek",
	"fseeko",
	"fseeko64",
	"fsetpos",
	"fsetpos64",
	"fstatfs",
	"fstatfs64",
	"fstatvfs",
	"fstatvfs64",
	"fsync",
	"ftell",
	"ftello",
	"ftello64",
	"ftime",
	"ftok",
	"ftruncate",
	"ftruncate64",
	"ftrylockfile",
	"ftw",
	"ftw64",
	"funlockfile",
	"fwide",
	"fwprintf",
	"fwrite",
	"fwscanf",
	"gcvt",
	"getaliasbyname",
	"getaliasent",
	"getc",
	"getc_unlocked",
	"getchar",
	"getchar_unlocked",
	"getcontext",
	"getcwd",
	"getdate",
	"getdate_err",
	"getdomainname",
	"getegid",
	"getenv",
	"geteuid",
	"getfsent",
	"getgid",
	"getgrent",
	"getgrgid",
	"getgrgid_r",
	"getgrnam",
	"getgrnam_r",
	"getgroups",
	"gethostbyaddr",
	"gethostbyname",
	"gethostbyname2",
	"gethostent",
	"gethostid",
	"gethostname",
	"getitimer",
	"getloadavg",
	"getlogin",
	"getmntent",
	"getmsg",
	"getnetbyaddr",
	"getnetbyname",
	"getnetent",
	"getnetgrent",
	"getopt",
	"getopt_long",
	"getopt_long_only",
	"getpeername",
	"getpgid",
	"getpgrp",
	"getpid",
	"getppid",
	"getpriority",
	"getprotobyname",
	"getprotobynumber",
	"getprotoent",
	"getpwent",
	"getpwnam",
	"getpwnam_r",
	"getpwuid",
	"getpwuid_r",
	"getrlimit",
	"getrlimit64",
	"getrpcbyname",
	"getrpcbynumber",
	"getrpcent",
	"getrpcport",
	"getrusage",
	"gets",
	"getservbyname",
	"getservbyport",
	"getservent",
	"getsid",
	"getsockname",
	"getsockopt",
	"getspent",
	"getspnam",
	"getsubopt",
	"gettext",
	"gettimeofday",
	"getttyent",
	"getuid",
	"getutent",
	"getutxent",
	"getutxid",
	"getutxline",
	"getw",
	"getwc",
	"getwd",
	"glob",
	"glob64",
	"globfree",
	"globfree64",
	"gmtime",
	"grantpt",
	"h_errno",
	"hcreate",
	"hdestroy",
	"hsearch",
	"htonl",
	"htons",
	"iconv",
	"iconv_close",
	"iconv_open",
	"index",
	"inet_addr",
	"inet_aton",
	"inet_ntoa",
	"initgroups",
	"initstate",
	"insque",
	"ioctl",
	"ioperm",
	"iopl",
	"isalnum",
	"isalpha",
	"isascii",
	"isatty",
	"isblank",
	"iscntrl",
	"isdigit",
	"isgraph",
	"isinf",
	"isinfl",
	"islower",
	"isnan",
	"isnanf",
	"isnanl",
	"isprint",
	"ispunct",
	"isspace",
	"isupper",
	"iswalnum",
	"iswalpha",
	"iswblank",
	"iswcntrl",
	"iswctype",
	"iswdigit",
	"iswgraph",
	"iswlower",
	"iswprint",
	"iswpunct",
	"iswspace",
	"iswupper",
	"iswxdigit",
	"isxdigit",
	"jrand48",
	"kill",
	"killpg",
	"l64a",
	"labs",
	"lchown",
	"ldiv",
	"lfind",
	"link",
	"listen",
	"llabs",
	"lldiv",
	"loc1",
	"loc2",
	"localeconv",
	"localtime",
	"lockf",
	"lockf64",
	"locs",
	"longjmp",
	"lrand48",
	"lsearch",
	"lseek",
	"lseek64",
	"makecontext",
	"malloc",
	"mblen",
	"mbrlen",
	"mbrtowc",
	"mbsinit",
	"mbsnrtowcs",
	"mbsrtowcs",
	"mbstowcs",
	"mbtowc",
	"memccpy",
	"memchr",
	"memcmp",
	"memcpy",
	"memmem",
	"memmove",
	"memset",
	"mkdir",
	"mkfifo",
	"mkstemp",
	"mkstemp64",
	"mktemp",
	"mktime",
	"mlock",
	"mlockall",
	"mmap",
	"mmap64",
	"mprotect",
	"mrand48",
	"msgctl",
	"msgget",
	"msgrcv",
	"msgsnd",
	"msync",
	"munlock",
	"munlockall",
	"munmap",
	"nanosleep",
	"nftw",
	"nftw64",
	"nice",
	"nl_langinfo",
	"nrand48",
	"ntohl",
	"ntohs",
	"open",
	"open64",
	"opendir",
	"openlog",
	"optarg",
	"opterr",
	"optind",
	"optopt",
	"pathconf",
	"pause",
	"pclose",
	"perror",
	"pipe",
	"pmap_getmaps",
	"pmap_getport",
	"pmap_rmtcall",
	"pmap_set",
	"pmap_unset",
	"poll",
	"popen",
	"posix_memalign",
	"pread",
	"printf",
	"psignal",
	"ptsname",
	"putc",
	"putc_unlocked",
	"putchar",
	"putchar_unlocked",
	"putenv",
	"putmsg",
	"puts",
	"pututxline",
	"putw",
	"putwc",
	"putwchar",
	"pwrite",
	"pwrite64",
	"qsort",
	"raise",
	"rand",
	"random",
	"re_comp",
	"re_compile_fastmap",
	"re_compile_pattern",
	"re_exec",
	"re_match",
	"re_match_2",
	"re_max_failures",
	"re_search",
	"re_search_2",
	"re_set_registers",
	"re_set_syntax",
	"re_syntax_options",
	"read",
	"readdir",
	"readdir64",
	"readlink",
	"readv",
	"realloc",
	"realpath",
	"recv",
	"recvfrom",
	"recvmsg",
	"regcomp",
	"regerror",
	"regexec",
	"regfree",
	"registerrpc",
	"remove",
	"remque",
	"rename",
	"res_init",
	"rewind",
	"rewinddir",
	"rexec",
	"rexecoptions",
	"rindex",
	"rmdir",
	"rpc_createerr",
	"sbrk",
	"scanf",
	"sched_get_priority_max",
	"sched_get_priority_min",
	"sched_getparam",
	"sched_getscheduler",
	"sched_rr_get_interval",
	"sched_setparam",
	"sched_setscheduler",
	"sched_yield",
	"seed48",
	"seekdir",
	"select",
	"semctl",
	"semget",
	"semop",
	"send",
	"sendmsg",
	"sendto",
	"setaliasent",
	"setbuf",
	"setbuffer",
	"setegid",
	"seteuid",
	"setfsent",
	"setgid",
	"setgrent",
	"sethostent",
	"sethostid",
	"sethostname",
	"setitimer",
	"setlocale",
	"setmntent",
	"setnetent",
	"setnetgrent",
	"setpgid",
	"setpgrp",
	"setpriority",
	"setprotoent",
	"setpwent",
	"setregid",
	"setreuid",
	"setrlimit",
	"setrpcent",
	"setservent",
	"setsid",
	"setsockopt",
	"setspent",
	"setstate",
	"setttyent",
	"setuid",
	"setutent",
	"setutxent",
	"setvbuf",
	"shmat",
	"shmctl",
	"shmdt",
	"shmget",
	"shutdown",
	"sigaction",
	"sigaddset",
	"sigaltstack",
	"sigandset",
	"sigblock",
	"sigdelset",
	"sigemptyset",
	"sigfillset",
	"siggetmask",
	"sighold",
	"sigignore",
	"siginterrupt",
	"sigisemptyset",
	"sigismember",
	"siglongjmp",
	"signal",
	"sigorset",
	"sigpause",
	"sigpending",
	"sigprocmask",
	"sigqueue",
	"sigrelse",
	"sigreturn",
	"sigset",
	"sigsetmask",
	"sigstack",
	"sigsuspend",
	"sigtimedwait",
	"sigvec",
	"sigwait",
	"sigwaitinfo",
	"sleep",
	"snprintf",
	"socket",
	"socketpair",
	"sprintf",
	"srand",
	"srand48",
	"srandom",
	"sscanf",
	"statfs",
	"statvfs",
	"stderr",
	"stdin",
	"stdout",
	"step",
	"stime",
	"stpcpy",
	"stpncpy",
	"strcasecmp",
	"strcasestr",
	"strcat",
	"strchr",
	"strcmp",
	"strcoll",
	"strcpy",
	"strcspn",
	"strdup",
	"strerror",
	"strerror_r",
	"strfmon",
	"strfry",
	"strftime",
	"strlen",
	"strncasecmp",
	"strncat",
	"strncmp",
	"strncpy",
	"strndup",
	"strnlen",
	"strpbrk",
	"strptime",
	"strrchr",
	"strsep",
	"strsignal",
	"strspn",
	"strstr",
	"strtod",
	"strtof",
	"strtoimax",
	"strtok",
	"strtok_r",
	"strtol",
	"strtold",
	"strtoll",
	"strtoq",
	"strtoul",
	"strtoull",
	"strtoumax",
	"strtouq",
	"strverscmp",
	"strxfrm",
	"svc_exit",
	"svc_fdset",
	"svc_getreq",
	"svc_getreqset",
	"svc_register",
	"svc_run",
	"svc_sendreply",
	"svc_unregister",
	"svcauthdes_stats",
	"svcerr_auth",
	"svcerr_decode",
	"svcerr_noproc",
	"svcerr_noprog",
	"svcerr_progvers",
	"svcerr_systemerr",
	"svcerr_weakauth",
	"svcfd_create",
	"svcraw_create",
	"svctcp_create",
	"svcudp_bufcreate",
	"svcudp_create",
	"svcudp_enablecache",
	"svcunix_create",
	"svcunixfd_create",
	"swab",
	"swapcontext",
	"swprintf",
	"swscanf",
	"symlink",
	"sync",
	"sysconf",
	"syslog",
	"system",
	"tcdrain",
	"tcflow",
	"tcflush",
	"tcgetattr",
	"tcgetpgrp",
	"tcgetsid",
	"tcsendbreak",
	"tcsetattr",
	"tcsetpgrp",
	"telldir",
	"tempnam",
	"textdomain",
	"tfind",
	"time",
	"times",
	"timezone",
	"tmpfile",
	"tmpfile64",
	"tmpnam",
	"toascii",
	"tolower",
	"toupper",
	"towctrans",
	"towlower",
	"towupper",
	"truncate",
	"truncate64",
	"tsearch",
	"ttyname",
	"ttyname_r",
	"twalk",
	"tzname",
	"tzset",
	"ualarm",
	"ulimit",
	"umask",
	"uname",
	"ungetc",
	"ungetwc",
	"unlink",
	"unlockpt",
	"usleep",
	"utime",
	"utimes",
	"vasprintf",
	"vdprintf",
	"verrx",
	"vfork",
	"vfprintf",
	"vfwprintf",
	"vfwscanf",
	"vprintf",
	"vsnprintf",
	"vsprintf",
	"vswprintf",
	"vswscanf",
	"vwprintf",
	"vwscanf",
	"wait",
	"wait3",
	"wait4",
	"waitid",
	"waitpid",
	"warn",
	"warnx",
	"wcpcpy",
	"wcpncpy",
	"wcrtomb",
	"wcscasecmp",
	"wcscat",
	"wcschr",
	"wcscmp",
	"wcscoll",
	"wcscpy",
	"wcscspn",
	"wcsdup",
	"wcsftime",
	"wcslen",
	"wcsncasecmp",
	"wcsncat",
	"wcsncmp",
	"wcsncpy",
	"wcsnlen",
	"wcsnrtombs",
	"wcspbrk",
	"wcsrchr",
	"wcsrtombs",
	"wcsspn",
	"wcsstr",
	"wcstod",
	"wcstof",
	"wcstoimax",
	"wcstok",
	"wcstol",
	"wcstold",
	"wcstoll",
	"wcstombs",
	"wcstoq",
	"wcstoul",
	"wcstoull",
	"wcstoumax",
	"wcstouq",
	"wcswcs",
	"wcswidth",
	"wcsxfrm",
	"wctob",
	"wctomb",
	"wctrans",
	"wctype",
	"wcwidth",
	"wmemchr",
	"wmemcmp",
	"wmemcpy",
	"wmemmove",
	"wmemset",
	"wordexp",
	"wordfree",
	"wprintf",
	"write",
	"writev",
	"wscanf",
	"xdr_accepted_reply",
	"xdr_array",
	"xdr_authdes_cred",
	"xdr_authdes_verf",
	"xdr_authunix_parms",
	"xdr_bool",
	"xdr_bytes",
	"xdr_callhdr",
	"xdr_callmsg",
	"xdr_char",
	"xdr_cryptkeyarg",
	"xdr_cryptkeyarg2",
	"xdr_cryptkeyres",
	"xdr_des_block",
	"xdr_double",
	"xdr_enum",
	"xdr_float",
	"xdr_free",
	"xdr_getcredres",
	"xdr_int",
	"xdr_int16_t",
	"xdr_int32_t",
	"xdr_int8_t",
	"xdr_key_netstarg",
	"xdr_key_netstres",
	"xdr_keybuf",
	"xdr_keystatus",
	"xdr_long",
	"xdr_netnamestr",
	"xdr_netobj",
	"xdr_opaque",
	"xdr_opaque_auth",
	"xdr_pmap",
	"xdr_pmaplist",
	"xdr_pointer",
	"xdr_reference",
	"xdr_rejected_reply",
	"xdr_replymsg",
	"xdr_rmtcall_args",
	"xdr_rmtcallres",
	"xdr_short",
	"xdr_sizeof",
	"xdr_string",
	"xdr_u_char",
	"xdr_u_int",
	"xdr_u_long",
	"xdr_u_short",
	"xdr_uint16_t",
	"xdr_uint32_t",
	"xdr_uint8_t",
	"xdr_union",
	"xdr_unixcred",
	"xdr_vector",
	"xdr_void",
	"xdr_wrapstring",
	"xdrmem_create",
	"xdrrec_create",
	"xdrrec_endofrecord",
	"xdrrec_eof",
	"xdrrec_skiprecord",
	"xdrstdio_create",
	0,};
