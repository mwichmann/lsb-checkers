/*
 * Test of QtXml/qxml
 */
#include "hdrchk.h"
#include "QtXml/qxml.h"


extern "C" {
#ifdef TET_TEST
void QtXml_qxml();
#else
int QtXml_qxml();
#endif
}


#ifdef TET_TEST
void QtXml_qxml()
{
#else
int QtXml_qxml()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtXml/qxml types\n");
#define TYPE QXmlNamespaceSupport
#undef TYPE

#define TYPE QXmlAttributes
#undef TYPE

#define TYPE QXmlInputSource
#undef TYPE

#define TYPE QXmlParseException
#undef TYPE

#define TYPE QXmlReader
#undef TYPE

#define TYPE QXmlSimpleReader
#undef TYPE

#define TYPE QXmlLocator
#undef TYPE

#define TYPE QXmlContentHandler
#undef TYPE

#define TYPE QXmlErrorHandler
#undef TYPE

#define TYPE QXmlDTDHandler
#undef TYPE

#define TYPE QXmlEntityResolver
#undef TYPE

#define TYPE QXmlLexicalHandler
#undef TYPE

#define TYPE QXmlDeclHandler
#undef TYPE

#define TYPE QXmlDefaultHandler
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtXml/qxml types\n\n",pcnt,cnt);
return cnt;
#endif

}
