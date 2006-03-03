/* 
 *
 * Copyright (c) 2002 The Free Standards Group Inc
 * Copyright (c) 2002 Stuart Anderson (anderson@freestandards.org)
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <zlib.h>
#include <cpio.h>
#include <libgen.h>
#include "rpmchk.h"
#include "md5.h"
#include "tagfuncs.h"
#include "../tetj/tetj.h"
#include "../elfchk/elfchk.h"
#include "../elfchk/hdr.h"
#include "../appchk/libraries.h"
#include "../appchk/symbols.h"
#include "../appchk/check_file.h"

MD5_CTX	md5ctx;
unsigned char	fbuf[1024];
typedef struct {
    int offset;
    int filesize;
    int filetype;
	char   *filename;
	}ArchiveElfInfo;

static	ArchiveElfInfo** elfFiles = NULL;
static	int numArchiveElfInfo = 0;

int
findfileindex(char *filename)
{
char	*fmt,tagfilename[PATH_MAX+1],tmpfilename[PATH_MAX+1];
char	*fname;
static char	*foldnames=NULL;
int	i,j;
static	int	fileindex=-1;

if( !foldnames )
	foldnames=oldfilenames;
/*
 * Check the file name against the RPMTAG_DIRNAME, RPMTAG_DIRINDEXES,
 * RPMTAG_BASENAME values.
 */

if(hasPayloadFilesHavePrefix) {
	fmt=".%s";
} else {
	fmt="%s";
}

if( hasCompressedFileNames ) {
    if( hasNewFilenames ) {
      strcpy(tmpfilename,filename);
      fname=basename(tmpfilename);
      *fname='\000';
      
      for(i=0;i<numdirnames;i++) {
        sprintf(tagfilename,fmt,dirnames[i]);
	if(strcmp(tmpfilename,tagfilename) == 0 )
		break;
      }
      if( i == numdirnames )
	fprintf(stderr," no dir found!!!\n" );

      strcpy(tmpfilename,filename);
      fname=basename(tmpfilename);

      for(j=0;j<numdirindicies;j++) {
	if(dirindicies[j]==i) {
	  if(strcmp(basenames[j],fname) == 0 )
		fileindex=j;
	}
      }

      if( fileindex < 0 )
	fprintf(stderr," no basename found!!!\n" );

    }
} else {
    if( hasOldFilenames ) {
       /*
     	* The RPMTAG starts with a '/', but the cpio
     	* filename doesn't, so skip the first char.
     	*/
	if( strcmp(filename,foldnames+1) != 0 ) {
		fprintf(stderr,
		    "Payload filename %s doesn't match RPMTAG based name %s\n",
			filename, foldnames+1);
	}
	foldnames+=strlen(foldnames)+1;
	fileindex++;
    }
 }
return fileindex;
}

void
checkRpmArchive(RpmFile *file1, struct tetj_handle *journal, int check_app, int modules)
{
#define TMP_STRING_SIZE (400)
char tmp_string[TMP_STRING_SIZE+1];
unsigned char	md5sum[17],md5str[33];
unsigned char	*fmd5=filemd5s,*flinktos=filelinktos;
gzFile	*zfile;
RpmArchiveHeader ahdr;
int	startoffset,endoffset;
int	fileindex=0;
int	filesizesum=0;
int	i;
ElfFile* elfFile;
char* uncompFile;
char* execFile;

file1->archive=(caddr_t)file1->nexthdr;

/*
fprintf(stderr,"checkRpmArchive() archive=%x\n", (int)file1->archive );
*/

/* Check the RpmHeader magic value */
tetj_tp_count++;
tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check magic value");
if( !( file1->archive[0]==(char)0x1f
    && file1->archive[1]==(char)0x8b) ) {
        snprintf( tmp_string, TMP_STRING_SIZE,
    "checkRpmArchive: magic isn't expected value 0x1f8b, found %x%x instead",
	     (unsigned int)file1->archive[0], (unsigned int)file1->archive[1]); 
        fprintf(stderr, "%s\n", tmp_string);
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
							0, 0, 0, tmp_string);
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); 
	return;
} else {
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS); 
}
tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); 

/*
 * Now we need to set up zlib so that we can read/decompres the archive.
 */

if( lseek(file1->fd, (file1->archive-file1->addr), SEEK_SET) < 0 ) {
        snprintf( tmp_string, TMP_STRING_SIZE,
	    "checkRpmArchive: Unable to seek to start of archive");
        fprintf(stderr, "%s\n", tmp_string);
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
							0, 0, 0, tmp_string);
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	return;
	}

if( (zfile=gzdopen(file1->fd,"r")) == NULL ) {
        snprintf( tmp_string, TMP_STRING_SIZE,
	    "checkRpmArchive: Unable to open compressed archive");
        fprintf(stderr, "%s\n", tmp_string);
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
							0, 0, 0, tmp_string);
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	return;
	}

startoffset=gztell(zfile);
/*
 * The archive is really a cpio format file, so start reading records
 * and examining them.
 */

while( !gzeof(zfile) ) {
	char	*fptr,filename[PATH_MAX+1];
	char	num[9];
	int	size,mode,devmaj,devmin,flink,fino;
	time_t	ftime;

	gzread(zfile, &ahdr, sizeof(ahdr) );
/*
	fprintf(stderr,"***************************\n");
	fprintf(stderr,"Magic: %6.6s\n", ahdr.c_magic );
	fprintf(stderr,"ino: %8.8s\n", ahdr.c_ino );
	fprintf(stderr,"Mode: %8.8s\n", ahdr.c_mode );
	fprintf(stderr,"Rdev: %8.8s,%8.8s\n", ahdr.c_rdevmajor,ahdr.c_rdevminor );
	fprintf(stderr,"mtime: %8.8s\n", ahdr.c_mtime );
	fprintf(stderr,"nlink: %8.8s\n", ahdr.c_nlink );
	fprintf(stderr,"filesize: %8.8s\n", ahdr.c_filesize );
	fprintf(stderr,"namesize: %8.8s\n", ahdr.c_namesize );
	fprintf(stderr,"UID: %8.8s\n", ahdr.c_uid );
	fprintf(stderr,"GID: %8.8s\n", ahdr.c_gid );
	fprintf(stderr,"dev: %8.8s,%8.8s\n", ahdr.c_devmajor,ahdr.c_devminor );
*/

	if( !(strncmp(ahdr.c_magic,"070701",6) == 0) ) {
        	snprintf( tmp_string, TMP_STRING_SIZE,
    		"checkRpmArchive: Archive record has wrong magic \"%6.6s\" instead of \"070701\"",
		ahdr.c_magic);
        	fprintf(stderr, "%s\n", tmp_string);
        	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
							0, 0, 0, tmp_string);
        	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
		return;
	}
	/* Read in the filename */
	memcpy(num,ahdr.c_namesize,8);
	num[8]=0; /* NULL terminate the namesize */
	size=strtol(num,NULL,16);
	gzread(zfile, filename, size );
	filename[size]='\000';
/*	fprintf(stderr,"filename: %s\n", filename ); */
	/*
	 * Check/fix padding here - the amount of space used for the header
	 * is rounded up to the long-word (32 its), so 1-3 bytes of padding
	 * may need to be skipped.
	 */
	size=gztell(zfile);
	size%=4;
	size=4-size;
	size%=4;
	/* printf("padding %d\n", size); */
	gzseek(zfile,size,SEEK_CUR);

	/*
	 * Check for the end of the archive
	 */
	if( strcmp(filename,"TRAILER!!!") == 0 ) {
		/* End of archive */
		break;
		}

	/* Get the number of links */
	memcpy(num,ahdr.c_nlink,8);
	num[8]=0;
	flink=strtol(num,NULL,16);

	/* Skip the file contents */
	memcpy(num,ahdr.c_filesize,8);
	num[8]=0;
	size=strtol(num,NULL,16);

	/* Get the mode so we can identify directories */
	memcpy(num,ahdr.c_mode,8);
	num[8]=0;
	mode=strtol(num,NULL,16);

        fileindex=findfileindex(filename);

	/*
	 * Check the file size against the RPMTAG_FILESIZES value
	 */

	if( filesizes ) {
	    /* Directories have no size, but RPMTAG_FILESIZES sez 1024 */
	    if( flink==1 && S_ISREG(mode) && (size != filesizes[fileindex]) ) {
		fprintf(stderr,"Filesize (%d) for %s not that same a specified in RPMTAG_FILESIZES (%d)\n", size, filename, filesizes[fileindex] );
		}

	    /* Accumulate the size for later comparison */
	    if( S_ISREG(mode) ) {
		/* NB: RPM 3.0.6 also included the filesize from directories */
		filesizesum+=size;
		}
	}

	/*
	 * Check the file modes against the RPMTAG_FILEMODES value
	 */

	if( filemodes && (mode != filemodes[fileindex]) ) {
		fprintf(stderr,"Filemode  (%o) for %s not the same as specified in RPMTAG_FILEMODES (%o)\n", mode, filename, filemodes[fileindex] );
	}

	/*
	 * Check the file dev against the RPMTAG_FILEDEVICES value
	 */

	memcpy(num,ahdr.c_devmajor,8);
	num[8]=0;
	devmaj=strtol(num,NULL,16);

	memcpy(num,ahdr.c_devminor,8);
	num[8]=0;
	devmin=strtol(num,NULL,16);

	if( filedevs && (rpmmakedev(devmaj,devmin) != filedevs[fileindex]) ) {
		fprintf(stderr,"File dev (%x) for %s not the same as specified in RPMTAG_FILEDEVICES (%x)\n", rpmmakedev(devmaj,devmin), filename, filedevs[fileindex] );
	}

	/*
	 * Check the file rdev against the RPMTAG_FILERDEVS value
	 */

	memcpy(num,ahdr.c_rdevmajor,8);
	num[8]=0;
	devmaj=strtol(num,NULL,16);

	memcpy(num,ahdr.c_rdevminor,8);
	num[8]=0;
	devmin=strtol(num,NULL,16);

	if( filerdevs && (rpmmakedev(devmaj,devmin) != filerdevs[fileindex]) ) {
		fprintf(stderr,"File rdev (%x) for %s not the same as specified in RPMTAG_FILERDEVS (%x)\n", rpmmakedev(devmaj,devmin), filename, filerdevs[fileindex] );
	}

	/*
	 * Check the file modes against the RPMTAG_FILEMTIMES value
	 */

	memcpy(num,ahdr.c_mtime,8);
	num[8]=0;
	ftime=strtol(num,NULL,16);

	if( filetimes && (ftime != filetimes[fileindex]) ) {
		fprintf(stderr,"File time  (%x) for %s not the same as specified in RPMTAG_FILEMTIMES (%x)\n", (unsigned int)ftime, filename, filetimes[fileindex] );
	}

	/*
	 * Check the file modes against the RPMTAG_FILEINODES value
	 */

	memcpy(num,ahdr.c_ino,8);
	num[8]=0;
	fino=strtol(num,NULL,16);

	if( fileinodes && (fino != fileinodes[fileindex]) ) {
		fprintf(stderr,"File inode  (%x) for %s not the same as specified in RPMTAG_FILEINODES (%x)\n", (unsigned int)fino, filename, fileinodes[fileindex] );
	}

    /* If the files in payload need to be checked for LSB compliance, peek into the payload;
	 * If the file is ELF, check its contents and symbols for compliance.
	 * Before checking the symbols in executables, include all symbols from the dynamic shared objects
	 * in the payload.
	 */
    {
    int cur_offset = 0;
    int isFileELF = 0;
    int elf_type;
	Elf_Shdr* hdr1;

    if (check_app) {
       cur_offset = gztell(zfile);
       /* If file is ELF (check for ELF magic number), check ELF contents */
       gzread(zfile, fbuf, 4);
       fbuf[4] = 0;
       if ((fbuf[0] == 0x7f) &&
           (fbuf[1] == 'E') &&
           (fbuf[2] == 'L') &&
           (fbuf[3] == 'F')) {
           isFileELF = 1;
       }
       gzseek (zfile, cur_offset, SEEK_SET); 
       if (isFileELF) {
         if( (elfFile=(ElfFile *)calloc(1,sizeof(ElfFile))) != NULL ) {
             elfFile->size = size;

             /* Uncompress the ELF file */
             if( (uncompFile=(char *)calloc(1,elfFile->size)) != NULL ) {
			    fprintf (stderr, "\ncheckRpmArchive: Inflating file %s size %d ...\n",filename, elfFile->size); 
                gzread(zfile, uncompFile, elfFile->size);
                elfFile->addr = uncompFile;
				elf_type = getElfType(elfFile);
				if ((elf_type == ET_EXEC) || (elf_type == ET_DYN)) {
                   snprintf(tmp_string, TMP_STRING_SIZE,
                            "File %s is ELF", filename); 
                   fprintf(stderr, "%s\n", tmp_string); 
                   tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
				   			0, 0, 0, tmp_string);

/*                   elf_type = checkElf(elfFile, ELF_UNKNOWN, journal);  */

                   if (elf_type == ET_DYN) {
                      snprintf(tmp_string, TMP_STRING_SIZE,
                            "ELF file %s is DSO. Adding library symbols...", filename); 
                      fprintf(stderr, "%s\n", tmp_string);			   
                      tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
			   				0, 0, 0, tmp_string);

			     	   /* If file is a DSO, include those symbols while verifying executable symbols */
                      addDTNeeded(filename);

                      checkElfhdr(elfFile, elf_type, journal);
                      /* Search through program headers for the one with the dynamic symbols in it. */
                      for(i=0;i<elfFile->numph;i++)
                      {
                        hdr1=&(elfFile->saddr[i]);
                        if(hdr1->sh_type == SHT_DYNSYM)
                            elfFile->dynsymhdr=hdr1;
                      }
			   	      add_library_symbols(elfFile, journal, modules);
                   } 
                   /*
				    * Store the filename, file offset and file size for executables 
				    * These files will be verified for compliance once all DSO symbols have been 
					* included from the archive.
					*/
                   if (elfFiles == NULL) {
                      elfFiles = (ArchiveElfInfo **)calloc(100, sizeof(ArchiveElfInfo *));
				   }
				   if (++numArchiveElfInfo > 100) {
                      elfFiles = (ArchiveElfInfo **)realloc(elfFiles, 
					                         sizeof(ArchiveElfInfo *) * numArchiveElfInfo);
				   } 
				   elfFiles[numArchiveElfInfo -1]=
					               (ArchiveElfInfo*)calloc(1, sizeof(ArchiveElfInfo));
				   elfFiles[numArchiveElfInfo -1]->offset = cur_offset;
				   elfFiles[numArchiveElfInfo -1]->filesize = size;
				   elfFiles[numArchiveElfInfo -1]->filetype = elf_type;
				   elfFiles[numArchiveElfInfo -1]->filename = strdup(filename);

				} /* if ET_EXEC || ET_DYN */
	            if (uncompFile) free(uncompFile);
	            if (elfFile) free(elfFile);
                /* Seek back to the beginning of file offset */      
                gzseek (zfile, cur_offset, SEEK_SET);
             } else {
                fprintf(stderr, "Unable to alloc memory for uncompressed file %s\n", filename );
		     } /* if file is uncompressed */
         } else {
             fprintf(stderr, "Unable to alloc elfFile memory for %s\n", filename );
             fprintf(stderr, "Cannot verify contents of binary file\n" );
         }
       } /* if ELF */
    } /* if (check_app) */ 
    }

	/*
	 * Check the file modes against the RPMTAG_FILEMD5S value
	 */
	fmd5=filemd5s;
	for(i=0;i<fileindex;i++)
	    fmd5+=strlen(fmd5)+1;

	if ( fmd5 ) {
	    if( S_ISREG(mode) ) {
		MD5Init(&md5ctx);
		while ( size>0 ) {
			gzread(zfile,fbuf,size>1024?1024:size);
			MD5Update(&md5ctx,fbuf,size>1024?1024:size);
			size-=1024;
			}
		MD5Final(md5sum,&md5ctx);
		sprintf(md5str,"%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x",
			md5sum[0], md5sum[1], md5sum[2], md5sum[3],
			md5sum[4], md5sum[5], md5sum[6], md5sum[7],
			md5sum[8], md5sum[9], md5sum[10], md5sum[11],
			md5sum[12], md5sum[13], md5sum[14], md5sum[15] );

		if( flink==1 && strncmp(fmd5,md5str,16) != 0 ) {
			fprintf(stderr,"File MD5 (%s) for %s does not match value in RPMTAG_FILEMD5S (%s)\n", md5str, filename, fmd5 );
			}
	    } else {
		/* If it actually has a size, we need to eat those bytes */
		while ( size>0 ) {
			gzread(zfile,fbuf,size>1024?1024:size);
			size-=1024;
			}
	    }
	    fmd5+=strlen(fmd5)+1;
	}

	/*
	 * Check the file nlink against the RPMTAG_FILELINKTOS value
	 */

	flinktos=filelinktos;
	for(i=0;i<fileindex;i++)
	    flinktos+=strlen(flinktos)+1;

	if( flink==1 && flinktos ) {
	    if( S_ISREG(mode) && flink>1 && !*flinktos ) {
		fprintf(stderr,"File link expected, but no FILELINKTOS entry\n");
	    }
	    if( S_ISREG(mode) && flink==1 && *flinktos ) {
		fprintf(stderr,"File link not expected, but FILELINKTOS present\n");
	    }
	
	    flinktos+=strlen(flinktos)+1;
	}


	/*
	 * Check/fix padding here - the amount of space used for the file
	 * is rounded up to the long-word (32 its), so 1-3 bytes of padding
	 * may need to be skipped.
	 */
	size=gztell(zfile);
	/* printf("offset %x\n", size); */
	size%=4;
	size=4-size;
	size%=4;
	/* printf("padding %d\n", size); */
	gzseek(zfile,size,SEEK_CUR);


	/* Now, check the filename */
	if( filename[0] == '.' && filename[1] == '/' )
		fptr=&filename[2];
	else
		fptr=&filename[0];
	checkRpmArchiveFilename(fptr, journal);

	fileindex++;
	}

endoffset=gztell(zfile);

/*
fprintf(stderr,"%d bytes in uncompressed archive\n", endoffset-startoffset);
*/
if( archivesize && endoffset-startoffset != archivesize ) {
		fprintf(stderr,"Archive size (%d) does ",endoffset-startoffset);
		fprintf(stderr,"not match the value in RPMTAG_ARCHIVESIZE (%d)\n",
							archivesize );
	}

/*
fprintf(stderr,"%d bytes in archive files\n", filesizesum);
*/
if( filesizesum != rpmtagsize ) {
		fprintf(stderr,"Sum of file sizes (%d) does ",filesizesum);
		fprintf(stderr,"not match the value in RPMTAG_SIZE (%d)\n",
							rpmtagsize );
	}

	/* Now that all static library symbols have been added, check the symbols in 
	   EXEC and DSO files for LSB conformance */
	if (check_app) {
	   for (i=0; i < numArchiveElfInfo; i++) {
	      gzseek(zfile, elfFiles[i]->offset, SEEK_SET);
          if( (elfFile=(ElfFile *)calloc(1,sizeof(ElfFile))) != NULL ) {
             elfFile->size = elfFiles[i]->filesize;

             if( (execFile=(char *)calloc(1,elfFile->size)) != NULL ) {
			    fprintf (stderr, "\ncheckRpmArchive: Inflating file %s-pass2 size %d ...\n", 
				                  elfFiles[i]->filename, elfFile->size);
                gzread(zfile, execFile, elfFile->size);
                elfFile->addr = execFile;
                snprintf(tmp_string, TMP_STRING_SIZE,
                    "Checking ELF file %s ...", elfFiles[i]->filename); 
                fprintf(stderr, "%s\n", tmp_string); 
                tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
							0, 0, 0, tmp_string);

                if (elfFiles[i]->filetype == ET_EXEC) {
                   checkElf(elfFile, ELF_IS_EXEC, journal); 
                   checksymbols(elfFile, journal, modules); 
				} else if (elfFiles[i]->filetype == ET_DYN) {
                   checkElf(elfFile, ELF_IS_DSO, journal); 
				   check_lib(elfFile, journal, ELF_IS_DSO, modules);
				}
             } else {
                fprintf(stderr, "Unable to alloc memory for uncompressed file %s\n", 
				                            elfFiles[i]->filename);
		     } /* if file is uncompressed */
         } else {
             fprintf(stderr, "Unable to alloc elfFile memory for %s\n",
				                            elfFiles[i]->filename );
             fprintf(stderr, "Cannot verify contents of binary file\n" );
         }
	     if (execFile) free(execFile);
	     if (elfFile) free(elfFile);
	   } /* for number of ET_EXEC files */
	} /* if check_app */
}

