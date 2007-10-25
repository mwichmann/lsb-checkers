/*
 * Test of libxml2/libxml/tree.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#include <libxml/xmlIO.h>

struct _xmlDict {} ;
#include "libxml2/libxml/tree.h"



#ifdef TET_TEST
void libxml2_libxml_tree_h()
{
#else
int libxml2_libxml_tree_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/tree.h\n");
#endif

printf("Checking data structures in libxml2/libxml/tree.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef BASE_BUFFER_SIZE
	CompareConstant(BASE_BUFFER_SIZE,4096,9360,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: BASE_BUFFER_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XML_XML_NAMESPACE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XML_XML_ID */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XML_LOCAL_NAMESPACE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XML_GET_CONTENT(n) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XML_GET_LINE(n) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlChildrenNode */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlRootNode */
#endif

#if defined __i386__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 2, 3.1, NULL, 14582, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 11, 3.1, NULL, 14582, NULL)
#elif defined __ia64__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 3, 3.1, NULL, 14582, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 6, 3.1, NULL, 14582, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 9, 3.1, NULL, 14582, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 10, 3.1, NULL, 14582, NULL)
#elif defined __s390x__
CheckTypeSize(xmlBufferAllocationScheme,4, 14583, 12, 3.1, NULL, 14582, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlBufferAllocationScheme (14583)\n");
%d,%d,%d,'""3.1""',NULL,14582,NULL);\n",architecture,14583,0);
#endif

#if defined __i386__
CheckTypeSize(xmlBuffer,16, 14584, 2, 3.1, NULL, 14581, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlBuffer,24, 14584, 11, 3.1, NULL, 14581, NULL)
#elif defined __ia64__
CheckTypeSize(xmlBuffer,24, 14584, 3, 3.1, NULL, 14581, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlBuffer,16, 14584, 6, 3.1, NULL, 14581, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlBuffer,24, 14584, 9, 3.1, NULL, 14581, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlBuffer,16, 14584, 10, 3.1, NULL, 14581, NULL)
#elif defined __s390x__
CheckTypeSize(xmlBuffer,24, 14584, 12, 3.1, NULL, 14581, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlBuffer (14584)\n");
%d,%d,%d,'""3.1""',NULL,14581,NULL);\n",architecture,14584,0);
#endif

#if defined __i386__
CheckTypeSize(xmlBufferPtr,4, 14586, 2, 3.1, NULL, 14585, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlBufferPtr,8, 14586, 11, 3.1, NULL, 14585, NULL)
#elif defined __ia64__
CheckTypeSize(xmlBufferPtr,8, 14586, 3, 3.1, NULL, 14585, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlBufferPtr,4, 14586, 6, 3.1, NULL, 14585, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlBufferPtr,8, 14586, 9, 3.1, NULL, 14585, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlBufferPtr,4, 14586, 10, 3.1, NULL, 14585, NULL)
#elif defined __s390x__
CheckTypeSize(xmlBufferPtr,8, 14586, 12, 3.1, NULL, 14585, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlBufferPtr (14586)\n");
%d,%d,%d,'""3.1""',NULL,14585,NULL);\n",architecture,14586,0);
#endif

#if defined __i386__
CheckTypeSize(xmlElementType,4, 14590, 2, 3.1, NULL, 14589, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlElementType,4, 14590, 11, 3.1, NULL, 14589, NULL)
#elif defined __ia64__
CheckTypeSize(xmlElementType,4, 14590, 3, 3.1, NULL, 14589, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlElementType,4, 14590, 6, 3.1, NULL, 14589, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlElementType,4, 14590, 9, 3.1, NULL, 14589, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlElementType,4, 14590, 10, 3.1, NULL, 14589, NULL)
#elif defined __s390x__
CheckTypeSize(xmlElementType,4, 14590, 12, 3.1, NULL, 14589, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlElementType (14590)\n");
%d,%d,%d,'""3.1""',NULL,14589,NULL);\n",architecture,14590,0);
#endif

#if defined __i386__
CheckTypeSize(xmlNsType,4, 14598, 2, 3.1, NULL, 14590, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNsType,4, 14598, 11, 3.1, NULL, 14590, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNsType,4, 14598, 3, 3.1, NULL, 14590, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNsType,4, 14598, 6, 3.1, NULL, 14590, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNsType,4, 14598, 9, 3.1, NULL, 14590, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNsType,4, 14598, 10, 3.1, NULL, 14590, NULL)
#elif defined __s390x__
CheckTypeSize(xmlNsType,4, 14598, 12, 3.1, NULL, 14590, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlNsType (14598)\n");
%d,%d,%d,'""3.1""',NULL,14590,NULL);\n",architecture,14598,0);
#endif

#if defined __i386__
CheckTypeSize(xmlNs,20, 14601, 2, 3.1, NULL, 14596, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNs,40, 14601, 11, 3.1, NULL, 14596, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNs,40, 14601, 3, 3.1, NULL, 14596, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNs,20, 14601, 6, 3.1, NULL, 14596, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNs,40, 14601, 9, 3.1, NULL, 14596, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNs,20, 14601, 10, 3.1, NULL, 14596, NULL)
#elif defined __s390x__
CheckTypeSize(xmlNs,40, 14601, 12, 3.1, NULL, 14596, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlNs (14601)\n");
%d,%d,%d,'""3.1""',NULL,14596,NULL);\n",architecture,14601,0);
#endif

#if defined __i386__
CheckTypeSize(xmlAttributeType,4, 14606, 2, 3.1, NULL, 14605, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlAttributeType,4, 14606, 11, 3.1, NULL, 14605, NULL)
#elif defined __ia64__
CheckTypeSize(xmlAttributeType,4, 14606, 3, 3.1, NULL, 14605, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlAttributeType,4, 14606, 6, 3.1, NULL, 14605, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlAttributeType,4, 14606, 9, 3.1, NULL, 14605, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlAttributeType,4, 14606, 10, 3.1, NULL, 14605, NULL)
#elif defined __s390x__
CheckTypeSize(xmlAttributeType,4, 14606, 12, 3.1, NULL, 14605, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlAttributeType (14606)\n");
%d,%d,%d,'""3.1""',NULL,14605,NULL);\n",architecture,14606,0);
#endif

#if defined __i386__
CheckTypeSize(xmlNode,60, 14607, 2, 3.1, NULL, 14588, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNode,120, 14607, 11, 3.1, NULL, 14588, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNode,120, 14607, 3, 3.1, NULL, 14588, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNode,60, 14607, 6, 3.1, NULL, 14588, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNode,120, 14607, 9, 3.1, NULL, 14588, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNode,60, 14607, 10, 3.1, NULL, 14588, NULL)
#elif defined __s390x__
CheckTypeSize(xmlNode,120, 14607, 12, 3.1, NULL, 14588, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlNode (14607)\n");
%d,%d,%d,'""3.1""',NULL,14588,NULL);\n",architecture,14607,0);
#endif

#if defined __i386__
CheckTypeSize(xmlNodePtr,4, 14609, 2, 3.1, NULL, 14608, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNodePtr,8, 14609, 11, 3.1, NULL, 14608, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNodePtr,8, 14609, 3, 3.1, NULL, 14608, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNodePtr,4, 14609, 6, 3.1, NULL, 14608, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNodePtr,8, 14609, 9, 3.1, NULL, 14608, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNodePtr,4, 14609, 10, 3.1, NULL, 14608, NULL)
#elif defined __s390x__
CheckTypeSize(xmlNodePtr,8, 14609, 12, 3.1, NULL, 14608, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlNodePtr (14609)\n");
%d,%d,%d,'""3.1""',NULL,14608,NULL);\n",architecture,14609,0);
#endif

#if defined __i386__
CheckTypeSize(xmlDoc,88, 14610, 2, 3.1, NULL, 14592, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlDoc,168, 14610, 11, 3.1, NULL, 14592, NULL)
#elif defined __ia64__
CheckTypeSize(xmlDoc,168, 14610, 3, 3.1, NULL, 14592, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlDoc,88, 14610, 6, 3.1, NULL, 14592, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlDoc,168, 14610, 9, 3.1, NULL, 14592, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlDoc,88, 14610, 10, 3.1, NULL, 14592, NULL)
#elif defined __s390x__
CheckTypeSize(xmlDoc,168, 14610, 12, 3.1, NULL, 14592, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlDoc (14610)\n");
%d,%d,%d,'""3.1""',NULL,14592,NULL);\n",architecture,14610,0);
#endif

#if defined __i386__
CheckTypeSize(xmlDocPtr,4, 14612, 2, 3.1, NULL, 14611, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlDocPtr,8, 14612, 11, 3.1, NULL, 14611, NULL)
#elif defined __ia64__
CheckTypeSize(xmlDocPtr,8, 14612, 3, 3.1, NULL, 14611, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlDocPtr,4, 14612, 6, 3.1, NULL, 14611, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlDocPtr,8, 14612, 9, 3.1, NULL, 14611, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlDocPtr,4, 14612, 10, 3.1, NULL, 14611, NULL)
#elif defined __s390x__
CheckTypeSize(xmlDocPtr,8, 14612, 12, 3.1, NULL, 14611, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlDocPtr (14612)\n");
%d,%d,%d,'""3.1""',NULL,14611,NULL);\n",architecture,14612,0);
#endif

#if defined __i386__
CheckTypeSize(xmlNsPtr,4, 14613, 2, 3.1, NULL, 14602, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlNsPtr,8, 14613, 11, 3.1, NULL, 14602, NULL)
#elif defined __ia64__
CheckTypeSize(xmlNsPtr,8, 14613, 3, 3.1, NULL, 14602, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlNsPtr,4, 14613, 6, 3.1, NULL, 14602, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlNsPtr,8, 14613, 9, 3.1, NULL, 14602, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlNsPtr,4, 14613, 10, 3.1, NULL, 14602, NULL)
#elif defined __s390x__
CheckTypeSize(xmlNsPtr,8, 14613, 12, 3.1, NULL, 14602, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlNsPtr (14613)\n");
%d,%d,%d,'""3.1""',NULL,14602,NULL);\n",architecture,14613,0);
#endif

#if defined __i386__
CheckTypeSize(xmlDtd,64, 14615, 2, 3.1, NULL, 14594, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlDtd,128, 14615, 11, 3.1, NULL, 14594, NULL)
#elif defined __ia64__
CheckTypeSize(xmlDtd,128, 14615, 3, 3.1, NULL, 14594, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlDtd,64, 14615, 6, 3.1, NULL, 14594, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlDtd,128, 14615, 9, 3.1, NULL, 14594, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlDtd,64, 14615, 10, 3.1, NULL, 14594, NULL)
#elif defined __s390x__
CheckTypeSize(xmlDtd,128, 14615, 12, 3.1, NULL, 14594, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlDtd (14615)\n");
%d,%d,%d,'""3.1""',NULL,14594,NULL);\n",architecture,14615,0);
#endif

#if defined __i386__
CheckTypeSize(xmlDtdPtr,4, 14617, 2, 3.1, NULL, 14616, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlDtdPtr,8, 14617, 11, 3.1, NULL, 14616, NULL)
#elif defined __ia64__
CheckTypeSize(xmlDtdPtr,8, 14617, 3, 3.1, NULL, 14616, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlDtdPtr,4, 14617, 6, 3.1, NULL, 14616, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlDtdPtr,8, 14617, 9, 3.1, NULL, 14616, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlDtdPtr,4, 14617, 10, 3.1, NULL, 14616, NULL)
#elif defined __s390x__
CheckTypeSize(xmlDtdPtr,8, 14617, 12, 3.1, NULL, 14616, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlDtdPtr (14617)\n");
%d,%d,%d,'""3.1""',NULL,14616,NULL);\n",architecture,14617,0);
#endif

#if defined __i386__
CheckTypeSize(xmlDOMWrapCtxt,4, 14619, 2, 3.1, NULL, 14618, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlDOMWrapCtxt,8, 14619, 11, 3.1, NULL, 14618, NULL)
#elif defined __ia64__
CheckTypeSize(xmlDOMWrapCtxt,8, 14619, 3, 3.1, NULL, 14618, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlDOMWrapCtxt,4, 14619, 6, 3.1, NULL, 14618, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlDOMWrapCtxt,8, 14619, 9, 3.1, NULL, 14618, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlDOMWrapCtxt,4, 14619, 10, 3.1, NULL, 14618, NULL)
#elif defined __s390x__
CheckTypeSize(xmlDOMWrapCtxt,8, 14619, 12, 3.1, NULL, 14618, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlDOMWrapCtxt (14619)\n");
%d,%d,%d,'""3.1""',NULL,14618,NULL);\n",architecture,14619,0);
#endif

#if defined __i386__
CheckTypeSize(xmlDOMWrapCtxtPtr,4, 14621, 2, 3.1, NULL, 14620, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlDOMWrapCtxtPtr,8, 14621, 11, 3.1, NULL, 14620, NULL)
#elif defined __ia64__
CheckTypeSize(xmlDOMWrapCtxtPtr,8, 14621, 3, 3.1, NULL, 14620, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlDOMWrapCtxtPtr,4, 14621, 6, 3.1, NULL, 14620, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlDOMWrapCtxtPtr,8, 14621, 9, 3.1, NULL, 14620, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlDOMWrapCtxtPtr,4, 14621, 10, 3.1, NULL, 14620, NULL)
#elif defined __s390x__
CheckTypeSize(xmlDOMWrapCtxtPtr,8, 14621, 12, 3.1, NULL, 14620, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlDOMWrapCtxtPtr (14621)\n");
%d,%d,%d,'""3.1""',NULL,14620,NULL);\n",architecture,14621,0);
#endif

#if defined __i386__
CheckTypeSize(xmlAttr,48, 14623, 2, 3.1, NULL, 14603, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlAttr,96, 14623, 11, 3.1, NULL, 14603, NULL)
#elif defined __ia64__
CheckTypeSize(xmlAttr,96, 14623, 3, 3.1, NULL, 14603, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlAttr,48, 14623, 6, 3.1, NULL, 14603, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlAttr,96, 14623, 9, 3.1, NULL, 14603, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlAttr,48, 14623, 10, 3.1, NULL, 14603, NULL)
#elif defined __s390x__
CheckTypeSize(xmlAttr,96, 14623, 12, 3.1, NULL, 14603, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlAttr (14623)\n");
%d,%d,%d,'""3.1""',NULL,14603,NULL);\n",architecture,14623,0);
#endif

#if defined __i386__
CheckTypeSize(xmlAttrPtr,4, 14625, 2, 3.1, NULL, 14624, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlAttrPtr,8, 14625, 11, 3.1, NULL, 14624, NULL)
#elif defined __ia64__
CheckTypeSize(xmlAttrPtr,8, 14625, 3, 3.1, NULL, 14624, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlAttrPtr,4, 14625, 6, 3.1, NULL, 14624, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlAttrPtr,8, 14625, 9, 3.1, NULL, 14624, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlAttrPtr,4, 14625, 10, 3.1, NULL, 14624, NULL)
#elif defined __s390x__
CheckTypeSize(xmlAttrPtr,8, 14625, 12, 3.1, NULL, 14624, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlAttrPtr (14625)\n");
%d,%d,%d,'""3.1""',NULL,14624,NULL);\n",architecture,14625,0);
#endif

#if defined __i386__
CheckTypeSize(xmlOutputWriteCallback,4, 14628, 2, 3.1, NULL, 14627, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlOutputWriteCallback,8, 14628, 11, 3.1, NULL, 14627, NULL)
#elif defined __ia64__
CheckTypeSize(xmlOutputWriteCallback,8, 14628, 3, 3.1, NULL, 14627, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlOutputWriteCallback,4, 14628, 6, 3.1, NULL, 14627, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlOutputWriteCallback,8, 14628, 9, 3.1, NULL, 14627, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlOutputWriteCallback,4, 14628, 10, 3.1, NULL, 14627, NULL)
#elif defined __s390x__
CheckTypeSize(xmlOutputWriteCallback,8, 14628, 12, 3.1, NULL, 14627, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlOutputWriteCallback (14628)\n");
%d,%d,%d,'""3.1""',NULL,14627,NULL);\n",architecture,14628,0);
#endif

#if defined __i386__
CheckTypeSize(xmlOutputCloseCallback,4, 14630, 2, 3.1, NULL, 14629, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlOutputCloseCallback,8, 14630, 11, 3.1, NULL, 14629, NULL)
#elif defined __ia64__
CheckTypeSize(xmlOutputCloseCallback,8, 14630, 3, 3.1, NULL, 14629, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlOutputCloseCallback,4, 14630, 6, 3.1, NULL, 14629, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlOutputCloseCallback,8, 14630, 9, 3.1, NULL, 14629, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlOutputCloseCallback,4, 14630, 10, 3.1, NULL, 14629, NULL)
#elif defined __s390x__
CheckTypeSize(xmlOutputCloseCallback,8, 14630, 12, 3.1, NULL, 14629, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlOutputCloseCallback (14630)\n");
%d,%d,%d,'""3.1""',NULL,14629,NULL);\n",architecture,14630,0);
#endif

#if defined __i386__
CheckTypeSize(xmlCharEncodingInputFunc,4, 14633, 2, 3.1, NULL, 14632, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlCharEncodingInputFunc,8, 14633, 11, 3.1, NULL, 14632, NULL)
#elif defined __ia64__
CheckTypeSize(xmlCharEncodingInputFunc,8, 14633, 3, 3.1, NULL, 14632, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlCharEncodingInputFunc,4, 14633, 6, 3.1, NULL, 14632, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlCharEncodingInputFunc,8, 14633, 9, 3.1, NULL, 14632, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlCharEncodingInputFunc,4, 14633, 10, 3.1, NULL, 14632, NULL)
#elif defined __s390x__
CheckTypeSize(xmlCharEncodingInputFunc,8, 14633, 12, 3.1, NULL, 14632, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlCharEncodingInputFunc (14633)\n");
%d,%d,%d,'""3.1""',NULL,14632,NULL);\n",architecture,14633,0);
#endif

#if defined __i386__
CheckTypeSize(xmlCharEncodingOutputFunc,4, 14634, 2, 3.1, NULL, 14632, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlCharEncodingOutputFunc,8, 14634, 11, 3.1, NULL, 14632, NULL)
#elif defined __ia64__
CheckTypeSize(xmlCharEncodingOutputFunc,8, 14634, 3, 3.1, NULL, 14632, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlCharEncodingOutputFunc,4, 14634, 6, 3.1, NULL, 14632, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlCharEncodingOutputFunc,8, 14634, 9, 3.1, NULL, 14632, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlCharEncodingOutputFunc,4, 14634, 10, 3.1, NULL, 14632, NULL)
#elif defined __s390x__
CheckTypeSize(xmlCharEncodingOutputFunc,8, 14634, 12, 3.1, NULL, 14632, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlCharEncodingOutputFunc (14634)\n");
%d,%d,%d,'""3.1""',NULL,14632,NULL);\n",architecture,14634,0);
#endif

#if defined __i386__
CheckTypeSize(xmlCharEncodingHandler,20, 14635, 2, 3.1, NULL, 14631, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlCharEncodingHandler,40, 14635, 11, 3.1, NULL, 14631, NULL)
#elif defined __ia64__
CheckTypeSize(xmlCharEncodingHandler,40, 14635, 3, 3.1, NULL, 14631, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlCharEncodingHandler,20, 14635, 6, 3.1, NULL, 14631, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlCharEncodingHandler,40, 14635, 9, 3.1, NULL, 14631, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlCharEncodingHandler,20, 14635, 10, 3.1, NULL, 14631, NULL)
#elif defined __s390x__
CheckTypeSize(xmlCharEncodingHandler,40, 14635, 12, 3.1, NULL, 14631, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlCharEncodingHandler (14635)\n");
%d,%d,%d,'""3.1""',NULL,14631,NULL);\n",architecture,14635,0);
#endif

#if defined __i386__
CheckTypeSize(xmlCharEncodingHandlerPtr,4, 14637, 2, 3.1, NULL, 14636, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlCharEncodingHandlerPtr,8, 14637, 11, 3.1, NULL, 14636, NULL)
#elif defined __ia64__
CheckTypeSize(xmlCharEncodingHandlerPtr,8, 14637, 3, 3.1, NULL, 14636, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlCharEncodingHandlerPtr,4, 14637, 6, 3.1, NULL, 14636, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlCharEncodingHandlerPtr,8, 14637, 9, 3.1, NULL, 14636, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlCharEncodingHandlerPtr,4, 14637, 10, 3.1, NULL, 14636, NULL)
#elif defined __s390x__
CheckTypeSize(xmlCharEncodingHandlerPtr,8, 14637, 12, 3.1, NULL, 14636, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlCharEncodingHandlerPtr (14637)\n");
%d,%d,%d,'""3.1""',NULL,14636,NULL);\n",architecture,14637,0);
#endif

#if defined __i386__
CheckTypeSize(xmlOutputBuffer,32, 14638, 2, 3.1, NULL, 14626, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlOutputBuffer,56, 14638, 11, 3.1, NULL, 14626, NULL)
#elif defined __ia64__
CheckTypeSize(xmlOutputBuffer,56, 14638, 3, 3.1, NULL, 14626, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlOutputBuffer,32, 14638, 6, 3.1, NULL, 14626, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlOutputBuffer,56, 14638, 9, 3.1, NULL, 14626, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlOutputBuffer,32, 14638, 10, 3.1, NULL, 14626, NULL)
#elif defined __s390x__
CheckTypeSize(xmlOutputBuffer,56, 14638, 12, 3.1, NULL, 14626, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of xmlOutputBuffer (14638)\n");
%d,%d,%d,'""3.1""',NULL,14626,NULL);\n",architecture,14638,0);
#endif

#if defined __i386__
CheckTypeSize(xmlOutputBufferPtr,4, 14640, 2, 3.1, NULL, 14639, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlOutputBufferPtr,8, 14640, 11, 3.1, NULL, 14639, NULL)
#elif defined __ia64__
CheckTypeSize(xmlOutputBufferPtr,8, 14640, 3, 3.1, NULL, 14639, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlOutputBufferPtr,4, 14640, 6, 3.1, NULL, 14639, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlOutputBufferPtr,8, 14640, 9, 3.1, NULL, 14639, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlOutputBufferPtr,4, 14640, 10, 3.1, NULL, 14639, NULL)
#elif defined __s390x__
CheckTypeSize(xmlOutputBufferPtr,8, 14640, 12, 3.1, NULL, 14639, NULL)
#else
Msg("Find size of xmlOutputBufferPtr (14640)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14639, NULL);\n",architecture,14640,0);
#endif

extern const xmlChar * xmlBufferContent_db(const xmlBufferPtr);
CheckInterfacedef(xmlBufferContent,xmlBufferContent_db);
extern void xmlSetBufferAllocationScheme_db(xmlBufferAllocationScheme);
CheckInterfacedef(xmlSetBufferAllocationScheme,xmlSetBufferAllocationScheme_db);
extern xmlNodePtr xmlDocSetRootElement_db(xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlDocSetRootElement,xmlDocSetRootElement_db);
extern xmlNsPtr xmlNewNs_db(xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewNs,xmlNewNs_db);
extern xmlChar * xmlGetNsProp_db(xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlGetNsProp,xmlGetNsProp_db);
extern int xmlSaveFile_db(const char *, xmlDocPtr);
CheckInterfacedef(xmlSaveFile,xmlSaveFile_db);
extern int xmlNodeDump_db(xmlBufferPtr, xmlDocPtr, xmlNodePtr, int, int);
CheckInterfacedef(xmlNodeDump,xmlNodeDump_db);
extern void xmlSetTreeDoc_db(xmlNodePtr, xmlDocPtr);
CheckInterfacedef(xmlSetTreeDoc,xmlSetTreeDoc_db);
extern void xmlUnlinkNode_db(xmlNodePtr);
CheckInterfacedef(xmlUnlinkNode,xmlUnlinkNode_db);
extern xmlChar * xmlSplitQName2_db(const xmlChar *, xmlChar * *);
CheckInterfacedef(xmlSplitQName2,xmlSplitQName2_db);
extern void xmlFreeDtd_db(xmlDtdPtr);
CheckInterfacedef(xmlFreeDtd,xmlFreeDtd_db);
extern const xmlChar * xmlSplitQName3_db(const xmlChar *, int *);
CheckInterfacedef(xmlSplitQName3,xmlSplitQName3_db);
extern void xmlDOMWrapFreeCtxt_db(xmlDOMWrapCtxtPtr);
CheckInterfacedef(xmlDOMWrapFreeCtxt,xmlDOMWrapFreeCtxt_db);
extern int xmlGetCompressMode_db(void);
CheckInterfacedef(xmlGetCompressMode,xmlGetCompressMode_db);
extern xmlNodePtr xmlDocCopyNodeList_db(xmlDocPtr, const xmlNodePtr);
CheckInterfacedef(xmlDocCopyNodeList,xmlDocCopyNodeList_db);
extern xmlNodePtr xmlNewDocNodeEatName_db(xmlDocPtr, xmlNsPtr, xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewDocNodeEatName,xmlNewDocNodeEatName_db);
extern xmlNodePtr xmlStringGetNodeList_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlStringGetNodeList,xmlStringGetNodeList_db);
extern xmlNodePtr xmlNewDocPI_db(xmlDocPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewDocPI,xmlNewDocPI_db);
extern int xmlUnsetNsProp_db(xmlNodePtr, xmlNsPtr, const xmlChar *);
CheckInterfacedef(xmlUnsetNsProp,xmlUnsetNsProp_db);
extern void xmlSetCompressMode_db(int);
CheckInterfacedef(xmlSetCompressMode,xmlSetCompressMode_db);
extern void xmlSetDocCompressMode_db(xmlDocPtr, int);
CheckInterfacedef(xmlSetDocCompressMode,xmlSetDocCompressMode_db);
extern xmlNodePtr xmlNewText_db(const xmlChar *);
CheckInterfacedef(xmlNewText,xmlNewText_db);
extern xmlNodePtr xmlDocGetRootElement_db(xmlDocPtr);
CheckInterfacedef(xmlDocGetRootElement,xmlDocGetRootElement_db);
extern int xmlValidateName_db(const xmlChar *, int);
CheckInterfacedef(xmlValidateName,xmlValidateName_db);
extern void xmlAttrSerializeTxtContent_db(xmlBufferPtr, xmlDocPtr, xmlAttrPtr, const xmlChar *);
CheckInterfacedef(xmlAttrSerializeTxtContent,xmlAttrSerializeTxtContent_db);
extern long int xmlGetLineNo_db(xmlNodePtr);
CheckInterfacedef(xmlGetLineNo,xmlGetLineNo_db);
extern int xmlNodeBufGetContent_db(xmlBufferPtr, xmlNodePtr);
CheckInterfacedef(xmlNodeBufGetContent,xmlNodeBufGetContent_db);
extern xmlAttrPtr xmlHasProp_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlHasProp,xmlHasProp_db);
extern xmlNodePtr xmlNewReference_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlNewReference,xmlNewReference_db);
extern void xmlNodeSetContentLen_db(xmlNodePtr, const xmlChar *, int);
CheckInterfacedef(xmlNodeSetContentLen,xmlNodeSetContentLen_db);
extern void xmlFreeNsList_db(xmlNsPtr);
CheckInterfacedef(xmlFreeNsList,xmlFreeNsList_db);
extern int xmlSaveFormatFileEnc_db(const char *, xmlDocPtr, const char *, int);
CheckInterfacedef(xmlSaveFormatFileEnc,xmlSaveFormatFileEnc_db);
extern void xmlFreeDoc_db(xmlDocPtr);
CheckInterfacedef(xmlFreeDoc,xmlFreeDoc_db);
extern xmlNodePtr xmlNewDocFragment_db(xmlDocPtr);
CheckInterfacedef(xmlNewDocFragment,xmlNewDocFragment_db);
extern xmlNodePtr xmlNewCharRef_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlNewCharRef,xmlNewCharRef_db);
extern int xmlTextConcat_db(xmlNodePtr, const xmlChar *, int);
CheckInterfacedef(xmlTextConcat,xmlTextConcat_db);
extern void xmlBufferEmpty_db(xmlBufferPtr);
CheckInterfacedef(xmlBufferEmpty,xmlBufferEmpty_db);
extern int xmlNodeGetSpacePreserve_db(xmlNodePtr);
CheckInterfacedef(xmlNodeGetSpacePreserve,xmlNodeGetSpacePreserve_db);
extern int xmlBufferCCat_db(xmlBufferPtr, const char *);
CheckInterfacedef(xmlBufferCCat,xmlBufferCCat_db);
extern int xmlSaveFormatFileTo_db(xmlOutputBufferPtr, xmlDocPtr, const char *, int);
CheckInterfacedef(xmlSaveFormatFileTo,xmlSaveFormatFileTo_db);
extern xmlBufferPtr xmlBufferCreate_db(void);
CheckInterfacedef(xmlBufferCreate,xmlBufferCreate_db);
extern xmlChar * xmlNodeGetBase_db(xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlNodeGetBase,xmlNodeGetBase_db);
extern xmlChar * xmlGetNoNsProp_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlGetNoNsProp,xmlGetNoNsProp_db);
extern xmlDOMWrapCtxtPtr xmlDOMWrapNewCtxt_db(void);
CheckInterfacedef(xmlDOMWrapNewCtxt,xmlDOMWrapNewCtxt_db);
extern void xmlBufferWriteQuotedString_db(xmlBufferPtr, const xmlChar *);
CheckInterfacedef(xmlBufferWriteQuotedString,xmlBufferWriteQuotedString_db);
extern xmlAttrPtr xmlNewDocProp_db(xmlDocPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewDocProp,xmlNewDocProp_db);
extern int xmlBufferAddHead_db(xmlBufferPtr, const xmlChar *, int);
CheckInterfacedef(xmlBufferAddHead,xmlBufferAddHead_db);
extern xmlNodePtr xmlNewTextLen_db(const xmlChar *, int);
CheckInterfacedef(xmlNewTextLen,xmlNewTextLen_db);
extern int xmlUnsetProp_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlUnsetProp,xmlUnsetProp_db);
extern xmlNsPtr * xmlGetNsList_db(xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlGetNsList,xmlGetNsList_db);
extern void xmlDocDumpMemory_db(xmlDocPtr, xmlChar * *, int *);
CheckInterfacedef(xmlDocDumpMemory,xmlDocDumpMemory_db);
extern int xmlSaveFileEnc_db(const char *, xmlDocPtr, const char *);
CheckInterfacedef(xmlSaveFileEnc,xmlSaveFileEnc_db);
extern xmlNodePtr xmlNewPI_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewPI,xmlNewPI_db);
extern xmlDocPtr xmlNewDoc_db(const xmlChar *);
CheckInterfacedef(xmlNewDoc,xmlNewDoc_db);
extern xmlChar * xmlNodeListGetString_db(xmlDocPtr, xmlNodePtr, int);
CheckInterfacedef(xmlNodeListGetString,xmlNodeListGetString_db);
extern xmlChar * xmlNodeListGetRawString_db(xmlDocPtr, xmlNodePtr, int);
CheckInterfacedef(xmlNodeListGetRawString,xmlNodeListGetRawString_db);
extern void xmlFreePropList_db(xmlAttrPtr);
CheckInterfacedef(xmlFreePropList,xmlFreePropList_db);
extern void xmlBufferWriteCHAR_db(xmlBufferPtr, const xmlChar *);
CheckInterfacedef(xmlBufferWriteCHAR,xmlBufferWriteCHAR_db);
extern xmlNodePtr xmlNewDocNode_db(xmlDocPtr, xmlNsPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewDocNode,xmlNewDocNode_db);
extern int xmlRemoveProp_db(xmlAttrPtr);
CheckInterfacedef(xmlRemoveProp,xmlRemoveProp_db);
extern int xmlBufferShrink_db(xmlBufferPtr, unsigned int);
CheckInterfacedef(xmlBufferShrink,xmlBufferShrink_db);
extern xmlNodePtr xmlStringLenGetNodeList_db(xmlDocPtr, const xmlChar *, int);
CheckInterfacedef(xmlStringLenGetNodeList,xmlStringLenGetNodeList_db);
extern xmlNodePtr xmlTextMerge_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlTextMerge,xmlTextMerge_db);
extern void xmlFreeNs_db(xmlNsPtr);
CheckInterfacedef(xmlFreeNs,xmlFreeNs_db);
extern xmlNodePtr xmlNewTextChild_db(xmlNodePtr, xmlNsPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewTextChild,xmlNewTextChild_db);
extern xmlNsPtr xmlCopyNamespaceList_db(xmlNsPtr);
CheckInterfacedef(xmlCopyNamespaceList,xmlCopyNamespaceList_db);
extern void xmlBufferWriteChar_db(xmlBufferPtr, const char *);
CheckInterfacedef(xmlBufferWriteChar,xmlBufferWriteChar_db);
extern xmlChar * xmlNodeGetContent_db(xmlNodePtr);
CheckInterfacedef(xmlNodeGetContent,xmlNodeGetContent_db);
extern xmlNodePtr xmlCopyNodeList_db(const xmlNodePtr);
CheckInterfacedef(xmlCopyNodeList,xmlCopyNodeList_db);
extern xmlChar * xmlNodeGetLang_db(xmlNodePtr);
CheckInterfacedef(xmlNodeGetLang,xmlNodeGetLang_db);
extern int xmlValidateNMToken_db(const xmlChar *, int);
CheckInterfacedef(xmlValidateNMToken,xmlValidateNMToken_db);
extern xmlBufferPtr xmlBufferCreateStatic_db(void *, size_t);
CheckInterfacedef(xmlBufferCreateStatic,xmlBufferCreateStatic_db);
extern int xmlBufferGrow_db(xmlBufferPtr, unsigned int);
CheckInterfacedef(xmlBufferGrow,xmlBufferGrow_db);
extern xmlNodePtr xmlAddPrevSibling_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlAddPrevSibling,xmlAddPrevSibling_db);
extern int xmlReconciliateNs_db(xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlReconciliateNs,xmlReconciliateNs_db);
extern int xmlValidateQName_db(const xmlChar *, int);
CheckInterfacedef(xmlValidateQName,xmlValidateQName_db);
extern int xmlValidateNCName_db(const xmlChar *, int);
CheckInterfacedef(xmlValidateNCName,xmlValidateNCName_db);
extern void xmlNodeDumpOutput_db(xmlOutputBufferPtr, xmlDocPtr, xmlNodePtr, int, int, const char *);
CheckInterfacedef(xmlNodeDumpOutput,xmlNodeDumpOutput_db);
extern xmlDtdPtr xmlGetIntSubset_db(xmlDocPtr);
CheckInterfacedef(xmlGetIntSubset,xmlGetIntSubset_db);
extern xmlAttrPtr xmlNewNsProp_db(xmlNodePtr, xmlNsPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewNsProp,xmlNewNsProp_db);
extern xmlNodePtr xmlNewComment_db(const xmlChar *);
CheckInterfacedef(xmlNewComment,xmlNewComment_db);
extern int xmlGetDocCompressMode_db(xmlDocPtr);
CheckInterfacedef(xmlGetDocCompressMode,xmlGetDocCompressMode_db);
extern xmlAttrPtr xmlSetProp_db(xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSetProp,xmlSetProp_db);
extern xmlBufferAllocationScheme xmlGetBufferAllocationScheme_db(void);
CheckInterfacedef(xmlGetBufferAllocationScheme,xmlGetBufferAllocationScheme_db);
extern xmlNodePtr xmlNewCDataBlock_db(xmlDocPtr, const xmlChar *, int);
CheckInterfacedef(xmlNewCDataBlock,xmlNewCDataBlock_db);
extern void xmlNodeSetContent_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlNodeSetContent,xmlNodeSetContent_db);
extern void xmlFreeProp_db(xmlAttrPtr);
CheckInterfacedef(xmlFreeProp,xmlFreeProp_db);
extern xmlNodePtr xmlNewDocRawNode_db(xmlDocPtr, xmlNsPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewDocRawNode,xmlNewDocRawNode_db);
extern xmlAttrPtr xmlNewProp_db(xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewProp,xmlNewProp_db);
extern int xmlBufferDump_db(FILE *, xmlBufferPtr);
CheckInterfacedef(xmlBufferDump,xmlBufferDump_db);
extern xmlNodePtr xmlNewDocTextLen_db(xmlDocPtr, const xmlChar *, int);
CheckInterfacedef(xmlNewDocTextLen,xmlNewDocTextLen_db);
extern xmlDtdPtr xmlCopyDtd_db(xmlDtdPtr);
CheckInterfacedef(xmlCopyDtd,xmlCopyDtd_db);
extern xmlBufferPtr xmlBufferCreateSize_db(size_t);
CheckInterfacedef(xmlBufferCreateSize,xmlBufferCreateSize_db);
extern void xmlNodeSetBase_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlNodeSetBase,xmlNodeSetBase_db);
extern xmlNodePtr xmlReplaceNode_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlReplaceNode,xmlReplaceNode_db);
extern int xmlSaveFileTo_db(xmlOutputBufferPtr, xmlDocPtr, const char *);
CheckInterfacedef(xmlSaveFileTo,xmlSaveFileTo_db);
extern xmlAttrPtr xmlNewNsPropEatName_db(xmlNodePtr, xmlNsPtr, xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewNsPropEatName,xmlNewNsPropEatName_db);
extern xmlChar * xmlBuildQName_db(const xmlChar *, const xmlChar *, xmlChar *, int);
CheckInterfacedef(xmlBuildQName,xmlBuildQName_db);
extern int xmlBufferResize_db(xmlBufferPtr, unsigned int);
CheckInterfacedef(xmlBufferResize,xmlBufferResize_db);
extern void xmlNodeAddContentLen_db(xmlNodePtr, const xmlChar *, int);
CheckInterfacedef(xmlNodeAddContentLen,xmlNodeAddContentLen_db);
extern void xmlSetNs_db(xmlNodePtr, xmlNsPtr);
CheckInterfacedef(xmlSetNs,xmlSetNs_db);
extern xmlDtdPtr xmlCreateIntSubset_db(xmlDocPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlCreateIntSubset,xmlCreateIntSubset_db);
extern void xmlDocDumpFormatMemory_db(xmlDocPtr, xmlChar * *, int *, int);
CheckInterfacedef(xmlDocDumpFormatMemory,xmlDocDumpFormatMemory_db);
extern int xmlBufferLength_db(const xmlBufferPtr);
CheckInterfacedef(xmlBufferLength,xmlBufferLength_db);
extern void xmlBufferSetAllocationScheme_db(xmlBufferPtr, xmlBufferAllocationScheme);
CheckInterfacedef(xmlBufferSetAllocationScheme,xmlBufferSetAllocationScheme_db);
extern int xmlBufferAdd_db(xmlBufferPtr, const xmlChar *, int);
CheckInterfacedef(xmlBufferAdd,xmlBufferAdd_db);
extern xmlNodePtr xmlNewDocComment_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlNewDocComment,xmlNewDocComment_db);
extern xmlNsPtr xmlSearchNsByHref_db(xmlDocPtr, xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlSearchNsByHref,xmlSearchNsByHref_db);
extern int xmlBufferCat_db(xmlBufferPtr, const xmlChar *);
CheckInterfacedef(xmlBufferCat,xmlBufferCat_db);
extern xmlNodePtr xmlNewNode_db(xmlNsPtr, const xmlChar *);
CheckInterfacedef(xmlNewNode,xmlNewNode_db);
extern int xmlNodeIsText_db(xmlNodePtr);
CheckInterfacedef(xmlNodeIsText,xmlNodeIsText_db);
extern xmlNodePtr xmlDocCopyNode_db(const xmlNodePtr, xmlDocPtr, int);
CheckInterfacedef(xmlDocCopyNode,xmlDocCopyNode_db);
extern int xmlDocFormatDump_db(FILE *, xmlDocPtr, int);
CheckInterfacedef(xmlDocFormatDump,xmlDocFormatDump_db);
extern xmlNodePtr xmlCopyNode_db(const xmlNodePtr, int);
CheckInterfacedef(xmlCopyNode,xmlCopyNode_db);
extern int xmlIsBlankNode_db(xmlNodePtr);
CheckInterfacedef(xmlIsBlankNode,xmlIsBlankNode_db);
extern xmlNodePtr xmlAddChild_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlAddChild,xmlAddChild_db);
extern xmlAttrPtr xmlCopyPropList_db(xmlNodePtr, xmlAttrPtr);
CheckInterfacedef(xmlCopyPropList,xmlCopyPropList_db);
extern int xmlDocDump_db(FILE *, xmlDocPtr);
CheckInterfacedef(xmlDocDump,xmlDocDump_db);
extern void xmlBufferFree_db(xmlBufferPtr);
CheckInterfacedef(xmlBufferFree,xmlBufferFree_db);
extern void xmlElemDump_db(FILE *, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlElemDump,xmlElemDump_db);
extern xmlAttrPtr xmlCopyProp_db(xmlNodePtr, xmlAttrPtr);
CheckInterfacedef(xmlCopyProp,xmlCopyProp_db);
extern xmlNodePtr xmlAddSibling_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlAddSibling,xmlAddSibling_db);
extern void xmlNodeSetSpacePreserve_db(xmlNodePtr, int);
CheckInterfacedef(xmlNodeSetSpacePreserve,xmlNodeSetSpacePreserve_db);
extern int xmlIsXHTML_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlIsXHTML,xmlIsXHTML_db);
extern xmlChar * xmlGetProp_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlGetProp,xmlGetProp_db);
extern xmlNodePtr xmlGetLastChild_db(xmlNodePtr);
CheckInterfacedef(xmlGetLastChild,xmlGetLastChild_db);
extern int xmlSaveFormatFile_db(const char *, xmlDocPtr, int);
CheckInterfacedef(xmlSaveFormatFile,xmlSaveFormatFile_db);
extern void xmlSetListDoc_db(xmlNodePtr, xmlDocPtr);
CheckInterfacedef(xmlSetListDoc,xmlSetListDoc_db);
extern xmlNodePtr xmlNewDocText_db(xmlDocPtr, const xmlChar *);
CheckInterfacedef(xmlNewDocText,xmlNewDocText_db);
extern void xmlDocDumpMemoryEnc_db(xmlDocPtr, xmlChar * *, int *, const char *);
CheckInterfacedef(xmlDocDumpMemoryEnc,xmlDocDumpMemoryEnc_db);
extern void xmlNodeAddContent_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlNodeAddContent,xmlNodeAddContent_db);
extern xmlDocPtr xmlCopyDoc_db(xmlDocPtr, int);
CheckInterfacedef(xmlCopyDoc,xmlCopyDoc_db);
extern xmlNodePtr xmlNewChild_db(xmlNodePtr, xmlNsPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewChild,xmlNewChild_db);
extern xmlNsPtr xmlCopyNamespace_db(xmlNsPtr);
CheckInterfacedef(xmlCopyNamespace,xmlCopyNamespace_db);
extern xmlChar * xmlGetNodePath_db(xmlNodePtr);
CheckInterfacedef(xmlGetNodePath,xmlGetNodePath_db);
extern void xmlFreeNode_db(xmlNodePtr);
CheckInterfacedef(xmlFreeNode,xmlFreeNode_db);
extern void xmlDocDumpFormatMemoryEnc_db(xmlDocPtr, xmlChar * *, int *, const char *, int);
CheckInterfacedef(xmlDocDumpFormatMemoryEnc,xmlDocDumpFormatMemoryEnc_db);
extern xmlNsPtr xmlSearchNs_db(xmlDocPtr, xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlSearchNs,xmlSearchNs_db);
extern void xmlNodeSetLang_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlNodeSetLang,xmlNodeSetLang_db);
extern xmlNodePtr xmlAddChildList_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlAddChildList,xmlAddChildList_db);
extern void xmlNodeSetName_db(xmlNodePtr, const xmlChar *);
CheckInterfacedef(xmlNodeSetName,xmlNodeSetName_db);
extern xmlDtdPtr xmlNewDtd_db(xmlDocPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlNewDtd,xmlNewDtd_db);
extern xmlAttrPtr xmlSetNsProp_db(xmlNodePtr, xmlNsPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSetNsProp,xmlSetNsProp_db);
extern xmlNodePtr xmlNewNodeEatName_db(xmlNsPtr, xmlChar *);
CheckInterfacedef(xmlNewNodeEatName,xmlNewNodeEatName_db);
extern xmlAttrPtr xmlHasNsProp_db(xmlNodePtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlHasNsProp,xmlHasNsProp_db);
extern void xmlFreeNodeList_db(xmlNodePtr);
CheckInterfacedef(xmlFreeNodeList,xmlFreeNodeList_db);
extern xmlNodePtr xmlAddNextSibling_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlAddNextSibling,xmlAddNextSibling_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/tree.h\n\n",pcnt,cnt);
return cnt;
#endif

}
