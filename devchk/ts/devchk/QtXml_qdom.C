/*
 * Test of QtXml/qdom
 */
#include "hdrchk.h"
#include "QtXml/qdom.h"


extern "C" {
#ifdef TET_TEST
void QtXml_qdom();
#else
int QtXml_qdom();
#endif
}


#ifdef TET_TEST
void QtXml_qdom()
{
#else
int QtXml_qdom()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtXml/qdom types\n");
#define TYPE QDomImplementation
#undef TYPE

#define TYPE QDomNode
#undef TYPE

#define TYPE QDomNodeList
#undef TYPE

#define TYPE QDomDocumentType
#undef TYPE

#define TYPE QDomDocument
#undef TYPE

#define TYPE QDomNamedNodeMap
#undef TYPE

#define TYPE QDomDocumentFragment
#undef TYPE

#define TYPE QDomCharacterData
#undef TYPE

#define TYPE QDomAttr
#undef TYPE

#define TYPE QDomElement
#undef TYPE

#define TYPE QDomText
#undef TYPE

#define TYPE QDomComment
#undef TYPE

#define TYPE QDomCDATASection
#undef TYPE

#define TYPE QDomNotation
#undef TYPE

#define TYPE QDomEntity
#undef TYPE

#define TYPE QDomEntityReference
#undef TYPE

#define TYPE QDomProcessingInstruction
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtXml/qdom types\n\n",pcnt,cnt);
return cnt;
#endif

}
