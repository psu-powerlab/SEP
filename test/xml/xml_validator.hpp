#ifndef __XML_VALIDATOR_H__
#define __XML_VALIDATOR_H__
// The following code was found at
// https://sivachandranp.wordpress.com/2010/10/10/xml-schema-validation-using-xerces-c/
#include <stdio.h>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/framework/LocalFileInputSource.hpp>
#include <xercesc/sax/ErrorHandler.hpp>
#include <xercesc/sax/SAXParseException.hpp>
#include <xercesc/validators/common/Grammar.hpp>

XERCES_CPP_NAMESPACE_USE

// Helper class to convert UTC-8 to UTC-16
class WStr
{
public:
    WStr(const char *str)
    {
        wStr = XMLString::transcode(str);
    }

    ~WStr()
    {
        XMLString::release(&wStr);
    }

    operator const XMLCh *() const
    {
        return wStr;
    }

private:
    XMLCh *wStr;
};

// Display errors to terminal when validating
class ParserErrorHandler : public ErrorHandler
{
private:
    void reportParseException(const SAXParseException &ex)
    {
        char *msg = XMLString::transcode(ex.getMessage());
        fprintf(stderr, "at line %llu column %llu, %s\n",
                ex.getColumnNumber(), ex.getLineNumber(), msg);
        XMLString::release(&msg);
    }

public:
    void warning(const SAXParseException &ex)
    {
        reportParseException(ex);
    }

    void error(const SAXParseException &ex)
    {
        reportParseException(ex);
    }

    void fatalError(const SAXParseException &ex)
    {
        reportParseException(ex);
    }

    void resetErrors()
    {
    }
};

bool ValidateSchema(const char *schemaFilePath, const char *xmlFilePath)
{
    XercesDOMParser domParser;
    if (domParser.loadGrammar(schemaFilePath, Grammar::SchemaGrammarType) == NULL)
    {
        fprintf(stderr, "couldn't load schema\n");
        return false;
    }

    ParserErrorHandler parserErrorHandler;

    domParser.setErrorHandler(&parserErrorHandler);
    domParser.setValidationScheme(XercesDOMParser::Val_Auto);
    domParser.setDoNamespaces(true);
    domParser.setDoSchema(true);
    domParser.setValidationConstraintFatal(true);

    domParser.parse(xmlFilePath);
    if (domParser.getErrorCount() == 0)
    {
        printf("XML file validated against the schema successfully\n");
        return true;
    }
    else
    {
        printf("XML file doesn't conform to the schema\n");
        return false;
    }
}

#endif // __XML_VALIDATOR_H__