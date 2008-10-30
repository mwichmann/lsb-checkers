/*
 * Test of stdio.h
 */
#include "hdrchk.h"
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifndef LSBCC_MODE
#ifdef __USE_FORTIFY_LEVEL
#undef __USE_FORTIFY_LEVEL
#endif
#define __USE_FORTIFY_LEVEL 2
#endif
#include <sys/cdefs.h>
#include <stdio_ext.h>
#include "stdio.h"



#ifdef TET_TEST
void stdio_h()
{
#else
int stdio_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in stdio.h\n");
#endif

printf("Checking data structures in stdio.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef _IOFBF
	CompareConstant(_IOFBF,0,1631,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _IOFBF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _IOLBF
	CompareConstant(_IOLBF,1,1632,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _IOLBF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _IONBF
	CompareConstant(_IONBF,2,1633,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _IONBF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BUFSIZ
	CompareConstant(BUFSIZ,8192,1634,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: BUFSIZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef P_tmpdir
	CompareStringConstant(P_tmpdir,"/tmp",1638,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: P_tmpdir\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EOF
	CompareConstant(EOF,(-1),3183,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: EOF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef L_tmpnam
	CompareConstant(L_tmpnam,20,3187,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: L_tmpnam\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FILENAME_MAX
	CompareConstant(FILENAME_MAX,4096,3188,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FILENAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FOPEN_MAX
	CompareConstant(FOPEN_MAX,16,3189,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FOPEN_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef L_ctermid
	CompareConstant(L_ctermid,9,3190,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: L_ctermid\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef L_cuserid
	CompareConstant(L_cuserid,9,3191,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: L_cuserid\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef __IO_FILE_SIZE
	CompareConstant(__IO_FILE_SIZE,216,5085,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: __IO_FILE_SIZE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef __IO_FILE_SIZE
	CompareConstant(__IO_FILE_SIZE,152,5085,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: __IO_FILE_SIZE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef __IO_FILE_SIZE
	CompareConstant(__IO_FILE_SIZE,216,5085,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: __IO_FILE_SIZE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef __IO_FILE_SIZE
	CompareConstant(__IO_FILE_SIZE,148,5085,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: __IO_FILE_SIZE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef __IO_FILE_SIZE
	CompareConstant(__IO_FILE_SIZE,216,5085,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: __IO_FILE_SIZE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef __IO_FILE_SIZE
	CompareConstant(__IO_FILE_SIZE,216,5085,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: __IO_FILE_SIZE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef __IO_FILE_SIZE
	CompareConstant(__IO_FILE_SIZE,152,5085,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: __IO_FILE_SIZE\n");
cnt++;
#endif

#else
Msg( "No definition for __IO_FILE_SIZE (5085, int) in db\n");
#ifdef __IO_FILE_SIZE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5085,%d,'""2.1""',NULL);\n", architecture, __IO_FILE_SIZE);
#endif
#endif
#if defined __s390x__
CheckTypeSize(fpos_t,16, 9108, 12, 1.3, NULL, 10274, NULL)
#elif defined __x86_64__
CheckTypeSize(fpos_t,16, 9108, 11, 2.0, NULL, 10274, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(fpos_t,12, 9108, 10, 1.3, NULL, 10274, NULL)
#elif defined __powerpc64__
CheckTypeSize(fpos_t,16, 9108, 9, 2.0, NULL, 10274, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(fpos_t,12, 9108, 6, 1.2, NULL, 10274, NULL)
#elif defined __ia64__
CheckTypeSize(fpos_t,16, 9108, 3, 1.3, NULL, 10274, NULL)
#elif defined __i386__
CheckTypeSize(fpos_t,12, 9108, 2, 1.2, NULL, 10274, NULL)
#else
Msg("Find size of fpos_t (9108)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,10274,NULL);\n",architecture,9108,0);
#endif

#if defined __s390x__
CheckTypeSize(fpos64_t,16, 9109, 12, 1.3, NULL, 10275, NULL)
#elif defined __x86_64__
CheckTypeSize(fpos64_t,16, 9109, 11, 2.0, NULL, 10275, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(fpos64_t,16, 9109, 10, 1.3, NULL, 10275, NULL)
#elif defined __powerpc64__
CheckTypeSize(fpos64_t,16, 9109, 9, 2.0, NULL, 10275, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(fpos64_t,16, 9109, 6, 1.2, NULL, 10275, NULL)
#elif defined __ia64__
CheckTypeSize(fpos64_t,16, 9109, 3, 1.3, NULL, 10275, NULL)
#elif defined __i386__
CheckTypeSize(fpos64_t,16, 9109, 2, 1.2, NULL, 10275, NULL)
#else
Msg("Find size of fpos64_t (9109)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,10275,NULL);\n",architecture,9109,0);
#endif

#if defined __s390x__
CheckTypeSize(FILE,216, 8782, 12, 1.3, NULL, 9107, NULL)
#elif defined __x86_64__
CheckTypeSize(FILE,216, 8782, 11, 2.0, NULL, 9107, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FILE,152, 8782, 10, 1.3, NULL, 9107, NULL)
#elif defined __powerpc64__
CheckTypeSize(FILE,216, 8782, 9, 2.0, NULL, 9107, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FILE,152, 8782, 6, 1.2, NULL, 9107, NULL)
#elif defined __ia64__
CheckTypeSize(FILE,216, 8782, 3, 1.3, NULL, 9107, NULL)
#elif defined __i386__
CheckTypeSize(FILE,148, 8782, 2, 1.0, NULL, 9107, NULL)
#else
Msg("Find size of FILE (8782)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,9107, NULL);\n",architecture,8782,0);
#endif

extern void clearerr_unlocked_db(FILE *);
CheckInterfacedef(clearerr_unlocked,clearerr_unlocked_db);
extern int feof_unlocked_db(FILE *);
CheckInterfacedef(feof_unlocked,feof_unlocked_db);
extern int ferror_unlocked_db(FILE *);
CheckInterfacedef(ferror_unlocked,ferror_unlocked_db);
extern char * fgets_unlocked_db(char *, int, FILE *);
CheckInterfacedef(fgets_unlocked,fgets_unlocked_db);
extern int fputc_unlocked_db(int, FILE *);
CheckInterfacedef(fputc_unlocked,fputc_unlocked_db);
extern int fputs_unlocked_db(const char *, FILE *);
CheckInterfacedef(fputs_unlocked,fputs_unlocked_db);
extern size_t fread_unlocked_db(void *, size_t, size_t, FILE *);
CheckInterfacedef(fread_unlocked,fread_unlocked_db);
extern size_t fwrite_unlocked_db(const void *, size_t, size_t, FILE *);
CheckInterfacedef(fwrite_unlocked,fwrite_unlocked_db);
extern FILE * open_memstream_db(char * *, size_t *);
CheckInterfacedef(open_memstream,open_memstream_db);
extern int fgetc_unlocked_db(FILE *);
CheckInterfacedef(fgetc_unlocked,fgetc_unlocked_db);
extern int fileno_unlocked_db(FILE *);
CheckInterfacedef(fileno_unlocked,fileno_unlocked_db);
extern ssize_t getdelim_db(char * *, size_t *, int, FILE *);
CheckInterfacedef(getdelim,getdelim_db);
extern ssize_t getline_db(char * *, size_t *, FILE *);
CheckInterfacedef(getline,getline_db);
extern FILE * fmemopen_db(void *, size_t, const char *);
CheckInterfacedef(fmemopen,fmemopen_db);
extern void clearerr_db(FILE *);
CheckInterfacedef(clearerr,clearerr_db);
extern int fclose_db(FILE *);
CheckInterfacedef(fclose,fclose_db);
extern FILE * fdopen_db(int, const char *);
CheckInterfacedef(fdopen,fdopen_db);
extern int fflush_unlocked_db(FILE *);
CheckInterfacedef(fflush_unlocked,fflush_unlocked_db);
extern int fileno_db(FILE *);
CheckInterfacedef(fileno,fileno_db);
extern FILE * fopen_db(const char *, const char *);
CheckInterfacedef(fopen,fopen_db);
extern int fprintf_db(FILE *, const char *, ...);
CheckInterfacedef(fprintf,fprintf_db);
extern int fputc_db(int, FILE *);
CheckInterfacedef(fputc,fputc_db);
extern FILE * freopen_db(const char *, const char *, FILE *);
CheckInterfacedef(freopen,freopen_db);
extern FILE * freopen64_db(const char *, const char *, FILE *);
CheckInterfacedef(freopen64,freopen64_db);
extern int fscanf_db(FILE *, const char *, ...);
CheckInterfacedef(fscanf,fscanf_db);
extern int fseek_db(FILE *, long int, int);
CheckInterfacedef(fseek,fseek_db);
extern int fseeko_db(FILE *, off_t, int);
CheckInterfacedef(fseeko,fseeko_db);
extern int fseeko64_db(FILE *, loff_t, int);
CheckInterfacedef(fseeko64,fseeko64_db);
extern off_t ftello_db(FILE *);
CheckInterfacedef(ftello,ftello_db);
extern loff_t ftello64_db(FILE *);
CheckInterfacedef(ftello64,ftello64_db);
extern int getchar_db(void);
CheckInterfacedef(getchar,getchar_db);
extern int getchar_unlocked_db(void);
CheckInterfacedef(getchar_unlocked,getchar_unlocked_db);
extern int getw_db(FILE *);
CheckInterfacedef(getw,getw_db);
extern int pclose_db(FILE *);
CheckInterfacedef(pclose,pclose_db);
extern void perror_db(const char *);
CheckInterfacedef(perror,perror_db);
extern FILE * popen_db(const char *, const char *);
CheckInterfacedef(popen,popen_db);
extern int printf_db(const char *, ...);
CheckInterfacedef(printf,printf_db);
extern int putc_unlocked_db(int, FILE *);
CheckInterfacedef(putc_unlocked,putc_unlocked_db);
extern int putchar_db(int);
CheckInterfacedef(putchar,putchar_db);
extern int putchar_unlocked_db(int);
CheckInterfacedef(putchar_unlocked,putchar_unlocked_db);
extern int putw_db(int, FILE *);
CheckInterfacedef(putw,putw_db);
extern int remove_db(const char *);
CheckInterfacedef(remove,remove_db);
extern void rewind_db(FILE *);
CheckInterfacedef(rewind,rewind_db);
extern int scanf_db(const char *, ...);
CheckInterfacedef(scanf,scanf_db);
extern void setbuf_db(FILE *, char *);
CheckInterfacedef(setbuf,setbuf_db);
extern int sprintf_db(char *, const char *, ...);
CheckInterfacedef(sprintf,sprintf_db);
extern int sscanf_db(const char *, const char *, ...);
CheckInterfacedef(sscanf,sscanf_db);
extern char * tempnam_db(const char *, const char *);
CheckInterfacedef(tempnam,tempnam_db);
extern FILE * tmpfile64_db(void);
CheckInterfacedef(tmpfile64,tmpfile64_db);
extern FILE * tmpfile_db(void);
CheckInterfacedef(tmpfile,tmpfile_db);
extern char * tmpnam_db(char *);
CheckInterfacedef(tmpnam,tmpnam_db);
extern int vfprintf_db(FILE *, const char *, va_list);
CheckInterfacedef(vfprintf,vfprintf_db);
extern int vprintf_db(const char *, va_list);
CheckInterfacedef(vprintf,vprintf_db);
extern int feof_db(FILE *);
CheckInterfacedef(feof,feof_db);
extern int ferror_db(FILE *);
CheckInterfacedef(ferror,ferror_db);
extern int fflush_db(FILE *);
CheckInterfacedef(fflush,fflush_db);
extern int fgetc_db(FILE *);
CheckInterfacedef(fgetc,fgetc_db);
extern int fgetpos_db(FILE *, fpos_t *);
CheckInterfacedef(fgetpos,fgetpos_db);
extern char * fgets_db(char *, int, FILE *);
CheckInterfacedef(fgets,fgets_db);
extern int fputs_db(const char *, FILE *);
CheckInterfacedef(fputs,fputs_db);
extern size_t fread_db(void *, size_t, size_t, FILE *);
CheckInterfacedef(fread,fread_db);
extern int fsetpos_db(FILE *, const fpos_t *);
CheckInterfacedef(fsetpos,fsetpos_db);
extern long int ftell_db(FILE *);
CheckInterfacedef(ftell,ftell_db);
extern size_t fwrite_db(const void *, size_t, size_t, FILE *);
CheckInterfacedef(fwrite,fwrite_db);
extern int getc_db(FILE *);
CheckInterfacedef(getc,getc_db);
extern int putc_db(int, FILE *);
CheckInterfacedef(putc,putc_db);
extern int puts_db(const char *);
CheckInterfacedef(puts,puts_db);
extern int setvbuf_db(FILE *, char *, int, size_t);
CheckInterfacedef(setvbuf,setvbuf_db);
extern int snprintf_db(char *, size_t, const char *, ...);
CheckInterfacedef(snprintf,snprintf_db);
extern int ungetc_db(int, FILE *);
CheckInterfacedef(ungetc,ungetc_db);
extern int vsnprintf_db(char *, size_t, const char *, va_list);
CheckInterfacedef(vsnprintf,vsnprintf_db);
extern int vsprintf_db(char *, const char *, va_list);
CheckInterfacedef(vsprintf,vsprintf_db);
extern void flockfile_db(FILE *);
CheckInterfacedef(flockfile,flockfile_db);
extern int asprintf_db(char * *, const char *, ...);
CheckInterfacedef(asprintf,asprintf_db);
extern int fgetpos64_db(FILE *, fpos64_t *);
CheckInterfacedef(fgetpos64,fgetpos64_db);
extern FILE * fopen64_db(const char *, const char *);
CheckInterfacedef(fopen64,fopen64_db);
extern int fsetpos64_db(FILE *, const fpos64_t *);
CheckInterfacedef(fsetpos64,fsetpos64_db);
extern int ftrylockfile_db(FILE *);
CheckInterfacedef(ftrylockfile,ftrylockfile_db);
extern void funlockfile_db(FILE *);
CheckInterfacedef(funlockfile,funlockfile_db);
extern int getc_unlocked_db(FILE *);
CheckInterfacedef(getc_unlocked,getc_unlocked_db);
extern void setbuffer_db(FILE *, char *, size_t);
CheckInterfacedef(setbuffer,setbuffer_db);
extern int vasprintf_db(char * *, const char *, va_list);
CheckInterfacedef(vasprintf,vasprintf_db);
extern int vdprintf_db(int, const char *, va_list);
CheckInterfacedef(vdprintf,vdprintf_db);
extern int vfscanf_db(FILE *, const char *, va_list);
CheckInterfacedef(vfscanf,vfscanf_db);
extern int vscanf_db(const char *, va_list);
CheckInterfacedef(vscanf,vscanf_db);
extern int vsscanf_db(const char *, const char *, va_list);
CheckInterfacedef(vsscanf,vsscanf_db);
extern size_t __fpending_db(FILE *);
CheckInterfacedef(__fpending,__fpending_db);
extern char * __fgets_chk_db(char *, size_t, int, FILE *);
CheckInterfacedef(__fgets_chk,__fgets_chk_db);
extern char * __fgets_unlocked_chk_db(char *, size_t, int, FILE *);
CheckInterfacedef(__fgets_unlocked_chk,__fgets_unlocked_chk_db);
extern int __vsprintf_chk_db(char *, int, size_t, const char *, va_list);
CheckInterfacedef(__vsprintf_chk,__vsprintf_chk_db);
extern int __vprintf_chk_db(int, const char *, va_list);
CheckInterfacedef(__vprintf_chk,__vprintf_chk_db);
extern int __printf_chk_db(int, const char *, ...);
CheckInterfacedef(__printf_chk,__printf_chk_db);
extern int __vsnprintf_chk_db(char *, size_t, int, size_t, const char *, va_list);
CheckInterfacedef(__vsnprintf_chk,__vsnprintf_chk_db);
extern int __snprintf_chk_db(char *, size_t, int, size_t, const char *, ...);
CheckInterfacedef(__snprintf_chk,__snprintf_chk_db);
extern int __sprintf_chk_db(char *, int, size_t, const char *, ...);
CheckInterfacedef(__sprintf_chk,__sprintf_chk_db);
extern int dprintf_db(int, const char *, ...);
CheckInterfacedef(dprintf,dprintf_db);
extern int renameat_db(int, const char *, int, const char *);
CheckInterfacedef(renameat,renameat_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in stdio.h\n\n",pcnt,cnt);
return cnt;
#endif

}
